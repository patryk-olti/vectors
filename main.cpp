#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main()
{
    vector <int> tab;
    srand (time(NULL));
    int tmp = 1, zm = 0, val = 0;

    // WARTOSC DO ZMIANY!
    val = 4;
    cout<<"zmienna globalna: "<<val+1<<endl<<endl;

    for(int i=0; i<10; i++){
        tmp = rand() % 89 + 10;
        tab.push_back(tmp);}

    for(int i=0; i<10; i++){
        cout<<tab[i]<<" ";}
    cout<<" rozmiar: "<<tab.size();

    zm = tab[val];
    cout<<endl<<"wartosc zmiennej: "<<zm;
    sort( tab.begin() + val, tab.end());

    cout<<endl<<endl;
    for(int i=0; i<10; i++)    {
        if(i==val){
            cout<<"|";}

        cout<<tab[i]<<" ";    }
    cout<<" rozmiar: "<<tab.size();

    zm = tab[val];
    cout<<endl<<"wartosc zmiennej: "<<zm;


    cout<<endl<<"____________________"<<endl<<"Zmiana wielkosci"<<endl<<endl;
    int zmiana = 4;
    tab.resize(zmiana);

    cout<<endl;
    for(int i=0; i<15; i++){
        cout<<tab[i]<<" ";}
        cout<<" rozmiar: "<<tab.size();

    for(int i=zmiana; i<15; i++){
        tab[i] = 0;    }

    cout<<endl;
    for(int i=0; i<15; i++){
        cout<<tab[i]<<" ";}
        cout<<" rozmiar: "<<tab.size()<<endl;

    tab.push_back(10);
    cout<<"Nowy rozmiar: "<<tab.size()<<", nowa wartosc to: "<<tab[(tab.size())-1];
    cout<<endl;
    for(int i=0; i<15; i++){
        cout<<tab[i]<<" ";}
    cout<<" rozmiar: "<<tab.size()<<endl;

    tab.erase(tab.begin());

    cout<<endl;
    cout<<"Polecenie: erase"<<endl;
    for(int i=0; i<15; i++){
    cout<<tab[i]<<" ";}
    cout<<" rozmiar: "<<tab.size()<<endl;


    tab.swap(10);
    cout<<"Polecenie: swap"<<endl;
    for(int i=0; i<15; i++){
    cout<<tab[i]<<" ";}
    cout<<" rozmiar: "<<tab.size()<<endl;


    cout<<endl<<endl;
    return 0;
}

