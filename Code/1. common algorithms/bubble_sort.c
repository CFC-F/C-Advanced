/*******************冒泡排序法********************************

*  冒泡排序法的排序规则存在升序和降序两种，本例采用升序方法  *
* 本例中，添加了标识符flag,用于判断每轮是否已经将数据排列完成*

**************************************************************/

#include <stdio.h>

void bubble_sort(int arr[],int n)
{
	int i,j,flag,temp;
	for(i = 0; i < n-1; i++)
	{
		flag = 1;
		for(j = 0; j < n-i-1;j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				flag = 0;
			}
		}
		if(flag == 1)
			break;
	}
	printf("\n本次排序比较操作进行了%d轮" , n+1);
	return ;
}

int main()
{
	int a[] = {12,56,36,89,26,66};
	int i;
	printf("排序前顺序为：\n");
	for(i = 0;i < 6; i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
	
	bubble_sort(a,6);
	printf("排序后顺序为：\n");
	for(i = 0; i < 6 ;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
