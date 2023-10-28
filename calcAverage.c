#include "lists.h"

/**
 * calcAverage - calculate averae of a class
 * @head: pointer to list of student
 * @num_student:unsigned integer
 * Return: float (average)
 */
float calcAverage(student *head, unsigned int num_student)
{
    float
        sum_averages = 0,
        class_average;
    student *p = head;

    while (p != NULL)
    {
        sum_averages += p->average;
    }
    class_average = (float)(sum_averages / num_student);
    return (class_average);
}