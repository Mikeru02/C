#include <stdio.h>

// calculate the area of circle
int main(){
    int radius;
    float area;
    const float PI = 3.14;

    printf("Enter radius\n");
    scanf("%d", &radius);

    area = PI * (radius * radius);
    
    printf("The area is %.2f\n", area);

    return 0;
}