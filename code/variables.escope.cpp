//...
int A; //Somente A pode ser acessado aqui
{
	int B; //Aqui A sera global e B local, C e D sao inexistentes
	{
		int C; //Aqui A e B sao globais e C local, D nao existe
	}
	//...
	{
		int D; //Aqui A e B sao globais e D local, C nao existe
	}
}
//...