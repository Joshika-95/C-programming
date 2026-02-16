#include<stdio.h>
int main() {
    int fuelType;
    int liters;
    int fuel_cost;
    scanf("%d%d", &fuelType, &liters);
    switch (fuelType) {
        case 1:
            if (fuelType==1) {
                fuel_cost=105*liters;
                printf("Fuel Cost: %d",fuel_cost);
            }
            break;
        case 2:
            if (fuelType==2) {
                fuel_cost=92*liters;
                printf("Fuel Cost: %d",fuel_cost);
            }
            break;
        case 3:
            if (fuelType==3) {
                fuel_cost=85*liters;
                printf("Fuel Cost: %d",fuel_cost);
            }
            break;
    }
    return 0;
}