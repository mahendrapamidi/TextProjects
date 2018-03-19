#include "stdafx.h"
#include<stdlib.h>
#include<string.h>


int main()
{
	int length = 100; //initial size
	
	char * name = (char *)malloc(length * sizeof(char)); //allocate mem for 100 chars
	int count = 0; //to keep track of how many chars have been used
	char c; // to store the current char
	
		while ((c = getchar()) != '\n')
		{ //keep reading until a newline
				if (count >= length)
					name = (char *)realloc(name, (length += 10) * sizeof(char)); //add room for 10 more chars
				name[count++] = c;
			
		}
		for (int i = 0; i <= strlen(name); i++)
		{
			printf("%c", name[strlen(name) - i]);
		}
}
