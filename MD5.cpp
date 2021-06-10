#include <iostream>
#include <string>

#include "MD5/MD5Transmitter.h"
#include "MD5/MD5Receiver.h"
#include "MD5/MD5Receiver.cpp"
#include "MD5/MD5Transmitter.cpp"

using namespace std;

int main(){
    cout<<"MD5:"<<endl;

    MD5Transmitter md5T;
    MD5Receiver md5R;
    string ms;
    string rs;

    cout << "Por favor ingrese el mensaje que deseas encriptar:\n";
    cin >> ms;
    cout << "hash obtenido:";
    string hashMS = md5T.md5(ms);
    cout<<hashMS<<endl;

    cout << "Por favor ingrese el mensaje que llego al otro lado:\n";
    cin >> rs;

    if (md5R.checkIntegrityFromMessage(rs,hashMS)){
        cout<<"No hay ningun error en el mensaje"<<endl;
    }
    else{
        cout<<"La integridad del mensaje se ha perdido"<<endl;
    }

    return 0;
}