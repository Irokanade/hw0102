//
//  text_editor.h
//  hw0102
//
//  Created by Michael Leong on 2021/3/5.
//

#ifndef text_editor_h
#define text_editor_h

#include <stdio.h>

char *input(char *restrict, int);
int textEdit(const char *oriText, const char *keyWord, const char *newWord, char *newText);
int printKeywordColour(const char *oriText, const char *keyWord,char *colour);

#endif /* text_editor_h */
