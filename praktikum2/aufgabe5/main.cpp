#include <iostream>

using namespace std;

int main()
{
    while(true){
        cout << "Herzlich Willkommen zum Flächenberechner!" << endl;
        cout << "k) Kreis" << endl;
        cout << "r) Rechteck" << endl;
        cout << "d) Dreieck" << endl;
        cout << "q) Beenden" << endl;

        char benutzerEingabe;
        cin>>benutzerEingabe;

        switch (benutzerEingabe) {
        case 'k':
            cout << "Kreis flaesche wird implemntiert" << endl;
            break;
        case 'r':
            cout << "Rechteck flaesche wird implemntiert" << endl;
            break;
        case 'd':
            cout << "Dreieck flaesche wird implemntiert" << endl;
            break;
        case 'q':
            cout << "wird beendet...." << endl;
            exit(0);
            break;
        default:
            cout << "ungueltige Eingabe" << endl;
            break;
        }//end switch
    }//end while

    return 0;
}
