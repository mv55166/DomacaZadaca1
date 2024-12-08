#include <modules.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("Unesite argument, molim!\n");
		return -1;
	}
	print_int(square(atoi(argv[1])));
}
