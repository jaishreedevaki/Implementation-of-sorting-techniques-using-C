#include<stdio.h>
int main()
{
	int arr_size;
	int arr_index;
	int arr_index1;
	int temp;
	int max_value;
	scanf("%d",&arr_size);
	int input_array[arr_size];
	for(arr_index=0;arr_index<arr_size;arr_index++)
	{
		scanf("%d",&input_array[arr_index]);
	}
	int sort_upto=arr_size-1;
       while(sort_upto)
	{ 
		for(arr_index1=0;arr_index1<sort_upto;arr_index1++)
		{
			if(input_array[arr_index1]>input_array[arr_index1+1])
			{
				temp=input_array[arr_index1];
				input_array[arr_index1]=input_array[arr_index1+1];
				input_array[arr_index1+1]=temp;
			}
		}
		sort_upto--;
	}
	for(arr_index=0;arr_index<arr_size;arr_index++)
	{
		printf("%d ",input_array[arr_index]);
	}

}
