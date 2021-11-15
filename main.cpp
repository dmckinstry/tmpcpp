#include <unistd.h>
#include <iostream>

#include "string.h"

using namespace std;

int main(int argc, char** argv) {

	char buffer[256];
	strcpy( argv[0], buffer );

	int pid = fork();
	if (pid==0) {
		execl(buffer, "ls", "-r", "-t", "-l", (char *) 0);
	}
}
