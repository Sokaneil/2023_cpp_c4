#ifndef CHARMANDER_HPP_
#define CHARMANDER_HPP_

#include <algorithm>
#include <iostream>
#include <string>
#include "APokemon.hpp"

namespace pkmn {
class Charmander : public Apokemon {
public:
    Charmander(const std::string &nickname)
        : Apokemon(nickname), species_name("Charmander"), pokemon_type("Fire")
    {}
    const std::string &species() const override;
    const std::string &type() const override;

private:
    std::string species_name;
    std::string pokemon_type;
};
} // namespace pkmn

#endif /* CHARMANDER_HPP_ */