#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int wynik;
    wynik=0;
    char x;
    char a, b, c;
    cout<<"Serdecznie zapraszam do QUIZU ze stolic panstw europejskich"<<endl<<"oczywiscie nie wszystkich lecz wierze ze to wam wystarczy"<<endl<<endl;
    cout<<endl<<"Pytanie 1"<<endl<<"Stolica Polski jest:"<<endl<<"Odpowiedzi:"<<endl<<"A) Rzym"<<endl<<"B) Paryz"<<endl<<"C) Warszawa"<<endl;
    cin>>x;
    if(x==99)                   //99 koduje c, 98 b, 97 a
    {
        cout<<"dobrze"<<endl;
        wynik=wynik+1;
    }
    else
    {
        cout<<"zle"<<endl;
        wynik=wynik-1;
    }
    cout<<endl<<"Pytanie 2"<<endl<<"Stolica Francji jest:"<<endl<<"Odpowiedzi:"<<endl<<"A) Lizbona"<<endl<<"B) Paryz"<<endl<<"C) Sarajewo"<<endl;
    cin>>x;
    if(x==98)
    {
        cout<<"dobrze"<<endl;
        wynik=wynik+1;
    }
    else
    {
        cout<<"zle"<<endl;
        wynik=wynik-1;
    }
    cout<<endl<<"Pytanie 3"<<endl<<"Stolica Wloch jest:"<<endl<<"Odpowiedzi:"<<endl<<"A) Amsterdam"<<endl<<"B) Rzym"<<endl<<"C) Lwow"<<endl;
    cin>>x;
    if(x==98)
    {
        cout<<"dobrze"<<endl;
        wynik=wynik+1;
    }
    else
    {
        cout<<"zle"<<endl;
        wynik=wynik-1;
    }
    cout<<endl<<"Pytanie 4"<<endl<<"Stolica Chorwacji jest:"<<endl<<"Odpowiedzi:"<<endl<<"A) Andora"<<endl<<"B) Erewan"<<endl<<"C) Zagrzeb"<<endl;
    cin>>x;
    if(x==99)
    {
        cout<<"dobrze"<<endl;
        wynik=wynik+1;
    }
    else
    {
        cout<<"zle"<<endl;
        wynik=wynik-1;
    }
    cout<<endl<<"Pytanie 5"<<endl<<"Stolica Albani jest:"<<endl<<"Odpowiedzi:"<<endl<<"A) Tirana"<<endl<<"B) Baku"<<endl<<"C) Tallin"<<endl;
    cin>>x;
    if(x==97)
    {
        cout<<"dobrze"<<endl;
        wynik=wynik+1;
    }
    else
    {
        cout<<"zle"<<endl;
        wynik=wynik-1;
    }
    cout<<endl<<"Pytanie 6"<<endl<<"Stolica Estoni jest:"<<endl<<"Odpowiedzi:"<<endl<<"A) Tbilisi"<<endl<<"B) Tallin"<<endl<<"C) Rejkiavik"<<endl;
    cin>>x;
    if(x==98)
    {
        cout<<"dobrze"<<endl;
        wynik=wynik+1;
    }
    else
    {
        cout<<"zle"<<endl;
        wynik=wynik-1;
    }
    cout<<endl<<"Pytanie 7"<<endl<<"Stolica Islandii jest:"<<endl<<"Odpowiedzi:"<<endl<<"A) Rejkiavik"<<endl<<"B) Alma Ata"<<endl<<"C) Biszkek"<<endl;
    cin>>x;
    if(x==97)
    {
        cout<<"dobrze"<<endl;
        wynik=wynik+1;
    }
    else
    {
        cout<<"zle"<<endl;
        wynik=wynik-1;
    }
    cout<<endl<<"Pytanie 8"<<endl<<"Stolica Moldawi jest:"<<endl<<"Odpowiedzi:"<<endl<<"A) Skopie"<<endl<<"B) Valletta"<<endl<<"C) Kiszyniow"<<endl;
    cin>>x;
    if(x==99)
    {
        cout<<"dobrze"<<endl;
        wynik=wynik+1;
    }
    else
    {
        cout<<"zle"<<endl;
        wynik=wynik-1;
    }
    cout<<endl<<"Pytanie 9"<<endl<<"Stolica Gruzji jest:"<<endl<<"Odpowiedzi:"<<endl<<"A) Tbilisi"<<endl<<"B) Ryga"<<endl<<"C) Vaduz"<<endl;
    cin>>x;
    if(x==97)
    {
        cout<<"dobrze"<<endl;
        wynik=wynik+1;
    }
    else
    {
        cout<<"zle"<<endl;
        wynik=wynik-1;
    }
    cout<<endl<<"Pytanie 10"<<endl<<"Stolica Szwajcarii jest:"<<endl<<"Odpowiedzi:"<<endl<<"A) Berno"<<endl<<"B) Ankara"<<endl<<"C) Lublana"<<endl;
    cin>>x;
    if(x==97)
    {
        cout<<"dobrze"<<endl;
        wynik=wynik+1;
    }
    else
    {
        cout<<"zle"<<endl;
        wynik=wynik-1;
    }
    cout<<endl<<"Pytanie 11"<<endl<<"Stolica Sloweni jest:"<<endl<<"Odpowiedzi:"<<endl<<"A) Bratyslawa"<<endl<<"B) Lublana"<<endl<<"C) Aszchabad"<<endl;
    cin>>x;
    if(x==98)
    {
        cout<<"dobrze"<<endl;
        wynik=wynik+1;
    }
    else
    {
        cout<<"zle"<<endl;
        wynik=wynik-1;
    }
    cout<<endl<<"Pytanie 12"<<endl<<"Stolica Armeni jest:"<<endl<<"Odpowiedzi:"<<endl<<"A) Nikozja"<<endl<<"B) Sofia"<<endl<<"C) Erewan"<<endl;
    cin>>x;
    if(x==99)
    {
        cout<<"dobrze"<<endl;
        wynik=wynik+1;
    }
    else
    {
        cout<<"zle"<<endl;
        wynik=wynik-1;
    }
    cout<<endl<<"Pytanie 13"<<endl<<"Stolica Jugoslawi jest:"<<endl<<"Odpowiedzi:"<<endl<<"A) Belgrad"<<endl<<"B) Sarajewo"<<endl<<"C) Taszkent"<<endl;
    cin>>x;
    if(x==97)
    {
        cout<<"dobrze"<<endl;
        wynik=wynik+1;
    }
    else
    {
        cout<<"zle"<<endl;
        wynik=wynik-1;
    }
    cout<<endl<<"Pytanie 14"<<endl<<"Stolica Lichtenstein jest:"<<endl<<"Odpowiedzi:"<<endl<<"A) Taszkent"<<endl<<"B) Dublin"<<endl<<"C) Vaduz"<<endl;
    cin>>x;
    if(x==99)
    {
        cout<<"dobrze"<<endl;
        wynik=wynik+1;
    }
    else
    {
        cout<<"zle"<<endl;
        wynik=wynik-1;
    }
    cout<<"Total score: "<<wynik<<endl<<endl;
    cout<<"All rights are reserved by Michal Ludmann."<<endl<<endl;
    system("pause");
    return 0;
}
