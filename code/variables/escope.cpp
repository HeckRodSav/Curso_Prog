//...
int A;			//Somente A pode ser acessado aqui
{
	int B; 		//Aqui A será global e B local, C e D são inexistentes
	{
		int C;	//Aqui A e B são globais, C local e D inexistente
	}
	{
		int D;	//Aqui A e B são globais, D local e C inexistente
	}
}
//...