#include<stdio.h>
int main() {
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            for(int k=i;k<r;k++) {
                int count;
                if (k==i) {
                    count=j+1;
                }
                else {
                    count=0;
                }
                for (int count=0;count<c;count++) {
                    if (arr[i][j]==arr[k][count]) {
                        printf("%d",arr[i][j]);
                        return 0;
                    }
                }
            }
        }
    }
    return 0;
}
