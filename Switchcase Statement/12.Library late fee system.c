#include <stdio.h>
int main () {
    int bookType;
    int daysLate;
    int latefees;
    scanf("%d%d", &bookType, &daysLate);
    switch (bookType) {
        case 1:
            if (bookType == 1) {
                latefees=2*daysLate;
                printf("Late Fee: %d", latefees);
            }
            break;
        case 2:
            if (bookType == 2) {
                latefees=5*daysLate;
                printf("Late Fee: %d", latefees);
            }
            break;
    }
    return 0;
}
