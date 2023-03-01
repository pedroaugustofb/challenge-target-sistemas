#include <iostream>

using   namespace std;

int main () {

    int sum = 0, beforeRef = 1, afterRef = 1; // starting int variables
    
    
    int number = (cin >> (cout << "|----------------> Digite o codigo correspondente a operacao que deseja: ",number), number);


    while(number > sum){
        sum = afterRef + beforeRef;
        beforeRef = afterRef;
        afterRef = sum;
    }


    if (number == 0 || number == 1 || number == sum) {
        cout << "The number is part of the Fibonacci sequence."; // O número faz parte da sequência de Fibonacci.
    
    } else {
        cout << "The number entered is not part of the Fibonacci sequence."; // O número digitado não faz parte da sequência de Fibonacci.
    }

}

