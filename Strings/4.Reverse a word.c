#include <stdio.h>
int main() {
    char str[100];
    fgets(str,sizeof(str),stdin);
    int len=0;
    while (str[len]!='\0') {
        if (str[len]=='\n') {
            break;
        }
        len++;
    }
    for (int i=len-1;i>=0;i--) {
        printf("%c",str[i]);
    }
    return 0;
}