//2. Buat program sederhana yang menunjukkan passing by reference pada struktur sebagai argumen dari fungsi

#include <iostream>
using namespace std;
struct bio { 

char nama[500];
char alamat[500];
int umur ;

} ;
void display(struct bio *st)
{
	cout << "Nama Mahasiswa : " << st->nama;
	cout << "\nAlamat : " << st->alamat;
	cout << "\nUmur : " << st->umur;

}
int main()
{
	bio bio_mhs;
	cout <<"Nama Mahasiswa : "; 
	cin >>bio_mhs.nama;
	cout <<"Alamat : ";
	cin >>bio_mhs.alamat;
	cout <<"Umur : ";
	cin >>bio_mhs.umur;
	
	display(&bio_mhs);
return 0;

}
