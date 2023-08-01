#include<stdio.h>
#include<stdlib.h>

int main(){
    char fruitName[]="Mango";
    char characterName[]="James Ashianor";
    int characterAge=60; /*this how to modify the character age*/
    printf("%s like eating %s a lot\n", characterName,fruitName);
    printf("%s is %d years old\n",characterName,characterAge);
    characterAge=80;
    printf("%s become %d and he retired\n",characterName,characterAge);
}