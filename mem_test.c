#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"

int main(int argc, char const *argv[])
{
	printf(1, "--------------------mem type test start!-----------------------------\n" );

	int i;
	char * p;

	p = (char *)0xa0000;

	for(i = 0; i <= 1000; i++){
		*(p + i) = i&0x0f;
	}
	for(i = 0; i <= 1000; i++){
		*(p + i + 1000) = (*(p + i))&0x0f;
	}
	for(i = 0; i <= 2000; i++){
		*(p + i) = i&0x0f;
	}
	printf(1, "--------------------mem type test end!-----------------------------\n" );
	exit();
}
