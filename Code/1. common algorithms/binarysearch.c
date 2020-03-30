/************************************二分查找法******************************************

*  二分查找法的算法思想是将所要查找的序列的中间位置的数据与所要查找的元素进行比较，      *
*    如果相等，则表示查找成功，否则将以该位置为基准将所要查找的序列分为左右两部分。      *
*       接下来根据所要查找序列的升降序规律及中间元素与所查找元素的大小关系，             *
*       来选择所要查找元素可能存在的那部分序列，对其采用同样的方法进行查找，             *
*                   直至能够确定所要查找的元素是否存在为止                               *

******************************************************************************************/

#include <stdio.h>

binarysearch(int a[],int n,int key)
{
	int low;
	int high = n- 1;
	while(low <= high)
	{
		int mid = (low + high)/2;
		int midVal = a[mid];
		if(midVal < key)
		{
			low = mid + 1;
		}
		else if(midVal > key)
			high = mid - 1;
		else 
			return mid;
	}
	
	return -1;
}

int main()
{
	int i,val,ret;
	int a[8] = {32,12,56,36,89,26,66,86};
	for(i = 0;i<8;i++)
		printf("%d\t",a[i]);
	
	printf("\n 请输入所要所要查找的元素：");
	scanf("%d",&val);
	ret = binarysearch(a,8,val);
	if(ret == -1)
	{
		printf("查找失败！\n");
	}
	else
	{
		printf("查找成功！\n");
	}
	
	return 0;
}
