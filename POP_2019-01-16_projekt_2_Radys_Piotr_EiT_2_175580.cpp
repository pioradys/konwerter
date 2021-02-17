//POP 2018-01-17 projekt 2 Kowalski Piotr AIR 3 173254 Code::blocks
#include <iostream>
#include <fstream>
#include <cstdio>
using namespace std;


int kompresja(char b){
    int a;
    switch(b){
    case 'a' :
    a=0;
    break;
    case 'b' :
    a=1;
    break;
    case 'c' :
    a=2;
    break;
    case 'd' :
    a=3;
    break;
    case 'e' :
    a=4;
    break;
    case 'f' :
    a=5;
    break;
    case 'g' :
    a=6;
    break;
    case 'h' :
    a=7;
    break;
    case 'i' :
    a=8;
    break;
    case 'j' :
    a=9;
    break;
    case 'k' :
    a=10;
    break;
    case 'l' :
    a=11;
    break;
    case 'm' :
    a=12;
    break;
    case 'n' :
    a=13;
    break;
    case 'o' :
    a=14;
    break;
    case 'p' :
    a=15;
    break;
    case 'q' :
    a=16;
    break;
    case 'r' :
    a=17;
    break;
    case 's' :
    a=18;
    break;
    case 't' :
    a=19;
    break;
    case 'u' :
    a=20;
    break;
    case 'v' :
    a=21;
    break;
    case 'w' :
    a=22;
    break;
    case 'x' :
    a=23;
    break;
    case 'y' :
    a=24;
    break;
    case 'z' :
    a=25;
    break;
    case 'A' :
    a=26;
    break;
    case 'B' :
    a=27;
    break;
    case 'C' :
    a=28;
    break;
    case 'D' :
    a=29;
    break;
    case 'E' :
    a=30;
    break;
    case 'F' :
    a=31;
    break;
    case 'G' :
    a=32;
    break;
    case 'H' :
    a=33;
    break;
    case 'I' :
    a=34;
    break;
    case 'J' :
    a=35;
    break;
    case 'K' :
    a=36;
    break;
    case 'L' :
    a=37;
    break;
    case 'M' :
    a=38;
    break;
    case 'N' :
    a=39;
    break;
    case 'O' :
    a=40;
    break;
    case 'P' :
    a=41;
    break;
    case 'Q' :
    a=42;
    break;
    case 'R' :
    a=43;
    break;
    case 'S' :
    a=44;
    break;
    case 'T' :
    a=45;
    break;
    case 'U' :
    a=46;
    break;
    case 'V' :
    a=47;
    break;
    case 'W' :
    a=48;
    break;
    case 'X' :
    a=49;
    break;
    case 'Y' :
    a=50;
    break;
    case 'Z' :
    a=51;
    break;
    case '0' :
    a=52;
    break;
    case '1' :
    a=53;
    break;
    case '2' :
    a=54;
    break;
    case '3' :
    a=55;
    break;
    case '4' :
    a=56;
    break;
    case '5' :
    a=57;
    break;
    case '6' :
    a=58;
    break;
    case '7' :
    a=59;
    break;
    case '8' :
    a=60;
    break;
    case '9' :
    a=61;
    break;
    case ' ' :
    a=62;
    break;
    case ',' :
    a=63;
    break;
    case '.' :
    a=64;
    break;
    case '+' :
    a=65;
    break;
    case '-' :
    a=66;
    break;
    case '*' :
    a=67;
    break;
    case '/' :
    a=68;
    break;
    case '=' :
    a=69;
    break;
    case '(' :
    a=70;
    break;
    case ')' :
    a=71;
    break;
    case 0x0a :
    a=72;
    break;
    default:
    a=73;
    break;
    }
    return a;
    };



    string dekompresja(int b)
    {
    string a;

    switch(b){
    case 0 :
    a='a';
    break;
    case 1 :
    a='b';
    break;
    case 2 :
    a='c';
    break;
    case 3 :
    a='d';
    break;
    case 4 :
    a='e';
    break;
    case 5 :
    a='f';
    break;
    case 6 :
    a='g';
    break;
    case 7 :
    a='h';
    break;
    case 8 :
    a='i';
    break;
    case 9 :
    a='j';
    break;
    case 10 :
    a='k';
    break;
    case 11 :
    a='l';
    break;
    case 12 :
    a='m';
    break;
    case 13 :
    a='n';
    break;
    case 14 :
    a='o';
    break;
    case 15 :
    a='p';
    break;
    case 16 :
    a='q';
    break;
    case 17 :
    a='r';
    break;
    case 18 :
    a='s';
    break;
    case 19 :
    a='t';
    break;
    case 20 :
    a='u';
    break;
    case 21 :
    a='v';
    break;
    case 22 :
    a='w';
    break;
    case 23 :
    a='x';
    break;
    case 24 :
    a='y';
    break;
    case 25 :
    a='z';
    break;
    case 26 :
    a='A';
    break;
    case 27 :
    a='B';
    break;
    case 28 :
    a='C';
    break;
    case 29 :
    a='D';
    break;
    case 30 :
    a='E';
    break;
    case 31 :
    a='G';
    break;
    case 32 :
    a='G';
    break;
    case 33 :
    a= 'H';
    break;
    case 34 :
    a='I';
    break;
    case 35 :
    a='J';
    break;
    case 36 :
    a='K';
    break;
    case 37 :
    a='L';
    break;
    case 38 :
    a='M';
    break;
    case 39 :
    a='N';
    break;
    case 40 :
    a='O';
    break;
    case 41 :
    a='P';
    break;
    case 42 :
    a='Q';
    break;
    case 43 :
    a='R';
    break;
    case 44 :
    a='S';
    break;
    case 45 :
    a='T';
    break;
    case 46 :
    a='U';
    break;
    case 47 :
    a='V';
    break;
    case 48 :
    a='W';
    break;
    case 49 :
    a='X';
    break;
    case 50 :
    a='Y';
    break;
    case 51 :
    a='Z';
    break;
    case 52 :
    a='0';
    break;
    case 53 :
    a='1';
    break;
    case 54 :
    a='2';
    break;
    case 55 :
    a='3';
    break;
    case 56 :
    a='4';
    break;
    case 57 :
    a='5';
    break;
    case 58 :
    a='6';
    break;
    case 59 :
    a='7';
    break;
    case 60 :
    a='8';
    break;
    case 61 :
    a='9';
    break;
    case 62 :
    a= ' ';
    break;
    case 63 :
    a=',';
    break;
    case 64 :
    a='.';
    break;
    case 65 :
    a='+';
    break;
    case 66 :
    a='-';
    break;
    case 67 :
    a='*';
    break;
    case 68 :
    a='/';
    break;
    case 69 :
    a='=';
    break;
    case 70 :
    a='(';
    break;
    case 71 :
    a=')';
    break;
    case 72 :
    a=0x0a;
    break;
    case 73:
    a='#';
    break;
    default:
    a=b;
    break;
    }
    return a;
    }
