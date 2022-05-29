#include <iostream>
#include <conio.h>
using namespace std;

//pelengkap
void bentuk(){
    cout << "**";
}
void bentuk2(){
    cout << "[]";
}
void luar(){
    cout << "  ";
}
void header_survival(){
    cout << "==============================================================="<<endl;
    cout << "----------------------[THE WHO AM I GAME]----------------------"<<endl;
    cout << "==============================================================="<<endl;
    cout << "                         --SURVIVAL--\n"<<endl;
}
void header_just(){
    cout << "==============================================================="<<endl;
    cout << "----------------------[THE WHO AM I GAME]----------------------"<<endl;
    cout << "==============================================================="<<endl;
    cout << "                       --JUST CURIOUS--\n"<<endl;
}
void lanjut_level(){
    cout << "\n\tTekan enter untuk ke level selanjutnya"<<endl;
}
void game_over(){
   cout << "\n\t    Tekan enter untuk melanjutkan"<<endl; 
}
//gambar
void siapakah_aku(int i, int j){
    for (i = 1; i <= 15; ++i){
        for (j = 1; j <=32; ++j){
            if (i == 1){
                if (((j >= 3)&&(j <=28))||((j >= 30)&&(j <=32))){
                    luar();
                }else {
                    bentuk2();
                }
            }else if (i == 2){
                if (((j == 2))||((j >= 4)&&(j <=11))||((j >= 14)&&(j <=28))||((j >= 30)&&(j <=32))){
                    luar();
                }else {
                    bentuk2();
                }
            }else if (i == 3){
                if (((j >= 2)&&(j <=4))||((j == 6))||((j == 10))||((j >= 12)&&(j <=13))||((j == 15))||((j == 19))||((j >= 21)&&(j <=22))||((j == 24))||((j == 28))||((j >= 30)&&(j <=32))){
                    luar();
                }else {
                    bentuk2();
                }
            }else if (i == 4){
                if (((j == 1))||((j >= 3)&&(j <=8))||((j == 10))||((j >= 12)&&(j <=13))||((j >= 15)&&(j <=17))||((j == 19))||((j == 21))||((j >= 23)&&(j <=26))||((j == 28))||((j == 32))){
                    luar();
                }else {
                    bentuk2();
                }
            }else if (i == 5){
                if (((j >= 1)&&(j <=2))||((j == 4))||((j >= 6)&&(j <=7))||((j == 10))||((j >= 14)&&(j <=16))||((j == 19))||((j >= 22)&&(j <=25))||((j == 28))||((j >= 30)&&(j <=31))){
                    luar();
                }else {
                    bentuk2();
                }
            }else if (i == 6){
                if (((j == 2))||((j == 4))||((j == 6))||((j == 8))||((j == 10))||((j >= 12)&&(j <=15))||((j == 17))||((j == 19))||((j == 21))||((j >= 23)&&(j <=24))||((j == 26))||((j == 28))||((j >= 30)&&(j <=31))){
                    luar();
                }else {
                    bentuk2();
                }
            }else if (i == 7){
                if (((j == 1))||((j == 4))||((j == 6))||((j == 10))||((j >= 12)&&(j <=15))||((j == 19))||((j == 24))||((j == 28))||((j >= 21)&&(j <=22))||((j >= 30)&&(j <=31))){
                    luar();
                }else {
                    bentuk2();
                }
            }else if (i == 9){
                if (((j >= 1)&&(j <=23))||((j >= 25)&&(j <=32))){
                    luar();
                }else {
                    bentuk2();
                }
            }else if (i == 10){
                if (((j >= 1)&&(j <=3))||((j >= 5)&&(j <=8))||((j == 12))||((j >= 14)&&(j <=15))||((j == 17))||((j >= 19)&&(j <=20))||((j == 22))||((j == 24))||((j >= 26)&&(j <=28))||((j >= 30)&&(j <=32))){
                    luar();
                }else {
                    bentuk2();
                }
            }else if (i == 11){
                if (((j >= 1)&&(j <=2))||((j >= 6)&&(j <=10))||((j == 12))||((j == 14))||((j >= 16)&&(j <=17))||((j >= 19)&&(j <=20))||((j >= 22)&&(j <=24))|((j >= 26)&&(j <=27))||((j >= 31)&&(j <=32))){
                    luar();
                }else {
                    bentuk2();
                }
            }else if (i == 12){
                if (((j == 1))||((j == 4))||((j >= 7)&&(j <=9))||((j == 12))||((j >= 15)&&(j <=17))||((j >= 19)&&(j <=20))||((j >= 22)&&(j <=23))||((j >= 25)&&(j <=26))||((j == 29))||((j ==32))){
                    luar();
                }else {
                    bentuk2();
                }
            }else if (i == 13){
                if (((j >= 1)&&(j <=2))||((j >= 6)&&(j <=8))||((j == 10))||((j == 12))||((j == 14))||((j >= 16)&&(j <=17))||((j >= 19)&&(j <=20))||((j >= 22)&&(j <=27))||((j >= 31)&&(j <=32))){
                    luar();
                }else {
                    bentuk2();
                }
            }else if (i == 14){
                if (((j >= 1)&&(j <=3))||((j >= 5)&&(j <=8))||((j == 12))||((j >= 14)&&(j <=15))||((j >= 17)&&(j <=18))||((j >= 21)&&(j <=23))||((j >= 25)&&(j <=28))||((j >= 30)&&(j <=32))){
                    luar();
                }else {
                    bentuk2();
                }
            }else {
                luar();
            }
        }
        cout << endl;
    }
}
void benar (int i, int j){
    for (i=1; i <= 18; ++i){
        cout << "\t";
        for (j=1; j <= 20; ++j){
            if ((i == 1)||(i == 18))
            {
                if ((j >= 8)&&(j <=13))
                {
                    bentuk();
                }else
                {
                    luar();
                }
            }else if ((i == 2)||(i == 17))
            {
                if ((j >= 6)&&(j <=15))
                {
                    bentuk();
                }else
                {
                    luar();
                }
            }else if ((i == 3)||(i == 16))
            {
                if ((j >= 4)&&(j <=17))
                {
                    bentuk();
                }else
                {
                    luar();
                }
            }else if ((i == 4)||(i == 5))
            {   if ((j >= 3)&&(j <=18))
                {
                    bentuk();
                }else
                {
                    luar();
                }
            }else if (i == 6){
                if (((j >= 2)&&(j <=15))||((j >= 18)&&(j <=19)))
                {
                    bentuk();
                }else
                {
                    luar();
                }
            }else if (i == 7){
                if (((j >= 2)&&(j <=14))||((j >= 18)&&(j <=19)))
                {
                    bentuk();
                }else
                {
                    luar();
                }
            }else if (i == 8){
                if (((j >= 1)&&(j <=13))||((j >= 17)&&(j <=20)))
                {
                    bentuk();
                }else
                {
                    luar();
                }
            }else if (i == 9){
                if (((j >= 1)&&(j <=12))||((j >= 16)&&(j <=20)))
                {
                    bentuk();
                }else
                {
                    luar();
                }
            }else if (i == 10){
                if (((j >= 1)&&(j <=4))||((j >= 7)&&(j <=11))||((j >= 15)&&(j <=20)))
                {
                    bentuk();
                }else
                {
                    luar();
                }
            }else if (i == 11){
                if (((j >= 1)&&(j <=4))||((j >= 8)&&(j <=10))||((j >= 14)&&(j <=20)))
                {
                    bentuk();
                }else
                {
                    luar();
                }
            }else if (i == 12){
                if (((j >= 2)&&(j <=5))||((j == 9))||((j >= 13)&&(j <=19)))
                {
                    bentuk();
                }else
                {
                    luar();
                }
            }else if(i == 13){
                if (((j >= 2)&&(j <=6))||((j >= 12)&&(j <=19)))
                {
                    bentuk();
                }else
                {
                    luar();
                }
            }else if (i == 14){
                if (((j >= 3)&&(j <=7))||((j >= 11)&&(j <=18)))
                {
                    bentuk();
                }else
                {
                    luar();
                }
            }else if (i == 15){
                if (((j >= 3)&&(j <=8))||((j >= 10)&&(j <=18)))
                {
                    bentuk();
                }else
                {
                    luar();
                }
            }
        }
        cout << endl;
    }
}
void salah (int i, int j){
    for (i=1; i <= 18; ++i){
        cout << "\t";
        for (j=1; j <= 20; ++j){
            if ((i == 1)||(i == 18))
            {
                if ((j >= 8)&&(j <=13))
                {
                    bentuk();
                }else
                {
                    luar();
                }
            }else if ((i == 2)||(i == 17))
            {
                if ((j >= 6)&&(j <=15))
                {
                    bentuk();
                }else
                {
                    luar();
                }
            }else if ((i == 3)||(i == 16))
            {
                if ((j >= 4)&&(j <=17))
                {
                    bentuk();
                }else
                {
                    luar();
                }
            }else if ((i == 4)||(i == 15)){
                if ((j >= 3)&&(j <=18))
                {
                    bentuk();
                }else
                {
                    luar();
                }
            }else if ((i == 5)||(i == 14)){
                if (((j >= 3)&&(j <=5))||((j >= 8)&&(j <=13))||((j >= 16)&&(j <=18)))
                {
                    bentuk();
                }else
                {
                    luar();
                }
            }else if ((i == 6)||(i == 13)){
                if (((j >= 2)&&(j <=5))||((j >= 9)&&(j <=12))||((j >= 16)&&(j <=19)))
                {
                    bentuk();
                }else
                {
                    luar();
                }
            }else if ((i == 7)||(i == 12)){
                if (((j >= 2)&&(j <=6))||((j >= 10)&&(j <=11))||((j >= 15)&&(j <=19)))
                {
                    bentuk();
                }else
                {
                    luar();
                }
            }else if ((i == 8)||(i == 11)){
                if (((j >= 1)&&(j <=7))||((j >= 14)&&(j <=20)))
                {
                    bentuk();
                }else
                {
                    luar();
                }
            }else if ((i == 9)||(i == 10)){
                if (((j >= 1)&&(j <=8))||((j >= 13)&&(j <=20)))
                {
                    bentuk();
                }else
                {
                    luar();
                }
            }
        }
        cout << endl;
    }
}
void tulisan_true(int i, int j){
    for (i = 1; i <= 7; ++i){
        cout << "\t";
        for (j = 1; j <=20; ++j){
            if ((i == 1)||(i == 2)){
                if ((j >= 2)&&(j <= 20)){
                    luar();
                }else{
                    bentuk();
                }
            }else if (i == 3){
                if (((j >= 2)&&(j <= 5))||((j >= 7)&&(j <= 9))||((j >= 12)&&(j <= 13))||((j >= 17)&&(j <= 18))||((j == 20))){
                    luar();
                }else{
                    bentuk();
                }
            }else if (i == 4){
                if (((j >= 3)&&(j <= 4))||((j == 6))||((j == 8))||((j >= 10)&&(j <= 11))||((j >= 13)&&(j <= 15))||((j == 17))||((j == 19))){
                    luar();
                }else{
                    bentuk();
                }
            }else if (i == 5){
                if (((j == 2))||((j == 4))||((j == 8))||((j >= 10)&&(j <= 11))||((j >= 13)&&(j <= 14))||((j == 17))||((j >= 19)&&(j <= 20))){
                    luar();
                }else{
                    bentuk();
                }
            }else if (i == 6){
                if (((j == 2))||((j == 4))||((j >= 6)&&(j <= 8))||((j >= 10)&&(j <= 11))||((j == 13))||((j == 15))||((j == 17))||((j >= 19)&&(j <= 20))){
                    luar();
                }else{
                    bentuk();
                }
            }else if (i == 7){
                if (((j >= 3)&&(j <= 4))||((j == 8))||((j >= 10)&&(j <= 11))||((j == 13))||((j == 17))||((j >= 19)&&(j <= 20))){
                    luar();
                }else{
                    bentuk();
                }
            }
        }
        cout << endl;
    }
    
}
void tulisan_false(int i, int j){
    for (i = 1; i <= 7; ++i){
        cout << "\t";
        for (j = 1; j <=20; ++j){
            if (i == 1){
                if(((j == 1))||((j >= 4)&&(j <=9))||((j >= 11)&&(j <=15))||((j >= 17)&&(j <=120))){
                    luar();
                }else{
                    bentuk();
                }
            }else if (i == 2){
                if (((j == 1))||((j == 3))||((j >= 5)&&(j <= 9))||((j >= 11)&&(j <= 15))||((j >= 17)&&(j <=20))){
                    luar();
                }else{
                    bentuk();
                }
            }else if (i == 3){
                if (((j == 1))||((j >= 3)&&(j <=5))||((j == 9))||((j == 11))||((j == 15))||((j >= 17)&&(j <=20))){
                    luar();
                }else{
                    bentuk();
                }
            }else if (i == 4){
                if (((j >= 1)&&(j <=2))||((j >= 4)&&(j <=7))||((j == 9))||((j >= 11)&&(j <=13))||((j == 15))||((j >= 19)&&(j <=20))){
                    luar();
                }else{
                    bentuk();
                }
            }else if (i == 5){
                if (((j >= 1)&&(j <=3))||((j >= 5)&&(j <=6))||((j == 9))||((j >= 11)&&(j <=12))||((j == 15))||((j >= 17)&&(j <=18))||((j == 20))){
                    luar();
                }else{
                    bentuk();
                }
            }else if (i == 6){
                if (((j == 1))||((j == 3))||((j == 5))||((j == 7))||((j == 9))||((j == 11))||((j == 13))||((j == 15))||((j >= 17)&&(j <=18))||((j == 20))){
                    luar();
                }else{
                    bentuk();
                }
            }else if (i == 7){
                if (((j >= 1)&&(j <=2))||((j == 5))||((j == 9))||((j == 11))||((j == 15))||((j >= 17)&&(j <=18))||((j == 20))){
                    luar();
                }else{
                    bentuk();
                }
            }
        }
        cout <<endl;
    }
}
void selamat (int i, int j){
    for (i = 1; i <= 7; ++i){
        for (j = 1; j <= 29; ++j){
            if (i == 1)
            {
                if (((j >= 3)&&(j <= 8))||((j >= 10)&&(j <= 29))){
                    luar();
                }else
                {
                    bentuk2();
                }

            }else if (i == 2)
            {
                if (((j == 2))||((j >= 4)&&(j <= 8))||((j >= 10)&&(j <= 26))||((j >= 28)&&(j <= 29)))
                {
                    luar();
                }else
                {
                    bentuk2();
                }
                
            }else if (i == 3)
            {
                if (((j >= 2)&&(j <= 5))||((j >= 7)&&(j <= 8))||((j == 10))||((j >= 14)&&(j <= 15))||((j == 18))||((j >= 21)&&(j <= 22))||((j == 26))||((j >= 28)&&(j <= 29)))
                {
                    luar();
                }else
                {
                    bentuk2();
                }
                
            }else if (i == 4)
            {
                if (((j == 1))||((j >= 3)&&(j <= 4))||((j == 6))||((j == 8))||((j >= 10)&&(j <= 12))||((j == 14))||((j >= 16)&&(j <= 17))||((j >= 19)&&(j <= 20))||((j >= 22)&&(j <= 24))||((j == 26))||((j == 29)))
                {
                    luar();
                }else
                {
                    bentuk2();
                }
                
            }else if (i == 5)
            {
                if (((j >= 1)&&(j <= 2))||((j == 4))||((j == 8))||((j >= 10)&&(j <= 11))||((j == 14))||((j >= 16)&&(j <= 17))||((j >= 19)&&(j <= 20))||((j >= 22)&&(j <= 23))||((j == 26))||((j >= 28)&&(j <= 29)))
                {
                    luar();
                }else
                {
                    bentuk2();
                }
                
            }else if (i == 6)
            {
                if (((j == 2))||((j == 4))||((j >= 6)&&(j <= 8))||((j == 10))||((j == 12))||((j == 14))||((j >= 16)&&(j <= 17))||((j >= 19)&&(j <= 20))||((j == 22))||((j == 24))||((j == 26))||((j >= 28)&&(j <= 29)))
                {
                    luar();
                }else
                {
                    bentuk2();
                }
                
            }else if (i == 7)
            {
                if (((j == 1))||((j == 4))||((j == 8))||((j == 10))||((j == 14))||((j >= 16)&&(j <= 17))||((j >= 19)&&(j <= 20))||((j == 22))||((j == 26)))
                {
                    luar();
                }else
                {
                    bentuk2();
                } 
            }            
        }
        cout << endl;
    }
}
//perpaduan void di atas
void lanjut_level_lengkap(int i, int j){
    system ("cls");
    system ("color A");
    benar(i, j);
    tulisan_true(i,j);
    cout << "\t========================================"<<endl;
    cout << "\t-----------SELAMAT KAMU BENAR-----------"<<endl;
    cout << "\t========================================"<<endl;
    lanjut_level();
    getch ();
    system ("cls");
    system ("color 7");
    header_survival();
}
void game_over_lengkap(int i, int j){
    system ("cls");
    system ("color C");
    salah (i, j);
    tulisan_false(i,j);
    cout << "\t========================================"<<endl;
    cout << "\t-------------MAAF KAMU SALAH------------"<<endl;
    cout << "\t========================================"<<endl;
    game_over();
    getch ();

}
void lanjut_just(int i, int j){
    system ("cls");
    system ("color A");
    benar(i, j);
    tulisan_true(i,j);
    cout << "\t========================================"<<endl;
    cout << "\t-----------SELAMAT ANDA BENAR-----------"<<endl;
    cout << "\t========================================"<<endl;
    game_over();
    getch ();
}
//aturan aturan
void aturan_awal(){
    cout << "+----------------------------------------------------------+"<<endl;
    cout << "|                      Aturan Bermain :                    |"<<endl;
    cout << "+----------------------------------------------------------+"<<endl;
    cout << "|1. Akan di siapkan 2 mode untuk bermain                   |"<<endl;
    cout << "|2. Gunakanlah huruf kecil saat memasukan jawaban          |"<<endl;
    cout << "|3. Ikuti pentunjuk yang diberikan pada masing masing mode |"<<endl;
    cout << "+----------------------------------------------------------+"<<endl;
}
void aturan_survival(){
    cout << "+----------------------------------------------------------+"<<endl;
    cout << "|                          SURVIVAL :                      |"<<endl;
    cout << "+----------------------------------------------------------+"<<endl;
    cout << "|1. Jawablah dengan teliti                                 |"<<endl;
    cout << "|2. Jika anda salah satu kali maka akan langsung gugur     |"<<endl;
    cout << "|3. Anda akan mendapat poin jika benar                     |"<<endl;
    cout << "|4. Bobot poin menyesuaikan dengan level                   |"<<endl;
    cout << "+----------------------------------------------------------+"<<endl;
    cout << "               tekan enter untuk melanjutkan"<<endl;
}
void aturan_just(){
    cout << "+----------------------------------------------------------+"<<endl;
    cout << "|                      JUST CURIOUS :                      |"<<endl;
    cout << "+----------------------------------------------------------+"<<endl;
    cout << "|1. Jawablah dengan teliti                                 |"<<endl;
    cout << "|2. Anda dapat memilih level sesuai keinginan anda         |"<<endl;
    cout << "|3. Tidak ada penambahan poin, skor anda akan tetap 0      |"<<endl;
    cout << "+----------------------------------------------------------+"<<endl;
    cout << "               tekan enter untuk melanjutkan"<<endl;
}
//pertanyaannya
void level_1(){
    cout << "Level 1 (+ 10 poin)"<<endl;
    cout << "\n[ _ _ _ i ]"<<endl;
    cout << "Aku lima bersaudara yang memiliki Ibu tapi tak berbapak.\nApakah aku?" << endl;
}
void level_2(){
    cout << "Level 2 (+ 20 poin)"<<endl;
    cout << "\n[ _ _ _ _ a _ _ _ ]"<<endl;
    cout << "Aku digunakan untuk menyeberangi sungai. \nAku berada di atas air. \nApakah aku?" << endl;
}
void level_3(){
    cout << "Level 3 (+ 40 poin)"<<endl;
    cout << "\n[ _ _ _ _ _ _ _ ]"<<endl;
     cout << "Jika kamu memiliki aku, kamu ingin berbagi aku. \nBegitu kamu berbagi aku, kamu tidak memiliki aku lagi.\nApakah aku?" << endl;
}
void level_4(){
    cout << "Level 4 (+ 10 poin)"<<endl;
    cout << "\nAku sangat tipis. \nAku bisa jatuh dari sebuah bangunan dan tidak hancur, \ntapi di air aku akan hancur. \nApakah aku?" << endl;
}
void level_5(){
    cout << "Level 5 (+ 20 poin)"<<endl;
    cout << "\nBadanku kecil panjang. Rambutku cuma satu. \nAku muncul saat gelap gulita. \nApakah aku?" << endl;
}
//nama2 kelompok 5
void nama_kel5(){
    cout << "+----------------------------------------------+"<<endl;
    cout << "|                  KELOMPOK 5                  |"<<endl;
    cout << "+--+-------------------------------+-----------+"<<endl;
    cout << "|01| Aldysa Abittama Aulya Yusuf   | 065121110 |"<<endl;
    cout << "|02| Septie Sukmaya                | 065121108 |"<<endl;
    cout << "|03| Muhamad Bayu Fadayan          | 065121100 |"<<endl;
    cout << "|04| Zidan Al Rasyid               | 065121112 |"<<endl;
    cout << "|05| Dani Hermayanto               | 065119104 |"<<endl;
    cout << "+--+-------------------------------+-----------+"<<endl;
}

