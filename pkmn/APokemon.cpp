#include "APokemon.hpp"

namespace pkmn {
Apokemon::Apokemon(const std::string &nickname)
    : nickname_(nickname), pkmnhealth(100)
{}

const std::string &Apokemon::name() const
{
    return nickname_;
}

const int &Apokemon::health() const
{
    return pkmnhealth;
}

int &Apokemon::health()
{
    return pkmnhealth;
}

bool Apokemon::fainted() const
{
    return pkmnhealth <= 0;
}
} // namespace pkmn
