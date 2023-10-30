#include "lists.h"

/**
 * splitList - split a list into two sublists:
 * first for succeed students and other for failed students
 * @h: pointer to student list
 */

void splitList(student *head)
{
    student
        *S,
        *F,
        *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->average < 10)
            insert_student(F, tmp->id, tmp->first_name, tmp->last_name, tmp->average);
        else
            insert_student(S, tmp->id, tmp->first_name, tmp->last_name, tmp->average);
        tmp = tmp->next;
    }
    print_list(S);
    print_list(F);
}