
#include <stdio.h>
int main () {
    int days;
    scanf("%d",&days);
    int total=0;
    int count=0;
    for (int i=0;i<days;i++){
        int expense;
        scanf("%d",&expense);
        total+=expense;
        if (expense>1000) {
            count++;
        }
    }
    printf("Total Expense: %d\n",total);
    printf("Overspend Days: %d",count);
    return 0;
}