#include<stdio.h>
int quick_sort(int input_array[],int start,int end)
{
	int start_ptr=start;
	int end_ptr=end-1;
	int pivot=input_array[end];
	int temp;
	int arr_index;
	while(start_ptr<end_ptr)
	{
		if(input_array[start_ptr]<pivot)
		{
			start_ptr++;
		}
	    else if(input_array[end_ptr]>=pivot)
		{
			end_ptr--;
		}
		else if(input_array[start_ptr]>=pivot)
		{
			temp=input_array[start_ptr];
			input_array[start_ptr]=input_array[end_ptr];
			input_array[end_ptr]=temp;
			start_ptr++;
			end_ptr--;
		}
	}
	for(arr_index=0;arr_index<end;arr_index++)
	{
		if(input_array[arr_index]>pivot)
		{
		    temp=input_array[arr_index];
			input_array[arr_index]=pivot;
			input_array[end]=temp;
			return arr_index; 	
		}
	}
	
}
void split(int input_array[],int start,int end)
{
   if(start<end)
   {
   	int pivot_index=quick_sort(input_array,start,end);
   	split(input_array,start,pivot_index-1);
   	split(input_array,pivot_index+1,end);
   }	
}
int main()
{
	int arr_size;
	int arr_index;
	scanf("%d",&arr_size);
	int input_array[arr_size];
	for(arr_index=0;arr_index<arr_size;arr_index++)
	{
		scanf("%d",&input_array[arr_index]);
	}
	split(input_array,0,arr_size-1);
	for(arr_index=0;arr_index<arr_size;arr_index++)
	{
		printf("%d ",input_array[arr_index]);
	}
}
