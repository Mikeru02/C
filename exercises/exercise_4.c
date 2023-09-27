#include <stdio.h>

// swap num1 and num2 without adding temp variable
int main(){
    int num1, num2;
    
    printf("Enter num1 and num2\n");
    scanf("%d %d", &num1, &num2);

    num1 = num1 + num2; // 10 + 5 = 15
    num2 = num1 - num2; // 15 - 5 = 10
    num1 = num1 - num2; // 15 - 10 = 5

    printf("Num1 %d\n", num1);
    printf("Num2 %d\n", num2);

    return 0;
}
