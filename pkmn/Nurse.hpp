#ifndef NURSE_HPP_
#define NURSE_HPP_

#include <algorithm>
#include <iostream>
#include <string>
#include "Charmander.hpp"
#include "IPokemon.hpp"
#include "Pikachu.hpp"

namespace pkmn {
class Nurse {
public:
    Nurse();
    void               heal(Ipokemon &pk) const;
    const std::string &name() const;

private:
    std::string name_;
};
} // namespace pkmn

#endif /* NURSE_HPP_ */