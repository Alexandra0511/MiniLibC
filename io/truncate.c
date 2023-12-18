// SPDX-License-Identifier: BSD-3-Clause

#include <unistd.h>
#include <internal/syscall.h>
#include <errno.h>

int truncate(const char *path, off_t length)
{
<<<<<<< Updated upstream:content/assignments/mini-libc/libc/io/truncate.c
	/* TODO: Implement truncate(). */
	return -1;
=======
	/* TODO: Implement lseek(). */
	int f = syscall(__NR_truncate, path, length);
	if (f < 0) {
		errno = -f;
		return -1;
	}	
	return f;
>>>>>>> Stashed changes:assignments/mini-libc/libc/io/truncate.c
}
