#include <stdio.h>
void num(int a,int b) {
    int power=1;
    for (int i=1;i<=b;i++) {
        power=power*a;
    }
    printf("%d",power);
}
int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    num(a,b);
    return 0;
}