#include "Nurse.hpp"
#include <ostream>
#include "Pikachu.hpp"
#include "Charmander.hpp"

namespace pkmn {
Nurse::Nurse() : name_("Joy")
{}

void Nurse::heal(Pikachu &pk) const
{
    if (pk.health() <= 50) {
        std::cout << "There there " << pk.name()
                  << ", you should feel way better now!" << std::endl;
        pk.health() = 100;
    } else if (pk.health() < 100) {
        std::cout << "That should do it, " << pk.name() << "!" << std::endl;
        pk.health() = 100;
    } else {
        std::cout << "You already are in tip-top shape, " << pk.name()
                  << std::endl;
    }
}


void Nurse::heal(Charmander &ch) const
{
    if (ch.health() <= 50) {
        std::cout << "There there " << ch.name()
                  << ", you should feel way better now!" << std::endl;
        ch.health() = 100;
    } else if (ch.health() < 100) {
        std::cout << "That should do it, " << ch.name() << "!" << std::endl;
        ch.health() = 100;
    } else {
        std::cout << "You already are in tip-top shape, " << ch.name()
                  << std::endl;
    }
}


const std::string &Nurse::name() const
{
    return name_;
}
} // namespace pkmn