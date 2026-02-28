#include<stdio.h>
void circle(int n) {
    float mul=0;
    mul=3.14*n*n;
    printf("%.2f",mul);
}
int main() {
    int n;
    scanf("%d",&n);
    circle(n);
    return 0;
}