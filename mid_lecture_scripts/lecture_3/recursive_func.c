#include <stdio.h>

void
myfn(int depth)
{
	printf("%d\n", depth);
	if (depth != 0)
		myfn(depth - 1);

}

int
main(void)
{
	myfn(9y);
}
