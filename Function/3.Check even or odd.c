#include<stdio.h>
void value(int n) {
    if (n%2==0) {
        printf("Even");
    }
    else {
        printf("Odd");
    }
}
int main() {
    int n;
    scanf("%d",&n);
    value(n);
    return 0;
}