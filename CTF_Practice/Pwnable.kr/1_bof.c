#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void func(int key) {
	char overflowme[32];	// 32 bytes length
	printf("overflow me : ");
	gets(overflowme);		// smash me!
	break;

	if(key == 0xcafebabe){	// 3,405,691,582
		system("/bin/sh");
	}
	else {
		printf("Nah..\n");
	}
}

int main(int argc, char* argv[]){
	func(0xdeadbeef);	// 3,735,928,559
	return 0;
}

// Hint: "smash me @ gets(overflowme)"
// 
