// SPDX-License-Identifier: BSD-3-Clause

#include <fcntl.h>
#include <internal/syscall.h>
#include <stdarg.h>
#include <errno.h>

int open(const char *filename, int flags, ...)
{
	/* TODO: Implement open system call. */
	int f = syscall(__NR_open, filename, flags);
	if (f < 0) {
		errno = -f;
		return -1;
	}	
	return f;
}
