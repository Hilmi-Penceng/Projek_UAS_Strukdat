#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>
#include <sstream>
#define MAX 20
using namespace std;

struct Pelajaran {
	//string matkul;
	string dateline;
	string tugas;
	string pengumuman;
};

//Pelajaran daftarTugas[MAX]; woi kalian masih lama gaa,kalau lama otw nih gw | iya masih sampe nanti pemrogramman


Pelajaran Komdat[MAX];
Pelajaran English[MAX];
Pelajaran Strudat[MAX];
Pelajaran HS[MAX];
Pelajaran SO[MAX];
Pelajaran Pemrograman[MAX];
Pelajaran Komgraf[MAX];

Pelajaran Anouncment[MAX];
Pelajaran Tanggal[MAX];
Pelajaran MK[MAX];

int awal = 0;
int akhir = 0;

bool kosong() {
	return awal == akhir;
}

bool penuh() {
	return akhir == MAX;
}

void Input_Tugas() {
	int Pilmatkul;
	if (!penuh()) {
		cout << "1. Komunikasi Data \n2. Binggris \n3. Struktur Data \n4. H/S\n5. Sistem Operasi \n6. Pemrograman \n7. Komputer Grafis \n";
		cout << "Masukkan Matkul yang ingin diinputkan : ";
		cin >> Pilmatkul;
		cin.ignore(); // untuk membersihkan buffer

		switch (Pilmatkul) {
		case 1:
			//Komdat[akhir].matkul = "Komunikasi Data";
			cout << "Masukkan Deadline Tugas (Hari): ";
			cin >> Komdat[akhir].dateline;
			cin.ignore();
			cout << "Masukkan Nama Tugas: ";
			getline(cin, Komdat[akhir].tugas);

			akhir++;
			break;
		case 2:
			//English[akhir].matkul = "Bahasa Inggris";
			cout << "Masukkan Deadline Tugas (Hari): ";
			cin >> English[akhir].dateline;
			cin.ignore();
			cout << "Masukkan Nama Tugas: ";
			getline(cin, English[akhir].tugas);

			akhir++;
			break;
		case 3:
			//daftarTugas[akhir].matkul = "Struktur Data";
			cout << "Masukkan Deadline Tugas (Hari): ";
			cin >> Strudat[akhir].dateline;
			cin.ignore();
			cout << "Masukkan Nama Tugas: ";
			getline(cin, Strudat[akhir].tugas);

			akhir++;
			break;
		case 4:
			//daftarTugas[akhir].matkul = "Software Hardware";
			cout << "Masukkan Deadline Tugas (Hari): ";
			cin >> HS[akhir].dateline;
			cin.ignore();
			cout << "Masukkan Nama Tugas: ";
			getline(cin, HS[akhir].tugas);

			akhir++;
			break;
		case 5:
			//daftarTugas[akhir].matkul = "Sistem Operasi";
			cout << "Masukkan Deadline Tugas (Hari): ";
			cin >> SO[akhir].dateline;
			cin.ignore();
			cout << "Masukkan Nama Tugas: ";
			getline(cin, SO[akhir].tugas);

			akhir++;
			break;
		case 6:
			//daftarTugas[akhir].matkul = "Pemrogramman";
			cout << "Masukkan Deadline Tugas (Hari): ";
			cin >> Pemrograman[akhir].dateline;
			cin.ignore();
			cout << "Masukkan Nama Tugas: ";
			getline(cin, Pemrograman[akhir].tugas);

			akhir++;
			break;
		case 7:
			//daftarTugas[akhir].matkul = "Komputer Grafis";
			cout << "Masukkan Deadline Tugas (Hari): ";
			cin >> Komgraf[akhir].dateline;
			cin.ignore();
			cout << "Masukkan Nama Tugas: ";
			getline(cin, Komgraf[akhir].tugas);

			akhir++;
			break;
		default:
			cout << ".\n";
			system("pause");
			system("cls");
			return;
		}
		system("cls");

		cout << "\nTugas berhasil ditambahkan!\n";
	}
	else {
		cout << "Daftar tugas penuh!\n";
		//simpantugas();
	}
}

