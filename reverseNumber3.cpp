#include<stdio.h>
int main()
{
    int c;
    scanf("%d",&c);
    int first=c/100;
    int second=(c/10)%10;
    int last=c%10;
    int number= first*1+second*10+last*100;
    printf("reverse number=%d",number);
    return 0;

}
