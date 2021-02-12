#include <iostream>
#include <string>

int main(){
    std::string name, border="*", fill="*", greeting="*", fill1, border1;
    std::cout << "Iveskite savo varda: ";
    std::cin >> name;

    if (name.back() == 's') {
        greeting += " Sveikas, ";
    } else {
        greeting += " Sveika, ";
    }

    greeting += name + "! *\n";
    int length = greeting.length();
    for(int i = 0; i < length-3; i++){
        border+="*";
        fill+=" ";
    }
    border += "*\n";
    fill += "*\n";

    fill1 = fill;
    border1 = border;

    std::cout << std::endl;
    
    std::cout << border << fill << greeting << fill1 << border1;
}