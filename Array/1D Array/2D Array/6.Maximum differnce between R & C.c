#include <stdio.h>
#include <stdlib.h>
int main() {
    int r,c;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    int sum[100];
    for (int i=0;i<r;i++) {
        sum[i]=0;
        for (int j=0;j<c;j++) {
            scanf("%d",&arr[i][j]);
            sum[i]+=arr[i][j];
        }
    }
    int max=0;
    for (int i=0;i<r;i++) {
        for (int j=i+1;j<r;j++) {
            int diff=abs(sum[i]-sum[j]);
            if (diff>max) {
                max=diff;
            }
        }
    }
    printf("%d",max);
    return 0;
}

