#include<iostream>
#include<ctime>

using namespace std;
//Reto #3 “Mensaje multilínea”
class Course //Pendiente de impresion
{
	public:
		string getCategory(string typeCategory[], int n)
		{
			for(int i=0; i < n; i++)
			{
				cout<<typeCategory[i];
			}
			cout<<endl;
		}
	private:
		string typeCategory [6] = 
			{"Desarrollo e Ingenieria","UI & UX","Marketing","Negocios y Emprendimiento","Produccion AudioVisual","Crecimiento Profesional"};
	protected:
};
//Reto #1 “Hola Mundo” y Reto #2 “Hola… nombre y apellido:”
class helloName
{
	public:
		string NameAndLast(string pName, string pLastName)
		{
			name = pName;
			lastName = pLastName;			
		}
		string GetName()
		{
			return name;
		}
		string GetLastName()
		{
			return lastName;
		}
		void SetNames(string NewName, string NewLastName)
		{
			name = NewName;
		lastName = NewLastName;
		}
	private:
		string name, lastName;
};
//Reto #4 “Suma de enteros”
class OperacionSumX
{
	public:
		OperacionSumX(int nX, int nY, int nW )
		{
			x = nX;
			y = nY;
			w = nW;
		}
		int setX(int X){ x = X;}
		int setY(int Y) {y = Y;}
		int setW(int W){w = W;}
		
		void getResult()
		{
			cout<<"Result: "<<setValueOperation()<<endl;
		}
	private:
		int x, y, z, w;
		int setValueOperation()
		{
				z = x + y;
				z = z*w;
				return z;	
		}
	protected:
		
};
//Reto #5 “Suma y multiplicación”
class SumOperation : public OperacionSumX
{
	public:
		SumOperation (int nX, int nY, int nW ) :OperacionSumX(nX, nY, nW )
		{
			a = nX;
			b = nY;
		}
		float setA(float A){a = A;}
		float setB(float B){b = B;}
		void getSumResult()
		{
			cout<<"Result: "<<Sums()<<endl;
		}
	private:
		float a, b,c;
		float Sums()
		{
			a = a + b;
			return a;
		}
};
//Reto #6 “Resta de pizzas”
class PizzaSlice
{
	public:
		int slices, pizzaEated;
		PizzaSlice(int nSlices, int nPizzaEated)
		{
			slices = nSlices;
			pizzaEated = nPizzaEated;
		}
		int setPizzaSlices(int pSlices){ slices = pSlices;}
		int setPizzaEated(int eated){pizzaEated = eated;}
		void getPizzaTime()
		{
			cout<<"___________________________"<<endl;
			cout<<"Slices Buied: "<<slices<<endl;
			cout<<"Slices eatead: "<<pizzaEated<<endl;
			cout<<"leftover slices: "<<slices - pizzaEated<<endl;
		}
};

//Reto #7 “Edad futura y pasada”
class AgePerTime
{
	public:
		int age;
		AgePerTime(int Age)	{age = Age;}
		int setAge(int Age){age = Age;}
		void getFuturePastAge()
		{	
			cout<<"In Year:"<<(1900 + ltm->tm_year) + 1 << endl;
			cout<<"You will have: "<<age+1<<" years"<<endl;
			cout<<"In Year:"<<(1900 + ltm->tm_year) - 1 << endl;
			cout<<"You had "<<age -1<< " years"<<endl;
		}
	private:
		time_t now = time(0);
		tm *ltm = localtime(&now);
};

//Reto #8 “Divide la cuenta”
class DivideAccount
{
	public:
		int payment, people;
		int payOutTax;
		DivideAccount(int nPayment, int nPeople)
		{
			payment = nPayment;
			people = nPeople;
		}
		int setPayment(int nPayment){payment = nPayment;}
		int setPeople(int nPeople){people = nPeople;}
		
		void getTicketPayment()
		{
			payOutTax = payment / tax;
			cout<<"------ Your Receip ------"<<endl;
			cout<<"Total Payment: $ "<<payment<<endl;
			cout<<"Payment without Taxes: $ "<<payOutTax<<" Taxes: 16 % "<<endl;
			cout<<"Tip: [13%] $ "<<payment*tip<<endl;
			cout<<"Payment with tips: $ "<<payment+(payment*tip)<<endl;
			cout<<"Payment Divided: $ "<<(payment+(payment*tip))/people<<endl;	
		}
	
	private:
		float tax = 1.16;
		float tip = 0.13;
};

//Reto #9 “Calculando días”
class TimeConvert
{
	public:
		int Day;
		TimeConvert(int D){	Day= D;	}
		int setHour(int D)	{Day = D;}
		void getTime()
		{
			H = Day*hour;
			M = Day*min;
			S = Day*seg;
			cout<<"In "<<Day;
			cout<<" \n there are: "<<H<<" Hours | "<<M<<" Minutes | "<<S<<"  Seconds "<<endl;	
		}
	protected:
		int H,M,S;
	private:
		int hour = 24;
		int min = 1440;
		int seg = 86400;
};
//Reto #10 “Conversor de millas”
class KmToMilles
{
	public:
		KmToMilles(double Pmll)
		{
			mll = Pmll;
		}
		double setMilles(double milles){mll = milles;}
		void getConvertKm()
		{
			cout<<"This milles Equal to: "<<kmTOmilles()<<" KM"<<endl;
		}
	private:
		double mll;
		double km = 1.609344;
		double kmTOmilles()
		{
			mll = mll * km;
			return km;
		}
};

