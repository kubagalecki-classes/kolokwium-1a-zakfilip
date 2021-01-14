#include "zad1.hpp"

#include <memory>
#include <string>
#include <type_traits>

// tutaj klasa Penne

class Penne : public Makaron
{
public:
	double ileMaki(unsigned P) const override
	{
		double wartosc = 5;
		return wartosc;
	}
private:
};

// tutaj definicja metody gotujMakaron

Makaron::gotujMakaron(const std::string& in)
{
	if (in.front() == in.back())
	{
		return new Tagliatelle(3.14, 0.42, 0.1);
	}
	else
	{
		return new Penne;
	}
}
