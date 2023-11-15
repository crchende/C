#include <iostream>
using namespace std;


/*
    Primul program C++.

    Obiectiv:

    Interactiune cu calculatorul:
     - afisam ceva
     - dam un mesaj de la tastatura si-l afisam

    Avem nevoie de biblioteca standard iostream: Input Output Stream
    (fluxul de intrare / iesire) care cuprinde functii care ne ajuta
    sa citim date de la tastatura, cum ar fi: cin  - console input
    si sa afisam date pe ecran, cum ar fi:    cout - console output

    Biblioteca fiind standard, sintaxa de includere este:
    #inclulde <iostream>

    (pentru biblioteci definite de utilizator, nu standard, in locul
    parantezelor unghiulare se folosesc ghilimele)

    Obiectele cin si cout sunt in spatiul de nume std (standard)
    std l-am putea asimila cu un nume de familie, cin si cout cu prenumele

    Pentru ca compilatorul C++ sa stie la ce ne referim fie folosim numele
    complet: 
        std::cin
    sau, la inceputul fisierului comunicam faptul ca fom folosi functii din
    familia / spatiul de nume (namespace) stdin si atunci nu mai este nevoie
    folosim notatia std::cin si putem folosi direct:
        cin
*/

int main() {
    //1. Afisare pe ecran cu cout
    cout << "Salutare din C++ sau CPP" << endl;

    //2. Definim o variabila care poate stoca 20 de caractere
    char mesaj_utilizator[20] = "";

    //3. Cerem utilizatorului sa introduca un mesaj.
    //   Nu trebuie sa aiba spatii, mesajele cu spatii se preiau diferit.
    //   Daca mesajul are spatii, se va lua doar primul cuvant
    cout << "Tastati mesajul dumneavoastra: ";
    cin >> mesaj_utilizator;

    //4. Confirmam utilizatorului ca am primit mesajul, afisand mesajul primit
    cout << "Am primit de la tastatura mesajul: " << mesaj_utilizator << endl;

    return 0;
}