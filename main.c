#include "lists.h"

/**
 * main - check code
 * Return: always 0
 */

int main(void)
{
    unsigned int numNode;
    float aver;
    Student *h = (Student *)malloc(sizeof(Student));
    if (h == NULL)
    {
        fprintf(stderr, "Memory allocation failed");
        exit(98);
    }
    numNode = getInt("Enter Number of students");
    h = createList(numNode);
    aver = calcAverage(h, numNode);
    printf("The average of this class is: %f", aver);
    return (0);
}