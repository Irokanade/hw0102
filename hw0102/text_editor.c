//
//  text_editor.c
//  hw0102
//
//  Created by Michael Leong on 2021/3/5.
//

#include "text_editor.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//file is stdin
char *input(char *string, int len) {
    char *str;
    
    str = fgets(string, len, stdin);
    for(char *i = string; *i != 0; i++) {
        if(*i == '\n') {
            *i = 0;
        }
    }
    
    return str;
}

int textEdit(const char *oriText, const char *keyWord, const char *newWord, char *newText) {
    
    //printf("strlen(oriText): %lu\n", strlen(oriText));
    char *oriTextCopy = (char*)malloc(sizeof(char)*strlen(oriText));
    strncpy(oriTextCopy, oriText, strlen(oriText));

    //printf("oriTextCopy: %s\n", oriTextCopy);
    
    char *token = strtok(oriTextCopy, keyWord);
    int32_t i = 0;

    while(token != NULL && *token != 0) {
        //printf( "\"%d: %s\"\n", i, token);
        //printf("token decimal value: %d\n", *token);
        strncat(newText, token, strlen(token));
        strncat(newText, newWord, strlen(newWord));
        //printf("newText: %s\n", newText);
        token = strtok(NULL, keyWord);
        i++;
    }
    
    return 0;
}