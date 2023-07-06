// Write a program to find the average expenditure of a company for each month of each year, each year and average over the range of years specified. Use arrays to construct a table, display the table of expenditure and find the sum and average.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int init_yr, fnl_yr;

    printf("Enter the start year: ");
    scanf("%d", &init_yr);

    printf("Enter the end year: ");
    scanf("%d", &fnl_yr);

    int range = fnl_yr - init_yr + 1;

    // Dynamically allocate memory for year array
    int **year = (int **)malloc(range * sizeof(int *));
    for (int i = 0; i < range; ++i)
    {
        year[i] = (int *)malloc(12 * sizeof(int));
    }

    char months[12][5] = {"Jan.", "Feb.", "Mar.", "Apr.", "May.", "Jun.",
                          "Jul.", "Aug.", "Sep.", "Oct.", "Nov.", "Dec."};

    // Read the expenditures
    for (int i = 0; i < range; ++i)
    {
        printf("\nEnter the expenditures for months of the year %d\n", init_yr + i);

        for (int j = 0; j < 12; ++j)
        {
            printf("%s: ", months[j]);
            scanf("%d", &year[i][j]);
        }
    }

    // Display the expenditure table
    printf("\nExpenditure table:\n");

    // Top border
    for (int i = 0; i < 136; ++i)
    {
        putchar('-');
    }

    printf("\n| %4s |", "Year"); // Occupy 6 blocks before '|'

    for (int i = 0; i < 12; ++i)
    {
        printf("%6s%2c|", months[i], ' ');
    }

    printf("%6s%3c|", "Total", ' ');
    printf("%6s%3c|\n", "Avg", ' ');

    // Bottom border
    for (int i = 0; i < 136; ++i)
    {
        putchar('-');
    }

        int total_sum =0 ;
    // Print the expenditure table
    for (int i = 0; i < range; ++i)
    {
        printf("\n| %4d |", init_yr + i);

        int year_sum = 0;
        for (int j = 0; j < 12; ++j)
        {
            printf("%7d |", year[i][j]);
            year_sum += year[i][j];
        }

        printf("%8d |%8.2f |\n", year_sum, year_sum / 12.0f);

        // Print separator
        for (int i = 0; i < 136; ++i)
        {
            putchar('-');
        }

        total_sum += year_sum;

    }

    printf("Average monthly expenditure: %f \n", ((float)total_sum)/range*12);
    printf("Average over the range of years(%d - %d): %f",init_yr, fnl_yr,((float)total_sum)/range);


    

    // Free dynamically allocated memory
    for (int i = 0; i < range; ++i)
    {
        free(year[i]);
    }
    free(year); 
    return 0;
}
