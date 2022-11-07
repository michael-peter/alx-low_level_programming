#include "main.h"
#include <stdlib.h>

/**
 * strtow - splits string into words
 * @str: string
 * Return: pointer to array of words
 */

char **strtow(char *str)
{
	int i, j, k, curr_k, len, word_count;
	char *word;
	char **words;

	if (str == NULL || *str == 0)
		return (NULL);

	word_count = count_words(str);
	words = malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
		return (NULL);

	curr_k = 0;
	for (i = 0; i < word_count; i++)
	{
		for (k = curr_k; str[k] != 0; k++)
		{

			if (str[k - 1] == 32 && str[k] != 32)
			{
				len = spacelen(str + k);
				word = malloc(sizeof(char) * (len + 1));

				if (word == NULL)
					return (NULL);

				for (j = 0; j < len; j++)
					word[j] = str[k + j];

				word[j] = 0;
				words[i] = word;
				break;
			}
		}
		curr_k += k + 1;
	}

	words[i] = NULL;

	return (words);
}

/**
 * count_words - counts words separated by spaces in a string
 * @s: string
 * Return: number of words in s
 */

int count_words(char *s)
{
	int i, length;

	length = 0;
	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] == 32 && s[i + 1] != 32 && s[i + 1] != 0)
			length++;
	}

	return (length);
}

/**
 * spacelen - counts the length of a string using space instead of null
 * character
 * @s: string
 * Return: length of s (part)
 */

int spacelen(char *s)
{
	int length;

	length = 0;
	while (s[length] != 32)
		length++;

	return (length);
}
