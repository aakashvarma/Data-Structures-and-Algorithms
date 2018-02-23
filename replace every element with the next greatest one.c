#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i=0,j=0,max=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	    scanf("%d",&arr[i]);
	for(i=0;i<n-1;i++)
	{
	    max=arr[i+1];
	    for(j=i+1;j<n;j++)
	    {
	        if(arr[j]>max)
	        max=arr[j];
	    }
	    arr[i]=max;
	    
	}
	arr[n-1]=-1;
	for(i=0;i<n;i++)
	    printf("%d ",arr[i]);
	return 0;
}
