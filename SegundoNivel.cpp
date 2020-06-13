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
class Reto3 : public Reto1
{
	public:
		float Reto1NumberThree;
		float setRt1NumberThree(int sReto1NumberThree){Reto1NumberThree = sReto1NumberThree;}
		void getResultrt3()
		{
			return inRangeBL();
		}
	private:
		void inRangeBL()
		{
			if (Reto1NumberTwo < Reto1NumberOne && Reto1NumberTwo > Reto1NumberThree)
				cout<<"The Number is on the Range, Thanks, Good Job UwU \n";
			else if(Reto1NumberTwo > Reto1NumberOne || Reto1NumberTwo < Reto1NumberThree)
				cout<<"The Number is out of the Range, check your Numbers please. \n";
			else
				cout<<"All the numbers are equal... \n Interesting ... \n";
		}		
};
class Reto4
{
	public:
		string setAnimal(string animalName){ Animal = animalName;}
		void getAnimalPreference()
		{
			return turtles();
		}
	private:
		string Animal;
		//transform(Animal.begin(), Animal.end(), Animal.begin(), toupper);
		void turtles()
		{
			if (Animal == "TURTLE")
				cout<<"I like Turtles too!! \n";
			else
				cout<<"Thats a Interesting Animal, but I prefer Turtles UwU \n";	
		}

};
class Reto5
{
	public:
		char setWeather(char sWeather){Weather = sWeather;}
		void getWeatherOptions()
		{
			return weatherOptions();
		}
	private:
		char Weather,Wind;
		void weatherOptions()
		{
			if(toupper(Weather) == 'Y')
			{
				cout<<"there is strong wind? ";
				cin>>Wind;
				if(toupper(Wind) == 'Y')
					cout<<"Too much wind to go out with Umbrella \n";
				else
					cout<<"Take an umbrella before go out  ^w^ \n";
			}				
			else
				cout<<"Ok, Have a Nice day UWU \n";	
		}		
};
class Reto6
{
	public:
		int setYears(int sAge){ years = sAge;}
		void getLearnAnswear()
		{
			return allwaysLearn();
		}
	private:
		int years;
		void allwaysLearn()
		{
			if( years >= 30)
				cout<<"Is not too late to learn, What course we will take? \n";
			else if(years >=18 && years <=29)
				cout<<"Is good Time to improve your career \n";
			else
				cout<<"Do you know where to steer your future?, Im sure I can help you.. ^w^ \n";	
		}	
};
class Reto7
{
	public:
		int setOpt(int sOpt){Opt = sOpt;}
		void getPaths()
		{
			return truePath();
		}
	private:
		int Opt;
		void learningPaths()
		{
			switch(Opt)
			{
				case 1: cout<<"Today we will learn about programming \n";
					break;
				case 2: cout<<"What about we take a Digital Marketing course? \n";
					break;
				case 3: cout<<"Today is a Big Day to start learning Desing \n";
					break;
				case 4: cout<<"What About learn Online Bussines \n";
					break;
				case 5: cout<<"lets see a pair of videos about Audiovisual Production \n";
					break;
				case 6: cout<<"Maybe we need to  train own SoftSkills \n";
					break;	
			}	
		}
	protected:
		bool optRight = true;
		void truePath()
		{
			while( optRight == true)
			{
				if(Opt < 1 || Opt > 6)
				{
					cout<<"Choose other option,please: ";
					cin>>Opt;
				}	
				else
				{
					optRight = false;
					return learningPaths();	
				}
			}
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
	cout<<"\n ****************************************\n"<<endl;
};
int optChallenge_Processor(int opt)
{
	Reto1 optRtOne;
	Reto2 optRtTwo;
	Reto3 optRtThree;
	Reto4 optRtFour;
	Reto5 optRtFive;
	Reto6 optRtSix;
	Reto7 optRtSeven;
	cout<<"\n ****************************************\n"<<endl;
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
			cout<<"Insert a limite Number: ";
			cin>>rt2NumberOne;
			optRtTwo.setRt1NumberOne(rt2NumberOne);
			cout<<"Insert a Number: ";
			cin>>rt2NumberTwo;
			optRtTwo.setRt1NumberTwo(rt2NumberTwo);
			optRtTwo.getResultrt2();
			
			break;
		case 3:
			float  rt3NumberOne, rt3NumberTwo,rt3NumberThree;
			cout<<"Insert a MaxNumber Range: ";
			cin>>rt3NumberOne;
			optRtThree.setRt1NumberOne(rt3NumberOne);
			cout<<"Insert any Number: ";
			cin>>rt3NumberTwo;
			optRtThree.setRt1NumberTwo(rt3NumberTwo);
			cout<<"Insert a MinNumber Range: ";
			cin>>rt3NumberThree;
			optRtThree.setRt1NumberThree(rt3NumberThree);
			optRtThree.getResultrt3();
			break;
		case 4:
			/*string animal;
			cout<<"Insert your Favorite Animal: ";
			cin>>animal;
			optRtFour.setAnimal(animal);
			optRtFour.getAnimalPreference();*/
			break;
		case 5:
			char clResp;
			cout<<"Its ranning? : ";
			cin>>clResp;
			optRtFive.setWeather(clResp);
			optRtFive.getWeatherOptions();
			break;
		case 6:
			int ageCst;
			cout<<"Insert your Age please: ";
			cin>>ageCst;
			optRtSix.setYears(ageCst);
			optRtSix.getLearnAnswear();
			break;
		case 7:
			int pathOpt;
			cout<<"Insert a Number Between 1 to 6, please: ";
			cin>>pathOpt;
			optRtSeven.setOpt(pathOpt);
			optRtSeven.getPaths();
			break;
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
