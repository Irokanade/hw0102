//
//  hw0102.c
//  hw0102
//
//  Created by Michael Leong on 2021/3/5.
//

#include "text_editor.h"
#include <stdio.h>

int main() {
    char oriText[1024] = {0};
    char keyWord[1024] = {0};
    char newWord[1024] = {0};
    char newText[1024] = {0};
    
    printf("Please enter the original text:\n");
    input(oriText, 1024);
    printf("Keyword:\n");
    input(keyWord, 1024);
    printf("New word:\n");
    input(newWord, 1024);
    
    textEdit(oriText, keyWord, newWord, newText);
    
    printf("Before:\n");
    printf("%s\n", oriText);
    printf("After:\n");
    printf("%s\n", newText);
    return 0;
}
