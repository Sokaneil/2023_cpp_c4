#include "Charmander.hpp"

namespace pkmn {
Charmander::Charmander(const std::string &nickname)
    : nickname_(nickname), pkmnhealth(100)
{}

const std::string &Charmander::species() const
{
    static const std::string species_name = "Charmander";
    return species_name;
}

const std::string &Charmander::type() const
{
    static const std::string pokemon_type = "Fire";
    return pokemon_type;
}

const std::string &Charmander::name() const
{
    return nickname_;
}

const int &Charmander::hp() const
{
    return pkmnhealth;
}

int &Charmander::health()
{
    return pkmnhealth;
}

bool Charmander::fainted() const
{
    return pkmnhealth <= 0;
}
} // namespace pkmn
