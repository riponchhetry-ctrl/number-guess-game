#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int generate(){
    int random = 0;
    cout << "a number  has been generated for you to guess.";
    srand(time(NULL));
    random = rand() % 100;
    return random;
}

int guess(){
    cout<<"enter your guess for the random number:";
    int guess =0 ;
    cin >> guess;
    return guess;
}

bool compare(int generated_number, int guess_number){
    
    int diffrence = 0;
    diffrence = abs(generated_number-guess_number) ;
    if (diffrence>50){
        (generated_number<guess_number)? cout <<"number is too small" : cout << "number is too large"; 
    }
    else if (diffrence>25 && diffrence < 50){
        (generated_number<guess_number)? cout <<"number is smaller" : cout << "number is larger"; 
    }
    else if (diffrence > 1 && diffrence < 25){
        cout<<"numbre is close...";
    }
    else{
        cout<<"congratulation...";
        return true;
    }
    return false;
    
}

int main() {
    int generated_number , guess_number ;
    bool comparision =false;
    generated_number = generate();
    while (!comparision){
        guess_number = guess();
        comparision = compare(generated_number, guess_number);
    }
    return 0;
}