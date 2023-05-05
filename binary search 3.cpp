#include<stdio.h>
int bise(int *a,int n,int se)
{
	int low=0,high=n-1,mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(se==a[mid]) return mid;
		else if(se>a[mid]) low=mid+1;
		else high=mid-1;
	}
	return -1;
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int se;
	scanf("%d",&se);
	int res=bise(a,n,se);
	if(res==-1)
	{
		printf("Element not found");
	}
	else
	{
		printf("Element found at %d index",res);
	}
}
	
	
