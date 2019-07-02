#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <iomanip.h>
main ()
{
	char nim[8][10], nm[20][10], jwb;
   int i,j,l;
   float temp;
   float n1[10], n2[10], n3[10], na[10];
   isi :
   clrscr();
   cout<<"Masukkan Jumlah Data : "; cin>>j;
   for (i=1; i<=j; i++)
   {
   	cout<<"Data ke- : "<<i<<endl;

      cout<<"Masukkan NIM\t : ";cin>>nim[i];

      cout<<"Masukkan Nama\t : ";gets(nm[i]);

      cout<<"Nilai 1 \t : ";cin>>n1[i];

      cout<<"Nilai 2 \t : ";cin>>n2[i];

      cout<<"Nilai 3 \t : ";cin>>n3[i];

      na[i]=(n1[i]+n2[i]+n3[i])/3;

      cout<<endl;

   }
   cout<<"                   NILAI MAHASISWA                  			   "<<endl;

   cout<<"=============================================================="<<endl;

   cout<<"No. 		 NIM          		 Nama           		Nilai          "<<endl;

   cout<<"                                                    				"<<endl;

   cout<<" "<<endl;



   for (i=1; i<=j; i++)

   {

   	cout<<setiosflags(ios::right)<<setw(3)<<i;

      cout<<setprecision(3)<<"     "<<nim[i];

      cout<<setprecision(4)<<"           "<<nm[i];

      cout<<setprecision(5)<<"                      "<<na[i]<<endl;
   }
   cout<<"___________________________________________________"<<endl;
   float maks;
   	maks = na[1];
   float min;
   	min = na[1];
   	for (int i=1; i<=j; i++)

   		{
   			if (na[i] > maks)

      		maks = na[i];

            if (na[i] < min)

            min = na[i];
   		}

   	cout<<"Nilai akhir terbesar : "<<maks<<endl;

      cout<<"Nilai akhir terkecil : "<<min<<endl;

      cout<<endl;

   cout<<"____________________________________________________"<<endl;

  for(int a=j-1; a>=1; a--){

  for(int b=1; b<=a; b++){

	if(na[b]>na[b+1]){

	temp=na[b+1];

	na[b+1]=na[b];

	na[b]=temp;

	}

	}

	}

   cout<<endl;

	cout<<"\n\nData Setelah Diurutkan dari Tinggi ke Rendah : "<<endl;

	for (int a=j; a>=1; a--){

	cout<<na[a]<<" ";}

	cout<<endl;

   cout<<"Mau input data lagi [Y/T] : ";jwb=getche();

   if (jwb=='Y' || jwb=='Y')

   	goto isi;

      getch();

   }