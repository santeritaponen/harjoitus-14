/*Harjoitus14
Tee ohjelma, joka kysyy henkilötietosi seuraavasti:
Anna (kaikki) etunimesi (merkkijono):
Anna kengannumero (kokonaisluku):
Anna sukunimi (merkkijono):
Anna koulumatka (reaaliluku):
Anna osoitteesi:
Anna postinumero:

Ohjelma tulostaa tiedot seuraavasti:
sukunimi etunimet
osoite
postinumero
kengannumero ja koulumatka

Käytä C++:n cin- ja cout-olioita ohjelman toteuttamiseen.
5.11.2014
v1.0
Santeri Taponen*/
#include <iostream>
using namespace std;
void main()
{
	char etunimi[30], sukunimi[20];
	int kengannumero, postinumero;
	float koulumatka;
	char osoite[30];
	cout << "Anna kaikki etunimesi: ";
	cin.get(etunimi,30);
	cin.get();
	cout << "Anna sukunimesi: ";
	cin.get(sukunimi,20);
	cin.get();
	cout << "Anna kengannumero: ";
	cin >> kengannumero;
	cout << "Anna koulumatkasi kilometreina: ";
	cin >> koulumatka;
	cin.get();
	cout << "Anna osoitteesi: ";
	cin.get(osoite,30);
	cin.get();
	cout << "Anna postinumero: ";
	cin >> postinumero;
	cout << sukunimi << " " << etunimi << endl << osoite << endl << postinumero << endl << kengannumero << " " << koulumatka << "km" << endl;

}