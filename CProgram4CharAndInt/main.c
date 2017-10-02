#include <stdio.h>




void charToInt(){
    printf("You have chosen to print an int from a character,\nplease input the character you would like to convert: \n");
    char charToConvert;
    int convertedInt;
    scanf("%c", &charToConvert);
    getchar();
    convertedInt = charToConvert - '0';
    printf("From the char %c you end up with the int %d.\n", charToConvert, convertedInt);
}

void intToChar(){
    printf("You have chosen to print a character from an int,\nplease input the int you would like to convert: \n");
    int intToConvert;
    char convertedChar;
    scanf("%d", &intToConvert);
    getchar();
    convertedChar = intToConvert + '0';
    printf("From the int %d you end up with the char %c.\n", intToConvert, convertedChar);
}


int main() {
    char choice = 'a';
    while(choice != 'n' && choice != '0' && choice != 'O') {
        choice = 'a';
        while (1) {
            printf("Would you like to convert a char or int?\n(c or i): ");
            scanf("%c", &choice);
            getchar();
            if (choice == 'c' || choice == 'i') {
                break;
            } else {
                printf("I can not understand what you want. Please try again.");
            }
        }

        if (choice == 'c') {
            charToInt();
        } else {
            intToChar();
        }
        printf("Would you like to convert another character?\n(n for no, y for yes): ");
        scanf("%c", &choice);
        getchar();
    }
    printf("Ok, hope you enjoyed this program!! :)");
    return 0;
}
