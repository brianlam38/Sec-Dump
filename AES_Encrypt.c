#include <stdio.h>
#include <stdlib.h>

void AES_Encrypt();
void keyExpansion();
void initialRound();

void subBytes();
void shiftRows();
void mixColumns();
void addRoundKey();

int main() {

	char message[] = "This is a message we will encrypt with AES";
	char key[16] = {1, 2, 3, 4
					5, 6, 7, 8
					9, 10, 11, 12
					13, 14, 15, 16};

	AES_Encrypt();

	return EXIT_SUCCESS;
}

void AES_Encrypt() {
	int numberOfRounds = 1;

	keyExpansion();
	initialRound(); // whitening step / addRoundKey

	// repeated step per cycle
	for (int i = 0; i < numberOfRounds; i++) {
		subBytes();
		shiftRows();
		mixColumns();
		addRoundKey();
	}

	// final round
	void subBytes();
	void shiftRows();
	void addRoundKey();
}

void keyExpansion() {

}

void initialRound() {

}