#include "lists.h"
#include <stdlib.h>

/**
 * insert_student - function that add nodes to a list
 * @new_head: pointer to new list
 * @id: integer,
 * @first_name: pointer to a string
 * @last_name: pointer to a string
 * @average: float
 * Return: void
 */
void insert_student(student *new_head, int id, char *first_name, char *last_name, float average)
{
    student *new = (student *)malloc(sizeof(student));
    if (new == NULL)
    {
        fprintf(stderr, "Memory allocation failed");
        exit(1);
    }
    new->id = id;
    new->first_name = first_name;
    new->last_name = last_name;
    new->average = average;
    new->next = NULL;
    if (new_head == NULL)
        new_head = new;
    else
    {
        student *ptr = new_head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = new;
    }
}