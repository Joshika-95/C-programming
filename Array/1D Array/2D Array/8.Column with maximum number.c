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
    int sum;
    int max=0;
    int idx=0;
    for (int i=0;i<r;i++) {
        sum+=arr[i][0];
    }
    for (int j=0;j<c;j++) {
        sum=0;
        for (int i=0;i<r;i++) {
            sum+=arr[i][j];
        }
        if (sum>max) {
            max=sum;
            idx=j;
        }
    }
    printf("%d",idx);
    return 0;
}