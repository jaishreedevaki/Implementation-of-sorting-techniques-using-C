#include<stdio.h>
int quick_sort(int input_array[],int start,int end)
{
	int swap=0;
	int temp_value;
	int temp_ptr;
	int pivot_ptr=end;
	int pivot=input_array[end];
	int ptr=start;
	while(ptr!=pivot_ptr )
	{
	if(swap==0)
	{
	  if(input_array[pivot_ptr]<input_array[ptr])
	  {
	  	ptr++;
	  }
	  else
	  {
	  	temp_value=input_array[pivot_ptr];
	  	input_array[pivot_ptr]=input_array[ptr];
	  	input_array[ptr]=temp_value;
	  	swap=1;
	  	temp_ptr=ptr;
	  	ptr=pivot_ptr-1;
	  	pivot_ptr=temp_ptr;
	  	
	  }
	}
	else if (swap==1)
	{
	if(input_array[pivot_ptr]>=input_array[ptr])
	  {
	  	ptr--;
	  }
	  else
	  {
	  	temp_value=input_array[pivot_ptr];
	  	input_array[pivot_ptr]=input_array[ptr];
	  	input_array[ptr]=temp_value;
	  	swap=0;
	  	temp_ptr=ptr;
	  	ptr=pivot_ptr+1;
	  	pivot_ptr=temp_ptr;
	  	
	  }	
	}	
	}
	return  pivot_ptr;
}
void spilt(int input_array[],int start,int end)
{
   if(start<end)
   {
   	int pivot_index=quick_sort(input_array,start,end);
   	spilt(input_array,start,pivot_index-1);
   	spilt(input_array,pivot_index+1,end);
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
	spilt(input_array,0,arr_size-1);
	for(arr_index=0;arr_index<arr_size;arr_index++)
	{
		printf("%d ",input_array[arr_index]);
	}
}
