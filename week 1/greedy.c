#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void) {
    float amount = -10;
    do {
        printf("O hai! How much change is owed?\n");
        amount = get_float();
    } while(amount < 0);
    amount = round(amount* 100);
    int coins = 0;
    while (amount >= 25) {
        amount -= 25;
        coins += 1;
    }
    while (amount >= 10) {
        amount -= 10;
        coins += 1;
    }
    while (amount >= 5) {
        amount -= 5;
        coins += 1;
    }
    while (amount >= 1) {
        amount -= 1;
        coins += 1;
    }
    printf("%d\n", coins);
}