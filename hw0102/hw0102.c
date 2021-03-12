//
//  hw0102.c
//  hw0102
//
//  Created by Michael Leong on 2021/3/5.
//

#include "text_editor.h"
#include <stdio.h>

#define RED "\e[1;91m"
#define BLUE "\e[1;94m"

int main() {
    char oriText[1025] = {0};
    char keyWord[1025] = {0};
    char newWord[1025] = {0};
    char newText[1025] = {0};
    
    printf("Please enter the original text:\n");
    input(oriText, 1025);
    printf("Keyword:\n");
    input(keyWord, 1025);
    printf("New word:\n");
    input(newWord, 1025);
    
    textEdit(oriText, keyWord, newWord, newText);
    
    printf("Before:\n");
    printKeywordColour(oriText, keyWord, RED);
    printf("\n");
    printf("After:\n");
    printKeywordColour(newText, newWord, BLUE);
    printf("\n");
    return 0;
}
