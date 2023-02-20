#ifndef CONST_H
#define CONST_H

#define PAGE_SIZE (0x1000)

enum {
	STDIN = 0,
	STDOUT = 1,
	STDERR = 2,
};

#define MAX_SYSCALL_NUM 500

#endif // CONST_H