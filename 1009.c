#include<stdio.h>

int main()
{
    char s[10];
    double a,b;

    scanf("%s %lf %lf",&s,&a,&b);

    printf("TOTAl = R$ %.2lf\n",a+(b*.15));

    return 0;
}
