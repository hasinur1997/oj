#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a;
    long b;
    char c;
    float d;
    double e;

    scanf("%d %ld %c %f %lf", &a, &b, &c, &d, &e);
    printf("%d\n", a);
    printf("%ld\n", b);
    printf("%c\n", c);
    printf("%.2f\n", d);
    printf("%.9lf\n", e);
}