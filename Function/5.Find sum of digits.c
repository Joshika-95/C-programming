#include<stdio.h>
void digits(int n) {
    int sum=0;
    int digit;
    while (n>0) {
        digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
    printf("%d",sum);
}
int main() {
    int n;
    scanf("%d",&n);
    digits(n);
    return 0;
}