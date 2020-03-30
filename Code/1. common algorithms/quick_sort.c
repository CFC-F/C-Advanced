/*******************快速排序********************************

* 快速排序是冒泡法排序的一种改进，基本思想：将数据分为左右两
  部分，一部分数据比另外一部分的数据小，然后将所得的两部分数
  据进行同样的划分，重复执行以上的划分操作，知道成为有序数据*

**************************************************************/

#include <stdio.h>

#define N 6

int partition(int arr[],int low,int high)
{
	int key;
	key = arr[low];
	while( low < high)
	{
		while( low < high && arr[high] >= key)
			high--;
		if(low < high)
		{
			arr[low++] = arr[high];
		}
		while( low < high && arr[low] <= key)
			low++;
		if(low < high)
			arr[high--] = arr[low];
	}
	arr[low] = key;
	return low;
}

void quick_sort(int arr[],int start ,int end)
{
	int pos;
	if(start < end)
	{
		pos = partition(arr,start,end);
		quick_sort(arr,start,pos-1);
		quick_sort(arr,pos+1,end);
	}
	
	return ;
}

int main(void)
{
	int i;
	int arr[N] = {12,56,36,89,26,66};
	printf("排序前顺序为：\n");
	for(i = 0;i < N; i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
	
	quick_sort(arr,0,N-1);
	printf("排序后顺序为：\n");
	for(i = 0; i < N ;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
	
	return 0;
}