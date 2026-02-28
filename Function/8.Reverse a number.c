#include <stdio.h>
void reverse(int n) {
    int rev=0;
    while (n>0){
        int rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("%d",rev);
}
int main() {
    int n;
    scanf("%d",&n);
    reverse(n);
    return 0;
}