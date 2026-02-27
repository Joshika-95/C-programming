#include <stdio.h>
#include<string.h>
int main() {
    char str[100];
    fgets(str,sizeof(str),stdin);
    int i,j,palindrome=1;
    j=strlen(str)-2;
    for (i=0;i<j;i++) {
        if (str[i]==' ') {
            continue;;
        }
        if (str[j]==' ') {
            j--;
            i--;
        }
        if (str[i]!=str[j]) {
            palindrome=0;
            break;
        }
        j--;
    }
    if (palindrome==1) {
        printf("Palindrome");
    }
    else {
        printf("Not Palindrome");
    }
    return 0;
}