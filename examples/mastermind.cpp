#include <iostream>
#include <ctime>
using namespace std;
//Mettere mettere 4 numeri casuali compresi tra 1 e 9 in un vettore di 4 elementi,


int randomNumber[4], numeriUtente[4];
int a, e, tentativi;
char scelta;
bool uguali;

int main(int argc, char** argv) {

	srand(time(NULL));

	for(int i = 0; i<4; i++)
	{
		randomNumber[i]=rand()%9+1; //Assegna un valore randomNumber alla posizione i

		do
		{
			uguali=false;
			for(int j=i-1; j>=0; j--)
			{
				
				while(randomNumber[i]==randomNumber[j])
				{
					randomNumber[i]=rand()%9+1;
					uguali=true;
				}
				
				
			}
	    }while(uguali==true);
	    
	}

	

	do
	{
		tentativi++;
		cout<<"Inserisci 4 numeri compresi tra 1 e 9: "<<endl;

	

		for(int i=0;i<4;i++)
		{		
			cin>>numeriUtente[i];
		}

		e=0;
		a=0;
		
		for(int i=0;i<4;i++)
		{
			for(int j=0;j<4;j++)
			{
				if(randomNumber[i]==numeriUtente[j])
				{
					if(i==j)
					{
						e++;	
					}
					else
					{
						a++;
					}					
				}
			}
		}

	cout<<"e="<<e<<" a="<<a<<endl;
	
	}while(e<4);


	cout<<"Hai impiegato "<<tentativi<<" tentativi!";


	return 0;
}
