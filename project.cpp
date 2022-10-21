// Pengiriman Paket antarkota dan luar kota
// Kelompok 17
#include<iostream>
#include<string>
using namespace std;

void print_resi(string pengirim[], int telpon[], string deskripsi[], string penerimaa[], int telpon_penerima[], float total, int ppn, int total_berat, int total_biaya){
	 
	 	
			cout << "________________________________________________________\n";
			cout << "===================Cetak Ongkir======================\n";
			cout << "________________________________________________________\n";
			cout << "\nNama Pengirim\t : " << pengirim << endl;
			cout << "No Telpon Pengirim    : " << telpon << endl;
			cout << "Deskripsi Paket\t : " << deskripsi << endl;
			cout << "Nama Penerima\t : " << penerimaa << endl;
			cout << "No Telpon Penerima    : " << telpon_penerima << endl;
			cout << "Total Berat Paket : " << total_berat << endl;
			cout << "Total Ongkir : " << total <<endl;
			cout << "PPN \t : " << ppn << endl;
			cout << "Total Biaya : " << total_biaya << endl;
			cout << "********************************************************\n";
		}
			
	int main(){
	
	 	int pilihan,jumlah,kt,i;
	 	char kode,menu_utama;
	 	string verif;
	 	string penerimaa[30], pengirim[30], deskripsi[50], tujuan[50];
	 	int berat, total_berat, ppn, total_biaya, total; 
	 	int telpon[14], telpon_penerima[14];
	 	
 
	 	menu:
		cout << "___________________________________________" << endl;
		cout << "--------Selamat Datang di Kirim Geh--------" << endl;
		cout << "___________________________________________" <<endl;
		
				cout << "============= Kota Tujuan =============" << endl;
		cout << "Tujuan Anda\t     \t   Tarif      " << endl;
		cout << "1. Lampung\t    \t Rp. 8.000/kg" << endl;
		cout << "2. Jakarta\t    \t Rp. 20.000/kg" << endl;
		cout << "3. Bogor\t    \t Rp. 22.000/kg" << endl;
		cout << "4. Depok\t    \t Rp. 16.000/kg" << endl;
		cout << "5. Tangerang\t    \t Rp. 18.000/kg" << endl;
		cout << "6. Bekasi\t    \t Rp. 16.000/kg" << endl << endl;
		cout << "Berat Maksimal  15 Kg" << endl;
		cout << "Biaya belum termasuk ppn" << endl;
		
		
		
		cout << "Pilih Kota Tujuan (1,2,3,4,5,6) : ";
		cin >> kode;
		
		if (kode == '1' || kode =='2' || kode == '3' || kode == '4' || kode == '5' || kode == '6'){
			goto bio;
		}
		else {
			cout << "Kota tidak Tersedia";
			goto menu;
		}

		bio:
			
			system("CLS");

		cout << "Nama Pengirim \t\t: ";
		cin >> pengirim[i];
		
		cout << "No Telpon Pengirim \t: ";
		cin >> telpon[i];
		
		cout << "Deskripsi Paket \t: ";
		cin >> deskripsi[i];
		
		cout << "Berat Paket (Kg) \t: ";
		cin >> berat;
		cout << "Jumlah Paket \t\t: ";
		cin >> jumlah;
		total_berat = berat*jumlah;
		cout << "Total berat Paket \t: " << total_berat << " kg" <<endl;
	
		
		cout << "=============================================================" << endl;
		cout << "Nama Penerima \t\t: ";
		cin>>penerimaa[i];
		cout << "Alamat Penerima \t: ";
		cin>>tujuan[i];
		cout << "No Telpon Penerima \t: ";
		cin >> telpon_penerima[i];
	
	cout <<endl;
		
		system("CLS");
		cout<<"_______________ Verifikasi Data ______________\n\n";
		
		cout<<"Pengirim  : "<< pengirim[i] <<endl;
		cout<<"Penerima : "<<penerimaa[i]<<endl;
		cout<<"Alamat : " <<tujuan[i]<<endl;
		cout<<"Nomor Telpon : "<<telpon_penerima[i]<<endl;
		cout<<endl;
	
	konfir:
		 cout<<"Apakah data sudah benar? (Y/N) : ";
		cin >> verif;
		
		cout << "________________________________________________________\n";
			cout << "===================Konfirmasi Data======================\n";
			cout << "________________________________________________________\n";
			cout << "\nNama Pengirim\t : " << pengirim<< endl;
			cout << "No Telpon Pengirim    : " << telpon << endl;
			cout << "Deskripsi Paket\t : " << deskripsi << endl;
			cout << "Nama Penerima\t : " << penerimaa << endl;
			cout << "No Telpon Penerima    : " << telpon_penerima << endl;
			cout << "Total Berat Paket : " << total_berat << endl;
			cout << "Total Ongkir : " << total <<endl;
			cout << "PPN \t : " << ppn << endl;
			cout << "Total Biaya : " << total_biaya << endl;
//			cout << "********************************************************\n";	cout << "________________________________________________________\n";
//			cout << "===================Konfirmasi Data======================\n";
//			cout << "________________________________________________________\n";
//			cout << "\nNama Pengirim\t : " << pengirim << endl;
//			cout << "No Telpon Pengirim    : " << telpon << endl;
//			cout << "Deskripsi Paket\t : " << deskripsi << endl;
//			cout << "Nama Penerima\t : " << penerimaa << endl;
//			cout << "No Telpon Penerima    : " << telpon_penerima << endl;
//			cout << "Total Berat Paket : " << total_berat << endl;
//			cout << "Total Ongkir : " << total <<endl;
//			cout << "PPN \t : " << ppn << endl;
//			cout << "Total Biaya : " << total_biaya << endl;
//			cout << "********************************************************\n";	cout << "________________________________________________________\n";
//			cout << "===================Konfirmasi Data======================\n";
//			cout << "________________________________________________________\n";
//			cout << "\nNama Pengirim\t : " << pengirim << endl;
//			cout << "No Telpon Pengirim    : " << telpon << endl;
//			cout << "Deskripsi Paket\t : " << deskripsi << endl;
//			cout << "Nama Penerima\t : " << penerimaa << endl;
//			cout << "No Telpon Penerima    : " << telpon_penerima << endl;
//			cout << "Total Berat Paket : " << total_berat << endl;
//			cout << "Total Ongkir : " << total <<endl;
//			cout << "PPN \t : " << ppn << endl;
//			cout << "Total Biaya : " << total_biaya << endl;
//			cout << "********************************************************\n";	cout << "________________________________________________________\n";
//			cout << "===================Konfirmasi Data======================\n";
//			cout << "________________________________________________________\n";
//			cout << "\nNama Pengirim\t : " << pengirim << endl;
//			cout << "No Telpon Pengirim    : " << telpon << endl;
//			cout << "Deskripsi Paket\t : " << deskripsi << endl;
//			cout << "Nama Penerima\t : " << penerimaa << endl;
//			cout << "No Telpon Penerima    : " << telpon_penerima << endl;
//			cout << "Total Berat Paket : " << total_berat << endl;
//			cout << "Total Ongkir : " << total <<endl;
//			cout << "PPN \t : " << ppn << endl;
//			cout << "Total Biaya : " << total_biaya << endl;
//			cout << "********************************************************\n";	cout << "________________________________________________________\n";
//			cout << "===================Konfirmasi Data======================\n";
//			cout << "________________________________________________________\n";
//			cout << "\nNama Pengirim\t : " << pengirim << endl;
//			cout << "No Telpon Pengirim    : " << telpon << endl;
//			cout << "Deskripsi Paket\t : " << deskripsi << endl;
//			cout << "Nama Penerima\t : " << penerimaa << endl;
//			cout << "No Telpon Penerima    : " << telpon_penerima << endl;
//			cout << "Total Berat Paket : " << total_berat << endl;
//			cout << "Total Ongkir : " << total <<endl;
//			cout << "PPN \t : " << ppn << endl;
//			cout << "Total Biaya : " << total_biaya << endl;
//			cout << "********************************************************\n";	cout << "________________________________________________________\n";
//			cout << "===================Konfirmasi Data======================\n";
//			cout << "________________________________________________________\n";
//			cout << "\nNama Pengirim\t : " << pengirim << endl;
//			cout << "No Telpon Pengirim    : " << telpon << endl;
//			cout << "Deskripsi Paket\t : " << deskripsi << endl;
//			cout << "Nama Penerima\t : " << penerimaa << endl;
//			cout << "No Telpon Penerima    : " << telpon_penerima << endl;
//			cout << "Total Berat Paket : " << total_berat << endl;
//			cout << "Total Ongkir : " << total <<endl;
//			cout << "PPN \t : " << ppn << endl;
//			cout << "Total Biaya : " << total_biaya << endl;
//			cout << "********************************************************\n";	cout << "________________________________________________________\n";
//			cout << "===================Konfirmasi Data======================\n";
//			cout << "________________________________________________________\n";
//			cout << "\nNama Pengirim\t : " << pengirim << endl;
//			cout << "No Telpon Pengirim    : " << telpon << endl;
//			cout << "Deskripsi Paket\t : " << deskripsi << endl;
//			cout << "Nama Penerima\t : " << penerimaa << endl;
//			cout << "No Telpon Penerima    : " << telpon_penerima << endl;
//			cout << "Total Berat Paket : " << total_berat << endl;
//			cout << "Total Ongkir : " << total <<endl;
//			cout << "PPN \t : " << ppn << endl;
//			cout << "Total Biaya : " << total_biaya << endl;
//			cout << "********************************************************\n";	cout << "________________________________________________________\n";
//			cout << "===================Konfirmasi Data======================\n";
//			cout << "________________________________________________________\n";
//			cout << "\nNama Pengirim\t : " << pengirim << endl;
//			cout << "No Telpon Pengirim    : " << telpon << endl;
//			cout << "Deskripsi Paket\t : " << deskripsi << endl;
//			cout << "Nama Penerima\t : " << penerimaa << endl;
//			cout << "No Telpon Penerima    : " << telpon_penerima << endl;
//			cout << "Total Berat Paket : " << total_berat << endl;
//			cout << "Total Ongkir : " << total <<endl;
//			cout << "PPN \t : " << ppn << endl;
//			cout << "Total Biaya : " << total_biaya << endl;
//			cout << "********************************************************\n";	cout << "________________________________________________________\n";
//			cout << "===================Konfirmasi Data======================\n";
//			cout << "________________________________________________________\n";
//			cout << "\nNama Pengirim\t : " << pengirim << endl;
//			cout << "No Telpon Pengirim    : " << telpon << endl;
//			cout << "Deskripsi Paket\t : " << deskripsi << endl;
//			cout << "Nama Penerima\t : " << penerimaa << endl;
//			cout << "No Telpon Penerima    : " << telpon_penerima << endl;
//			cout << "Total Berat Paket : " << total_berat << endl;
//			cout << "Total Ongkir : " << total <<endl;
//			cout << "PPN \t : " << ppn << endl;
//			cout << "Total Biaya : " << total_biaya << endl;
//			cout << "********************************************************\n";	cout << "________________________________________________________\n";
//			cout << "===================Konfirmasi Data======================\n";
//			cout << "________________________________________________________\n";
//			cout << "\nNama Pengirim\t : " << pengirim << endl;
//			cout << "No Telpon Pengirim    : " << telpon << endl;
//			cout << "Deskripsi Paket\t : " << deskripsi << endl;
//			cout << "Nama Penerima\t : " << penerimaa << endl;
//			cout << "No Telpon Penerima    : " << telpon_penerima << endl;
//			cout << "Total Berat Paket : " << total_berat << endl;
//			cout << "Total Ongkir : " << total <<endl;
//			cout << "PPN \t : " << ppn << endl;
//			cout << "Total Biaya : " << total_biaya << endl;
//			cout << "********************************************************\n";
			while(verif=="Y" || verif=="y");
	for(int i = 1 ; i<jumlah; i++){
			cout << "________________________________________________________\n";
			cout << "===================Konfirmasi Data======================\n";
			cout << "________________________________________________________\n";
			cout << "\nNama Pengirim\t : " << pengirim << endl;
			cout << "No Telpon Pengirim    : " << telpon << endl;
			cout << "Deskripsi Paket\t : " << deskripsi << endl;
			cout << "Nama Penerima\t : " << penerimaa << endl;
			cout << "No Telpon Penerima    : " << telpon_penerima << endl;
			cout << "Total Berat Paket : " << total_berat << endl;
			cout << "Total Ongkir : " << total <<endl;
			cout << "PPN \t : " << ppn << endl;
			cout << "Total Biaya : " << total_biaya << endl;
			cout << "********************************************************\n";
	}
		
	
		
				
		resi:
			int jumlah_paket = jumlah;
			
			for(int i = 0; i < jumlah_paket; i++){

		}
		
		cetak :
		if (kode == 1){
					cout << "Tarif Per Kg : Rp. 8.000\n";
					ppn = total *10/100;
					total_biaya = total + ppn;
					total_berat = (jumlah*berat);
					total = (8000*total_berat);
					system("CLS");
					print_resi(pengirim, telpon, deskripsi, penerimaa, telpon_penerima, total, ppn, total_berat, total_biaya);
		}
		
		else if(kode == 2){
			cout << "Tarif Per Kg : Rp. 20.000\n";
					ppn = total *10/100;
					total_biaya = total + ppn;
					total_berat = (jumlah*berat);
					total = (20000*total_berat);
					system("CLS");
					print_resi(pengirim, telpon, deskripsi, penerimaa, telpon_penerima, total, ppn, total_berat, total_biaya);
		}
		
		else if(kode == 3){
			cout << "Tarif Per Kg : Rp. 22.000\n";
					ppn = total *10/100;
					total_biaya = total + ppn;
					total_berat = (jumlah*berat);
					total = (22000*total_berat);
					system("CLS");
					print_resi(pengirim, telpon, deskripsi, penerimaa, telpon_penerima, total, ppn, total_berat, total_biaya);
	
		}
		
		else if(kode == 4){
			cout << "Tarif Per Kg : Rp. 16.000\n";
					ppn = total *10/100;
					total_biaya = total + ppn;
					total_berat = (jumlah*berat);
					total = (16000*total_berat);
					system("CLS");
					print_resi(pengirim, telpon, deskripsi, penerimaa, telpon_penerima, total, ppn, total_berat, total_biaya);
	
		}
			else if(kode == 5){
			cout << "Tarif Per Kg : Rp. 18.000\n";
					ppn = total *10/100;
					total_biaya = total + ppn;
					total_berat = (jumlah*berat);
					total = (18000*total_berat);
					system("CLS");
					print_resi(pengirim, telpon, deskripsi, penerimaa, telpon_penerima, total, ppn, total_berat, total_biaya);
		}
			else if(kode == 6){
			cout << "Tarif Per Kg : Rp. 16.000\n";
				ppn = total *10/100;
					total_biaya = total + ppn;
					total_berat = (jumlah*berat);
					total = (16000*total_berat);
					system("CLS");
					print_resi(pengirim, telpon, deskripsi, penerimaa, telpon_penerima, total, ppn, total_berat, total_biaya);
		}
	

		
	cout<<endl;
	cout<<"Terima Kasih sudah Memakai Jasa Kirim Kirim Geh!";
	
	return 0;
	
}





