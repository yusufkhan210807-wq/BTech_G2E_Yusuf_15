#include <stdio.h>

int main(){
    int i,n,prime=0;
    printf("enter the number:");
    scanf("%d",&n);
    for ( i = 2; i < n ; i++)
    {
        if ((n%i==0))
        {
           prime=0;
        }
        
    }
    if (prime)
    {
      printf("the number is prime\n",n);
    }
    else{
        printf("the number is not prime");
    }
    
    return 0;
}
