#include<conio.h>
#include <iostream>
#include <stdlib.h>
using namespace::std;

struct data{
char nim[20],nam[20],kelas[20];};
data batas[100];
int a,jmlh,c,d;

void inputdata()
{    cout<<"\nJumlah Data Yang Akan diinput : ";cin>>jmlh;
   d=0;
   for(c=0;c<jmlh;c++){
   d=d+1;
   cout<<"\nData ke-"<<d<<endl;
   cout<<"NIM\t: ";cin>>batas[a].nim;
   cout<<"Nama\t: ";cin>>batas[a].nam;

   a++;}
   system("cls");}

void lihatdata()
{int i,j;
 cout<<"\n========== Menampilkan Data==========\n";
 cout<<"<><><><<><><><><><><><><><><><><><<><><><>\n";
 cout<<"||\tNO\t||\tNIM\t||\tNama\t||\n";
 j=0;
 for(c=0;c<jmlh;c++)
 {j=j+1;
  cout<<"==========================================\n";
  cout<<"||\t"<<j<<"\t||";
  cout<<batas[i].nim<<"\t||";
  cout<<batas[i].nam<<"\t\t\t||"<<endl;
  }
  cout<<"===========================================";getch();
  system("cls");}

void Sorting(){
int nim['n'],temp,n;
  cout<<"Banyak Data: "; cin>>n;
  cout<<endl;
   for(c=0;c<jmlh;c++)
  {cout<<"nilai["<<a<<"]: "; cin>>nim[a];}

  cout<<"\n\n";
  cout<<"Data Sebelum diurutkan"<<endl;
   for(int c=1; c<=n; c++)
    {cout<<nim[a]<<" ";}
   for(int a=n-1; a>=1; a--)
{
   for(int jml=1; jml<=a; jml++)
    {
    if(nim[jml]>nim[jml+1])
        {temp=nim[jml+1];
        nim[jml+1]=nim[jml];
        nim[jml]=temp;}
    }
}
  cout<<"\n\nData Setelah Diurutkan (Ascending)"<<endl;
   for (int a=1; a<=n; a++){
  cout<<nim[a]<<" ";}
}

void Searching(){
string cari;
int n,i,ketemu;

    cout<<"Masukan Nama yang Dicari: "; cin>>cari;
    cout<<endl;
   ketemu=0;
    for(c=0;c<jmlh;c++)
   {
     if (batas[a].nam==cari)
     { ketemu=1;
       cout<<"Data Ditemukan Pada Indek Ke ";
       cout<<c<<" ";
     }
   }
     if (ketemu==0)
     {cout<<"Data Tidak Di Temukan";}

}

void hapusdata()
{int x,y;
 cout<<"Hapus data ke-";cin>>x;
 y=x-1;
 a--;
 for(int i=y;i<a;i++)
 {batas[i]=batas[i+1];}
  system("cls");
 cout<<"\n\n########## Data ke-"<<x<<" Terhapus ##########";
 getch(); system("cls");
}

void ubahdata(){
int k,l;
cout<<"Masukan Data yang akan diedit : ";cin>>k;
l=k-1;
cout<<"NIM\t: ";cin>>batas[l].nim;
cout<<"Nama\t: ";cin>>batas[l].nam;
lihatdata();
}

int main()
{     int pilih;
 char y,awal;
 cout<<"\n==========PROGRAM STRUKTUR DATA==========";
 getch();
  awal:
  cout<<"\n\t===== PILIHAN MENU =====";
  cout<<"\n1. Masukkan data";
  cout<<"\n2. Sorting Data";
  cout<<"\n3. Searching";
  cout<<"\n4. Hapus Data";
  cout<<"\n5. Ubah Data";
  cout<<"\n6. Keluar";
  cout<<"\n\nMasukkan Pilihan : ";
  cin>>pilih;
  if(pilih==1)
   { system("cls");inputdata();goto awal;}
  if(pilih==2)
   { system("cls");Sorting();goto awal;}
  if(pilih==3)
   { system("cls");Searching();goto awal;}
  if(pilih==4)
   { system("cls");ubahdata();goto awal;}
  if(pilih==5)
   { system("cls");ubahdata();goto awal;}
  if(pilih==6)
    { system("cls");
    cout<<"\nAPAKAH ANDA YAKIN KELUAR DARI PROGRAM??\n\n";
    cout<<" ";cin>>y;
    if(y=='y'||y=='Y')
    { system("cls");
     cout<<"\n\n*********** PROGRAM SELESAI ***********";}
     }
}
