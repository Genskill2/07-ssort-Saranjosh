#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

void swap_max(int a[], int m, int n )
{
	int temp;
	int max=n;
	for(int i=n+1; i<m; i++)
	{
		if(a[i]>a[max])
		{
		max=i;
		}
	}
	temp=a[n];
	a[n]=a[max];
	a[max]=temp;
}
void ssort(int ar[], int m)
{
for(int i=0; i<m; i++)
{
	swap_max(ar, m, i);
}
}
