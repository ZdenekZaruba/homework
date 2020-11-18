#include <stdio.h>

int main () {
	int ch;

	for( ch = 33 ; ch <= 161; ch++ ) {
		printf("ASCII value = %d \tCharacter = %c\n", ch , ch );
	}

	return(0);
}
