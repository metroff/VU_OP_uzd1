#include <iostream>
#include <string>

int check_number(std::string value){
    for(int i = 0; i < value.length(); i++) {
        if(!std::isdigit(value[i])) return 0;
    }
    return std::stoi(value);
}

int main(){
    std::string name, greeting;
    int greetingCardWidth;
    
    std::cout << "Iveskite savo varda: ";
    std::cin >> name;

    greeting = (name.back() == 's') ? " Sveikas, " : " Sveika, ";

    greeting += name + "! ";

    do {
        std::string width;
        std::cout << "Iveskite remelio ploti (daugiau nei 2): ";
        std::cin >> width;

        greetingCardWidth = check_number(width);
        
    } while (greetingCardWidth < 3);

    int greetingLength = greeting.length();

    std::cout << std::endl;

    for (int i = 0; i < greetingCardWidth; i++){
        std::string line = "*";
        if (i==0 || i == greetingCardWidth-1) {
            line += std::string(greetingLength, '*');
        } else if(i == (greetingCardWidth / 2)) {
            line += greeting;
        } else {
            line += std::string(greetingLength, ' ');
        }
        line += "*\n";
        
        std::cout << line;
    }
}