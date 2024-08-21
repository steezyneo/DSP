#include<stdio.h>
#define LENGHT1 6 
#define LENGHT2 4 
int x[2*LENGHT1-1]={1,2,3,4,5,6,0,0,0,0,0}; 
int h[2*LENGHT1-1]={1,2,3,4,0,0,0,0,0,0,0}; 
int y[LENGHT1+LENGHT2-1];
int main()
{
    int i=0,j;
    for(i=0;i<(LENGHT1+LENGHT2-1);i++)
    {
        y[i]=0;
        for(j=0;j<=i;j++)
            y[i]+=x[j]*h[i-j];
    }
    for(i=0;i<(LENGHT1+LENGHT2-1);i++)
        printf("%d\n",y[i]);
}
