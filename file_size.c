#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

struct stat s;

int main(int argc, char **argv) {
	char *buffer;
	FILE *handle;
	int size, fd;

	assert(argv[1] != '\0');
		buffer = argv[1];
		
		handle = fopen(buffer, "r");
		
		//fseek(handle, 0L, SEEK_END);
		//sz = ftell(handle);
		fd = fileno(handle);
		fstat(fd, &s);
		size = s.st_size;
		printf("%d\n", size);
		

	return 0;
}

