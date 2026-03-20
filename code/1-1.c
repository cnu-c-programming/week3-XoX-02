#include <stdio.h>
int add(int a, intb){return a+b;}
int sub(int a, intb){return a-b;}
int mul(int a, intb){return a*b;}
int div(int a, intb){return a/b;}

int main() {
    int a =10, b = 5;

    printf("%d + %d = %d",a,b,add(a,b));
    printf("%d - %d = %d",a,b,sub(a,b));
    printf("%d * %d = %d",a,b,mul(a,b));
    printf("%d / %d = %d",a,b,div(a,b));
    return 0;
}