//...
int a, b, X, Y;
a=45; b=93;
//...
X = a>b?a:b;	//#1
Y = a<b?a:b;
a = X-Y;
b = Y;

X = a>b?a:b;	//#2
Y = a<b?a:b;
a = X-Y;
b = Y;

//Repete-se 18 vezes!

X = a>b?a:b;	//#17
Y = a<b?a:b;
a = X-Y;
b = Y;

X = a>b?a:b;	//#18
Y = a<b?a:b;
a = X-Y; 			//a vale 3, o resultado
b = Y;				//b vale 0
//...