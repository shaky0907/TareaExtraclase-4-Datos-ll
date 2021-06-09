#include <iostream>
#include <string>

#include "SHA1/SHA1.h"
#include "SHA1/SHA1Transmitter.h"
#include "SHA1/SHA1Receiver.h"

using namespace std;


int main(int argc, TCHAR* argv[])
{
    // Ejemplo de SHA1
    // Ejemplo de validación de la integridad de los datos

    string message;
    SHA1Transmitter transmitter;
    SHA1Receiver receiver;

    cout << "Escriba el mensaje que quiere enviar:";
    cin >> message;
    cout<<"----------------------------------"<<endl;
    string hashFromInput = transmitter.getHashToSend(message);

    //Para ver el ejemplo donde el dato es alterado se descomenta la siguiente linea
    //hashFromInput = "9F052493C87A72E91162A2815270919B9DE3A6D6";

    cout<<"----------------------------------"<<endl;
    cout<<"Lado del Receptor\n\n";
    string msgRec;
    cout<<"Escriba el mensaje recibido: ";
    cin >>msgRec;


    if (receiver.checkIntegrityFromMessage(msgRec, hashFromInput)){
        cout<<"----------------------------------"<<endl;
        cout << "El mensaje llego completo y sin ningun error"<< endl ;
    }else{
        cout<<"----------------------------------"<<endl;
        cout << "El mensaje perdio su integridad a la hora de enviarse" << endl ;
    }


	return 0;
}

