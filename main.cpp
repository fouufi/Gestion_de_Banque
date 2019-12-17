#include <cstdlib>

#include "account.h"

int main(int argc, char** argv)
{
	compte c = compte();
	
	c.deposer();
	c.retirer();
	c.Adecouvert();

	system("pause");
	return EXIT_SUCCESS;

}