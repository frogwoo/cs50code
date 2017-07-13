#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
	// asks for a name and returns the initials of that name
    string name = get_string();
    for (int i = 0; i < strlen(name); i++) {
        if (i == 0) {
            if (name[i] != ' ') {
                printf("%c", toupper(name[i]));
            }
        } else if (name[i - 1] == ' ' && name[i] != ' ') {
            printf("%c", toupper(name[i]));
        }
    }
    printf("\n");
}