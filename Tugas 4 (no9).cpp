//9. Buat program sederhana yang menggunakan union dalam pemrograman c++

#include <iostream>
using namespace std;

union Nilai
{
      int andi;
      int firman;
};

int main()
{
      Nilai teman;
      teman.andi  = 30 ;

      cout<<"Nilai varibel dengan union : "<<endl;
      cout<<"Nilai variabel Andi = "<<teman.andi<<endl;
      cout<<"Nilai variabel Firman = "<<teman.firman; //Anggotanya menggunakan secara bersama ruang penyimpanan memori yang sama, 
}
