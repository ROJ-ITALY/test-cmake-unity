#include <stdio.h>
#include <module_a.h>

int main(int argc, char *argv[])
{
	float a = 4, b = 5, c = 6;
	switch (argc)
	{
		case 4:
			c = atof(argv[3]);
			// no break
		case 3:
			b = atof(argv[2]);
			// no break
		case 2:
			a = atof(argv[1]);
			// no break
		case 1:
			printf("Average of %f, %f, and %f: %d\r\n", a, b, c, AverageThreeBytes(a, b, c));
			break;
		default:
			printf("%s requires max 3 parameters!\r\n", argv[0]);	
			return -1;
	}

    return 0;
}
