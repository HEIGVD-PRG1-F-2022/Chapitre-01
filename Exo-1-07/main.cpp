#include <cmath>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {

   double soldeInitial;
   double tauxInteretAnnuel;
   double retraitMensuel;

   cout << "Entrez le solde initial > ";
   cin >> soldeInitial;
   
   cout << "Entrez le taux d'interet annuel en % > ";
   cin >> tauxInteretAnnuel;
   
   cout << "Entrez le montant du retrait mensuel > ";
   cin >> retraitMensuel;

   const double TAUX_INTERET_MENSUEL = pow(1 + tauxInteretAnnuel / 100, 1./12) - 1;
      
   double soldeCompte = soldeInitial;   
   int nbMois = 0;   

   if (soldeCompte * TAUX_INTERET_MENSUEL >= retraitMensuel) {
      // Le solde ne fera que stagner ou croître
      cout << "Le compte ne sera jamais a decouvert" << endl;
   } else {   
      while (soldeCompte >= 0.0) {
         nbMois++;
         soldeCompte = soldeCompte * (1.0 + TAUX_INTERET_MENSUEL) - retraitMensuel;
      }
      cout << "Le compte sera a decouvert au bout de " << nbMois << " mois" << endl; 
   }
         
   return EXIT_SUCCESS;
}

// Entrez le solde initial > 10000
// Entrez le taux d'interet annuel en % > 6
// Entrez le montant du retrait mensuel > 500
// Le compte sera a decouvert au bout de 22 mois

// Entrez le solde initial > 10000
// Entrez le taux d'interet annuel en % > 6
// Entrez le montant du retrait mensuel > 45
// Le compte ne sera jamais a decouvert
