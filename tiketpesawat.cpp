#include<string.h>
#include<conio.h>
#include<iostream>
using namespace std;

main()
{
char kelas,lagi,kode[10],*nama;
int n1,n2,n3,total,harga,jumlah;
atas:
system("cls");
cout<<endl<<"\tPROGRAM TIKET PESAWAT"<<endl;
cout<<"          JAKARTA-MALAYSIA"<<endl;
cout<<"======================================\n";
cout<<"Masukkan kode pesawat [MPT/GRD/BTV]:";
cin>>kode;

cout<<"Kelas Pesawat :\n";
cout<<"         1.Excekutive\n";
cout<<"         2.Bisnis\n";
cout<<"         3.Ekonomi\n";

cout<<"Pilih kelas [1/2/3]:";
cin>>kelas;
n1=strcmp(kode,"MPT");
n2=strcmp(kode,"GRD");
n3=strcmp(kode,"BTV");

//Seleksi Kondisi
if (n1==0||n1==32)
{
    nama="Merpati";
    if(kelas=='1')
    {
    harga=1500000;
    }
    else if(kelas=='2')
    {
    harga=900000;
    }
    else
    {
    harga=500000;
    }
}

else if( n2==0||n2==32)
{
    nama="Garuda";
    if(kelas=='1')
    {
    harga=1200000;
    }
    else if(kelas=='2')
    {
    harga=800000;
    }
    else
   {
   harga=400000;
   }
}

else if (n3==0||n3==32 )
{
    nama="Batavia";
    if(kelas=='1')
    {
    harga=1000000;
    }
   else if(kelas=='2')
    {
    harga=700000;
    }
    else
    {harga=300000;
   }
}



//output datanya


cout<<"Nama Pesawat          :"<<nama<<endl;
cout<<"Harga Tiket           :Rp."<<harga<<endl;
cout<<"Jumlah Tiket          :";
cin>>jumlah;
cout<<"=======================================\n";
total=harga*jumlah;
cout<<"Total Bayar           :Rp."<<total<<endl;
cout<<"\t\t\t";
cout<<"Ingin input lagi [Y/T]:";
cin>>lagi;

if(lagi=='Y' ||'y')
goto atas;
getch();
}
