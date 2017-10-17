//...
int A(100), B(5);
//...
while (A>-50)
{
	if(B==0)
	{
		B -=1;
		continue;
	}
	A/=B;						//Note como a necessidade do else é suprida
	if(A==B) break;
	A+=B-=5;
}
//...