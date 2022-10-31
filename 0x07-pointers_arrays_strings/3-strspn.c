/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: 
 * Return: number of bytes in the initial segment of s
 * which consist of only bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, count;

	count = 0;
	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] == accept[i])
			count++;
		else
			break;
	}

	return (count);
}

/**
 * _strlen - compute the length of a string
 * @s: string to parse
 * Return: length of s
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != 0)
		i++;

	return (i);
}
