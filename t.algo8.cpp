#include <iostream>
using namespace::std;
float total;
double input (string text){
    double total;
    cout<<"Inputan Nilai "<<text<<" : ";cin>>total;
    return total;
}
void grade (double total){
    if(total>80)
        cout<<"\nA";
    else if(total>60)
        cout<<"\nB";
    else if(total>40)
        cout<<"\nC";
    else if(total>20)
        cout<<"\nD";
    else if(total>0)
        cout<<"\nE";
    }
struct hasil{
    double hasiluts,hasiluas,hasiltugas,hasilabsen;
    double total;}; hasil h;
main()
{
    double uts,uas,tugas,absen,total;
    uts = input("UTS");
    uas = input("UAS");
    tugas = input("TUGAS");
    absen = input("ABSEN");
    h.hasiluts=20*uts/100;
    h.hasiluas=30*uas/100;
    h.hasiltugas=35*tugas/100;
    h.hasilabsen=15*absen/100;
    total=h.hasiluts+h.hasiluas+h.hasiltugas+h.hasilabsen;
    cout<<"\nNilai Anda : "<<total;
    grade(total);
}
