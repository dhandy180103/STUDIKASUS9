#include <iostream>
using namespace std;

class rak{
	public :
		void input();
		void proses();
		void output();
	private :
		int nomer[100];
		int buku[100][100];
		int temp;
		int n;
		
};

void rak::input(){
	cout<<"Masukan banyak buku : "; cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Masukan nomer buku ke-"<<i+1<<" : ";
		cin>>nomer[i];
	}
	cout<<endl;
}

void rak::proses(){
	for(int x=0; x<n-1; x++){
		for(int y=x+1; y<n; y++){
        	if(nomer[x]>nomer[y]){
	        	temp = nomer[x];
	        	nomer[x] = nomer[y];
	        	nomer[y] = temp;
    		}
    	}
	}
	
	int i = 0;
	for(int x=0; x<4; x++){
		for(int y=0; y<n/4; y++){
			buku[x][y] = nomer[i];
        	i++;
        }
    }
    output();
}

void rak::output(){
	cout << "Nomor buku setelah diurutkan : ";
	for (int i=0; i<n; i++){
		cout << nomer[i] << " ";
    }
    
	cout << "\nTampilan nomor buku pada rak : "<<endl;
    cout << "\n============================"<<endl;
    cout << "|       RAK BUKU SAYA      |"<<endl;
    cout << "============================"<<endl;
	for(int i=0; i<4; i++){
		for(int j=0; j<n/4; j++){
			cout <<"["<< buku[i][j] << "]" << "\t";
		}
		cout << endl;
		cout << "----------------------------"<<endl;
    }
}

int main(){
	rak buku;
	buku.input();
	buku.proses();
	return 0;
}
