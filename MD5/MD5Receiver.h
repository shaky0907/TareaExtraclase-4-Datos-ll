#ifndef TAREAEXTRACLASE_4_DATOS_LL_MDRECEIVER_H
#define TAREAEXTRACLASE_4_DATOS_LL_MDRECEIVER_H

#include "string"
#include "MD5Transmitter.h"
using namespace std;

class MD5Receiver {

public:
    bool checkIntegrityFromMessage(string inData, string hash);

private:
    MD5Transmitter md5Transmitter;
};

#endif //TAREAEXTRACLASE_4_DATOS_LL_MDRECEIVER_H
