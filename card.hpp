#include <string>

class Card {
    std::string value;
    std::string suite;
    std::string colour;

    public:
        std::string get_value();
        void set_value(std::string card_value);
        std::string get_suite();
        void set_suite(std::string card_suite);
};