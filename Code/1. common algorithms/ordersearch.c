/********************************顺序查找法************************************

*            顺序查找法的算法思想是从序列起始元素开始，                 *
*     逐个将序列中的元素与所要查找的元素作比较，若相同，则返回成功，    *
*     若序列中不存在一个元素与所要查找的元素值相等，则表明查找失败      *

******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

int ordersearch(int a[],int n,int des)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(des == a[i])
			return 1;
	}
	return 0;
}

int main()
{
	int i;
	int a[8] = {32,12,56,36,89,26,66,86};
	for(i = 0;i<8;i++)
	{
		printf("%d\t",a[i]);
	}
	while(getchar())
	{
		printf("\n 请输出所要查找的元素： \n");
		int val;
		scanf("%d",&val);
		int ret = ordersearch(a,8,val);
		
		if(1 == ret)
			printf("查找成功！\n");
		else
			printf("查找失败！\n");
	}
	
	return 0;
}
