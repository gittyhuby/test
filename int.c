#include <pico/stdlib.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{	stdio_init_all();
	while(1)
	{	sleep_ms(2000);
		printf("\nbool\t\t%u\n", sizeof(bool));
		printf("char\t\t%u\n", sizeof(char));
		printf("char*\t\t%u\n", sizeof(char*));
		printf("uint\t\t%u\n", sizeof(uint));
		printf("uint8_t\t\t%u\n", sizeof(uint8_t));
		printf("uint16_t\t%u\n", sizeof(uint16_t));
		printf("uint32_t\t%u\n", sizeof(uint32_t));
		printf("uint64_t\t%u\n", sizeof(uint64_t));
		printf("size_t\t\t%u\n", sizeof(size_t));
		printf("float\t\t%u\n", sizeof(float));
		printf("double\t\t%u\n", sizeof(double));
		printf("long\t\t%lu\n", sizeof(long));
		printf("long long\t%lu\n", sizeof(long long));

	}
}
