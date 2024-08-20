// Success 0ms

#include <string.h>
#include <stdlib.h>

char * mergeAlternately(char * word1, char * word2)
{
	if (word1 == NULL || word2 == NULL)
		return NULL;
	int word1_size = strlen(word1);
	int word2_size =  strlen(word2);
	int size = word1_size + word2_size + 1;
	char *buffer = (char *)malloc(sizeof(char) * size);
	if (buffer == NULL)
			return NULL;
	int buffer_index = 0;
	int i = 0;
	int j = 0;
	while (i < word1_size || j < word2_size)
	{
		if (i < word1_size)
			buffer[buffer_index++] = word1[i++];
		if (j < word2_size)
			buffer[buffer_index++] = word2[j++];
	}
	buffer[buffer_index] = '\0';
	return buffer;
}
