#include <unistd.h>

int main(int argc, char *argv[])
{
	int cur_index;
	cur_index=0;
	while(*(argv[0] + cur_index))
	{
		write(1, argv[0]+cur_index, 1);
		cur_index++;:
	}
	return (0);
}
