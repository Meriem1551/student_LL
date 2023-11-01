#include "lists.h"

/**
 * main - check code
 * Return: always 0
 */

int main(void)
{
    unsigned int numNode;
    float aver;
    student *h = (student *)malloc(sizeof(student));
    if (h == NULL)
    {
        fprintf(stderr, "Memory allocation failed");
        exit(1);
    }
    numNode = getInt("Enter Number of students");
    h = createList(numNode);
    aver = calcAverage(h, numNode);
    printf("The average of this class is: %.2f\n", aver);
    splitList(h);

    return (0);
}