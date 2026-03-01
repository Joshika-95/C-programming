#include <stdio.h>
void LeapYear(int n) {
    if (n%4==0 && n%100==0 && n%400==0) {
        printf("Leap Year");
    }
    else {
        printf("Not Leap Year");
    }
}
int main() {
    int n;
    scanf("%d",&n);
    LeapYear(n);
    return 0;
}