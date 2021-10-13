#include <string>

class Card {
    std::string value;
    std::string suite;

    public:
        std::string get_value();
        void set_value(std::string card_value);
        std::string get_suite();
        void set_suite(std::string card_suite);
        Card(std::string new_value, std::string new_suite);

};