#include<stdio.h>

int main()
{
    double salary,p,q,r,taxes;

    scanf("%lf",&salary);

    if(salary<=2000.00)
    {
        taxes=0;
    }

    else if(salary>2000.00 && salary<=3000.00)
    {
        p=salary-2000.00;
        taxes= p*.08;
    }

    else if(salary>=3000.00 && salary<=4500.00)
    {
        p=salary-3000.00;
        q=salary-2000.00-p;

        taxes= (p*.18+q*.08);
    }

    else if(salary>4500.00)
    {
        p=salary-4500.00;
        q=salary-3000.00-p;
        r=salary-2000.00-q-p;

        taxes= (p*.28+q*.18+r*.08);


    }

    if(taxes==0)
    {
        printf("Isento\n");
    }

    else
    {
        printf("R$ %.2lf\n",taxes);
    }

    return 0;
}
