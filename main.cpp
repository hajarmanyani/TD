#include <iostream>
#include "Header.h"
#include "Source.cpp"
#include <cstring>

int main()
{
    int nump;  char* nomp;  double sold;
    cout << "Bonjour/n";
    Compte cp(1,"hajar", 3000);
    bool x = cp.retirerargent(20);
    cout << "reponse:\n";
    cout << x << endl;
    double rep = cp.deposerargent(50);
    cout << "Maintenant votre solde est : " << rep << endl;
    cp.consultersolde();
    cout << "Donner le numero de compte /n";
    cin >> nump;
    cout << "Donner le nom de proprietaire de compte /n";
    cin >> nomp;
    cout << "Donner le solde de compte /n";
    Compte account(nump, nomp, sold);
    cp.transfererargent(account,50);
    return 0;
}
