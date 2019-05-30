#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cmath>

/*komentarz bo komentarze sa wazne jak sie kod pisze*/

using namespace std;


    float dodawanie(float a, float b){
        return a+b;
    }

    float odejmowanie(float a,float b){
        return a+b;
    }

    float mnozenie(float a,float b){
        return a*b;
    }

    float dzielenie(float a,float b){
        return a/b;
    }

    float potegowanie(float a,float b){
        return pow(a,b);
    }

    int fibbonachi(int fib){
    int wyn1, wyn2, wyn3, clk;
    wyn1=1;
    wyn2=1;
    clk=2;

    if(fib==1 || fib==2){return 1;}

    while (true){
        wyn3=wyn1+wyn2;
        wyn1=wyn2;
        wyn2=wyn3;
        clk++;

        if(clk==fib){return(wyn3); break;}
    }
    }

    int liczbydrugie(int a){
        int ctr;
        for(int i=2; i<a; i++){
            if(a%i!=0){
               ctr++;
            }
        }

        if(ctr==0){
            cout<<"Liczba pierwsza";
        }
        else{
            cout<<"Liczba nie pierwsza";
        }
    }



    int trojkat(int ram1, int ram2, int ram3){
        //funkcja zwraca 1 jako "tak" i 0 jako "nie"

        if(ram1>ram2+ram3 || ram2>ram1+ram3 || ram3>ram1+ram2){return 1;}
        else{return 0;}

    }

int main()
{
    int choice = 0;
    int a;
    int b;
    cout<< "Nacisnij 1 aby wykonac dodawanie \n";
    cout<< "Nacisnij 2 aby wykonac odejmowanie \n";
    cout<< "Nacisnij 3 aby wykonac mnozenie \n";
    cout<< "Nacisnij 3 aby wykonac dzielenie \n";
    cout<< "Nacisnij 4 any wykonac ciag Fibonaciego \n";
    cout<< "Nacisnij 5 aby wykonac silnie \n";
    cout<<">", cin>>choice, cout<<"\n";


    if(choice == 1){
        cout<<"Podaj liczby: \n";
        cout<<"a: \n";
        cin>>a;
        cout<<"b: \n";
        cin>>b;
        cout<<dodawanie(a, b)<<endl;
    }
    if(choice == 2){
        cout<<"Podaj liczby: \n";
        cout<<"a: \n";
        cin>>a;
        cout<<"b: \n";
        cin>>b;
        cout<<odejmowanie(a, b)<<endl;
    }
    if(choice == 3){
        cout<<"Podaj liczby: \n";
        cout<<"a: \n";
        cin>>a;
        cout<<"b: \n";
        cin>>b;
        cout<<mnozenie(a, b)<<endl;
    }
    if(choice == 4){
        cout<<"Podaj liczby: \n";
        cout<<"a: \n";
        cin>>a;
        cout<<"b: \n";
        cin>>b;
        cout<<dzielenie(a, b)<<endl;
    }

    return 0;
}
