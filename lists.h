#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>
#include "../LL_Exercise/main.h"

/**
 * student - struct contains student detalis
 * @id: an integer
 * @first_name: a pointer to string
 * @last_name: a pointer to string
 * @average: a float
 * @next: pointer to the next node
 */

typedef struct student student;
struct student
{
    int id;
    char *first_name;
    char *last_name;
    float average;
    struct student *next;
};
student *createList(unsigned int);
float calcAverage(student *, unsigned int);
void splitList(student *);
void insert_student(student *, int, char *, char *, float);
void print_lits();
#endif