#include <stdlib.h>
#include "main.h"
/**
 * strtow - Splits a string into words.
 * @str: The input string to be split.
 *
 * Description: This function splits an input string into words, separating
 * them based on spaces. It returns an array of strings, where each element
 * contains a single word. The last element of the array is NULL.
 *
 * Return: A pointer to an array of strings, or NULL if the input is invalid or
 * if memory allocation fails.
 */
int is_space(char c) 
{
return (c == ' ' || c == '\t' || c == '\n');
}
int count_words(char *str)
{
int count = 0;
int in_word = 0;
while (*str) 
{
if (is_space(*str))
{
if (in_word) 
{
in_word = 0;
}
}
else
{
if (!in_word)
{
in_word = 1;
count++;
}
}
str++;
}
return (count);
}
char *str_dup_word(char *start, char *end) 
{
int length = end - start;
char *word = malloc(length + 1);
if (word) 
{
int i;
for (i = 0; i < length; i++) 
{
word[i] = start[i];
}
word[length] = '\0';
}
return (word);
}
char **strtow(char *str) 
{
if (str == NULL || *str == '\0'){
return (NULL);
}
int num_words = count_words(str);
char **words = malloc((num_words + 1) * sizeof(char *));
if (words == NULL){
return (NULL);
}
int in_word = 0;
char *start = str;
char **current = words;
while (*str)
{
if (is_space(*str)) 
{
if (in_word)
{
in_word = 0;
*current = str_dup_word(start, str);
if (*current == NULL)
{
free(words);
return (NULL);
}
current++;
}
}
else
{
if (!in_word)
{
in_word = 1;
start = str;
}
}
str++;
}
if (in_word)
{
*current = str_dup_word(start, str);
if (*current == NULL)
{
free(words);
return (NULL);
}
}
*current = NULL;
return (words);
}
