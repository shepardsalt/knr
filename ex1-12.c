/* Write a program that prints its input one word per line. */
#include <stdio.h>

#define IN	1
#define OUT	0

main(){
	int state;
	state = OUT;
	int c;
	int first;
	while ((c = getchar()) != EOF){
		if (c == ' ' || c == '\n' || c == '\t'){
			state = OUT;
		}
		else if (state == OUT){
			state = IN;
		}
		if (state == IN){
			putchar(c);
			first = 0;
		}
		else if (first == 0){
			printf("\n");
		}
	}
}
			