int main (){

    int i, j;
    int skor;
    string pilih_just;
    string mode_game;
    string nama_pendek, nomer1, nomer2, nomer3, nomer4, nomer5;
    string dowhile_just, dowhile_mode;

    system("color B");
    siapakah_aku(i, j);
    cout << "==============================================================="<<endl;
    cout << "----------------------[THE WHO AM I GAME]----------------------"<<endl;
    cout << "==============================================================="<<endl;

    cout << "\n\t\tTEKAN ENTER UNTUK MULAI BERMAIN"<<endl;
    getch();

    system("cls");
    system ("color 7");
    aturan_awal();

    cout << "Masukan nama pendek : "; cin >> nama_pendek;
    do
    {
    skor = 0;
    system("cls");
    system("color B");
    siapakah_aku(i, j);
    cout << "==============================================================="<<endl;
    cout << "----------------------[THE WHO AM I GAME]----------------------"<<endl;
    cout << "==============================================================="<<endl;
    cout << "Halo "<<nama_pendek<<"!"<<endl;
    cout << "\nPilih Mode permainan : "<<endl;
    cout << "1. Survival\n2. Just Curious"<<endl;
    cout << "Pilih <1/2> : "; cin >> mode_game;
    system ("color 7");

    if (mode_game == "1")
    {
        system ("cls");
        aturan_survival();
        getch ();
        system ("cls");
        header_survival();
        cout << "skor kamu = "<<skor<<" poin"<<endl;
        level_1();
        cout << "Jawab : "; cin >> nomer1;

        if (nomer1 == "jari")
        {
            skor = skor + 10;
            lanjut_level_lengkap(i,j);
            cout << "skor kamu = "<<skor<<" poin"<<endl;
            level_2();
            cout << "Jawab : "; cin >> nomer2;

            if (nomer2 == "jembatan"){
                skor = skor + 20;
                lanjut_level_lengkap(i,j);
                cout << "skor kamu = "<<skor<<" poin"<<endl;
                level_3();
                cout << "Jawab : "; cin >> nomer3;

                if (nomer3 == "rahasia"){
                    skor = skor + 40;
                    lanjut_level_lengkap(i,j);
                    cout << "skor kamu = "<<skor<<" poin"<<endl;
                    level_4();
                    cout << "Jawab : "; cin >> nomer4;

                    if (nomer4 == "kertas"){
                        skor = skor + 10;
                        lanjut_level_lengkap(i,j);
                        cout << "skor kamu = "<<skor<<" poin"<<endl;
                        level_5();
                        cout << "Jawab : "; cin >> nomer5;
                        
                        if (nomer5 == "lilin"){
                            skor = skor + 20;
                            system ("cls");
                            system ("color A");
                            selamat(i,j);
                            cout << "=========================================================="<<endl;
                            cout << "-----------Kamu berhasil menyelesaikan game ini!----------"<<endl;
                            cout << "=========================================================="<<endl;
                            cout << "Kamu hebat "<<nama_pendek<<"!"<<endl;
                            
                        }else{
                            game_over_lengkap(i, j);
                        }
                    }else {
                        game_over_lengkap(i, j);
                    }
                }else {
                    game_over_lengkap(i, j);
                }
            }else {
                game_over_lengkap(i, j);
            }
        }else {
           game_over_lengkap(i, j);
        }
        

    }else if (mode_game == "2")
    {
        system ("cls");
        aturan_just();
        getch ();
        do
        {
        system ("color 7");
        system ("cls");
        header_just();

        cout << "\nPilih Level"<<endl;
        for (i = 1; i <= 5; ++i){
            cout << i<<". <Level "<<i<<">"<<endl;
        }
        cout << "Pilih <1/2/3/4/5> : "; cin >>pilih_just;
        cout << endl;
        if (pilih_just == "1")
        {
            level_1();
            cout << "Jawab : "; cin >> nomer1;

            if (nomer1 == "jari")
            {
                lanjut_just(i,j);
            }else
            {
                game_over_lengkap(i, j);
            }
            
        }else if (pilih_just == "2")
        {
            level_2();
            cout << "Jawab : "; cin >> nomer2;

            if (nomer2 == "jembatan")
            {
                lanjut_just(i,j);
            }else
            {
                game_over_lengkap(i, j);
            }
        }else if (pilih_just == "3")
        {
            level_3();
            cout << "Jawab : "; cin >> nomer3;

            if (nomer3 == "rahasia")
            {
                lanjut_just(i,j);
            }else
            {
                game_over_lengkap(i, j);
            }

        }else if (pilih_just == "4")
        {
            level_4();
            cout << "Jawab : "; cin >> nomer4;

            if (nomer4 == "kertas")
            {
                lanjut_just(i,j);
            }else
            {
                game_over_lengkap(i, j);
            }

        }else if (pilih_just == "5")
        {
            level_5();
            cout << "Jawab : "; cin >> nomer5;

            if (nomer5 == "lilin")
            {
                lanjut_just(i,j);
            }else
            {
                game_over_lengkap(i, j);
            }

        }else {
            cout << "Level tidak tersedia"<<endl;
            cout << "Masukan angka sesuai level yang ditampilakan"<<endl;
        }
        
        cout << "\n\t   Kembali memilih level <y/n> ? "; cin >> dowhile_just;
            
        } while (dowhile_just == "y");

    }else 
    {
        system("cls");
        cout << "\npilihan kamu tidak sesuai"<<endl;
    }

    cout << endl;
    cout << "+-----------------------+"<<endl;
    cout << "|Skor Akhir Kamu = "<<skor<<"\t|"<<endl;
    cout << "+-----------------------+"<<endl;

    cout << "\nKembali memilih mode? <y/n> ? ";cin >> dowhile_mode;
    } while (dowhile_mode == "y");
    
    system ("cls");
    system ("color 7");
    cout << "\ncreated by"<<endl;
    nama_kel5();
    cout << "\nBye-bye!"<<endl;
    cout << "silakan tekan enter untuk keluar\n"<<endl;
    
    getch ();
    return 0;
}
