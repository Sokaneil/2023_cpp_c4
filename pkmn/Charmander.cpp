#include "Charmander.hpp"

namespace pkmn {
const std::string &Charmander::species() const
{
    return species_name;
}

const std::string &Charmander::type() const
{
    return pokemon_type;
}
} // namespace pkmn
