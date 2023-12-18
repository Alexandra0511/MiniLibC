// SPDX-License-Identifier: BSD-3-Clause

#include <internal/mm/mem_list.h>
#include <internal/types.h>
#include <internal/essentials.h>
#include <sys/mman.h>
#include <string.h>
#include <stdlib.h>
#include <internal/syscall.h>

void *malloc(size_t size)
{
	mem_list_add(mem_list_head.start + mem_list_head.len, size);
	return mem_list_head.prev->start;
	//return NULL;
}

void *calloc(size_t nmemb, size_t size)
{
<<<<<<< Updated upstream:content/assignments/mini-libc/libc/mm/malloc.c
	/* TODO: Implement calloc(). */
	return NULL;
=======
	/* TODO: Implement malloc(). */
	char *p =(char*) malloc(nmemb*size);
	for (int i = 0; i < nmemb*size; i++) {
		p[i] = 0;
	}
	return p;
>>>>>>> Stashed changes:assignments/mini-libc/libc/mm/malloc.c
}

void free(void *ptr)
{
	/* TODO: Implement free(). */
	struct mem_list* p = mem_list_find(ptr);
	munmap(p->start, p->len);
	mem_list_del(ptr);
}

void *realloc(void *ptr, size_t size)
{
	/* TODO: Implement realloc(). */
    int size_ptr = sizeof(mem_list_find(ptr));
    if (size <= size_ptr){
        return ptr;
	}
    void* newptr = malloc(size);
	if(ptr == NULL) {
		return;
	}
    memcpy(newptr, ptr, size_ptr);
    free(ptr);
    return newptr;
}

void *reallocarray(void *ptr, size_t nmemb, size_t size)
{
	/* TODO: Implement reallocarray(). */
	return realloc(ptr, nmemb*size);
}
