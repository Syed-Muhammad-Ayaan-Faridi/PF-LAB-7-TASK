#include <stdio.h>
int main(){
    char word[100];
    
    printf("Enter a mixed case word: ");
    scanf("%[^A-Z,a-z]",word);
    printf("Word: %s\n",word);
    
    printf("\n");
    return 0;
}