#include <stdio.h>
int main() {
    int n, first = 0, second = 1, nextTerm, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        for (i = 0; i < n; i++) {
            printf("%d ", first);

            nextTerm = first + second; 
            first = second;            
            second = nextTerm;       
        }
    }

    return 0;
}
