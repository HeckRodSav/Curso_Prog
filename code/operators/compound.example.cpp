//...
int A(0), B(10);	//A vale 0,		B vale 10
A += 1;						//A vale 1,		B vale 10
B /= 2;						//A vale 1,		B vale 5
A *= 100;					//A vale 100,	B vale 5
B <<= 3;					//A vale 100,	B vale 40
B &= A;						//A vale 100,	B vale 32
A %= B;						//A vale 4,		B vale 32
//...