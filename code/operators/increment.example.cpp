//...
int A(5);		//A vale 5
int B(A++); //A vale 6, B vale 5
int C(++B); //A vale 6, B vale 6, C vale 6
C++;				//Também pode ser usado independente do valor de retorno

int D(5);		//D vale 5
int E(--D);	//D vale 4, E vale 4
int F(E--);	//D vale 4, E vale 3, F vale 4
//...

