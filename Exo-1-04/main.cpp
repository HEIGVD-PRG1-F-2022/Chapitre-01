#include <iostream>
#include <string>

using namespace std;

int main() {

   string prenom;
   cout << "Quel est votre prenom ? ";
   getline(cin, prenom);

   int age;
   cout << "Quel age avez-vous ? ";
   cin >> age;
   
   const int ANNEE_COURANTE = 2020; // 2020 à remplacer par l'année courante
   
   cout << "Bonjour " << prenom << "," << endl
        << "Vous avez " << age << " ans et vous etes ne(e) en "
        << ANNEE_COURANTE - age << "." << endl;
        
   return EXIT_SUCCESS;
}

// Forme plus sophistiquée
// #include <cstdlib> 
// #include <ctime> 
// #include <iostream>
// #include <string>
// 
// using namespace std;
// 
// int main() {
// 
//    string prenom;
//    cout << "Quel est votre prenom ? ";
//    getline(cin, prenom);
// 
//    int age;
//    cout << "Quel age avez-vous ? ";
//    cin >> age;
// 
//    // L'année courante est récupérée à partir de la date-heure du système   
//    char buffer[5];
//    time_t t = time(NULL);
//    strftime(buffer, sizeof(buffer), "%Y", localtime(&t)); 
//    const int ANNEE_COURANTE = stoi(string(buffer));
// 
//    cout << "Bonjour " << prenom << "," << endl
//         << "Vous avez " << age << " ans et vous etes ne(e) en "
//         << ANNEE_COURANTE - age << "." << endl;
//         
//    return EXIT_SUCCESS;
// }
