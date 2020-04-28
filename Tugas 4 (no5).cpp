//5. Buat program yang mengandung array dari struct
#include <iostream>
using namespace std;
int main () {
	struct opbil {
		int a [5];
		int b [5];
	}c;
	int i;
	
	for (i=0;i<4;i++){
		c.a[i]= i + 1;
		c.b[i]= (i+1)*100;
	}
	for(i=0;i<4;i++){
		cout<<"c.a["<<i<<"] ="<<c.a[i]<<endl;
		cout<<"c.b["<<i<<"] ="<<c.b[i]<<endl;
	}
	return 0;
}

