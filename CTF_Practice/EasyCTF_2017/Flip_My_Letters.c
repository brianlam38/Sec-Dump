#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ALPHABET 26

int main(int argc, char *argv[]) {

	// easyctf{r_wlmg_vevm_mvvw_zm_zhxrr_gzyov}

	char *flag = {"rwlmgvevmmvvwzmzhxrrgzyov"};
	char *normalAlph = {"zyxwvutsrqponmlkjihgfedcba"};
	char *reverseAlph = {"abcdefghijklmnopqrstuvwxyz"};
	
	int length = strlen(flag);
	printf("%d\n", length);

	for (int i = 0; i < length; i++) {
		// Count position # of char in alphabet
		int count = 0;
		for (int k = 0; k < ALPHABET; k++) {
			if (normalAlph[k] != flag[i]) {
				count++;
			} else {
				break;
			}
		}
		// Find reversed char and return
		char reversedChar = reverseAlph[count];
		printf("%c", reversedChar);
	}

	return EXIT_SUCCESS;
}