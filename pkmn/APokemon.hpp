#ifndef APOKEMON_HPP_
#define APOKEMON_HPP_

#include "IPokemon.hpp"

namespace pkmn {
class Apokemon : public Ipokemon {
public:
    Apokemon(const std::string &nickname);
    virtual const std::string &species() const = 0;
    virtual const std::string &type() const    = 0;
    const std::string         &name() const override;
    const int                 &health() const override;
    int                       &health() override;
    bool                       fainted() const override;

private:
    std::string nickname_;
    int         pkmnhealth;
};
} // namespace pkmn

#endif /* APOKEMON_HPP_ */