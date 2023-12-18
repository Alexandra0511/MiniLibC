// SPDX-License-Identifier: BSD-3-Clause

#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <internal/syscall.h>

int stat(const char *restrict path, struct stat *restrict buf)
{
	/* TODO: Implement stat(). */
	int f = syscall(__NR_stat, path, buf);
	if (f < 0) {
		errno = -f;
		return -1;
	}
	return f;
}
