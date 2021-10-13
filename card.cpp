#include "card.hpp"

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