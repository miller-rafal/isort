#ifndef ISORT_H
#define ISORT_H

#include <stdlib.h>
#include <string.h>

void isort(void *data_start, size_t number_of_elements, size_t element_size, int (*compare)(const void *left, const void *right));

static void swap(void *, void *, size_t);

void isort(void *data_start, size_t number_of_elements, size_t element_size, int (*compare)(const void *left, const void *right))
{
    void *prev, *curr;

    for(unsigned long i = 1; i < number_of_elements; i++)
    {
        for(unsigned long j = i; j > 0; j--)
        {
            prev = data_start + ((j - 1) * element_size);
            curr = data_start + (j * element_size);

            if(compare(prev, curr) > 0)
                break;
                
            swap(prev, curr, element_size);
        }
    }
}

static void swap(void *l, void *r, size_t s)
{
    void *buff = malloc(s);
    memcpy(buff, r, s);
    memcpy(r, l, s);
    memcpy(l, buff, s);
    free(buff);
}

#endif