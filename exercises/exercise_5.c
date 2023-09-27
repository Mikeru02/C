#include <stdio.h>

// find the maximum among three numbers
int main(){
    int num1, num2, num3;

    printf("Enter numbers\n");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 >= num2 && num1 >= num3)
        printf("Num1 is the maximum");
    else if (num2 >= num1 && num2 >= num3)
        printf("Num2 is the maximum");
    else
        printf("Num3 is the maximum");

    return 0;
}