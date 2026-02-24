#include <stdio.h>
int main() {
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    int first=arr[0][0];
    int second=arr[0][0];
    for(int i=1;i<r;i++) {
        for(int j=0;j<c;j++) {
            if(arr[i][j]>first) {
                second=first;
                first=arr[i][j];
            }
            else if (arr[i][j]< first) {
                if (second==first || arr[i][j]> second) {
                    second=arr[i][j];
                }
            }
        }
    }
    if (second==first) {
        printf("No second highest salaray");
    }
    else {
        printf(" Highest salary: %d\n",first);
        printf(" Second highest salary: %d\n",second);
    }
    return 0;
}
