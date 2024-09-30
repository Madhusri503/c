#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c;
    float s,area;
    printf("enter sides of a triangle:");
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("the area of triangle is %f",area);
}
