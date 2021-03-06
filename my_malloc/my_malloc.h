#ifndef MY_MALLOC_H_
#define MY_MALLOC_H_
#include<errno.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#define ALLOCATED 1
#define FREE 0
#define HEAP_SIZE 100000

typedef struct {
  unsigned int length: 29;
  unsigned int NOT_USED: 2;
  unsigned int allocated: 1;
}headfoot;

int malloc_count;
int memory;
headfoot *placeholder;
headfoot *start;
headfoot *end;
headfoot *chead(headfoot *);
headfoot *cfoot(headfoot *);
headfoot *phead(headfoot *);
headfoot *pfoot(headfoot *);
headfoot *nhead(headfoot *);
headfoot *pfoot(headfoot *);
int eight(int);
void *my_malloc(size_t);
void my_free(void *);

#endif
