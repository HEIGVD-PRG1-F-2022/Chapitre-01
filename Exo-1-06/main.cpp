#include <cmath>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {

   const double SOLDE_INITIAL = 10000.0;
   const double TAUX_INTERET_ANNUEL = 0.06;
   const double RETRAIT_MENSUEL = 500.0;

   // Référence formule :
   // https://fr.wikipedia.org/wiki/Taux_d'int%C3%A9r%C3%AAt_%C3%A9quivalent
   // La formule ci-dessous garantit que :
   // SOLDE_INITIAL * (1 + TAUX_INTERET_ANNUEL) 
   // = SOLDE_INITIAL * pow(1 + TAUX_INTERET_MENSUEL, 12);
   // ATTENTION !
   // Serait faux de définir :
   // TAUX_INTERET_MENSUEL = TAUX_INTERET_ANNUEL / 12 
   const double TAUX_INTERET_MENSUEL = pow(1 + TAUX_INTERET_ANNUEL, 1./12) - 1;
   cout << "taux mensuel = " << TAUX_INTERET_MENSUEL << endl;
   
   double soldeCompte = SOLDE_INITIAL;   
   int nbMois = 0;   

   while (soldeCompte >= 0.0) {
      nbMois++;
      soldeCompte = soldeCompte * (1.0 + TAUX_INTERET_MENSUEL) - RETRAIT_MENSUEL;
//       cout << "solde du compte apres " << nbMois << " mois : " << soldeCompte << endl;
   }
   cout << "Le compte sera a decouvert au bout de " << nbMois << " mois" << endl; 
         
   system("PAUSE");
   return EXIT_SUCCESS;
}