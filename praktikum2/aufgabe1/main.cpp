#include <iostream>
#include <time.h>
#include <random>
using namespace std;

int main()
{
    // immer zufällige Zahl
    srand(time(NULL));

    int zahlDerVersuche = 0;

    int zufallZahl = (rand() % 10) + 1;

    while (zahlDerVersuche < 5 ){


        cout<<"zufall Zahl ist "<<zufallZahl<<endl;

        int benutzerZahl;
        cin>> benutzerZahl;

        if (benutzerZahl >10 || benutzerZahl<1){
            cout<<"Bitte 1 bis 10 !! "<<endl;
            continue;
        }

        if (benutzerZahl == zufallZahl){
            cout<<"Gut gemacht , Winer"<<endl;
            return 0 ;
        }

        cout<<"leider falsche Eingabe bitte noch mal versuchen"<<endl;
        zahlDerVersuche++;
        cout<<"Sie haben "<<zahlDerVersuche<<" Versuche gemacht"<<endl;

    }//end while

    cout<<"Spiel Ende ! verloren"<<endl;

    return 0;
}
