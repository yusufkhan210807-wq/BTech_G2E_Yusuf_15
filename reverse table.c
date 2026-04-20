#include <stdio.h>

int main(){
    int i,n,table;
    printf("Enter the number which you need to get table:");
    scanf("%d",&n);
    for ( i = 10; i  ; i--)
    {
      table=n*i;
      printf("%d x %d=%d\n",n,i,table);
    }
    

    return 0;
}
