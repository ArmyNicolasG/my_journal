// By: Nicolas Galeano.
#include <stdlib.h>
#include <stdio.h>

int main () {

	FILE *pF = fopen("./edit_me_with_clang.txt", "a"); // Using *pointers to select the MEMORY BLOCK in filesystem where the file is located. Use "a" for append mode, "w" for edit all mode (will erase all file content and insert the this you append with this code)	
	
	char newLine[] = "Line inserted using C language!\n";

	fputs(newLine, pF); // Writing a char[] into the selected file in *pF allocation of memory. Everything is a file.

	fclose(pF); // Closing the file.

	return 0;
}
