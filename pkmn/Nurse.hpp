#ifndef NURSE_HPP_
#define NURSE_HPP_

#include <algorithm>
#include <iostream>
#include <string>
#include "Charmander.hpp"
#include "Pikachu.hpp"

namespace pkmn {
class Nurse {
public:
    Nurse();
    void               heal(Charmander &ch) const;
    void               heal(Pikachu &pk) const;
    const std::string &name() const;

private:
    std::string name_;
};
} // namespace pkmn

#endif /* NURSE_HPP_ */