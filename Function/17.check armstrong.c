#include <stdio.h>
#include<math.h>
int Armstrong(int n) {
    int count=0;
    int sum=0,digit,temp=n;
    while(temp!=0) {
        count++;
        temp=temp/10;
    }
    temp=n;
    while(temp!=0) {
        digit=temp%10;
        sum+=pow(digit,count);
        temp=temp/10;
    }
    if(sum==n) {
        return 1;
    }
    else {
        return 0;
    }
}
int main() {
    int n;
    scanf("%d",&n);
    if (Armstrong(n)) {
        printf("Armstrong");
    }
    else {
        printf("Not Armstrong");
    }
    return 0;
}