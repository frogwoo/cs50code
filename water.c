#include <cs50.h>
#include <stdio.h>

int main(void) {
    printf("Minutes: ");
    int length = get_int();
    int bottles = length * 12;
    printf("Bottles: %i\n", bottles);
}