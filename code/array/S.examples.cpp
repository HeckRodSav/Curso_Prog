//...
char A[]("string");
char B[]{'s','t','r','i','n','g','\0'}; //Equivale a A
char C[]{'s','t','r','i','n','g'}; 			//Não equivale a A
char D[]{'H','e','l','l','o','\0',' ','W','o','r','l','d','!'};
//Espaço em branco não é nulo
//...
int size(0);
for(int i=0; A[i]!='\0'; i++) size++;		//Contagem tamanho da string
size = 0;
for(int i=0; D[i]!='\0'; i++) size++;		//Note que a contagem falha
//...