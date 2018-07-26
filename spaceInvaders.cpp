#include <eosiolib/eosio.hpp>

using namespace eosio;

class spaceinvaders : public contract {
    using contract::contract;

    public:
        spaceinvaders( account_name self ) :
            contract(self)
            {}

        // @abi action
        void spaceinvader( uint8_t move ){

        }

};

EOSIO_ABI( spaceinvaders, (spaceinvader))
