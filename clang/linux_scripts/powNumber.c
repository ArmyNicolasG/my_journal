#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int elevate (int*, int*); // Function prototypes.

int main() {
	
	int myNumber;
	int myPotence;
	int result;

	int * pNumber = &myNumber;
	int * pPotence = &myPotence;

 	puts("Insert your number:");
	scanf("%d", pNumber);
	puts("Insert your potence:");
	scanf("%d", pPotence);

	result = elevate(pNumber, pPotence);
	printf("%d", result);

}

int elevate (int* pNumber, int* pElevateTo) {

	return pow(*pNumber, *pElevateTo);

}
