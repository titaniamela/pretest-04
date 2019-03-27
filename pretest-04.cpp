/*
Nama        : Shania Salsabila
NPM         : 140810180014
Kelas	    : B
Deskripsi   : pretest-05
Tanggal     : 27 Maret 2019
*/
#include <iostream>
using namespace std;

struct Elemtlist{
    char npm[12], nama[30];
    float ipk;
    Elemtlist* next;
};
typedef Elemtlist* pointer;
typedef pointer List;

void createList(List& First){
	First=NULL;
}

void createElmt(pointer& pBaru) {
	pBaru= new Elemtlist;
	cout<< "Masukkan Nama: ";
	cin>>pBaru->nama, 30;
	cout<< "Masukkan NPM : ";
	cin>>pBaru->npm, 12;
	cout<< "Masukkan Ipk : ";
	cin>>pBaru->ipk;
	cout<<endl;
	pBaru->next = NULL;
}
void insertSortNama(List& First, pointer pBaru){
	for(int i<o; i<n; i++){
        for(int j=1; j<n; j++){
            if (strcmp())
        }
	}
	First=pBaru;
}
}
void traversal(List First){
 pointer pBantu;
    pBantu=First;
    while(pBantu != NULL){
        cout<<"Nama : "<<pBantu->nama<<endl;
        cout<<"NPM  : "<<pBantu->npm<<endl;
        cout<<"Ipk  : "<<pBantu->ipk<<endl;
        pBantu=pBantu->next;
    }
}
int main(){
    pointer pBaru;
    int x;
    List list;
    createList(list);


}
