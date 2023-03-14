#include <stdio.h>
#include <string.h>

const char *PROVINCES[] = {"Alberta", "British Columbia", "Manitoba", "New Brunswick", "Newfoundland and Labrador", "Nova Scotia", "Ontario", "Prince Edward Island", "Quebec", "Saskatchewan"};

void print_provinces()
{
    // TODO:: Write a for loop that iterates over the PROVINCES array and prints out
    //        how many letters is contained in each.

    int province_size = sizeof(PROVINCES) / sizeof(PROVINCES[0]);

    for (int i = 0; i < province_size; i++)
    {
        int province_letter_count = strlen(PROVINCES[i]);
        printf("%s has %d characters.\n", PROVINCES[i], province_letter_count);
    }
}