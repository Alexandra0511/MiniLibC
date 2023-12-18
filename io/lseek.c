// SPDX-License-Identifier: BSD-3-Clause

#include <unistd.h>
#include <internal/syscall.h>
#include <errno.h>

off_t lseek(int fd, off_t offset, int whence)
{
	/* TODO: Implement lseek(). */
	off_t f = syscall(__NR_lseek, fd, offset, whence);
	if(f < 0) {
		errno = -f;
		return -1;
	}
	return f;
}
