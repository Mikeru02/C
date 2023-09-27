#include <stdio.h>

// Factorial of a number
int main(){
    int num, factorial = 1, start = 1;

    scanf("%d", &num);

    while (start <= num){
        factorial *= start;
        start += 1;
    }

    printf("%d", factorial);
    
    return 0;
}