#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char word[100];
    char target[100];
    int count = 0;

    file = fopen("text.txt", "r");

    if (file == NULL) {
        printf("Error: cannot open file\n");
        return 1;
    }

    printf("Enter word to search: ");
    scanf("%s", target);

    while (fscanf(file, "%s", word) != EOF) {
        if (strcmp(word, target) == 0) {
            count = count + 1;
        }
    }

    fclose(file);

    printf("The word '%s' appears %d times\n", target, count);

    return 0;
}