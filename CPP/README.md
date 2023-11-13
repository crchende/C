# Interactiunea cu calculatorul. Afisare date pe ecran (scriere) si citire date de la tastatura.

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
