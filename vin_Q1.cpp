#include<iostream>
using namespace std;

class Math
{
	protected:
		int a , b ;
		const float pi = 3.1416 ;
	public:
		void set()
		{
			cout << endl << "Enter First Value :- " ;
			cin >> a ;
			cout << "Enter Second Value :- " ;
			cin >> b ;
		}
		void virtual calculate()
		{
				cout << endl << "Area of circle :- " << (pi*(a*a)) << endl ;
				cout << "Area of triangle :- " << (a*b)/2 << endl ;
				cout << "Area of rectangle :- " << (a*b) << endl ;
		}
};

int main()
{
	Math obj;
	
	obj.set();
	obj.calculate();
	
	return 0;
}
