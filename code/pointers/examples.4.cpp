struct meuTipo
{
	int valor1, valor2;
};
//...
int somarMt(meuTipo *S)
{
	return S->valor1 + S->valor2;
}
//...
int main()
{
	meuTipo mem;
	int soma;
	mem.valor1 = 10;
	mem.valor2 = 20;
	//...								//Atribui valor ao vetor
	soma = somarMt(&mem);
	//...
	return 0;
}