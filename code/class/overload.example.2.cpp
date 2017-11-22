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
	inteiro operator+(inteiro I)
	{
		return inteiro(getValor()+I.getValor());
	}
};

int main()
{
	inteiro A(5);
	inteiro B(10);
	inteiro C(A + B);
	inteiro D = B + C;
	B = A + C + D;
	return 0;
}