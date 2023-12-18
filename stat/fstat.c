// SPDX-License-Identifier: BSD-3-Clause

#include <sys/stat.h>
#include <errno.h>
#include <internal/syscall.h>


int fstat(int fd, struct stat *st)
{
<<<<<<< Updated upstream:content/assignments/mini-libc/libc/stat/fstat.c
	/* TODO: Implement fstat(). */
	return -1;
=======
	/* TODO: Implement lseek(). */
	int f = syscall(__NR_fstat, fd, st);
	if (f < 0) {
		errno = -f;
		return -1;
	}	
	return f;
>>>>>>> Stashed changes:assignments/mini-libc/libc/stat/fstat.c
}
