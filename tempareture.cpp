/* Temperature Converter 
	Author : Shubham Chauhan
	Date : 16 July 2017
	Time : Night
*/

#include <iostream.h>
#include <conio.h>
using namespace std;

class temp
{
	float ctemp, ftemp, ktemp;
	public :
		void celcius(void);
		void fahrenheit(void);
		void kelvin(void);
};
inline void temp::celcius(void)
{
	system("color 5A");
	std::cout << ":: Enter temperature in fahrenheit : ";
    cin >> ftemp;
    ctemp = (ftemp - 32)/ 1.8;
    system("color 4A");
    std::cout << "\n** Temperature in Celcius is = " << ctemp << endl ;
}
inline void temp:: fahrenheit(void)
{
	system("color 5A");
	std::cout << "\n\n:: Enter temperature in Celcius : ";
    cin >> ctemp;
    ftemp = (ctemp * 1.8) + 32 ;

    cout << "\n** Temperature in fahrenheit is = " <<  ftemp << endl ;
}
inline void temp:: kelvin(void)
{
	cout << "\n\n:: Enter temperature in Celcius : ";
    cin >> ctemp;
    ktemp = ctemp + 273;

    cout << "\n** Temperature in Kelvin is = " <<  ktemp << endl ;	
    cout << "\n\nNOTE : - To find temperature in Celcius from Kelvin you can sustract 273 from the given Temperature (in Kelvin only) .";
}

int main()
{
	cout << "\n\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	cout << "\n\t\t      TEMPERATURE CONVERTER";
	cout << "\n\t\t-----------------------------------";
    temp t;
    char c;
    do
    {
	    int n;
	    cout << "\n\n1. Fahrenheit to Celcius ." << endl
	    	 << "2. Celcius to Fahrenheit." << endl
	    	 << "3. Celcius to Kelvin. ";
	    	 system("color 1A");
		std::cout << "\n\n\tChoose an Option :  " ;
	    cin >> n;
	 	   switch(n)
	    {
	    	case 1:
				t.celcius();
				break;
			case 2:
				t.fahrenheit();
				break;
			case 3:
				t.kelvin();
				break;
			default : 
			cout << "Please choose correct option : ";
	    }
	    cout << "\n\n\tYou want to continue (y/n) : ";
    	cin >> c;

    }while(c=='y');
    	system("Color 5A");
    	std::cout << "\nThanks for Using." << endl
    		 << "\n\t\tMade with Love by Shubham" << endl
    		 << "\nPress Any Key For Exit...";
    getch();
    return 0;
}
