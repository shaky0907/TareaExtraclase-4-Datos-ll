#include "MD5Receiver.h"

bool MD5Receiver::checkIntegrityFromMessage(string inData, string hash) {
    if (md5Transmitter.md5(inData) == hash){
        return true;
    }
    else{
        return false;}
}