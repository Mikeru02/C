#include <stdio.h>

// sum of two numbers
int main(){
    int num1, num2, sum;

    printf("Sum of Two Numbers\n");
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;

    printf("Sum is %d\n", sum);
    
    return 0;
}