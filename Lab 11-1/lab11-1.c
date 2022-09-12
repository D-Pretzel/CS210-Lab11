/** lab11-1.c
* ===========================================================
* Name: David Petzold
* Section: T 6/7
* Project: Lab 11-1
* Purpose:
* ===========================================================
*/

#include <stdio.h>
#include <ctype.h>  //Suggested by GitHub copilot

int main() {

    char houseName;

    // Step 1:  Ask for the House Name
    printf("Enter the first letter of your house: ");
    scanf("%c", &houseName);

    // Always make houseName a lowercase letter
    houseName = tolower(houseName);

    // Step 2:  Create a Switch Statement (created by GitHub copilot)
    switch (houseName) {
        case 'g':
            printf("Your house is Gryffindor\n");
            printf("Your founder is Godric Gryffindor\n");
            printf("Your house colors are scarlet and gold\n");
            break;
        case 'h':
            printf("Your house is Hufflepuff\n");
            printf("Your founder is Helga Hufflepuff\n");
            printf("Your house colors are yellow and black\n");
            break;
        case 'r':
            printf("Your house is Ravenclaw\n");
            printf("Your founder is Rowena Ravenclaw\n");
            printf("Your house colors are blue and bronze\n");
            break;
        case 's':
            printf("Your house is Slytherin\n");
            printf("Your founder is Salazar Slytherin\n");
            printf("Your house colors are green and silver\n");
            break;
        default:
            printf("No house starts with that letter\n");
            break;
    }

    return 0;
}
