#include<stdio.h>
int main()
{
  int arr_size;
  int arr_index;
  int previous_index;
  int current_index;
  int temp;
  scanf("%d",&arr_size);
  int input_arr[arr_size];
  for(arr_index=0;arr_index<arr_size;arr_index++)
  {
  	scanf("%d",&input_arr[arr_index]);
  }
  for(arr_index=1;arr_index<arr_size;arr_index++)
  {
  	   previous_index=arr_index-1;
  	   current_index=arr_index;
  	   while(current_index>=0&&previous_index>=0&&input_arr[current_index]>input_arr[previous_index])
  	   {
  	   	temp=input_arr[previous_index];
  	   	input_arr[previous_index]=input_arr[current_index];
  	   	input_arr[current_index]=temp;
  	   	current_index--;
  	   	previous_index=current_index-1;
	   }
  }
    for(arr_index=0;arr_index<arr_size;arr_index++)
  {
  	printf("%d ",input_arr[arr_index]);
  }
}
