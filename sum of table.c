#include <stdio.h>
int main(){

    int i,n,sum;
    printf("Enter the number whose table need to sum:");
    scanf("%d",&n);
    for ( i = 0; i <=10 ; i++)
    {
     sum = sum+(n*i);
    }
    printf("the sum of table=%d",sum);

    return 0;
}
