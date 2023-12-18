// SPDX-License-Identifier: BSD-3-Clause

#include <unistd.h>
#include <internal/syscall.h>
#include <stdarg.h>
#include <errno.h>

int close(int fd)
{
<<<<<<< Updated upstream:content/assignments/mini-libc/libc/io/close.c
	/* TODO: Implement close(). */
	return -1;
=======
	/* TODO: Implement lseek(). */
	int f = syscall(__NR_close, fd);
	if (f < 0) {
		errno = -f;
		return -1;
	}	
	return f;
>>>>>>> Stashed changes:assignments/mini-libc/libc/io/close.c
}
