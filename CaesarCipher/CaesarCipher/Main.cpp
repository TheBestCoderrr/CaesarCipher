#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Exersize1.h"
#include "Exersize2.h"
#include "Exersize3.h"
using namespace std;

int main() {
	FILE* text1, * text2;
	text1 = fopen("G:\\Text\\Text.txt", "r");
	text2 = fopen("G:\\Text\\Text2.txt", "r");
	if (text1 != NULL && text2 != NULL) {		
		PrintDifferentStrings(text1, text2);
		fclose(text1);
		fclose(text2);
	}


	FILE* text, * NewText;
	text = fopen("G:\\Text\\Text.txt", "r");
	NewText = fopen("G:\\Text\\NewText.txt", "w");

	if (text != NULL && NewText != NULL) {
		PrintCountSymbols(text, NewText);
		fseek(text, 0, SEEK_SET);
		PrintCountStrings(text, NewText);
		fseek(text, 0, SEEK_SET);
		PrintCountVowels(text, NewText);
		fseek(text, 0, SEEK_SET);
		PrintCountConsonants(text, NewText);
		fseek(text, 0, SEEK_SET);
		PrintCountNumbers(text, NewText);

		fclose(text);
		fclose(NewText);
	}

	FILE* OriginalText, * CipherText;
	OriginalText = fopen("G:\\Text\\Text.txt", "r");
	CipherText = fopen("G:\\Text\\CipherText.txt", "w");

	if (OriginalText != NULL && CipherText != NULL) {
		PrintCipherText(OriginalText, CipherText);

		fclose(OriginalText);
		fclose(CipherText);
	}
}