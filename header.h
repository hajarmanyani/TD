#pragma once

class Compte {c
	//attribus
private:
	int numcompte;
	char* nomprop;
	double solde;

	//methodes
public:
	bool retirerargent(double somme);
	double deposerargent(double a);
	void consultersolde();
	void transfererargent(Compte account, double x);

	//definition constructeurs
	Compte();
	Compte(int x, char* num, double y);
};