//Reto #11 “Cuantas veces un número en otro”
class NumberInOther
{
	public:
		double numTimes;
		int cent, mil;
		NumberInOther(double pNumTimes)
		{
			numTimes = pNumTimes;
		}
		int setCentNumber(int pCent){cent = pCent;}
		int setMilNumber(int pMil){mil = pMil;}
		void getNumberTimes()
		{
			cout<<"You can put the number: "<<cent<<" , ";
			cout<<numberTo()<<" times on "<<mil<<endl;
		}
	private:
		double numberTo()
		{
			if(cent < 100 && mil < 1000 )
				return 0;
			else
				numTimes = mil/cent;
				return numTimes;			
		}
};


int main()
{
	int opt;
	bool resp = false;
	string userName, userLastName;
	int pizzaCount = 0;
	
		helloName User1;
		OperacionSumX XYZ(1,1,1);
		SumOperation AB(1,1,1);
		KmToMilles KmTMl(1);
		TimeConvert Time(1);
		NumberInOther numberTimes(1);
		DivideAccount Receipt(1,1);
		AgePerTime AgeTime(1);
		PizzaSlice Pizzas(1,1);
	
	cout<<"Welcome to the 1st Level Challenge"<<endl<<"Choose you Challenge";
	for(int i=0; i < 11; i++ )
	{
		cout<<"Reto #"<<i+1<<endl;
	}
	cout<<endl<<"-> ";
	cin>>opt;
	switch(opt)
	{
		case 1:
				cout<<"Insert you Name & Last Name:  ";
				cin>>userName;
				User1.SetNames(userName,userLastName);
				cout<<"Welcome: "<<User1.GetName();
			break;
		case 2:
				cout<<"Insert you Name & Last Name:  ";
				cin>>userName>>userLastName;
				User1.SetNames(userName,userLastName);
				cout<<"Welcome: "<<User1.GetName()<<" "<<User1.GetLastName();
			break;
		case 3: //PENDING
			break;
		case 4:
			float a,b;
			cout<<"SUM opration insert two values"<<endl;
			cin>>a;
			AB.setA(a);
			cin>>b;
			AB.setB(b);
			AB.getSumResult();
			break;
		case 5:
			int n1,n2,n3;
			cout<<" Add and Multiplication \n Insert three values"<<endl;
			cin>>n1;
			XYZ.setX(n1);
			cin>>n2;
			XYZ.setY(n2);
			cin>>n3;
			XYZ.setW(n3);
			XYZ.getResult();
			break;
		case 6:
			int pizza;
			char rspt;
			cout<<"Insert The Slice of pizza that you bought"<<endl;
			cout<<"If you dont know multiply for 8 the amount of pizza buied"<<endl;
			cin>>pizza;
			Pizzas.setPizzaSlices(pizza);
				while(resp == false)
				{
					cout<<"Do you want a slice of Pizza? Y/N -> ";
					cin>>rspt;
					if(toupper(rspt) == 'Y' && pizzaCount < pizza)
					{
						pizzaCount++;	
					}
					else if(toupper(rspt)== 'N')
					{
						resp = true;
						Pizzas.setPizzaEated(pizzaCount);
						Pizzas.getPizzaTime();
					}
					else
					{
						cout<<"there is no more pizza :c"<<endl;
						resp = true;
						Pizzas.setPizzaEated(pizzaCount);
						Pizzas.getPizzaTime();
					}
				}	
			break;
		case 7:
			int Age;
			cout<<"Insert your Name please: ";
			cin>>userName;
			cout<<"Insert your Current Age please: ";
			cin>>Age;
			AgeTime.setAge(Age);
			cout<<"Congratulations!! "<<userName<<endl;
			AgeTime.getFuturePastAge();
			break;
		case 8:
			int pay, people;
			cout<<"What was the Total Payment? ";
			cin>>pay;
			Receipt.setPayment(pay);
			cout<<"How many people you want to divide the payment? ";
			cin>>people;
			Receipt.setPeople(people);
			Receipt.getTicketPayment();			
			break;
		case 9:
			int day;
			cout<<"Know Seconds | Minutes | Hours  on N Days"<<endl;
			cin>>day;
			Time.setHour(day);
			Time.getTime();
			break;
		case 10:
			double milles;
			cout<<"Here you know the Km that are on N number o Milles "<<"Insert a milles to know"<<endl;
			cin>>milles;
			KmTMl.setMilles(milles);
			KmTMl.getConvertKm();
			break;
		case 11:
			int cent, mil;
			cout<<"Insert a number bigger than 1000 and  after a  Number bigger than 100 "<<endl;
			cin>>mil;
			numberTimes.setMilNumber(mil);
			cin>>cent;
			numberTimes.setCentNumber(cent);
			numberTimes.getNumberTimes();
			break;
		default:
			cout<<"Invalid Input, Try Again";
			system("cls");
		break;
	}
	//system("cls");

	return 0;
}
