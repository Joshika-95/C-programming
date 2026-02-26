#include <stdio.h>
int main() {
    int r,c;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    int count=0;
    int isPrime;
    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++) {
            if (arr[i][j]>1) {
                isPrime=1;
                for (int k=2;k<arr[i][j];k++) {
                    if (arr[i][j]%k==0) {
                        isPrime=0;
                        break;
                    }
                }
                if (isPrime==1) {
                    count++;
                }
            }
        }
    }
    printf("%d",count);
    return 0;
}

