#include <stdio.h>
#include <string.h>

void replace(char *str, char word[], char new_word[]);
int check(char *str, char word[]);

int main() 
{
    char str[1000];
    char word[50];
    char new_word[50];

    printf("Enter the Text: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    printf("Enter the Word that will be replaced: ");
    fgets(word, sizeof(word), stdin);
    word[strcspn(word, "\n")] = 0;

    printf("Enter the New Word: ");
    fgets(new_word, sizeof(new_word), stdin);
    new_word[strcspn(new_word, "\n")] = 0;
    
    replace(str, word, new_word);
    return 0;
}

void replace(char *str, char word[], char new_word[]) 
{
    char result[1000];  
    int i = 0, j = 0, count = 0;
    int word_len = strlen(word);
    int new_word_len = strlen(new_word);

    while (str[i] != '\0') 
    {
        if (strncmp(&str[i], word, strlen(word))==0) 
        {
            strcpy(&result[j], new_word);
            j += new_word_len;
            i += word_len;
            count++;
        } else {
            result[j++] = str[i++];
        }
    }
    result[j] = '\0';  
    printf("___Replacement Completed___\nFrequency of \"%s\": %d\nModified Text: %s\n", word, count, result);
}