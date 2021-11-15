#include "string.h"

using namespace std;

int main(int argc, char** argv) {

	char buffer[256];
	strcpy( argv[0], buffer );

	return 0;
}
