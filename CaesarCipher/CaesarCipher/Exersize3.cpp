#include <iostream>

void PrintCipherText(FILE* OriginalText,FILE * CipherText) {
	char letter;
	do {
		letter = fgetc(OriginalText);
		fprintf(CipherText, "%c", letter == ' ' ? letter : letter + 3);
	} while (letter != EOF);
}