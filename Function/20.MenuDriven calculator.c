#include <stdio.h>
int add(int a, int b) {
    return a+b;
}
int sub(int a, int b) {
    return a-b;
}
int mul(int a, int b) {
    return a*b;
}
int div(int a, int b) {
    if (b!=0) {
        return a/b;
    }
    else {
        printf("division by zero is not possible");
        return 0;
    }
}
int main() {
    int a,b;
    char choice;
    scanf("%d %d %c",&a,&b,&choice);
    switch (choice) {
        case '+':
            printf("%d",add(a,b));
            break;
        case '-':
            printf("%d",sub(a,b));
            break;
        case '*':
            printf("%d",mul(a,b));
            break;
        case '/':
            printf("%d",div(a,b));
            break;
        default:
            printf("Invalid choice");
    }
    return 0;
}

