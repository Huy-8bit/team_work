//
//  main.cpp
//  Exe1_2
//
//  Created by Hoang Yen on 05/10/2021.
//

#include <iostream>
#include <math.h>
using namespace std;

struct Sophuc
{
    float phanthuc;
    float phanao;
};

void CongSP (Sophuc sp1, Sophuc sp2)
{
    float kqphanthuc = 0;
    float kqphanao = 0;
    
    kqphanthuc = sp1.phanthuc + sp2.phanthuc;
    kqphanao = sp1.phanao + sp2.phanao;
    cout << "Ket qua phan thuc : " << kqphanthuc << " va phan ao : " << kqphanao << endl;
    cout << "Tong" << kqphanthuc << "+" <<kqphanao << "i" << endl;
    float tongsplienhop = 2*kqphanthuc;
    cout << " Tong la : " << tongsplienhop << endl; // tong cua mot so phuc voi so phuc lien hop
}

void TruSP (Sophuc sp1, Sophuc sp2)
{
    float kqphanthuc = 0;
    float kqphanao = 0;
    kqphanthuc = sp1.phanthuc - sp2.phanthuc;
    kqphanao = sp1.phanao - sp2.phanao;
    cout << "Ket qua phan thuc : " << kqphanthuc << " va phan ao : " << kqphanao << endl;
    cout << "Hieu" << kqphanthuc << "-" <<kqphanao << "i" << endl;
}

void NhanSP (Sophuc sp1, Sophuc sp2)
{
    float tichthuc = 0;
    float tichao = 0;
    tichthuc = sp1.phanthuc*sp2.phanthuc - sp1.phanao*sp2.phanao;
    tichao = sp1.phanthuc*sp2.phanthuc + sp1.phanao*sp2.phanao;
    cout << "Ket qua phan thuc : " << tichthuc << " va phan ao : " << tichao << endl;
    cout << "Tich" << tichthuc << "+" << tichao << "i" << endl;
    
}

void ChiaSP (Sophuc sp1, Sophuc sp2)
{
    float thuongthuc = 0;
    float thuongao = 0;
    float tuso = sp1.phanthuc*sp2.phanao - sp1.phanao*sp2.phanthuc;
    float mauso = sqrt(pow(sp1.phanthuc,2) + (sp1.phanao,2));
    thuongao = tuso / mauso;
    float tuso1 = sp1.phanthuc*sp1.phanthuc + sp2.phanao*sp2.phanao;
    thuongthuc = tuso1 / mauso;
    cout << "Ket qua phan thuc : " << thuongthuc << " va phan ao : " << thuongao << endl;
    cout << "Thuong" << thuongthuc << "+" << thuongao << "i" << endl;
}

// gop phan compute module vao phan ChiaSP
int main()
{
    Sophuc sp1,sp2;
    cout << "Nhap so phuc 1 (phan thuc): ";
    cin >> sp1.phanthuc;
    cout << "Nhap so phuc 1 (phan ao): ";
    cin >> sp1.phanao;
    cout << "Nhap so phuc 2 (phan thuc): ";
    cin >> sp2.phanthuc;
    cout << "Nhap so phuc 2 (phan ao): ";
    cin >> sp2.phanao;
    CongSP(sp1, sp2);
    TruSP(sp1, sp2);
    NhanSP(sp1, sp2);
    ChiaSP(sp1, sp2);
    return 0;
}
