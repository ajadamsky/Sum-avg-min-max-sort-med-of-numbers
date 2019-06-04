#include <stdio.h>

int array[10];
int a, b;
int count = 0;
int sum = 0;
float avg;
int low;
int high;
float median;
int swap;

void readNumbers()
{
    for (a = 0; a < 10; a++)
    {
        count++;
        scanf("%i", &array[a]);
    }
}

void sumOfNumbers()
{
    for(a = 0; a < 10; a++)
    {
        sum += array[a];
    }
}

void averageOfNumbers()
{
    avg = (float)sum / count;
}

void minimumOfNumbers()

{        low = array [0];
        for (a = 1; a < 10; a++)
            if (array[a] < low)
                low = array[a];
}

void maximumOfNumbers()

{
    high = array [0];
    for (a = 1; a < 10; a++)
        if (array[a] > high)
            high = array[a];
}

void sortingOfNumbers()
{
       for (a = 0 ; a < 10; a++)
       {
           for (b = 0 ; b < 10 - a - 1; b++)
           {
               if (array[b] > array[b+1])
               {
                   swap       = array[b];
                   array[b]   = array[b+1];
                   array[b+1] = swap;
               }
           }
       }

}

void medianOfNumbers()

{
    median = (float)(array[4] + array[5]) / 2;

}

int main()
{

    printf("Number: \n");
    readNumbers();

    sumOfNumbers();
    printf("Sum: %i\n", sum);

    averageOfNumbers();
    printf("Average: %.1f\n", avg);

    minimumOfNumbers();
    printf("Minimum: %i\n", low);

    maximumOfNumbers();
    printf("Maximum: %i\n", high);

    sortingOfNumbers();
    printf("Sorted: ");

        for ( a = 0 ; a < 10 ; a++ )
        printf("%i ", array[a]);

    medianOfNumbers();
    printf("\nMedian: %.1f\n", median);

}



