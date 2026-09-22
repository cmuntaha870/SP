#include <stdio.h>
int main(){
    int n,i;
    scanf("%d", &n);
    int sum = 0;
    int counter = 1;
    for ( i = 0; i <n; i++)
    {
        sum = i + counter;
        counter++;
    }
    printf("%d", sum);
    return 0;
}