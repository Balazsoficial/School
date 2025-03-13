//
// Created by Balazsoficial on 2025. 03. 12..
//
#include <iostream>
using namespace std;
int main() {
    int a,b,c,d,e;
    bool AB;
    bool CD;
    bool AD;
    bool BD;
    bool BC;
    bool AC;
    bool EC;
    bool ED;
    bool EA;
    bool EB;
    bool BE;
    bool DA;
    bool DB;
    bool DE;
    bool CA;
    bool CB;
    bool CE;
    bool AE;


    cout << "Igaz: 1 Hamis: 0" << endl;
    cout << "A nehezebb mint B?"<<endl;
    cin >> AB;
    if(AB)
        cout << "AB"<< endl;
    else
        cout << "BA"<< endl;

    cout << "C nehezebb mind D?"<<endl;
    cin >> CD;
    if(CD)
        cout << "CD" << endl;
    else
        cout << "DC" << endl;


    //------------------------------------------------------------------------------------------


    if (AB&&CD) //AB CD
    {
        cout << "A nehezebb mint C?"<<endl;
        cin >> AC;
        if(AC) {
            cout << "ACD"<< endl;
            cout << "E nehezebb mint C?" << endl;
            cin >> EC;
            if(EC) {
                cout << "E nehezebb mint A?" << endl;
                cin >> EA;
                if(EA) {
                    cout << "EACD" << endl; //new
                    cout << "B nehezebb mint C?" << endl;
                    cin >> BC;
                    if (BC) {
                        cout << "B nehezebb mint E?" << endl;
                        cin >> BE;
                        if (BE) {
                            cout << "Hiba" << endl;
                        }
                        else {
                            cout << "EABCD" << endl;
                        }
                    }
                    else{
                        cout << "B nehezebb mind D?" << endl;
                        cin >> BD;
                        if (BD) {
                            cout << "EACBD" << endl;
                        }
                        else
                            cout <<"EACDB" << endl;
                    }
                }
                else {//else
                    cout << "AECD" << endl;
                    cout << "B nehezebb mint C?" << endl;
                    cin >> BC;
                    if (BC) {
                        cout << "B nehezebb mint E?" << endl;
                        cin >> BE;
                        if (BE) {
                            cout << "ABECD" << endl;
                        }
                        else {
                            cout << "AEBCD" << endl;
                        }
                    }
                    else{
                        cout << "B nehezebb mind D" << endl;
                        cin >> BD;
                        if (BD) {
                            cout << "AECBD" << endl;
                        }
                        else
                            cout <<"AECDB" << endl;
                    }
                }
            }
            else {
                cout << "E nehezebb mint D?" << endl;
                cin >> ED;
                if(ED) {
                    cout << "ACED" << endl;
                    cout << "B nehezebb mint E?" << endl;
                    cin >> BE;
                    if (BE) {
                        cout << "B nehezebb mint C?" << endl;
                        cin >> BC;
                        if (BC) {
                            cout << "ABCED" << endl;
                        }
                        else {
                            cout << "ACBED" << endl;
                        }
                    }
                    else{
                        cout << "B nehezebb mind D" << endl;
                        cin >> BD;
                        if (BD) {
                            cout << "ACEBD" << endl;
                        }
                        else
                            cout <<"ACEDB" << endl;
                    }
                }
                else {
                    cout << "ACDE" << endl;
                    cout << "B nehezebb mint D?" << endl;
                    cin >> BD;
                    if (BD) {
                        cout << "B nehezebb mint C?" << endl;
                        cin >> BC;
                        if (BC) {
                            cout << "ABCDE" << endl;
                        }
                        else {
                            cout << "ACBDE" << endl;
                        }
                    }
                    else{
                        cout << "B nehezebb mind E" << endl;
                        cin >> BE;
                        if (BE) {
                            cout << "ACDBE" << endl;
                        }
                        else
                            cout <<"ACDEB" << endl;
                    }
                }
            }
        }
        else{
            cout << "CAB"<< endl;
            cout << "E nehezebb mint A?" << endl;
            cin >> EA;
            if(EA) {
                cout << "E nehezebb mint C?" << endl;
                cin >> EC;
                if(EC) {
                    cout << "ECAB" << endl;
                    cout << "D nehezebb mint A?" << endl;
                    cin >> DA;
                    if (DA) {
                        cout << "D nehezebb mint E?" << endl;
                        cin >> DE;
                        if (DE) {
                            cout << "HIBA!!!!" << endl;
                        }
                        else {
                            cout << "ECDAB" << endl;
                        }
                    }
                    else{
                        cout << "D nehezebb mind B" << endl;
                        cin >> DB;
                        if (DB) {
                            cout << "ECADB" << endl;
                        }
                        else
                            cout <<"ECABD" << endl;
                    }
                }
                else {
                    cout << "CEAB" << endl;
                    cout << "D nehezebb mint A?" << endl;
                    cin >> DA;
                    if (DA) {
                        cout << "D nehezebb mint E?" << endl;
                        cin >> DE;
                        if (DE) {
                            cout << "CDEAB" << endl;
                        }
                        else {
                            cout << "CEDAB" << endl;
                        }
                    }
                    else{
                        cout << "D nehezebb mind B" << endl;
                        cin >> DB;
                        if (DB) {
                            cout << "CEADB" << endl;
                        }
                        else
                            cout <<"CEABD" << endl;
                    }
                }

            }
            else {
                    cout << "E nehezebb mint B?" << endl;
                cin >> EB;
                if(EB) {
                    cout << "CAEB" << endl;
                    cout << "D nehezebb mint E?" << endl;
                    cin >> DE;
                    if (DE) {
                        cout << "D nehezebb mint A?" << endl;
                        cin >> DA;
                        if (DA) {
                            cout << "CDAEB" << endl;
                        }
                        else {
                            cout << "CADEB" << endl;
                        }
                    }
                    else{
                        cout << "D nehezebb mind B" << endl;
                        cin >> DB;
                        if (DB) {
                            cout << "CAEDB" << endl;
                        }
                        else
                            cout <<"CAEBD" << endl;
                    }
                }
                else {
                    cout << "CABE" << endl;
                    cout << "D nehezebb mint B?" << endl;
                    cin >> DB;
                    if (DB) {
                        cout << "D nehezebb mint A?" << endl;
                        cin >> DA;
                        if (DA) {
                            cout << "CDABE" << endl;
                        }
                        else {
                            cout << "CADBE" << endl;
                        }
                    }
                    else{
                        cout << "D nehezebb mind E" << endl;
                        cin >> DE;
                        if (DE) {
                            cout << "CABDE" << endl;
                        }
                        else
                            cout <<"CABED" << endl;
                    }
                }
            }
        }
    }
    if (AB&&!CD)//AB DC
        {
        cout << "A nehezebb mint D?"<<endl;
    cin >> AD;
    if(AD){ //if start
        cout << "ADC"<< endl;
        cout << "E nehezebb mint D?" << endl;
        cin >> ED;
        if(ED) {
            cout << "E nehezebb mint A?" << endl;
            cin >> EA;
            if(EC) {
                cout << "EADC" << endl;
                cout << "B nehezebb mint D?" << endl;
                cin >> BD;
                if (BD) {
                    cout << "B nehezebb mint E?" << endl;
                    cin >> BE;
                    if (BE) {
                        cout << "HIBA!!!!" << endl;
                    }
                    else {
                        cout << "EABDC" << endl;
                    }
                }
                else{
                    cout << "B nehezebb mind C" << endl;
                    cin >> BC;
                    if (BC) {
                        cout << "EADBC" << endl;
                    }
                    else
                        cout <<"EADCB" << endl;
                }
            }
            else {
                cout << "AEDC" << endl;
                cout << "B nehezebb mint D?" << endl;
                cin >> BD;
                if (BD) {
                    cout << "B nehezebb mint E?" << endl;
                    cin >> BE;
                    if (BE) {
                        cout << "ABEDC" << endl;
                    }
                    else {
                        cout << "AEBDC" << endl;
                    }
                }
                else{
                    cout << "B nehezebb mind C" << endl;
                    cin >> BC;
                    if (BC) {
                        cout << "AEDBC" << endl;
                    }
                    else
                        cout <<"AEDCB" << endl;
                }
            }

        }
        else {
            cout << "E nehezebb mint C?" << endl;
            cin >> EB;
            if(EB) {
                cout << "ADEC" << endl;
                cout << "B nehezebb mint E?" << endl;
                cin >> BE;
                if (BE) {
                    cout << "B nehezebb mint D?" << endl;
                    cin >> BD;
                    if (BD) {
                        cout << "ABDEC" << endl;
                    }
                    else {
                        cout << "ADBEC" << endl;
                    }
                }
                else{
                    cout << "B nehezebb mind C" << endl;
                    cin >> BC;
                    if (BC) {
                        cout << "ADEBC" << endl;
                    }
                    else
                        cout <<"ADECB"<< endl;
                }
            }
            else {
                cout << "ADCE" << endl;
                cout << "B nehezebb mint C?" << endl;
                cin >> BC;
                if (BC) {
                    cout << "B nehezebb mint D?" << endl;
                    cin >> BD;
                    if (BD) {
                        cout << "ABDCE" << endl;
                    }
                    else {
                        cout << "ADBCE" << endl;
                    }
                }
                else{
                    cout << "B nehezebb mind E" << endl;
                    cin >> BE;
                    if (BE) {
                        cout << "ADCBE" << endl;
                    }
                    else
                        cout <<"ADCEB" << endl;
                }
            }
        }


    }
    else{ //else start
        cout << "DAB"<< endl;
        cout << "E nehezebb mint A?" << endl;
        cin >> EA;
        if(EA) {
            cout << "E nehezebb mint D?" << endl;
            cin >> EC;
            if(EC) {
                cout << "EDAB" << endl;
                cout << "C nehezebb mint A?" << endl;
                cin >> CA;
                if (CA) {
                    cout << "C nehezebb mint E?" << endl;
                    cin >> CE;
                    if (CE) {
                        cout << "HIBA" << endl;
                    }
                    else {
                        cout << "EDCAB" << endl;
                    }
                }
                else{
                    cout << "C nehezebb mind B" << endl;
                    cin >> CB;
                    if (CB) {
                        cout << "EDACB" << endl;
                    }
                    else
                        cout <<"EDABC" << endl;
                }
            }
            else {
                cout << "DEAB" << endl;
                cout << "C nehezebb mint A?" << endl;
                cin >> CA;
                if (CA) {
                    cout << "C nehezebb mint E?" << endl;
                    cin >> CE;
                    if (CE) {
                        cout << "HIBA!!!" << endl;
                    }
                    else {
                        cout << "DECAB" << endl;
                    }
                }
                else{
                    cout << "C nehezebb mind B" << endl;
                    cin >> CB;
                    if (CB) {
                        cout << "DEACB" << endl;
                    }
                    else
                        cout <<"DEABC" << endl;
                }
            }

        }
        else {
            cout << "E nehezebb mint B?" << endl;
            cin >> EB;
            if(EB) {
                cout << "DAEB" << endl;
                cout << "C nehezebb mint E?" << endl;
                cin >> CE;
                if (CE) {
                    cout << "C nehezebb mint A?" << endl;
                    cin >> CA;
                    if (CA) {
                        cout << "DCAEB" << endl;
                    }
                    else {
                        cout << "DACEB" << endl;
                    }
                }
                else{
                    cout << "C nehezebb mind B" << endl;
                    cin >> CB;
                    if (CB) {
                        cout << "DAECB" << endl;
                    }
                    else
                        cout <<"DAEBC" << endl;
                }
            }
            else {
                cout << "DABE" << endl;
                cout << "C nehezebb mint B?" << endl;
                cin >> CB;
                if (CB) {
                    cout << "C nehezebb mint A?" << endl;
                    cin >> CA;
                    if (CA) {
                        cout << "DCABE" << endl;
                    }
                    else {
                        cout << "DACBE" << endl;
                    }
                }
                else{
                    cout << "C nehezebb mind E" << endl;
                    cin >> CE;
                    if (CE) {
                        cout << "DABCE" << endl;
                    }
                    else
                        cout <<"DABEC" << endl;
                }
            }
        }


    }
        }
    if (!AB&&CD) //BA CD
    {
        cout << "B nehezebb mint C?"<<endl;
        cin >> BC;
        if(BC){
            cout << "BCD"<< endl;//if
            cout << "E nehezebb mint C?" << endl;
            cin >> EC;
            if(EC) {
                cout << "E nehezebb mint D?" << endl;
                cin >> ED;
                if(ED) {
                    cout << "EBCD" << endl;
                    cout << "A nehezebb mint C?" << endl;
                    cin >> AC;
                    if (AC) {
                        cout << "A nehezebb mint E?" << endl;
                        cin >> AE;
                        if (AE) {
                            cout << "HIBAAA!!!!" << endl;
                        }
                        else {
                            cout << "EBACD" << endl;
                        }
                    }
                    else{
                        cout << "A nehezebb mind D" << endl;
                        cin >> AD;
                        if (AD) {
                            cout << "EBCAD" << endl;
                        }
                        else
                            cout <<"EBCDA" << endl;
                    }
                }
                else {
                    cout << "BECD" << endl;
                    cout << "A nehezebb mint C?" << endl;
                    cin >> AC;
                    if (AC) {
                        cout << "A nehezebb mint E?" << endl;
                        cin >> AE;
                        if (AE) {
                            cout << "BAECD" << endl;
                        }
                        else {
                            cout << "BEACD" << endl;
                        }
                    }
                    else{
                        cout << "A nehezebb mind D" << endl;
                        cin >> AD;
                        if (AD) {
                            cout << "BECAD" << endl;
                        }
                        else
                            cout <<"BECDA" << endl;
                    }
                }

            }
            else {
                cout << "E nehezebb mint B?" << endl;
                cin >> EB;
                if(EB) {
                    cout << "EBCD" << endl;
                    cout << "A nehezebb mint C?" << endl;
                    cin >> AC;
                    if (AC) {
                        cout << "A nehezebb mint E?" << endl;
                        cin >> AE;
                        if (AE) {
                            cout << "HIBA!!!" << endl;
                        }
                        else {
                            cout << "EBACD" << endl;
                        }
                    }
                    else{
                        cout << "A nehezebb mind D" << endl;
                        cin >> AD;
                        if (AD) {
                            cout << "EBCAD" << endl;
                        }
                        else
                            cout <<"EBCDA" << endl;
                    }
                }
                else {
                    cout << "BECD" << endl;
                    cout << "A nehezebb mint C?" << endl;
                    cin >> AC;
                    if (AC) {
                        cout << "A nehezebb mint E?" << endl;
                        cin >> AE;
                        if (AE) {
                            cout << "BAECD" << endl;
                        }
                        else {
                            cout << "BEACD" << endl;
                        }
                    }
                    else{
                        cout << "A nehezebb mind D" << endl;
                        cin >> AD;
                        if (AD) {
                            cout << "BECAD" << endl;
                        }
                        else
                            cout <<"BECDA" << endl;
                    }
                }
            }
                }
        else{
            cout << "CBA"<< endl; //else
        cout << "E nehezebb mint B?" << endl;
        cin >> EB;
        if(EB) {
            cout << "E nehezebb mint C?" << endl;
            cin >> EC;
            if(EC) {
                cout << "ECBA" << endl;
                cout << "D nehezebb mint B?" << endl;
                cin >> DB;
                if (DB) {
                    cout << "D nehezebb mint E?" << endl;
                    cin >> DE;
                    if (DE) {
                        cout << "HIBAAA!!!!" << endl;
                    }
                    else {
                        cout << "ECDBA" << endl;
                    }
                }
                else{
                    cout << "D nehezebb mind A" << endl;
                    cin >> DA;
                    if (DA) {
                        cout << "ECBDA" << endl;
                    }
                    else
                        cout <<"ECBAD" << endl;
                }
            }
            else {
                cout << "CEAB" << endl;
                cout << "D nehezebb mint A?" << endl;
                cin >> DA;
                if (DA) {
                    cout << "D nehezebb mint E?" << endl;
                    cin >> DE;
                    if (DE) {
                        cout << "CDEAB" << endl;
                    }
                    else {
                        cout << "CEDAB" << endl;
                    }
                }
                else{
                    cout << "D nehezebb mind B" << endl;
                    cin >> DB;
                    if (DB) {
                        cout << "CEADB" << endl;
                    }
                    else
                        cout <<"CEABD" << endl;
                }
            }
        }
        else {
            cout << "E nehezebb mint B?" << endl;
            cin >> EB;
            if(EA) {
                cout << "CBEA" << endl;
                cout << "D nehezebb mint E?" << endl;
                cin >> DE;
                if (DE) {
                    cout << "D nehezebb mint B?" << endl;
                    cin >> DB;
                    if (DB) {
                        cout << "CDBEA" << endl;
                    }
                    else {
                        cout << "CBDEA" << endl;
                    }
                }
                else{
                    cout << "C nehezebb mind A" << endl;
                    cin >> CA;
                    if (CA) {
                        cout << "CBEDA" << endl;
                    }
                    else
                        cout <<"CBEAD" << endl;
                }
            }
            else {
                cout << "CBAE" << endl;
                cout << "D nehezebb mint A?" << endl;
                cin >> DA;
                if (DA) {
                    cout << "D nehezebb mint B?" << endl;
                    cin >> DB;
                    if (DB) {
                        cout << "CDBAE" << endl;
                    }
                    else {
                        cout << "CBDAE" << endl;
                    }
                }
                else{
                    cout << "D nehezebb mind A" << endl;
                    cin >> DA;
                    if (DA) {
                        cout << "CBADE" << endl;
                    }
                    else
                        cout <<"CBAED" << endl;
                }
            }
        }
    }

        }
    if (!AB&&!CD)//BA DC
    {
        cout << "B nehezebb mint D?"<<endl;
        cin >> BD;
        if(BD){ //if start
            cout << "BDC"<< endl;
            cout << "E nehezebb mint D?" << endl;
            cin >> ED;
            if(ED) {
                cout << "E nehezebb mint B?" << endl;
                cin >> EB;
                if(EB) {
                    cout << "EBDC" << endl;
                    cout << "A nehezebb mint D?" << endl;
                    cin >> AD;
                    if (AD) {
                        cout << "A nehezebb mint E?" << endl;
                        cin >> AE;
                        if (AE) {
                            cout << "HIBAAAA!!!" << endl;
                        }
                        else {
                            cout << "EBADC" << endl;
                        }
                    }
                    else{
                        cout << "A nehezebb mind C" << endl;
                        cin >> AC;
                        if (AC) {
                            cout << "EBDAC" << endl;
                        }
                        else
                            cout <<"EBDCA" << endl;
                    }
                }
                else {
                    cout << "BEDC" << endl;
                    cout << "A nehezebb mint D?" << endl;
                    cin >> AD;
                    if (AD) {
                        cout << "A nehezebb mint E?" << endl;
                        cin >> AE;
                        if (AE) {
                            cout << "BAEDC" << endl;
                        }
                        else {
                            cout << "BEADC" << endl;
                        }
                    }
                    else{
                        cout << "A nehezebb mind C" << endl;
                        cin >> AC;
                        if (AC) {
                            cout << "BEDAC" << endl;
                        }
                        else
                            cout <<"BEDCA" << endl;
                    }
                }

            }
            else {
                cout << "E nehezebb mint C?" << endl;
                cin >> EC;
                if(EC) {
                    cout << "BDEC" << endl;
                    cout << "A nehezebb mint E?" << endl;
                    cin >> AE;
                    if (AE) {
                        cout << "A nehezebb mint D?" << endl;
                        cin >> AD;
                        if (AD) {
                            cout << "BADEC" << endl;
                        }
                        else {
                            cout << "BDAEC" << endl;
                        }
                    }
                    else{
                        cout << "A nehezebb mind C" << endl;
                        cin >> AC;
                        if (AC) {
                            cout << "BDEAC" << endl;
                        }
                        else
                            cout <<"BDECA" << endl;
                    }
                }
                else {
                    cout << "BDCE" << endl;
                    cout << "A nehezebb mint C?" << endl;
                    cin >> AC;
                    if (AC) {
                        cout << "A nehezebb mint D?" << endl;
                        cin >> AD;
                        if (AD) {
                            cout << "BADCE" << endl;
                        }
                        else {
                            cout << "BDACE" << endl;
                        }
                    }
                    else{
                        cout << "A nehezebb mind E" << endl;
                        cin >> AE;
                        if (AE) {
                            cout << "BDCAE" << endl;
                        }
                        else
                            cout <<"BDCEA" << endl;
                    }
                }
            }
        }
        else{ //else start
            cout << "DBA"<< endl;
            cout << "E nehezebb mint B?" << endl;
            cin >> EB;
            if(EB) {
                cout << "E nehezebb mint D?" << endl;
                cin >> ED;
                if(ED) {
                    cout << "EDBA" << endl;
                    cout << "C nehezebb mint B?" << endl;
                    cin >> CB;
                    if (CB) {
                        cout << "C nehezebb mint E?" << endl;
                        cin >> CE;
                        if (CE) {
                            cout << "HIBAAA!!!" << endl;
                        }
                        else {
                            cout << "EDCBA" << endl;
                        }
                    }
                    else{
                        cout << "C nehezebb mind A" << endl;
                        cin >> CA;
                        if (CA) {
                            cout << "EDBCA" << endl;
                        }
                        else
                            cout <<"EDBAC" << endl;
                    }
                }
                else {
                    cout << "DEBA" << endl;
                    cout << "C nehezebb mint B?" << endl;
                    cin >> CB;
                    if (CB) {
                        cout << "C nehezebb mint E?" << endl;
                        cin >> CE;
                        if (CE) {
                            cout << "DCEBA" << endl;
                        }
                        else {
                            cout << "DECBA" << endl;
                        }
                    }
                    else{
                        cout << "C nehezebb mind A" << endl;
                        cin >> CA;
                        if (CA) {
                            cout << "DEBCA" << endl;
                        }
                        else
                            cout <<"DEBAC" << endl;
                    }
                }

            }
            else {
                cout << "E nehezebb mint A?" << endl;
                cin >> EA;
                if(EA) {
                    cout << "DBEA" << endl;
                    cout << "C nehezebb mint E?" << endl;
                    cin >> CE;
                    if (CE) {
                        cout << "C nehezebb mint B?" << endl;
                        cin >> CB;
                        if (CB) {
                            cout << "DCBEA" << endl;
                        }
                        else {
                            cout << "DBCEA" << endl;
                        }
                    }
                    else{
                        cout << "C nehezebb mind A" << endl;
                        cin >> CA;
                        if (CA) {
                            cout << "DBECA" << endl;
                        }
                        else
                            cout <<"DBEAC" << endl;
                    }
                }
                else {
                    cout << "DBAE" << endl;
                    cout << "C nehezebb mint A?" << endl;
                    cin >> CA;
                    if (CA) {
                        cout << "C nehezebb mint B?" << endl;
                        cin >> CB;
                        if (CB) {
                            cout << "DCBAE" << endl;
                        }
                        else {
                            cout << "DBCAE" << endl;
                        }
                    }
                    else{
                        cout << "C nehezebb mind E" << endl;
                        cin >> CE;
                        if (CE) {
                            cout << "DBACE" << endl;
                        }
                        else
                            cout <<"DBACAE" << endl;
                    }
                }
            }
        }
    }

    //------------------------------------------------------------------------------------------







}