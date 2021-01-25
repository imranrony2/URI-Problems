#include<stdio.h>

int main()
{
    double m,i;
    int a,r;
    scanf("%lf", &m);
    printf("NOTAS:\n");

    a=m;
    m=m-a;
    printf("%d 5d\n",a,m);

    for(i=100.00;i>=2.00;)
    {


        r=a/i;
        printf ("%d nota(s) de R$ %.2lf,00\n",r,i);

        a=a-(r*i);

        if(i>20)
        {

            i=(i/20)*10;
        }
        else
            i=i/2;



    }

    return 0;

}