void tampilData() {
	if (!kosong()) {
		int pil_matkul;
		cout << "===== Daftar Semua Tugas =====\n\n";
		cout << "1. Komunikasi Data \n2. Binggris \n3. Struktur Data \n4. H/S\n5. SO \n6. Pemrograman \n7. Komputer Grafis \n";
		cout << "Masukkan Matkul yang ingin diinputkan : ";
		cin >> pil_matkul;
		//cin.ignore();
		system("cls");
		switch (pil_matkul) {
		case 1:
			cout << "Matkul Komdat\n";

			for (int i = awal; i < akhir; i++) {
				//cout << i + 1 << ". [" << daftarTugas[i].matkul << "]\n";
				cout << "   Tugas   : " << Komdat[i].tugas << endl;
				cout << "   Deadline: " << Komdat[i].dateline << "\n\n";
			}
			break;
		case 2: //daftarTugas[akhir].matkul = "Bahasa Inggris";
			cout << "Matkul Bahasa Inggris II\n";

			for (int i = awal; i < akhir; i++) {
				//cout << i + 1 << ". [" << daftarTugas[i].matkul << "]\n";
				cout << "   Tugas   : " << English[i].tugas << endl;
				cout << "   Deadline: " << English[i].dateline << "\n\n";
			}
			break;
		case 3: //daftarTugas[akhir].matkul = "Strukdat";
			cout << "Matkul Strukdat\n";

			for (int i = awal; i < akhir; i++) {
				//cout << i + 1 << ". [" << daftarTugas[i].matkul << "]\n";
				cout << "   Tugas   : " << Strudat[i].tugas << endl;
				cout << "   Deadline: " << Strudat[i].dateline << "\n\n";
			}
			break;
		case 4: //daftarTugas[akhir].matkul = "Strukdat";
			cout << "Matkul Hardware/Software\n";

			for (int i = awal; i < akhir; i++) {
				//cout << i + 1 << ". [" << daftarTugas[i].matkul << "]\n";
				cout << "   Tugas   : " << HS[i].tugas << endl;
				cout << "   Deadline: " << HS[i].dateline << "\n\n";
			}
		case 5: //daftarTugas[akhir].matkul = "sistem operasi";
			cout << "Matkul Sistem Operasi\n";

			for (int i = awal; i < akhir; i++) {
				//cout << i + 1 << ". [" << daftarTugas[i].matkul << "]\n";
				cout << "   Tugas   : " << SO[i].tugas << endl;
				cout << "   Deadline: " << SO[i].dateline << "\n\n";
			}
			break;
			break;
		case 6: //daftarTugas[akhir].matkul = "Strukdat";
			cout << "Matkul Pemrograman\n";

			for (int i = awal; i < akhir; i++) {
				//cout << i + 1 << ". [" << daftarTugas[i].matkul << "]\n";
				cout << "   Tugas   : " << Pemrograman[i].tugas << endl;
				cout << "   Deadline: " << Pemrograman[i].dateline << "\n\n";
			}
			break;
			case 7: //daftarTugas[akhir].matkul = "Komputer Grafis";
			cout << "Matkul Komputer Grafis\n";

			for (int i = awal; i < akhir; i++) {
				//cout << i + 1 << ". [" << daftarTugas[i].matkul << "]\n";
				cout << "   Tugas   : " << Komgraf[i].tugas << endl;
				cout << "   Deadline: " << Komgraf[i].dateline << "\n\n";
			}
			break;
		}
	}
	else {
		cout << "Belum ada tugas yang dimasukkan.\n";
	}

}


void jadwalmatkul() {
	cout << "========================================================   Jadwal Matkul   ========================================================\n";
	cout << "===================================================================================================================================\n";
	cout << "|           Senin          |         Selasa         |           Rabu          |          Kamis          |          Jumat          |\n";
	cout << "| Komunikasi Data          |English Lesson          |Sistem Operasi           |Struktur Data            |Sistem Operasi Praktikum |\n";
	cout << "| Lingkungan Bisnis        |Struktur Data Praktikum |Pemrograman              |Komputer Grafis          |                         |\n";
	cout << "|                          |Hardware/Software       |                         |Komunikasi Data Praktikum|                         |\n";
	cout << "|                          |                        |                         |                         |                         |\n";
	cout << "|                          |                        |                         |                         |                         |\n";
	cout << "-----------------------------------------------------------------------------------------------------------------------------------\n";
}

