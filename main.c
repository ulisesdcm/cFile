#include <stdio.h>

int testIO1(void);

int main(void)
{
    testIO1();
    return 1;
}

int testIO1(void)
{
    FILE *ptrFile;
    int status;

    // OPEN FILE
    ptrFile = (FILE *) fopen("Test_file.txt","w");
    if(ptrFile == NULL)
    {
        printf("Cannot open file.\n");
        return 0;
    }
    printf("File open success!!! \n");

    // Writing a character
    status = fputc('x',ptrFile);

    if(status == EOF)
    {
        printf("Error writting a character\n");
        return 0;
    }
    printf("Success writing a character!!!! \n");

    // CLOSE FILE
    if(fclose(ptrFile) == EOF)
    {
        printf("Error closing file\n");
        return 0;
    } 
    printf("File close sucess!!! \n");
}