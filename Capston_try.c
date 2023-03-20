#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *file;
    file  = fopen ("data.bin", "rb+");

    fclose(file);
}
