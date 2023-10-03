#include "Pikachu.hpp"

namespace pkmn {
const std::string &Pikachu::species() const
{
    return species_name;
}

const std::string &Pikachu::type() const
{
    return pokemon_type;
}
} // namespace pkmn
