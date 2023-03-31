include "main.h";
char *_strcat(char *dest, char *src)
{
	int destLen = 0;
	int srcLen = 0;
	int i;

	for (i = 0 ; dest[i] != '\0' ; i++)
		destLen++;
	for (i = 0 ; src[i] != '\0' ; i++)
		srcLen++;
	for (i = 0 ; i <= srcLen ; i++)
	{
		dest[destLen + i] = src[i];
	}
	return (dest);

}
