# Cuprins

1. [Carti de programare](#Carti-de-programare)
1. [Structura program](#Structura-program)
1. [Tipuri de date](#Tipuri-de-date)
1. [Interactiunea cu calulatorul](#Interactiunea-cu-calculatorul)
1. [Instructiuni control flux executie](#Instructiuni-control-flux-executie)
1. [Functii](#Functii)
1. [Siruri de caractere](#Siruri-de-caractere)

# Carti de programare
[Cuprins](#Cuprins)

## Carte de referinta
* **The C Programming Language. Autori: Dennis Ritchie, Brian Kernighan**
<br/><br/>O carte incredibila. Contrastul cu manualele de programare este mare. M-a bulversat initial pentru ca nu avea multe exercitii - mi se parea superficiala.
Surpriza, cand am inceput sa parcurg cartea a fost insa foarte mare. Este o carte profunda, care-ti formeaza gandirea sa poti intelege ce inseamna programarea si cum poti 'vorbi' cu calculatorul.
Cartea nu este usor de parcurs, necesita efort, dar efortul merita.

## Manuale

Majoritatea manualelor de liceu, au aceeasi tematica ca si cartile prezentate mai jos. Exista multe variante de manuale.
Nu ma pot pronunta referitor la cat de bune sunt. Nu stiu.
Le recomand pe cele de mai jos pentru ca mi se pare ca pastreaza un echilibru bun intre a explica limbajul si a face exercitii.
Exemplele sunt bine alese si te ajuta sa intelegi cum poti vorbi cu calculatorul in limbajul "C"

1. [Informatica. Curs pentru clasele a IX-a si a X-a. Invata limbarjul C++ standard. Autor: Tudor Sorin](https://www.libris.ro/informatica-invata-limbajul-c-standard-LSS978-973-88037-4-9--p29119818.html?gad_source=1&gclid=CjwKCAiA9dGqBhAqEiwAmRpTC01TyQBjQK8xj0wHytaoVZ8HFmHiGJQkU69JSIRmPMVLUGLo7jRqxBoCBZMQAvD_BwE)
    <br/>O carte bine structurata pe care o recomand.
    <br/>Din cuprins:
    * **Elemente de baza ale limbajului** (Structura programelor, Tipuri de date fundamentale, Expresii)
    * **Instructiunile limbajului C++** (if, switch, for, while, do-while, break, continue)
    * **Tablouri (Vectori/Matrice)** (Algoritmi fundamentali care lucreaza cu vectori: minim, maxim, sortare, interclasare, cautare binara etc.)
    * **Subprograme / Functii** (Structura si apel functii)
    * **Pointeri si referinte**
    * **Incapsulare. Tipuri create cu STRUCT**
    * **Clase (programare orientata obiect POO/OOP)**
    * **Siruri de caractere** (reprezentare folosind *vectori de caractere* si tipul *string*, pointeri si siruri, functii din *string.h*)
    * **Fisiere** (creare, citire, scriere)
    * **Structuri de date** (lista inlantuita, stiva, coada)
    * **Recursivitate. Introducere** (functii care se autoapeleaza - functii recursive)
    * **Complexitatea algoritmilor** (Notatia 'O'. Cate operatiuni trebuie facute pentru a rezolva o problema)
    * **Initiere in programarea generica** (functii si clase template, containere, iteratori)

1. [Informatica. Manual pentru clasa a XI-a. Autori: Mioara Gheorghe etc.](https://www.elefant.ro/informatica-manual-pentru-clasa-a-xi-a_b2e88e43-e322-4d48-b01a-d1f7ae0ea7f7?gclid=CjwKCAiA9dGqBhAqEiwAmRpTC1zUNl_osDjd4GuCFpDuvmkNQhvu9sMYsm2b62LExf9Asrsze3pIfRoCFqUQAvD_BwE)
   <br/>O parte din continut este comun cu cartea anterioara
   <br/>In plus:
   * **Metode de programare** (*Divide et impera*, *Backtracking*)
   * **Elemente de teoria grafurilor** (Notiuni de baza, reprezentarea grafurilor, parcurgerea grafurilor neorientate, grafuri orientate: memorare, reprezentare; Arbori)

1. [Informatica. Tehnici de programare. Autor: Tudor Sorin](https://pdfcoffee.com/tudor-sorin-informaticapdf-pdf-free.html)
   <br/>Tematica se suprapune peste cea cuprinsa in cartile de mai sus. 
   <br/>Cuprinde multe probleme rezolvate, cu rezolvarea foarte bine explicata.


## Alte carti
1. [Manuale informatica](#https://ebooks.infobits.ro/15-manuale-de-informatica)
1. [Carti programare - editura Tudor Sorin](#https://www.infobits.ro/)

# Structura program
[Cuprins](#Cuprins)
~~~
# include <iostream>
using namespace std;

int main() {

    return 0;
}
~~~

Prima linie include biblioteca standard <iostream> pentru a citi date de la tastatura si pentru a scrie pe ecran.
(Input - Output stream).

A doua linie ne spune ca vream sa folosim toate elementele din spatiul de nume `std`. 
Este similar cum m-as referi la un grup de oameni prin numele de familie. Odata menionat acest fapt, pot sa ma refer la fiecare membru al familiei cu numele de botez, fara sa fie nevoie sa-i mai spun numele de familie. Daca vreau sa ma refer la cineva din alta familie trebuie sa folosesc notatia: `nume::prenume`.

`int main() { ... }`
este functia principala care trebuie sa existe intr-un program C pe care sa-l putem transforma in executabil 
(pot avea fisiere biblioteca, unde nu avem aceasta functie).

* int      - valoarea returnata
* main()   - functia principala, de unde va incepe executia programului
* return 0 - in general cand pornim un program, sistemul de operare asteapta 0 daca executia se termina cu succes sau un intreg diferit de 0 la eroare.
             in C++ putem avea o funcie main care nu intoarce nimic: void main() {} si nu mai avem return
             Nu-i complicat sa dam return 0 si main sa fie int. Recomand varianta de mai sus.

# Tipuri de date

[char, int, long, float, double](https://www.programiz.com/c-programming/c-data-types)

# Interactiunea cu calculatorul 
[Cuprins](#Cuprins)

## Afisare date pe ecran (scriere) si citire date de la tastatura.

**Daca interactionam / discutam cu cineva**, auzim ce ne spune, sau vede ce scrie pe tabla/hartie.
Putem sa-i transmitem un mesaj, iar apoi interlocutorul ne poate confirma ca l-a primit.

**Interactiuna cu calculatorul urmeaza acelasi tipar.**
Vrem sa-i transmitem calculatorului o informatie si vrem sa vedem ca acesta a primit-o. In urma procesarii acesteia, ne asteptam sa vedem 
un rezultat de la calculator.

De cele mai multe ori interactionam cu calculaltorul prin interfata grafica - de exemplu cand navigam pe internet.
Avem browserul Chrome de exemplu.
Tastam ceva in zona de cautare (search). Cererea este preluata de Chrome si se afiseaza rezultatul cautarii.

La programarea in C / C++ interactiunea se face fie din Consola / Terminal, fie din IDE-ul folosit (ex. Visual Studio Code).
*(IDE = Integrated Development Environment - o aplicatie care ne ajuta sa scriem cod, sa compilam etc)*

## Programul salut.cpp

Comunicarea cu calculatorul in C++/CPP se poate face prin intermediul bibliotecii standard <iostream>.
Aceasta ne pune la dispozitie, printre altele, doua obiecte:

 - cin
 - cout
   
prin care putem lua legatura cu console input - tastatura: cin si cu console-output ecranul.

Fara sa intram in detalii de programare orientata obiect POO(OOP in engleza), trebuie sa ne gandim la
cin si cout efectiv ca la doua obiecte, cum ar fi de exemplu telecomanda cu care controlez televizorul.

* cout << "text"        - directioneaza mesajul din dreapta - "text" catre ecran
* cin >> nume_variabila - preia de la tastatura ce tastez si pune in variabila numita aici 'nume_variabila'


### Variabila. Ce este o variabila?

Variabila este un nume pe care-l dam unei locatii de memorie, pentru a-i putea accesa usor continutul.
De exemplu: *Gara de Nord* (din Bucuresti) - este un nume pe care-l dam unei suprafete de cateva hectare
unde sunt trasee de cale ferata, peroane, cladiri unde lucreaza oameni de la CFR, sala de asteptare etc.
Daca ar fi sa insiram toate proprietatile Garii de Nord, n-ar trebui mult spatiu.
Asa, avem un nume, si cand spunem *Gara de Nord*, este in general suficient pentru a avea o intelegere destul de buna la ce ne referim.

In programare lucrurile sunt similare.

In programul salut.cpp folosim o variabila:

* char mesaj_utilizator[20] = "";

*mesaj_utilizator* este numele pe care-l dam unei locatii de memorie in care vom stoca pana la 20 de caractere.

Alte exemple de variabile sunt:

* int i;
* int j = 0

Cand declaram o variabila, trebuie sa specificam:

* *tipul*:   int, char, float etc.
* *numele*:  i, j, mesaj_utilizator
* optional, variabila poate fi initializata - j, sau mesaj_utilizator
* pentru vector / array, trebuie sa specificam si dimensiunea - cate elemente de tip caracter ma astept sa am - echivalent cu - cate litere ma astept sa fie in cuvant.

### Variabilele vector / array
Daca am o singura valoare, variabila poate fi definita:

* int numar_elevi_in_clasa;
* float media_generala;
* char prima_litera_din_nume;
  
Fiecare din variabilele de mai sus se refera la o singura valoare.
(mai sus variabilele nu sunt initializate dar pot fi initalizate: *int numar_elevi_in_clasa = 24*)

Sa presupunem acum ca avem o clasa de 24 de elevi si vrem sa vedem, pentru fiecare ce nota are la matematica.
Am avea nevoie de o matrice - cu o singura linie: nota la matematica si cu mai multe coloane / elemente.
Pe prima pozitie - numarul 1 de la catalog - nota primului elev.
Pe a doua pozitie - numarul 2 de la catalog - nota celui de-al doilea elev
etc.

Un alt exemplu ar fi o sala de spectacole.
Avem randuri, si pe fiecare rand avem mai multe scaune.
Fiecare pozitie se identifica prin numarul randului si numarul scaunului.
Avem aici un vector de vectori:
* primul vector - randurile (randul 1, randul 2 ...)
* al doilea vector - scaunele de pe rand (scaun 1/rand1 scaun2/rand1 ...)

Vectorii (array) se folosesc de fiecare data cand avem nevoie sa lucram cu elemente de acelasi tip - adica la sala de spectacole, toate scaunele sunt de acelasi fel. Nu avem scaune pentru oameni si scaune pentru, sa zicem elefanti (care ar trebui sa aiba o altfel de forma si dimensiune).

Cand vrem sa definim un vector trebuie sa specificam:
* tipul elementelor
* numamrul maxim de elemente - pentru a se rezerva spatiu de memorie suficient (similar cu rezervarea la restaurant - rezerv masa de 8 persoane ...)

In programul salut.cpp, avem un vector de caractere - pentru stoca cuvantul citit de la tastatura definit:

* char mesaj_utilizator[20] = ""

ceea ce inseamna: vrem sa putem tine minte / stoca in memorie, un cuvant de pana la 20 de litere/caractere, pe care-l initializam cu sirul gol: "".
Ce inseama initializare: fac curat in spatiul pe care l-am rezervat, nu vreau sa am acolo alte caractere, asa ca pun acolo un sir gol.
Continutul sirului va fi adaugat la citirea de la tastatura:

* cin >> mesaj_utilizator

unde ce tastam se adauga in obiectul 'cin' iar dupa apasare pe tasta 'Enter' este pus in locatia de memorie la care ne referim prin numele 'mesaj_utilizator' sau intr-o alta forma de exprimare, dam variabilei *mesaj_utilizator* valoarea citita de la tastatura.

NOTA:
* *cin* citeste pana la spatiu sau Enter. Daca tastam mai multe cuvinte separate de spatiu, va fi luat doar primul cuvant

# Instructiuni control flux executie
[Cuprins](#Cuprins)
## `if, for, while (do while), break, continue`

## program: instructiuni_flux_executie.cpp

Cand vrem sa rezolvam o problema de orice fel, de exemplu sa rezolvam o tema la matematica, cautam exercitiile in carte, pentru asta ce face, dam pagina cu pagina pagina (sau pe sarite, dar pentru acest exemplu sa presupunem pagina cu pagina) pana cand ajungam la pagina cu problema de rezolvat - deci avem de repetat o actiune de mai multe ori.
La fiecare pagina verificam daca am ajuns la ce cautam - de exemplu exercitiul 1 de la 'linia mijlocie'.
Daca am ajuns, incep sa-l rezolv. Daca nu voi continua cautarea.

Exemple de acest fel, intalnim la fiecare pas.
Trebuie sa facem alegeri, in functie de alegere continuam pe varianta A sau B sau C etc.

Instructiunile cu care controlam executia unui program sunt:

* if         daca i este par, afiseaza-l
* for        pentru i de la 1 la 100, cu pas de 1 (i++), afiseaza i
* while      i = 1, cat timp i < 100, afiseaza i, creste-l pe i cu 1 (i++)
* break      in instructiunile repetitive (bucle) for sau while sau do/while, iesi din bucla
* continue   in instructiunile repetitive de mai sus - nu mai duce bucla pana la capat ci treci la urmatoarea valoare

Programul `instructiuni_flux_executie.cpp` prezinta exemple cu toate instructiunile de mai sus si cu comentarii.

# Exemplu compilare si executie program pe Linux.

Comanda compilare: 
`g++ -o instructiuni_flux_execiutie.o instructiuni_flux_executie.cpp`

* g++        - compilatorul folosit (gcc pentru C, g++ pentru C++)
* -o <nume>  - numele fisierului obiect sau executabil creat dupa compilare. Pentru ca avem main, fisierul obiect este si executabil
* <fisier.c> - numele fisierului sursa care va fi compilat. Unele compilatoare cer ca extensia sa fie .cpp, nu .c.
               Compilatorul g++ de pe Linux nu cere ca extensia sa fie .cpp (Compilatorul (--de dat nume--) de pe Android cere extensie .cpp

Comanda executie: 
`./instructiuni_flux_execiutie.o`

* fisierul de mai sus a fost generat in urma compilarii

Directorul unde avem codul, dupa compilare. Se vad atat fisierele sursa cat si cele obiect / executabile.

## *Pe Windows*, extensia pentru fisierele executabile trebuie sa fie .exe.
Comanda de compilare ar fi:
`g++ -o instructiuni_flux_execiutie.exe instructiuni_flux_executie.cpp`

Diferenta fata de Linux, este doar extensia fisierului.

## Exemplu captura de ecran cu compilarea si executia programului pe Linux:

![image](https://github.com/crchende/C/assets/57460107/5b69ccdf-e3de-4250-bbc0-fbf67f48db49)

Continuare:

![image](https://github.com/crchende/C/assets/57460107/fa47ea81-468f-4f5d-bee1-1e7da6e42845)

Continutul directorului cu codul si fisierele executabile:

![image](https://github.com/crchende/C/assets/57460107/fc47917c-94da-4f66-bce9-88472b272582)



# Functii
[Cuprins](#Cuprins)

in constructie !

# Siruri de caractere
[Cuprins](#Cuprins)

in constructie !
