#include <iostream>
using namespace std;

class Mahasiswa {
public:
	string nama;
	int umur;
	string jurusan;
}
	void output() {
		void output() {
			cout << "Nama: " << nama << endl;
			cout << "Umur: " << umur << endl;
			cout << " Jurusan " << jurusan << endl;
		}

	};
	class Matakuliah {
	private:
		string kodeMK;
		string namaMK;
		int SKS;
	public:
		void input() {
			cout << "kode MK: ";
			cin >> kodeMK;
			cout << "Nama MK: ";
			cin >> namaMK;
			cout << "SKS: ";
			cin >> SKS;
		}
		
		void output() {
			cout << "kode MK: " << kodeMK << endl;
			cout << "Nama MK: " << namaMK << endl;
			cout << "SKS: " << SKS << endl;
		}
	};
