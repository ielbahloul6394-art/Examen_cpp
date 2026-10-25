#include <iostream>
#include <string>
using namespace std;

class CompteBancaire {
private:
    int numero;
    string titulaire;
    double solde;

public:
    CompteBancaire(int n, string t, double s) {
        numero = n;
        titulaire = t;
        solde = s;
    }

    void deposer(double montant) {
        if (montant > 0)
            solde += montant;
    }

    void retirer(double montant) {
        if (montant > 0 && montant <= solde)
            solde -= montant;
    }

    void afficher() {
        cout << "Numero : " << numero << endl;
        cout << "Titulaire : " << titulaire << endl;
        cout << "Solde : " << solde << endl;
    }
};

int main() {
    CompteBancaire c1(101, "Imane", 1000);
    CompteBancaire c2(102, "Sara", 500);

    c1.deposer(200);
    c2.retirer(100);

    c1.afficher();
    cout << "----------" << endl;
    c2.afficher();

    return 0;
}