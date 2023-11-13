# include <iostream>
using namespace std;

int main() {

    int numar;
    int aux;

    int cifra;

    cout << "Tastati un numar: "; //textul il pun pe ecran
    cin >> numar;                 //ce citesc de la tastatura pun in variabila numar

    cout << "Numarul tastat este: " << numar << endl;

    /* 
        EXEMPLU while

        Afisare cifra cu cifra, incepand cu unitatile 
        pentru a nu pierde numarul tastat, il salvam in aux

        Se foloseste in acest caz o bucla while. 
        Ne avantajeaza pentru ca nu stim cate cifre are numarul si ne
        vom opri atunci cand catul impartirii repetate la 10 este 0 adica
        nu mai am cifre in numar.
    */
    cout << "Exemplu bucla while - afisare cifre incepand cu unitatile:" << endl;
    aux = numar;
    while(aux > 0) {
        cifra = aux % 10; //mod 10 - restul impartirii la 10 - ia ultima cifra
        aux = aux / 10;   //div 10 - catul impartirii la 10
        cout << cifra << endl;
    }

    /*
        EXEMPLU break (in bucla while)

        Repetem exemplul de mai sus, dar iesim din bucla cand gasim cifra 2 in numarul tastat.
    */
    cout << endl << "Exemplu break - ies din bucla daca gasesc cifra 2" << endl;
    aux = numar;
    while(aux > 0) {
        cifra = aux % 10; //mod 10 - restul impartirii la 10 - ia ultima cifra

        // break-ul ma scoate din bucla
        // Nu conteza daca este inainte sau dupa micsorarea lui aux
        // Mai bine inainte, sa nu mai fac un calcul in plus.
        if(cifra == 2) {
            break;
        }
        aux = aux / 10;   //div 10 - catul impartirii la 10
        cout << cifra << endl;
    }

    /*
        EXEMPLU continue (in bucla while)

        Repetem exemplul de mai sus, dar iesim din bucla cand gasim cifra 2 in numarul tastat.
    */
    cout << endl << "Exemplu continue - sar cifra daca este 2" << endl;
    aux = numar;
    while(aux > 0) {
        cifra = aux % 10; //mod 10 - restul impartirii la 10 - ia ultima cifra
        aux = aux / 10;   //div 10 - catul impartirii la 10

        // IMPORTANT:
        // trebuie sa pun if-ul dupa aux = aux / 10
        // altfel am bucla infinita, pentru ca la gasirea cifrei 1 se reia 
        // bucla dar nu se mai micsoreaza aux sa pot iesi sin bucla

        if(cifra == 2) {
            continue;
        }
        cout << cifra << endl;
    }

    /*
        Exemplu bucla for.
        Voi defini un vector de intregi pe care-l initializez cu o anumita valoare.
        Am nevoie si de numarul de elemente, pentru a putea parcurge vectorul.

        Atentie - dimensiunea vectorului = numarul maxim de elemnte
                - numarul de elemente    = cate elemente am efectiv inel

        ex. o masina are 5 locuri (dimensiunea) dar in ea poate fi doar un om.

        Voi defini variabilele aici. 
        
        Ca buna practica de programare - ar trebui definite la inceputul
        functiei.
    */
    cout << endl << "Exemplu bucla for:" << endl;

    int vector_numere[20] = {10, 20, 30, 40, 50};
    int N = 5;

    // daca-l avem pe i declarat in afara buclei il putem folosi: for(i = 0; ...)
    // altfel putem sa-l definim in bucla: for(int i = 0; ...)
    for(int i = 0; i < N; i++) {
        cout <<  i << ": " << vector_numere[i] << endl; // pozitia si valoarea de pe pozitie
    }

    /* Bula for contine trei definitii:
        - de unde se incepe
        - unde se termina
        - cu cat se incrementeaza contorul

       Definitiile pot fi omise si se obtin diverse comportamente particulare.
       Studiul lor nu este acoperit aici.
       Exemplul de fata se refera la forma generala a buclei for.
    */


    /*
        Variabila de tip sir de caractere sau vector de litere.
        Parcurgerea cu for.
        Gasirea lungimii sirului.

        Un sir de caractere se termina cu caracterul ZERO: \0 - sau un octet care are
        8 de 0 - 0 pe fiecare pozitie.

        Putem gasi lungimea sirului, parcurgand elementul cu element de la primul element
        si incrementant contorul cu 1 la fiecare litera.
        Ne oprim cand ajungem la caracterul '\0'

        Sirurile se definesc cu ghilimele duble: "acesta este un sir"
        Compilatorul va adauga '\0' la sfarsitul uni sir definit in acest mod.
        Caracterele se defininesc cu ghilimele simple: 'c', 'A', 
        '\0' (octetul cu valoare 0 sau 0 pe fiecare pozitie)

        Exemplu:

            sirul (literele din sir):    ex sir car
            pozitie element (de la 0):   0123456789

        Sirul "ex sir car" are 10 litere.
        Prima pozitie este 0; ultima este 9.
        Sirul are si spatii (intentionat).


        NOTA:
        Penru a citi mai usor codul definesc aici variabilele folosite.
        Ar trebui declarate la inceput - conform bunelor practici de programare.
    */

    char sir_de_caractere[] = "Acesta este un sir de caractere";
    //Pot sa nu dau dimensiunea sirului, daca-l initializez
    //Compilatorul va determina lungimea sirului.
    //Pot declara un sir mai mare pe care sa-l initializez cu mai putine caractere
    //daca stiu ca voi avea nevoie de spatiu.

    int i = 0, lungime;
    cout << endl << "Parcurgere sir cu 'while' si determinare lungime sir" << endl;
    while(sir_de_caractere[i] != '\0') {
        cout << sir_de_caractere[i] << endl;
        i++;
    }
    lungime = i; //Dupa ce trec prin toate elementele, i este chiar lungimea
                 //Se iese din bucla cand se ajunge la '\0'
    
    cout << "Lungimea sirului: '" << sir_de_caractere << "' este: " << lungime << endl; 
    
 
    cout << endl << "Parcurgerea aceluias sir cu for - avem lungimea, calculata anterior." << endl;
    cout << "Elementele vor fi afisate pe aceeasi linie, separate de spatiu" << endl;
    for(i = 0; i < lungime; i++) {
        cout << sir_de_caractere[i] << " ";
    }
    cout << endl;

    return 0;
}