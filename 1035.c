#include<stdio.h>

int main()
{
    int a,b,c,d,p,q;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    p=a+b;
    q=c+d;

    if(c>0 && d>0 && a%2==0 && b>c && d>a && q>p)
    {

       printf("Valores aceitos\n");

    }

    else
        printf("Valores nao aceitos\n");


    return 0;
}
