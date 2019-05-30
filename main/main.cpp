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

int main()
{
    cout<< "Naciœnij 1 aby wykonaæ dodawanie \n";
    cout<< "Naciœnij 2 aby wykonaæ odejmowanie \n";
    cout<< "Naciœnij 3 aby wykonaæ mno¿enie \n";
    cout<< "Naciœnij 3 aby wykonaæ dzielenie \n";
    cout<< "Naciœnij 4 any wykonaæ ci¹g Fibonaciego \n";
    cout<< "Naciœnij 5 aby wykonaæ silnie \n";



    return 0;
}
