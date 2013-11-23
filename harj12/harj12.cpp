/*********************************************************************
* Harjoitus 12 (Palautus vko 44)
*
* Tee ohjelma, joka kysyy käyttäjältä kokonaisluvun väliltä 1-9 ja
* tulostaa vastauksen perusteella seuraavan kuvion (jos vastaus on 6):
*
* 1
* 22
* 333
* 4444
* 55555
* 666666
**********************************************************************/

#include <iostream>
using namespace std;


int main()
{
	int rivinumero;
	cout<<"Anna kokonaisluku väliltä 1-9: ";
	cin>>rivinumero;
	
	for (int x = 1; x<=rivinumero; x++)
	{
	for (int y = 1; y<=x; y++)
	{ 
		cout<<x;
	}
	cout<<endl;
	}
}