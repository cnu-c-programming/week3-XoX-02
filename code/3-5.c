#include <stdio.h>
#include <stdarg.h>

void my_sum(char sig,int n,...){
    va_list ap;

    va_start(ap,n);

    if(sig == 'S'){
        char str[100] = "";
        for(int i = 0; i < n-1; i++){
            strcat(str,va_arg(ap,char*));
            strcat(str," ");
        }
        strcat(str,va_arg(ap,char*));
        printf("%s\n",str);
    }
    else if(sig == 'C'){
        char str[100] = "";
        for(int i = 0; i < n; i++){
            str[i] = (char)va_arg(ap,int);
        }
        str[n] = '\0';
        printf("%s\n",str);
    }
    else if(sig == 'D'){
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += va_arg(ap,int);
        }
        printf("%d\n",sum);
    }
}
int main() {
    my_sum('S', 2, "Hello", "World");
    my_sum('C', 3, 'C', 'N', 'U');
    my_sum('D', 4, 10, 20, 30, 40);

    return 0;
}