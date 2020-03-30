/*********************选择排序法*****************************

*  选择排序法的排序规则存在升序和降序两种，本例采用升序方法  *
*   选择排序法是以第一个数为基数，对后面的数进行比较、交换   *

**************************************************************/

#include <stdio.h>

void select_sort(int a[],int n)
{
	int i,j,k,tmp;
	for(i = 0; i < n-1;i++)
	{
		k = i;
		for(j = i+1; j < n;j++)
		{
			if(a[j] < a[k])
				k = j;
		}
		if(k != i)
		{
			tmp = a[i];
			a[i] = a[k];
			a[k] = tmp;
		}
	}
}

int main()
{
	int i;
	int a[] = {12,56,36,89,26,66};
	printf("排序前顺序为：\n");
	for(i = 0;i < 6; i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
	
	select_sort(a,6);
	printf("排序后顺序为：\n");
	for(i = 0; i < 6 ;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}