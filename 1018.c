#include<stdio.h>

int main()
{
    int a,r,i;
    scanf("%d", &a);
    printf("%d\n",a);


    for(i=100;i>=1;)
    {


        r=a/i;
        printf ("%d nota(s) de R$ %d,00\n",r,i);

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
