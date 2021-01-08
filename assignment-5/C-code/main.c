#include<stdio.h>

int main(void) {
	unsigned char A = 0x00, B = 0x01, C = 0x00, D = 0x00;
	unsigned char c, one = 0x01;
	
	c = (~A) & B & (~C) & (~D);

	printf("A=%x B=%x C=%x D=%x  c=%x\n",A,B,C,D,c&one);
	return 0;
}