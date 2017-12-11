/*****************************************************
* Project-3-Array Manipulation using pointers
* It is a project which :
* calculates summation, average ,maximum and minimum of a predefined array
* this code uses pointers
********************************************************/

/*includes*/
#include<stdio.h>
#include<conio.h>
#include<string.h>

/*functions prototyping*/
void array_operations(int[] ,int ,int* ,int* ,int* ,int* );
int get_sum(int[] ,int );
int get_average(int[] ,int );
int get_max(int[] ,int );
int get_min(int[] ,int );

/*main code*/
void main()
{
	int array[4]={2,4,6,8};             /*define an array*/
	int sum,average,max,min;            /*variables to store sum ,average, max and min of array */
	int i;                              /*counter*/
	
	array_operations(array,4,&sum,&average,&max,&min);    /*call function to modify variables by pointers*/
	
	printf("\n Array is: ");
	for(i=0;i<4;i++)                      /*to print the defined array for user*/
	{
		printf("\n%d",array[i]);
	}
	/*print variables after modification*/
	printf("\nsum is:%d",sum);
	printf("\naverage is:%d",average);
	printf("\nmax is:%d",max);
	printf("\nmin is:%d",min);
}
/************************************
* this function takes array ,its size 
* and variables adresses to modify their values
**************************************/ 
void array_operations(int array[],int size,int* sum,int* average,int* max,int* min)
{
	*sum=get_sum(array,size);                 /*call function which returns sum*/
	*average=get_average(array,size);         /*call function which returns average*/
	*max=get_max(array,size);                 /*call function which returns maximum*/
	*min=get_min(array,size);                 /*call function which returns minimum*/
}

/* Function which takes array and its size to return its sum*/
int get_sum(int array[],int size)
{
	int i;
	int sum=0;
	for(i=0;i<size;i++)
	{
		sum+=array[i];
	}
	return sum;
}
/* Function which takes array and its size to return its average*/
int get_average(int array[],int size)
{
	int sum=get_sum(array,size);
	int average=sum/size;
	return average;
}

/* Function which takes array and its size to return its maximum*/
int get_max(int array[],int size)
{
	int i;
	int max=array[0];
	for(i=0;i<size;i++)
	{
		if(array[i]>max)
		{
			max=array[i];
		}
	}
    return max;
}

/* Function which takes array and its size to return its minimum*/
int get_min(int array[],int size)
{
	int i;
	int min=array[0];
	for(i=0;i<size;i++)
	{
		if(array[i]<min)
		{
			min=array[i];
		}
	}
    return min;
}