#include<stdio.h>
int main() {
    int marks;
    int attendance;
    scanf("%d%d",&marks,&attendance);
    if (attendance<75) {
        printf("Fail");
    }
    else if (marks>=75) {
        printf("Distinction");
    }
    else if (marks>=50 && marks<=74) {
        printf("Pass");
    }
    else if (marks<50){
        printf("Fail");
    }
    return 0;
}