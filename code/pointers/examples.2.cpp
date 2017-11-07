//...
void MDC(int *primeiro, int *segundo)	//Parâmetros são ponteiros
	while(*segundo!=0)
	{
		int resto(*primeiro%*segundo);
		*primeiro=*segundo;								//A memória é alterada
		*segundo=resto;
	}
}
//...
int main()
{
	int alpha(234), beta(5493);
	MDC(&alpha, &beta);					//O endereço é o argumento
	int C(alpha);								//C vale 3
	return 0;
}