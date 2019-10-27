#include <iostream>

/*
    Nama : Mamet Adil Araaf
    Nim  : A11.2017.10656
*/
using namespace std;

int main()
{
    string item_now,item_terhebat, item_terlemah="";
    string item_before="";
    int stat,high=0,low=0;
    char mau;
    awal :
    cout << "Masukkan item : ";
    cin >> item_now;
    cout << "Masukkan Stat : ";
    cin >> stat;
    cout << "Item Anda adalah : " << item_now;
    cout << "\nStat Anda adalah : " << stat;

    //item sebelumnya
    if(item_before ==""){
        cout << "\nItem Sebelumnya adalah : nothing";
        item_before = item_now;
    }
    else{
        cout << "\nItem Sebelumnya adalah : " << item_before;
        item_before = item_now;
    }
    //item terhebat
    if(stat > high ){
        high=stat;
        item_terhebat = item_now;
        cout << "\nItem Terhebat anda adalah : " << item_terhebat;
    }
    else{
        if(item_terhebat ==""){
            high=stat;
            item_terhebat = item_now;
        }
        cout << "\nItem Terhebat and adalah : " << item_terhebat;
    }
    // item terlemah


    if(stat < low){
        low=stat;
        item_terlemah = item_now;
        cout << "\nItem Terlemah anda adalah : " << item_terlemah;
    }
    else{
        if(item_terlemah ==""){
            low=stat;
            item_terlemah = item_now;
        }
        cout << "\nItem Terlemah anda adalah : " << item_terlemah;
    }
    cout << "\nMau Pilih Lagi ?";
    cin >> mau;
    if (mau == 'y' || mau == 'Y'){
        goto awal;
    }
    else{
        goto selesai;
    }
    selesai :
    cout << "Terimakasih";


    return 0;
}
