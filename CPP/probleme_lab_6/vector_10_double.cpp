/*
i) Scrieti un program cu 3 functii (main si inca 2 functii) care sa:
- citeasca un vector de 10 double de la tastatura, sa calculeze media aritmetica, si
valoarea minima, si sa afiseze rezultatul cu precizie 3 zecimale.
*/

#include <iostream>
#include <iomanip>

using namespace std;


//DECLARARE functii.
//------------------
//Doar tipul, numele si tipul parametrilor.
//Informam programul ca vom avea aceasta functie, fara sa specificam corpul functiei si numele
//parametrilor.
//Functia poate fi apelata acum in main, cu toate ca main este definit dupa aceasta
//declaratie
void afiseaza_vector(double*, int);
double calculeaza_media_aritmetica(double*, int);
double gaseste_minim_vector(double*, int);


//NOTA - daca definesc functiile inainte de main, le pot folosi in main
//       daca le definesc dupa (cazul de fata) trebuie declarate inainte de main.

int main() {
    int i;
    int N = 5; //numarul de elemente din vector
    double media;
    double min;
    //Ma limitez la 5 elemente sa fie mai usor de interactionat cu programul

    // putem initializa vectorul in program
    double vector_10[5] = {124.3456, 125.44567, 23.54879123, 456.67803, 23.54878};

    //pentru citire de la tastatura decomentati codul de mai jos si
    //comentati linia care defineste vectorul
    
    /*
    double vector_10[10];

    for(i = 0; i < 2; i++) {
        //indexul incepe de la 0 dar oamenii incep numaratoarea de la 1
        cout << "Dati elementul " << i+1 << ": ";
        cin >> vector_10[i];
    }
    */

    afiseaza_vector(vector_10, 5);

    media = calculeaza_media_aritmetica(vector_10, N);
    min = gaseste_minim_vector(vector_10, N);

    //configurarea obiect cout pentru a afisa strict cu 3 zecimale
    cout << fixed << showpoint; //fara modul fixed, se vor afisa 2 cifre din numar
    
    //de incercat si alte valori pentru setprecision
    cout << "Media aritmetica:   " << setprecision(3) << media << endl;
    cout << "Minimul din vector: "<< setprecision(3) << min << endl;

    return 0;
}

// DEFINIRE FUNCTII
//-----------------
// tip, nume, parametrii, corp functie - TOT

//Functie extra - se poate folosi pentru a afisa vectorul
//sau se poate ignora.
//Functia nu returneaza nimic, de aceea am folosit tipul void
void afiseaza_vector(double *vector_de_afisat, int nr_elemente) {
    int i;
    cout << "Afisare elemente vector" << endl;
    for(i = 0; i < nr_elemente; i++) {
        cout << setprecision(10) << vector_de_afisat[i] << endl;
    }
}

//functia returneaza un 'double'
double calculeaza_media_aritmetica(double *vector, int nr_elemente) {
    double suma = 0;
    double media;
    int i;

    for(i = 0; i < nr_elemente; i++) {
        suma = suma + vector[i];
    }
    media = suma / nr_elemente;

    return media;
}

//functia returneaza double
double gaseste_minim_vector(double *vector, int nr_elemente) {
    double min;
    int i;

    min = vector[0]; //presupunem ca este primul element
    for(i = 0; i < nr_elemente; i++) {
        if(vector[i] < min) {
            min = vector[i];
        }
    }
    return min;
}