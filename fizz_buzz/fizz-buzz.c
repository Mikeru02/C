#include <stdio.h>

int main(){
    int i = 0, n = 20;
    
    while (i <= n){
        if (i % 2 == 0)
            printf("%d - Fizz\n", i);
        else
            printf("%d - Buzz\n", i);
        i = i + 1;
    }
    return 0;
}