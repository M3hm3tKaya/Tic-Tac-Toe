#include <iostream>

using namespace std;

void update(string alan[3][3]){
    for(int x = 0;x < 3; x++){
        for(int y = 0; y < 3; y++){
            cout << alan[x][y];
            if(y != 2)
                cout << "  |";
        }
        if(x != 2)
            cout << endl << "--- --- ---" << endl;
    }
    cout << endl;
}

int yatay_kontrol(string alan[3][3]){
    string kontrol = "";
    string kazanan = "";
    for (int x = 0; x < 3; x++){
        kontrol = alan[x][0];
        int flag = 1;
        for(int y = 0; y < 3; y++){
            if(kontrol != alan[x][y] || kontrol == " "){
                flag = 0;
                break;
            }
            kazanan = kontrol;
        }
        if(flag){
            cout << kazanan << " Kazandi" << endl;
            return 1;
        }
        else
            return 0;
    }
}


int dikey_kontrol(string alan[3][3]){
    string kontrol = "";
    string kazanan = "";
    for (int x = 0; x < 3; x++){
        kontrol = alan[0][x];
        int flag = 1;
        for(int y = 0; y < 3; y++){
            if(kontrol != alan[y][x] || kontrol == " "){
                flag = 0;
                break;
            }
            kazanan = kontrol;
        }
        if(flag){
            cout << kazanan << " Kazandi" << endl;
            return 1;
        }
        else
            return 0;
    }
}


int main()
{
    int p1 = 0, p2 = 0;
    string sira =  " X";
    string alan[3][3] = {
        {" "," "," "},
        {" "," "," "},
        {" "," "," "}
    };

    cout << endl;

    while (true){
        int satir,sutun;
        cout << "Tic Tac Toe" << endl << "-----------"<< endl << endl;
        cout << sira << " Oynuyor" << endl << endl;
        update(alan);
        cout << "(satir , sutun) giriniz : ";
        cin >> satir;
        cin >> sutun;
        if (alan[satir][sutun] != " "){
            system("cls");
            cout << "Burasi DOLU ! lutfen baska konum giriniz." << endl << endl;
            continue;
        }

        alan[satir][sutun] = sira;

        if (sira == " X")
            sira = " O";
        else
            sira = " X";
        system("cls");
        if(yatay_kontrol(alan))
            return 0;
        if(dikey_kontrol(alan))
            return 0;
    }
    return 0;
}
