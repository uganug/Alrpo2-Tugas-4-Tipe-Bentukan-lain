//7. Buat program sederhana yang mengandung struct to pointers
 
#include <iostream>
#include <string.h>
using namespace std;

struct info_film
{
    string  judul;
    string  genre;
    int tahun;
    
};

int main()
{
    info_film *ptr, film;

    ptr = &film;
    
    cout << "Judul film: ";
    cin >> (*ptr).judul;
    cout << "Genre utama: ";
    cin >> (*ptr).genre;
    cout << "Tahun rilis: ";
    cin >> (*ptr).tahun;
    
    cout <<"Judul Buku :"<< (*ptr).judul<<endl;
    cout <<"Genre Utama :"<< (*ptr).genre<<endl;
    cout <<"Tahun Rilis :"<< (*ptr).tahun<<endl;
    
    return 0;
}
