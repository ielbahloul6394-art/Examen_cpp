#include <iostream>
#include <string>
using namespace std;

class Vehicule {
protected:
    string immatriculation;
    string marque;
    double vitesseMax;

public:
    Vehicule(string i, string m, double v)
        : immatriculation(i), marque(m), vitesseMax(v) {}

    virtual void afficherDetails() {
        cout << "Immatriculation : " << immatriculation << endl;
        cout << "Marque : " << marque << endl;
        cout << "Vitesse maximale : " << vitesseMax << endl;
    }

    virtual ~Vehicule() {}
};

class Voiture : public Vehicule {
private:
    int nombrePortes;
    string typeCarburant;

public:
    Voiture(string i, string m, double v, int n, string t)
        : Vehicule(i, m, v),
          nombrePortes(n), typeCarburant(t) {}

    void afficherDetails() override {
        Vehicule::afficherDetails();
        cout << "Nombre de portes : " << nombrePortes << endl;
        cout << "Type de carburant : " << typeCarburant << endl;
    }
};

class Camion : public Vehicule {
private:
    double capaciteCharge;
    int nombreEssieux;

public:
    Camion(string i, string m, double v, double c, int n)
        : Vehicule(i, m, v),
          capaciteCharge(c), nombreEssieux(n) {}

    void afficherDetails() override {
        Vehicule::afficherDetails();
        cout << "Capacite de charge : "
             << capaciteCharge << " tonnes" << endl;
        cout << "Nombre d'essieux : " << nombreEssieux << endl;
    }
};

int main() {
    Vehicule* tab[2];

    tab[0] = new Voiture("123-A-45", "Dacia", 180, 5, "Essence");
    tab[1] = new Camion("456-B-78", "Volvo", 120, 20, 4);

    for (int i = 0; i < 2; i++) {
        tab[i]->afficherDetails();
        cout << "-------------------" << endl;
    }

    for (int i = 0; i < 2; i++) {
        delete tab[i];
    }

    return 0;
}