#include <iostream>
#include <string.h>
#include "Sizes.h"

int FindSize(FILE* text) {
	char letter;
	int count = 1;
	do {
		letter = fgetc(text);
		if (letter == '\n')
			count++;
	} while (letter != EOF);
	return count;
}

void PrintDifferentStrings(FILE* text1, FILE* text2) {
	char str1[TEXTSIZE], str2[TEXTSIZE];
	int countstr1 = FindSize(text1);
	int countstr2 = FindSize(text2);
	fseek(text1, 0, SEEK_SET);
	fseek(text2, 0, SEEK_SET);
	int i = 0;
	while (true) {
		i++;
		fgets(str1, TEXTSIZE, text1);
		fgets(str2, TEXTSIZE, text2);
		if (strcmp(str1, str2) != 0) {
			printf("%s%s", str1, str2);
		}
		if (i == countstr1 || i == countstr2)
			break;
	}
}