#include<stdio.h>
#include <math.h>
int main()
{
    int a,b,i;
    int sum = 0;
    scanf("%d", &b);
    a = b;
    for ( i = 0; i < INFINITY; i++)
    {
        sum += pow(a%10,3);
        a = a/10;
        if (a==0)
        {
            break;
        }
    }
    if (sum == b)
    {
        printf("YES\n");
    } else{
        printf("NO\n");
    }
return 0;
}
