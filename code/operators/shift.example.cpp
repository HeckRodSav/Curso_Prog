//...
unsigned char A(0b01100000);
unsigned char B(A>>3);	//B vale 0b00001100
unsigned char C(B*8);		//C vale 0b01100000

int D(30);							//D vale 30
int E(D>>1);						//E vale 30/(2), ou seja 15
int F(D<<2);						//F vale 30*(4), ou seja, 120
//...