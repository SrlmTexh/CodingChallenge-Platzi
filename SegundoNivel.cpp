#include<iostream>
using namespace std;

class Reto1
{
	public:
		float Reto1NumberOne, Reto1NumberTwo;
		float setRt1NumberOne(int sReto1NumberOne){Reto1NumberOne = sReto1NumberOne;}
		float setRt1NumberTwo(int sReto1NumberTwo){Reto1NumberTwo = sReto1NumberTwo;}
		void getResultrt1()
		{
			return BiggerLess();
		}
	private:
		void BiggerLess()
		{
			if(Reto1NumberOne > Reto1NumberTwo)
			{
				cout<<Reto1NumberOne<<" is the bigger one, with: "<<(Reto1NumberOne - Reto1NumberTwo)<<" of difference \n";
			}
			else if(Reto1NumberOne = Reto1NumberTwo)
			{
				cout<<"Both are equal, there are no difference \n";
			}
			else
			{
				cout<<Reto1NumberTwo<<" is the bigger one, with: "<<(Reto1NumberTwo - Reto1NumberOne)<<" of difference \n";	
			}		
		}	
};
class Reto2 : public Reto1
{
	public:
	//	float setRt1NumberOne(float sReto1NumberOne){Reto1NumberOne = sReto1NumberOne;}
	//	float setRt1NumberTwo(float sReto1NumberTwo){Reto1NumberTwo = sReto1NumberTwo;}
		void getResultrt2()
		{
			return inRangePlease();
		}
	private:	
		void inRangePlease()
		{
			if(Reto1NumberTwo < Reto1NumberOne )
				cout<<"The Number: "<<Reto1NumberTwo<<" is on Range, Thanks UwU \n";
			else
				cout<<"The Number: "<< Reto1NumberTwo <<" exceeds the range authorized! \n";
		}
};

void Menu()
{
	cout<<"Reto #1 - Numero mayor y menor "<<endl;
	cout<<"Reto #2 - En el rango, por favor."<<endl;
	cout<<"Reto #3 - Rangos cambiantes."<<endl;
	cout<<"Reto #4 - I like turtles "<<endl;
	cout<<"Reto #5 - ¿Como esta el clima?"<<endl;
	cout<<"Reto #6 - Edad permitida"<<endl;
	cout<<"Reto #7 - Mensajes opcionales"<<endl;
	cout<<"\n ****************************************\n "<<endl;
};
int optChallenge_Processor(int opt)
{
	Reto1 optRtOne;
	Reto2 optRtTwo;
	switch(opt)
	{
		case 1:
			float rt1NumberOne,rt1NumberTwo;
			cout<<"Insert two Numbers: "<<endl;
			cin>>rt1NumberOne;
			optRtOne.setRt1NumberOne(rt1NumberOne);
			cin>>rt1NumberTwo;
			optRtOne.setRt1NumberTwo(rt1NumberTwo);
			optRtOne.getResultrt1();
			break;
		case 2:
			float  rt2NumberOne, rt2NumberTwo;
			cout<<"Insert two Numbers: "<<endl;
			cin>>rt2NumberOne;
			optRtTwo.setRt1NumberOne(rt2NumberOne);
			cin>>rt2NumberTwo;
			optRtTwo.setRt1NumberTwo(rt2NumberTwo);
			optRtTwo.getResultrt2();
			
			break;
	/*	case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;*/
		default:
			cout<<"Invalide Option, Try other...";
			break;
	}
}

int main()
{
	int opt;
	Menu();
	cout<<"Choose an Option: ";
	cin>>opt;
	optChallenge_Processor(opt);
	return 0;
}
