#include <stdio.h>
void multiplication(int n) {
    int i;
    for (int i=1;i<=10;i++) {
        printf("%d x %d= %d\n",n,i,n*i);
    }
}
int main() {
    int n;
    scanf("%d",&n);
    multiplication(n);
    return 0;
}
