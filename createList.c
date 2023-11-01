#include "lists.h"
#include "../LL_Exercise/main.h"
/**
 * createList - create a list of student
 * @num_student: int
 * Return: pointer to the created list
 */

student *createList(unsigned int num_student)
{
    student
        *head,
        *new = (student *)malloc(sizeof(student)),
        *tmp;
    unsigned int i;

    new->id = getInt("What the id of this student: ");
    new->first_name = getChar("Enter his first name: ");
    new->last_name = getChar("Entre his last name: ");
    do
    {
        new->average = getFloat("Enter his average: ");
    } while (new->average < 0 || new->average > 20);
    new->next = NULL;
    head = new;
    tmp = head;
    for (i = 1; i < num_student; i++)
    {
        new = (student *)malloc(sizeof(student));
        new->id = getInt("What the id of this student: ");
        new->first_name = getChar("Enter his first name: ");
        new->last_name = getChar("Entre his last name: ");
        do
        {
            new->average = getFloat("Enter his average: ");
        } while (new->average < 0 || new->average > 20);
        new->next = NULL;
        tmp->next = new;
        tmp = tmp->next;
    }
    return (head);
}
