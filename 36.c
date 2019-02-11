#include<stdio.h>

void main()
{
    int h1,h2,m1,m2,a,b;
    scanf("%d%d%d%d",&h1,&m1,&h2,&m2);
    if(h1>h2)
    a=h1-h2;
    else
    a=h2-h1;
    if(m1>m2)
    b=m1-m2;
    else
    b=m2-m1;
    printf("%d %d",a,b);
    getch();
}
