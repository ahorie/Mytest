#include <stdio.h>

int main()
{
	char c;
	printf("Enter an alphabet: ");
	scanf("%c", &c);

	int isLowerCaseVowel, isUpperCaseVowel;

	isLowerCaseVowel = (c == 'a' | c = 'e' | c = 'i' | c = 'o' | c = 'u') ? 1 : 0;
	isUpperCaseVowel = (c == 'A' | c = 'E' | c = 'I' | c = 'O' | c = 'U') ? 1 : 0;

	if (isLowerCaseVowel + isUpperCaseVowel == 1)
		printf("The character is a vowel");
	else
		printf("The character is a consonant");

	return 0;
}

