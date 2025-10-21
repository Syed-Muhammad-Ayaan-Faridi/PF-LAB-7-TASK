#include <stdio.h>
int main(){
    char word[100],letter;
    int vowelcount = 0,consonentcount = 0, i = 0;
    printf("Enter a word: ");
    scanf("%s",word);
    while (word[i] != '\0'){
        letter = word[i];
        if (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U') vowelcount += 1;
        else if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') vowelcount += 1; 
        else consonentcount += 1;
        i+=1;
    }
    printf("This string has %d vowels\n",vowelcount);
    printf("This string has %d consonent\n",consonentcount);
    return 0;
}