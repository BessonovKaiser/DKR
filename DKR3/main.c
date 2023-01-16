#include <stdio.h>
#include <ctype.h>
#include <string.h>

int check_word_sign(char* current_word);

int main() {
    FILE *file;
    FILE *file_2;
    char file_path[] = "D:\\Proga RTF\\Labs\\DKR3\\text.txt";
    char longest_word[100] = "";
    char current_word[100] = "";
    char c, a;

    file = fopen(file_path, "r");
    file_2 = fopen(file_path, "r");
    if (file == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    a = fgetc(file_2);
    int i = 0;
    while ((c = fgetc(file)) != EOF)
    {
        if (c != ' ' && c != '\n' && c != '\r')
        {
            current_word[i] = c;
            i++;
        }
        a = fgetc(file_2);
        if (c == ' ' || c == '\n' || c == '\r' || a == EOF)
        {
            if(check_word_sign(current_word) == 0)
            {
                memset(current_word, 0, sizeof(current_word));
                i = 0;
                continue;
            }

            if (strlen(current_word) > strlen(longest_word))
                strcpy(longest_word, current_word);
            memset(current_word, 0, sizeof(current_word));
            i = 0;
        }
    }


    printf("The longest word in the file is: %s\n", longest_word);

    fclose(file);
    return 0;
}

int check_word_sign(char* current_word)
{
    int q = 0;
    for(int x = 0; x < strlen(current_word); x++)
        if (isalpha(current_word[x]) == 0 && isdigit(current_word[x]) == 0)
            q++;

    if (q == strlen(current_word))
        return 0;
    else
        return 1;
}
