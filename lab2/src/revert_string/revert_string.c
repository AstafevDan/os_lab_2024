#include <string.h>
#include "revert_string.h"

void RevertString(char *str)
{
	int length = strlen(str);
	int i;

	for (i = 0; i < length / 2; i++){
		char temp = str[i];
		str[i] = str[length - i - 1];
		str[length - i - 1] = temp;
	}
}

