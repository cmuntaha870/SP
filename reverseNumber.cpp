#include<stdio.h>
int main()
{
    int a,first,last,number;
    scanf("%d",&a);
    first=a/10;
    last=a%10;
    number=first*1+last*10;
    printf("reverse number is=%d",number);
    return 0;
}
