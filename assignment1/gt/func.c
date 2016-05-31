#include<stdio.h>
#include "head.h"

void PrintSpiral(int n,int A[n][n])
{
int t,b,l,r,dir;
t=0;
b=n-1;
l=0;
r=n-1;
dir=0;
int i,j;
int x[n];
int k=0;

while(t<=b && l<=r)
{
 if(dir==0)
	{
		for(i=l;i<=r;i++)
		{
			x[k]=A[t][i];
			//printf("%d ", A[t][i]);
k++;
		}
		t++;
		//dir=1;
	}

else if(dir==1)
	{
		for(i=t;i<=b;i++)
{
		//printf("%d ", A[i][r]);
		x[k]=A[i][r];
k++;
}
	 r--;
	 //dir=2;
	
	}


else if(dir==2)
{
	for(i=r;i>=l;i--)
	{
		//printf("%d ",A[b][i]);

		x[k]=A[b][i];
k++;
	}
        b--;
	//dir=3;
}

else if(dir==3)
{
	for(i=b;i>=t;i--)

	

		{
			//printf("%d ",A[i][l] );	
			
			x[k]=A[i][l];
k++;		
		}

						l++;
						//dir=0;

}

dir=(dir+1)%4;


}
printf("\n\nthe reversed spiral order of matrix");
for(i=n*n;i>=0;i--)
{
printf("%d ",x[i]);
}
}

