#include <stdio.h>
 
int main()
{
    int N;
    int tempNum,flag;
    scanf("%d",&N);
     
    tempNum=N;
    flag=0;
    if ( N >= 1 && N <= 10000000 )
	    while(tempNum!=1)
	    {
	        if(tempNum%2!=0){
	            flag=1;
	            break;
	        }
	        tempNum=tempNum/2;
	    }
	  
	    if(flag==0)
	        printf("YES");
	    else
	        printf("NO");
	      
	    return 0;
}
