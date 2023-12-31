#include "lists.h"
/**
 * print_list - print a list
 * @pointer: pointre to list
 * Return: void
 */
void print_list(student *pointer)
{
    student *p = pointer;

    if (pointer == NULL)
    {
        return;
    }
    while (p != NULL)
    {
        printf("%d | ", p->id);
        printf("%s | ", p->first_name);
        printf("%s | ", p->last_name);
        printf("%f | \n", p->average);
        p = p->next;
    }
}