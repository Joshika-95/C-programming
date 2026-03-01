#include <stdio.h>
void digits(int n) {
    int count=0;
    while (n!=0) {
        int digit = n%10;
        count+=1;
        n=n/10;
    }
    printf("%d",count);
}
int main() {
    int n;
    scanf("%d",&n);
    digits(n);
    return 0;
}