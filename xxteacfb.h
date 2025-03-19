#ifndef XXTEACFB_H
#define XXTEACFB_H

#include "xxteaencryptor.h"

class XXteaCFB : public XXteaEncryptor
{
    uint32_t *iv;
public:
    void setIV(uint32_t *iv){
        this->iv=iv;
    }
    XXteaCFB( uint32_t *k,uint32_t *iv);
    virtual QByteArray encrypt(const QByteArray& data)override;
    virtual QByteArray decrypt(const QByteArray& data)override;
};

#endif // XXTEACFB_H
