#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void PrintStars()
{

	for (int i = 0; i < 30; i++)
		printf("*");
}




/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int max(int x, int y)
{
	if (x > y)
	return x;

	else
		return y;

}


////////////////////////////////////////////////////////////////////////////////////////

int xyzsum(int aa, int bb, int cc)
{
	int abcsum = aa + bb + cc;

	return abcsum;
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
// ////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
	int value;




    PrintStars();
	printf("\nThe goofy ahh programming experience limited edition^TM starts here\n");
	PrintStars();




	value = max(10, 20);
	printf("\n\n\n10 vs 20 be %d\n", value);

	PrintStars();

	int aa, bb, cc, aabbcc;
	

	printf("insert something(3 integer)you mf\n");
	scanf("%d %d %d", &aa, &bb, &cc);
	aabbcc = xyzsum(aa, bb, cc);
	printf("it be %d\n", aabbcc);

	PrintStars();



	return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////