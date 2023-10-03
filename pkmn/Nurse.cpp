#include "Nurse.hpp"
#include <ostream>
#include "Charmander.hpp"
#include "IPokemon.hpp"
#include "Pikachu.hpp"

namespace pkmn {
Nurse::Nurse() : name_("Joy")
{}

void Nurse::heal(Ipokemon &pk) const
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

const std::string &Nurse::name() const
{
    return name_;
}
} // namespace pkmn