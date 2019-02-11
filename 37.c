#include<stdio.h>

int main()
{
    int N,A,D,i,b[10],sum=0;
    scanf("%d%d%d",&N,&A,&D);
    for(i=0;i<N;i++)
    {
        b[i]=A+i*D;
        sum=sum+b[i];
    }
    printf("%d",sum);
    return 0;
}
