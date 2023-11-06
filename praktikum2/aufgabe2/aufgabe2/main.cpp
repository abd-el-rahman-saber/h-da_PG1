#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    // list size
    int listSize = 10;

    //deklartion von List von int
    int arr[listSize];

    // intial the List
    for(int i = 0; i < listSize ; i++ ){
        arr[i] = 0;
    }

   int i = 0;
   cout << "Geben Sie positive Ganzzahlen ein (Eingabe von 0 oder einer negativen Zahl beendet die Eingabe):" << endl;

    while(true){

        int zahl;

        cin>>zahl;

        if(zahl<=0){
            break;
        }

        arr[i]=zahl;
        i++;

    }//end loop

    // Sort the array of integers
    sort(arr, arr + listSize);
      // print list for Debbuging
//    for(int i = 0; i < listSize ; i++ ){
//        cout<<arr[i]<<" | ";
//    }
//    cout<<endl;

    for(int i = 0; i < listSize ; i++ ){
        if(arr[i]==0)
            continue;
        else{
            cout<<"kleinste Nummer ist "<<arr[i]<<endl;
            break;
        }
    }

    cout<<"Groesste Nummer ist "<<arr[listSize - 1]<<endl;
    int summe = 0;

    for(int i = 0; i < listSize ; i++ ){
        summe += arr[i];
    }

    cout<<"summe ist "<<summe<<endl;

    return 0;
}



//Für diese Aufgabe soll ein Nutzer eine beliebige Anzahl an positiven Ganzzahlen eingeben können.
//Die Eingabe endet bei Eingabe einer 0 oder einer negativen Zahl.
//Nach Ende der Eingabe sollen dem Nutzer folgende Informationen ausgegeben werden:
//• Die größte eingegebene Zahl
//• Die kleinste eingegebene Zahl (ohne die 0 bzw. negative Zahl zum Beenden der Eingabe!)
//• Die Summe aller eingegeben Zahlen
