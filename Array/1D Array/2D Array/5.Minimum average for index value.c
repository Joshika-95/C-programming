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
    int min=0;
    int idx=0;
    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++) {
            int sum=0;
            idx+=arr[0][j];
            sum+=arr[i][j];
            if (sum<idx) {
                idx=sum;
                min=i;
            }
        }
    }
    printf("%d",min);
    return 0;
}
