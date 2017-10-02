//...
int A(45 + 5);	//A vale 50
int B(A - 15);	//B vale 35
int C(B - A);		//C vale  - 15

int D(A + B - C);	//D vale o mesmo que 50 + 35 - ( - 15), ou seja 100

int E(13),	F(5);						//E vale 13, F vale 5
int G(E % F),	H(E / F); 		//G vale 3, H vale 2
int I(F * H);								//I vale 10
int J(I + G);								//J vale 13

float K(13.0f), L(5.0f);
float M(K / L);							//K vale 2.6
float N(L * M);							//N vale 13
//...