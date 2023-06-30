#include <iostream>
#include <string.h>

void PrintCountSymbols(FILE* text, FILE* NewText) {
	char letter;
	int CountSymbols = 0;
	do {
		CountSymbols++;
		letter = fgetc(text);
	} while (letter != EOF);

	fprintf(NewText, "Count Symbols = %i\n", CountSymbols);
}

void PrintCountStrings(FILE* text, FILE* NewText) {
	char letter;
	int CountStrings = 0;
	do {
		letter = fgetc(text);
		if (letter == '\n')
			CountStrings++;
	} while (letter != EOF);
	fprintf(NewText, "Count Strings = %i\n", ++CountStrings);
}

void PrintCountVowels(FILE* text, FILE* NewText) {
	char Pattern[] = { "aeuoi" };
	char letter;
	int CountVowels = 0;
	do {
		letter = fgetc(text);
		for (int i = 0; i < strlen(Pattern); i++) {
			if (letter == Pattern[i])
				CountVowels++;
		}
	} while (letter != EOF);
	fprintf(NewText, "Count vowels = %i\n", CountVowels);
}

void PrintCountConsonants(FILE* text, FILE* NewText) {
	char Pattern[] = { "qwrtypsdfghjklzxcvbnm" };
	char letter;
	int CountConsonants = 0;
	do {
		letter = fgetc(text);
		for (int i = 0; i < strlen(Pattern); i++) {
			if (letter == Pattern[i])
				CountConsonants++;
		}
	} while (letter != EOF);
	fprintf(NewText, "Count Consonants = %i\n", CountConsonants);
}

void PrintCountNumbers(FILE* text, FILE* NewText) {
	char Pattern[] = { "1234567890" };
	char letter;
	int CountNumbers = 0;
	do {
		letter = fgetc(text);
		for (int i = 0; i < strlen(Pattern); i++) {
			if (letter == Pattern[i])
				CountNumbers++;
		}
	} while (letter != EOF);
	fprintf(NewText, "Count Numbers = %i\n", CountNumbers);
}