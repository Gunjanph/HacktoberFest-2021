#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 1000

int countOccurrences(FILE *fptr, char *word)
{
    char str[BUFFER_SIZE];
    char *pos;

    int index, count=0;

    while ((fgets(str, BUFFER_SIZE, fptr)) != NULL)
    {
        index = 0;

        while ((pos = strstr(str + index, word)) != NULL)
        {
            index = (pos - str) + 1;
            count++;
        }
    }

    return count;
}


int main()
{
    FILE *fptr;
    char filepath[100],word[50];
    int wCount;

    scanf("%s", filepath);
    scanf("%s", word);

    fptr = fopen(filepath, "r");

    /* Exit if file not opened successfully */
    if (fptr == NULL)
    {
        printf("Failed to open file.\n");
        exit(EXIT_FAILURE);
    }
    wCount = countOccurrences(fptr, word);

    printf("'%s' is found %d times in file.", word, wCount);

    fclose(fptr);

    return 0;
}