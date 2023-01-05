#include <iostream>

using namespace std;

class Uczen{
public:
    static string klasa;
    static string zawod;
    string imie;
    string nazwisko;
    string nr_dziennika;

    Uczen(string, string,string);
    string wyswietl();
};

string Uczen::klasa = "2ir";
string Uczen::zawod = "programista";

int main() {

    Uczen kacper("Kacper","Zajac","30");
    Uczen lukasz("Łukasz","Iwaniec","17");
    Uczen kuba("Kuba","Sochacki","24");

    cout<<kacper.wyswietl();
    cout<<lukasz.wyswietl();
    cout<<kuba.wyswietl();
    return 0;
}

Uczen::Uczen(string imie, string nazwisko,string nr_dziennika){
    this -> imie = imie;
    this -> nazwisko = nazwisko;
    this -> nr_dziennika = nr_dziennika;
}
string Uczen::wyswietl(){
    return  "Imie: "+imie+"\nNazwisko: "+nazwisko+ "\nNumer z dziennika: " + nr_dziennika + "\nKlasa: "+klasa+ "\nZawod: " + zawod+"\n-----------------------------------\n";
}