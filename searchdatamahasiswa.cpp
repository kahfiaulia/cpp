#include <conio.h>
#include <iostream>
#include <string>
using namespace std;

struct mhs
{   char nama[100];
    int umur;
};

void nampil_data_semua (mhs mahasiswa[], int n)
{
 int i;
   cout<<"Hasilnya adalah : "<<endl;
 cout<<"-------------------------------------------------"<<endl;
 cout<<"| No | Nama | Umur |"<<endl;
 cout<<"-------------------------------------------------"<<endl;
 for(i=1;i<=n;i++){
  cout<<"| "<<i<<" | "<<mahasiswa[i].nama<<" | "<<mahasiswa[i].umur<<" | ";
      cout<<endl;
 }
   cout<<"-------------------------------------------------"<<endl;
   cout<<endl<<endl;
}

void mencariDataSecaraSekuensial (mhs mahasiswa[], int n)
{
  //int i;
  string kata;
    bool ketemu=false;
    int lokasi=-1;
    cout<<"Silakan masukkan Nama yang ingin dicari : "; cin>>kata;
    for (int i=1;i<=n;i++)
    {
       if(kata==mahasiswa[i].nama)
       {
          ketemu=true;
          lokasi=i;
       }
    }
    if (ketemu==true)
       cout<<kata<<" ditemukan pada Nomor ke- "<<lokasi<<endl;
    else
       cout<<"Maaf, nama "<<kata<<" tidak ada dalam list kami "<<endl;
}

int main()
{
  mhs mahasiswa[50];
    int     n ;
    int i;
    cout<<"PROGRAM SEARCHING SECARA SEKUENSIAL"<<endl<<endl;
    cout<<"Masukan banyak data : "; cin>>n;
    cout<<endl;
    for(i=1;i<=n;i++){
  cout<<"Masukan data ke-"<<i<<endl;
  cout<<"Masukan nama : ";cin>>mahasiswa[i].nama;
  cout<<"Masukan umur : ";cin>>mahasiswa[i].umur;
      cout<<endl;
      }
    nampil_data_semua (mahasiswa, n);
    mencariDataSecaraSekuensial (mahasiswa, n);
getch();
}
