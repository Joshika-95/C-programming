#include<stdio.h>
int main() {
    int datapack;
    int n;
    scanf("%d%d",&datapack,&n);
    int i=0;
    int day=0;
    int usage;
    int exhaustedDay=0;
    int overused=0;
    while (day<n) {
        scanf("%d",&usage);
        datapack-=usage;
        day++;
        if (datapack<=0 && exhaustedDay==0) {
            exhaustedDay=day;
            if (datapack<0) {
                overused=-datapack;
            }
            else{
                overused=0;
            }
            i++;
        }
    }
    if (exhaustedDay==0) {
        printf("Exhausted Day: Not Exhausted\n");
        printf("Overused Data: 0\n");
    }
    else {
        printf("Exhausted Day: %d\n",exhaustedDay);
        printf("Overused Data: %d\n",overused);
    }
    return 0;
}
