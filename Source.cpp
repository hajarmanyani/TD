#include <iostream>
#include "Header.h"
#include <cstring>
using namespace std;

//construction sans parametres 
Compte::Compte(){
	this->numcompte = 0;
	strcpy(this->nomprop, "user");
	this->solde = 0;
}

// constructeur avec parametres 
Compte::Compte(int x, char* num, double y) {
	this->numcompte = x;
	strcpy(this->nomprop,num);
	this->solde = y;
}
//La fonction retirerargent
bool Compte::retirerargent(double somme) {
	if (this->solde > somme) {
		return 1;
	}
	else {
		return 0;
	}
}
//la fonction deposerargent
double Compte::deposerargent(double a) {
	double so = this->solde + a;
	return so;
}
//la fonction consultersolde
void Compte :: consultersolde() {
	double sol = this->solde;
	cout << "Votre solde est : /n";
	cout << sol << endl;
}
//la fnction transfererargent
void Compte :: transfererargent(Compte account, double x) {
	double transfert = account.deposerargent(x);
}

