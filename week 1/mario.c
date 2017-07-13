#include <cs50.h>
#include <stdio.h>

int main(void) {
    int height = 100;
    do {
        printf("Height: ");
        height = get_int();
    } while (height > 23 || height < 0);  
    for (int i = 0; i < height; i++) {
        for (int x = height-1; x > i; x--) {
            printf(" ");
        } 
        for (int x = 0; x < i+1; x++) {
            printf("#");
        }
        printf("  ");
        // right hand side
        for (int x = 0; x < i+1; x++) {
            printf("#");
        }
        printf("\n");
    }
}