#include<stdio.h>
int main()
{
    int arr_size;
	int arr_index;
    int arr_index1;
	int max_value;
	int max_value_index;
	int temp;
	scanf("%d",&arr_size);
	int input_array[arr_size];
	for(arr_index=0;arr_index<arr_size;arr_index++)
	{
		scanf("%d",&input_array[arr_index]);
	}
	for(arr_index=0;arr_index<arr_size-1;arr_index++)
	{
		max_value=input_array[arr_index];
		max_value_index=arr_index;
		for(arr_index1=arr_index+1;arr_index1<arr_size;arr_index1++)
		{
			if(max_value<input_array[arr_index1])
			{
				max_value=input_array[arr_index1];
				max_value_index=arr_index1;
			}
		}
		temp=input_array[arr_index];
		input_array[arr_index]=input_array[max_value_index];
		input_array[max_value_index]=temp;
	}
	for(arr_index=0;arr_index<arr_size;arr_index++)
	{
		printf("%d ",input_array[arr_index]);
	}
	return 0;
}