/*
void simpantugas() {
	ofstream outfile("tugasqueue");
	for (const auto& Pelajaran : Pelajarans) {
		outfile << Pelajaran.daftarTugas[akhir].dateline << endl << daftarTugas[akhir].tugas << endl;
	}outfile.close();
}
*/

void inputpengumuman(string pengumuman) {
	//cin.ignore();
	
	//Pelajaran tanggal[MAX];
	//Pelajaran Anouncment[MAX];
	//Pelajaran mk[MAX];

	//cin.ignore();
 	cout << "====================== Lembar pengumuman ======================"<< endl;
	cout << "Masukkan tanggal : "; cin >> Tanggal[akhir].pengumuman;
	//getline(cin, Tanggal[akhir].pengumuman);
	cout << "Masukkan mata kuliah : "; cin >> MK[akhir].pengumuman;
	cin.ignore();
	//getline(cin, MK[akhir].pengumuman);
	cout << "Masukkan Pengumuman : ";
	getline(cin, Anouncment[akhir].pengumuman);

	//cin.ignore();
	akhir++;
}

void outputpengumuman(){
	cout << "====================== Lembar pengumuman ======================"<< endl;
	for (int i = awal; i < akhir; i++){
		cout << Tanggal[i].pengumuman <<endl;
		cout << MK[i].pengumuman <<endl;
		cout << Anouncment[i].pengumuman << endl;
	}
}

void tampiData2(){
/*Pelajaran Komdat[MAX];
Pelajaran English[MAX];
Pelajaran Strudat[MAX];
Pelajaran HS[MAX];
Pelajaran SO[MAX];
Pelajaran Pemrograman[MAX];
Pelajaran Komgraf[MAX];*/
}

void remove(){
	if(!penuh()){
		
	}
}

int main() {
	int pilihan;
	do {
		//int pilihan;
		int choice;
		string pengumuman;
		cout << "== Pilih Peran ==\n";
		cout << "1. Dosen\n";
		cout << "2. Mahasiswa\n";
		cout << "3. Keluar Program\n";
		cout << "Masukkan Pilihan: ";
		cin >> pilihan;
		system("cls");
		
		switch (pilihan) {
		case 1:
			do {
				cout << "===== MENU TUGAS DOSEN =====\n";
				cout << "1. Jadwal Matkul\n";
				cout << "2. Lihat Daftar Tugas\n";
				cout << "3. Input Tugas Baru\n";
				cout << "4. Hapus Tugas\n";
				cout << "5. Memberi Nilai\n";
				cout << "6. Memberi Pengumuman\n";
				cout << "7. Exit\n";
				cout << "Masukkan Pilihan: ";
				cin >> choice;
				system("cls");
				switch (choice) {
				case 2:
					tampilData();
					system("pause");
					system("cls");
					break;
				case 3:
					Input_Tugas();
					system("pause");
					system("cls");
					break;
				case 6:
					inputpengumuman(pengumuman);
					system("pause");
					system("cls");
					break;

				case 7:
					cout << "Keluar dari menu dosen.\n";
					break;
				default:
					cout << "Pilihan salah, coba lagi!\n";
					system("pause");
					system("cls");
				}
			} while (choice != 7);
			break;

		case 2:
			while (true) {
				cout << "===== MENU TUGAS MAHASISWA =====\n";
				cout << "1. Jadwal Matkul\n";
				cout << "2. Lihat Daftar Tugas\n";
				cout << "3. Masukkan Tugas\n";
				cout << "4. Pengumuman Terbaru\n";
				cout << "5. Exit\n";
				cin >> choice;
				system("cls");
				switch (choice) {
				case 2:
					tampilData();
					system("pause");
					system("cls");
					break;
				case 4: 
					outputpengumuman();
					system("pause");
					system("cls");
					break;
				case 5:
					cout << "Keluar dari menu mahasiswa.\n";
					system("pause");
					system("cls");
					return 0;
				default:
					cout << "Belum tersedia fitur ini.\n";
					system("pause");
					system("cls");
				}
			}
			break;

		default:
			cout << "Pilihan tidak valid!\n";
		}
	} while (pilihan != 3);
	return 0;
}
