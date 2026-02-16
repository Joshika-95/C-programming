
#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int rev=0;
    for (;n!=0;n/=10) {
        int rem=n%10;
        rev=rev*10+rem;
    }
    printf(" %d",rev);
    return 0;
}