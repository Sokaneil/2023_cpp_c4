#include "Pikachu.hpp"

namespace pkmn {
Pikachu::Pikachu(const std::string &nickname)
    : nickname_(nickname), pkmnhealth(100)
{}

const std::string &Pikachu::species() const
{
    static const std::string species_name = "Pikachu";
    return species_name;
}

const std::string &Pikachu::type() const
{
    static const std::string pokemon_type = "Electric";
    return pokemon_type;
}

const std::string &Pikachu::name() const
{
    return nickname_;
}

const int &Pikachu::health() const
{
    return pkmnhealth;
}

int &Pikachu::health()
{
    return pkmnhealth;
}

bool Pikachu::fainted() const
{
    return pkmnhealth <= 0;
}
} // namespace pkmn
