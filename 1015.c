#include<stdio.h>
#include<math.h>

int main()
{
    float x1,y1,x2,y2,d1,d2,dst;

    scanf("%f %f %f %f",&x1,&y1,&x2,&y2);

    d1=pow((x2-x1),2);
    d2=pow((y2-y1),2);

    dst=sqrt(d1+d2);

    printf("%.4f\n",dst);

    return 0;
}
