// Exercise Question :check if a character is a vowel or consonant.
#include<stdio.h>
void main()
{
    char word;
    printf("Enter any word:");
    scanf("%c",&word);

    if(word=='A' || word=='E' || word=='I' || word=='O' || word=='U' || word=='a' || word=='e' || word=='i' || word=='o' || word=='u'){
        printf("It is Vowel");
    }
    else{
        printf("It is consonant");
    }
}