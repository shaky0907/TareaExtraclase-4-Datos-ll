//
// Created by INTEL on 09/06/2021.
//

#include "SHA1Transmitter.h"


string SHA1Transmitter::getHashToSend(string message) {
    cout<<"Lado del Transmissor:\n\n";
    string str = message;

    CSHA1 sha1;
    string strReport;

    sha1.Update((UINT_8*)str.c_str(), str.size() * sizeof(TCHAR));
    sha1.Final();
    sha1.ReportHashStl(strReport, CSHA1::REPORT_HEX_SHORT);
    cout << _T("Mensaje en codigo HASH:") << endl;
    cout << strReport << endl;
    cout<<"Mensaje enviado: "<<message<<endl;


    return strReport;
}