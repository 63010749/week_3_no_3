#include<stdio.h>

int main() {
	char first;
	char vowel[6] = { 'a','e','i','o','u' };
	scanf("%c",&first);
	int i;
	for (i = 0; i < 6; i++) {
		if (first == vowel[i]) {
			printf("there is vowel");
			break;
		}
	}
	if (i == 6) {
		printf("there is no vowel");
	}
	return 0;
}