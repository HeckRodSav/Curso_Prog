class inteiro
{
private:
	int valor;
public:
	inteiro(int n)
	{
		valor = n;
	}
	int getValor()
	{
		return valor;
	}
	int operator+(inteiro I)
	{
		return getValor()+I.getValor();
	}
};

int main()
{
	inteiro A(5);
	inteiro B(10);
	inteiro C(A + B);
	int D;
	D = A.operator+(C);
	return 0;
}