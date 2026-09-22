#include<stdio.h>
int main()
{
    int c;
    scanf("%d",&c);
    int first=c/10;
    int last=c%10;
    int sum=first+last;
    printf("%d",sum);
    return 0;
}
