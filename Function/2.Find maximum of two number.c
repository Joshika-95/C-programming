#include <stdio.h>
void value(int a,int b) {
    if (a>b) {
        printf("%d",a);
    }
    else {
        printf("%d",b);
    }
}
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    value(a,b);
    return 0;
}