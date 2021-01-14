#include "zad1.hpp"

#include <vector>

// tutaj funkcja obliczMake

double obliczMake(std::vector<Tagliatelle> in)
{
	double M = 0;
	int i = 1;
	for (auto it = in.rbegin(); it != in.rend(); ++it)
	{
		M += it->ileMaki(1) * i;
		++i;
	}
	try
	{
		if (M > 100) throw(int a=1);
		else if (100 >= M > 50) throw (double b=1.1);
		else if(50>=M) return M
	}
	catch (a = 1)
	{

	}
	catch (b = 1.1)
	{

	}
}
