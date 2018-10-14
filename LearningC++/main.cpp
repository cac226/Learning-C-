//
//  main.cpp
//  LearningC++
//
//  Created by Caitlin Campbell on 10/3/18.
//  Copyright © 2018 Caitlin Campbell. All rights reserved.
//

#include <iostream>
using namespace std;

int roll();
int roll_runner();
int counting_letters();

int main(int argc, const char * argv[]) {
    cout << counting_letters();
    return 0;
}

int counting_letters() {
    string input = "";
    int letter_counter = 0;
    
    cout << "Type some stuff: ";
    getline (cin,input);
    
    for(int i = 0; i < input.length(); i++) {
        int letter_ascii = int(input[i]);
        if((letter_ascii <= 90 &&  letter_ascii >= 65) ||
           (letter_ascii <= 122 && letter_ascii >= 97)) {
            letter_counter++;
        }
    }
    
    return letter_counter;
}

int roll_runner() {
    string var = "";
    
    std::cout << "Please type X to roll die: ";
    std::cin >> var;
    if(var == "X") {
        cout << "Dice Result: ";
        cout << roll() << endl;
    } else {
        cout << "No dice!";
    }
    return 0;
}

int roll() {
    srand(time(NULL));
    int dice = (rand() % 6) + 1;
    return dice;
}
/*
bool greeting() {
    char input;
    std::cout << "Press X to roll a die, or Z to exit\n";
    std::cin >> input;
    
    if(input == 'X') {
        std::cout << "You typed X!";
        return true;
    }
    return false;
}
*/
