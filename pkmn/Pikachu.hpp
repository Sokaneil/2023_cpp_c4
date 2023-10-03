#ifndef PIKACHU_HPP_
#define PIKACHU_HPP_

#include <algorithm>
#include <iostream>
#include <string>
#include "APokemon.hpp"

namespace pkmn {
class Pikachu : public Apokemon {
public:
    Pikachu(const std::string &nickname)
        : Apokemon(nickname), species_name("Pikachu"), pokemon_type("Electric")
    {}
    const std::string &species() const override;
    const std::string &type() const override;

private:
    std::string species_name;
    std::string pokemon_type;
};
} // namespace pkmn

#endif /* PIKACHU_HPP_ */