#include <stdio.h>

int call_count(){
    static int count = 0;
}
int main() {
    printf("%d\n",call_count());
    printf("%d\n",call_count());
    printf("%d\n",call_count());
    return 0;
}