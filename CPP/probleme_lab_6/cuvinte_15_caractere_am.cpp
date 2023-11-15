/*
i) Scrieti un program cu 3 functii (main si inca 2 functii) care sa:

- citeasca de la tastatura cuvinte de max 15 caractere fiecare, pana la introducerea
unui cuvant de lungime nula si sa verifice de cate ori apare grupul 'am' in fiecare
cuvant , si care e e cuvantul de lungime maxima.
*/


#include <iostream>
#include <cstring>
using namespace std;

//Functia mai poate primi un parametru - grupul de litere cautat
void verifica_am(char* var_cuvant, int* contor_cuvant) {
    if (strstr(var_cuvant, "am")) {
        cout << " -- gasit 'am'" << endl;
        *contor_cuvant++;                  //BUG nu merge bine asa
        cout << *contor_cuvant << endl;  
    }
}

int main() {
    char cuvant[16]; //pastram loc (dimensiune 16) si pentru caracterul sfarsit sir: \0
    char max_cuvant[16]; //cuvantul unde voi stoca cel mai lung cuvant
    int lungime = 0;
    int l = 0;

    int contor_am = 0;

    //oprire citire dupa 15 careactere sau apsare pe ENTER
    cout << "Tastati un cuvant: ";
    while(cin.get(cuvant, 15, '\n')) {    
        cout << "Citit: " << cuvant << endl;
        cin.get(); //apel necesar pentru a putea citi si cuvantul urmator (\n ramane in buffer)

        /*
        //Inlocuiesc codul de mai jos cu un apel de functie
        if (strstr(cuvant, "am")) {
            cout << " -- gasit 'am'" << endl;
        }
        */
        verifica_am(cuvant, &contor_am);

        l = strlen(cuvant);
        if(l > lungime) {
            lungime = l;
            max_cuvant[0] = '\0'; //necesar pentru a goli vectorul. altfel contateneaza valorile
            strcat(max_cuvant, cuvant);
        }
        
        cout << "Tastati un cuvant: "; //mesaj pentru utilizator
    }

    cout << "Cel mai lung cuvant a fost: " << max_cuvant << "; lungime: " << lungime << endl;
    cout << "Subsirul 'am' a aparut de: " << contor_am << " ori" << endl;

    return 0;
}