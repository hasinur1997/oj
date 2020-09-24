#include<stdio.h>
#define PI 3.1416 // Constant delcaration

int main() {
    int r;
    float circumferrence;

    printf("Please enter radious: \n");
    scanf("%d", &r);

    circumferrence = 2 * PI * r * r;

    printf("%.2f\n", circumferrence);
}