int main()
{
    cout<<"Jesli chcesz zaimportowac wlasny plik do kompresji wpisz 1"<<endl;
    cout<<"Jesli chcesz zdekompresowac wlasny tekst i pozniej go wyeksportowac wpisz 2"<<endl;
    char a;
    bool eof();
    int cof,n,bef[512],wypi,m,pis[512],pomoc1,pomoc2,pomoc3,pomoc4,wybor;
    string b,aft[512],wyp[512],nazwapliku,nazwapliku2;
    fstream plik,plik2;
    cin >> wybor;

    if(wybor==1)
    {
    cout<<"Wpisz nazwe pliku do odczytania"<<endl;
    cin >> nazwapliku;
    cout<<"Wpisz nazwe pliku do zapisu"<<endl;
    cin>>nazwapliku2;
    plik.open(nazwapliku.c_str(),ios::in);
    n=0;
    m=0;
    while(!plik.eof())//wczytywanie calego tekstu
    {
    plik >> std::noskipws >> a;
    bef[n]=kompresja(a);
    n++;
    }
    plik.close();
    plik2.open(nazwapliku2.c_str(),ios::out);
     for(int i=0;i<n;i++){
            pis[m]=bef[i];
            m++;
            if(bef[i+1]==bef[i])
            {
                pomoc1=74;
                pomoc2=0;
                i++;
                while(bef[i+1]==bef[i]){
                pomoc1++;
                i++;
                }
                pis[m]=pomoc1;
                m++;
                pis[m]=pomoc2;
                m++;
            }
            if((bef[i+1]==bef[i-1])&&(bef[i+2]==bef[i]))
            {
                pomoc1=74;
                pomoc2=1;
                i++;
                i++;
                while((bef[i+2]==bef[i])&&(bef[i-1]==bef[i+1])){
                pomoc1++;
                i++;
                i++;
                }
                pis[m]=pomoc1;
                m++;
                pis[m]=pomoc2;
                m++;
            }
            if((bef[i+2]==bef[i-1])&&(bef[i+3]==bef[i])&&(bef[i+1]==bef[i-2]))
            {

                pomoc1=74;
                pomoc2=2;
                i++;
                i++;
                i++;
                while((bef[i+2]==bef[i-1])&&(bef[i+3]==bef[i])&&(bef[i+1]==bef[i-2])){
                pomoc1++;
                i++;
                i++;
                i++;
                }
                pis[m]=pomoc1;
                m++;
                pis[m]=pomoc2;
                m++;
            }

    }
    for(int i=0;i<m;i++)
    {
            plik2<<pis[i];
            plik2<<endl;
    }
    plik2.close();
    }
    else if(wybor==2)
    {n=0;
    cout<<"Wpisz nazwe pliku do odczytania"<<endl;
    cin >> nazwapliku;
    cout<<"Wpisz nazwe pliku do zapisu"<<endl;
    cin>>nazwapliku2;
    plik.open(nazwapliku.c_str(),ios::in);
    while(!plik.eof()){
    plik >> bef[n];
    n++;
    }
    plik.close();
    plik2.open(nazwapliku2.c_str(),ios::out);
    m=0;
    pomoc4=0;
    for(int i=0;i<n;i++)
    {

            pomoc3=bef[pomoc4];
            pomoc4++;
            if(pomoc3>73)//sprawdzenie czy to powtorzenie czy znak
            {
                cof=bef[pomoc4];
                cof++;
                 wypi=pomoc3-73;
                 for(int j=0; j<wypi; j++)//liczenie powtorzen
                 {
                     for(int k=0;k<cof;k++)
                     {
                         wyp[m]=aft[i-cof+k];
                         m++;
                     }
                 }
                 i++;
            }
            else
                {
                    aft[i]=dekompresja(pomoc3);
                    wyp[m]=aft[i];
                    m++;
                }
    }

    for(int i=0;i<m;i++)
    {
        plik2<<wyp[i];
    }
    plik2.close();
    }
    else
    {
        cout<<"bledny wybor";
    }



    return 0;
}

