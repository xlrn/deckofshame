#include "card.hpp"

Card::Card(std::string new_value, std::string new_suite) {
    value = new_value;
    suite = new_suite;
}

std::string Card::get_value() {
    return value;
}

void Card::set_value(std::string card_value) {
    value = card_value;
}

std::string Card::get_suite() {
    return suite;
}

void Card::set_suite(std::string card_suite) {
    suite = card_suite;
}