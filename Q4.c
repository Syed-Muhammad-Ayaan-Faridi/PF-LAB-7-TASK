#include <stdio.h>
int main(){
    char word[100],letter;
    const int diff = 32;
    int i = 0;
    printf("Enter a mixed case word: ");
    scanf("%[A-Z,a-z,' ']",word);
    printf("Word before shuffling: %s\n",word);
    while (word[i] != '\0')
    {
        letter = word[i];
        if (letter >= 65 && letter <= 90)
        {
            letter += diff;
            word[i] = letter;
        }
        else if (letter >= 97 && letter <= 122)
        {
            letter -= diff;
            word[i] = letter;
        }
        i += 1;
    }
    printf("Word after shuffling: %s",word);

    
    return 0;
}