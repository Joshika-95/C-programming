#include<stdio.h>
int main() {
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    int count=0;
    int palindrome;
    for (int i=0;i<r;i++) {
        palindrome=1;
        for (int j=0;j<c/2;j++) {
            if (arr[i][j]!=arr[i][c-j-1]) {
                palindrome=0;
                break;
            }
        }
        if (palindrome==1) {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}