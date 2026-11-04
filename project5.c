#include <stdio.h>

int main()
{
    char ch;
    FILE *fp;

    fp = fopen("data.txt", "w");
    fprintf(fp, "learning a computer language was new to me. \nI was not having any coding knowledege. ");
    fclose(fp);

    fp = fopen("data.txt", "a");
    fprintf(fp, "I am comfortable with sir's teaching and I am enjoying it.\nThe C programming class is helpful and easy to follow. \nConcepts are explained with examples and lab practice.\n File handling and other topics were taught clearly.\n I request a few more practice programs and doubt-clearing sessions. \nOverall, I am satisfied with the class.");
    fclose(fp);

    fp = fopen("data.txt", "r");
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(fp);

    return 0;
}
