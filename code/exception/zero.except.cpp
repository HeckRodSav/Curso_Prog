#include <stdexcept>
//...
class divZero: public runtime_error
{
public:
	divZero(): runtime_error("Dividiu por zero")
	{}
}
//...
double divide(double A, double B)
{
	if(B==0)
	{
		throw divZero();
	}
	return A/B;
}
//...
try
{
	double K = divide(2,0);
	double W = divide(1,K);
}
catch(divZero e)
{
	//Exibe e.what(), saída: "Erro: Dividiu por zero"
}
//...