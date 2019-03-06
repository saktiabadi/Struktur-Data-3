/*Sakti Abadi
  18050623009
  D3 Manajemen Informatika*/
#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

main(){
struct pegawai{
char nama[50];
int jam,lembur,gp,gaji;}x;


cout<<"Masukkan Nama : ";
gets(x.nama);
cout<<"Masukkan Jam Kerja : ";cin>>x.jam;
cout<<endl;

cout<<"\nNama : "<<x.nama;
cout<<endl;
if(x.jam>7)
                {
   x.gp=7*500;
   x.lembur=(x.jam-7)*(15*500);
                x.gaji=x.gp+x.lembur;
   cout<<"Gaji pokok : "<<x.gp;
   }
else
                {
   x.lembur=0;
   x.gaji= x.jam*500;
   }
cout<<"\nJam Kerja : "<<x.jam;
cout<<"\nLembur : "<<x.lembur;
cout<<"\nGaji : "<<x.gaji;

getch();}

