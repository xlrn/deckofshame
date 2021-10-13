#include <iostream>
#include "card.hpp"

int main() {

    Card sixOfSpades("6", "Spades");
    std::cout<<sixOfSpades.get_suite()<<"\n";
    return 0;
}