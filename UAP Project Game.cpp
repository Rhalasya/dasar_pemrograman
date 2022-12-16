 //		TUGAS UAP DASAR-DASAR PEMROGRAMAN

//		DODGE GAME

//		KELOMPOK 9
//		> Annisa Citra Pratiwi [2217051008]
//		> Fathiyya Jasmine [2217051026]
//		> Rhalasya Eleina Putri [2217051083] 

// -----------------------------------------------------------------------------

#include <windows.h>
#include <curses.h>

using namespace std;

int speed; //tingkat kesulitan tiap level
void menu_main(); //fungsi void menu utama
void menu_exit(); //fungsi void menu keluar
void mode(); //fungsi void tentang level
void play(); // fungsi void ketika main
void exit(); //fungsi void akhir permainan

int main(){
    
	char kedip;
	int pilih;
	
	initscr(); //untuk mulai library ncurses

	curs_set(0); //menghilangkan cursor
	
	noecho(); //untuk menekan echo otomatis dari karakter yang diketik
	
	menu_main();
	pilih = 1;
	while(true){
		for(int i=0;;){
		noecho();
		kedip = getch(); //menahan layar
		//tombol keatas=72
		//tombol kebawah=80
		
			if(kedip == 72){
				clear();
		        menu_main();
				pilih = 1;
			}
			else if(kedip == 80){
				clear();
		        menu_exit();
				pilih = 2;
			}
			
			if(kedip == '\n'){
				
				if(pilih == 1){ 
					mode();
				}
				if(pilih == 2){
					exit(0);
				}
			}
		}	

	getch();
	refresh();
	endwin;
	
}
}

void menu_main(){
	mvprintw (7,43, "------MENU UTAMA------"); refresh;
	mvprintw (8,43, "WELCOME TO DODGE GAME!");refresh();
	mvprintw (11,48, "PLAY >");refresh();
	mvprintw (13,48, "EXIT");refresh();
}

void menu_exit(){
	mvprintw (7,43, "------MENU UTAMA------"); refresh;
	mvprintw (8,43, "WELCOME TO DODGE GAME!");refresh();
	mvprintw (11,48,"PLAY ");refresh();
	mvprintw (13,48, "EXIT >");refresh();
}

void mode(){
	clear();
	char level;
	mvprintw (7,43, "Masukan tingkat kesulitan!");
	mvprintw (10,50, "1. Easy");
	mvprintw (11,50, "2. Normal");
	mvprintw (12,50, "3. Hard");
	mvprintw (13,50, "4. Expert"); 
	mvprintw (15,46, "Pilihan anda : ");	
	echo(); // untuk menampilkan fungsi teks ke layar
	
	level = getch();//input tingkat kesulitan
//	1 = eassy
//  2 = medium
//  3 = hard
//  4 = expert

	if(level == '1'){
		speed=100;play();
	}
	else if(level == '2'){
		speed=50;play();
	}
	else if(level == '3'){
		speed=15;play();
	}
	else if(level == '4'){
		speed=5; play();
	}
}

void play(){
	
	nodelay(stdscr, TRUE); // biar tidak ada penundaan, jd akan berfungsi degan non cara pemblokiran jika input kunci blm siap
	//sumbu y = 7 dan 9
	//sumbu x = 60 sampai dengan 116
	
	//kordinat rintangan y,x
	int a=7;
	int b=104;
	int c=9;
	int d=114;
	int e=7;
	int f=124;
	int g=9;
	int h=136;
	int j=7;
	int k=145;
	int l=9;
	int m=155;
	int n=7;
	int o=166;
	int skors = 0;
	
	int y= 7; //y=a
	int x= 2; //x=b
	
	//simbol pemain
	int klik;
	char rintangan[100] = "[0]";
	
	//looping utama
	while(true){
	for(int i = 0;i<180;i++){

		noecho();
		klik = getch();//menangkap input tombol
		clear();

		//buat garis lurus
		mvprintw(8,0,"========================================================================================================================");

		//nampilin rintangan nya supaya gerak
		mvprintw(a,b-i,rintangan);
		mvprintw(c,d-i,rintangan); 
		mvprintw(e,f-i,rintangan);
		mvprintw(g,h-i,rintangan);
		mvprintw(j,k-i,rintangan);
		mvprintw(l,m-i,rintangan);
		mvprintw(n,o-i,rintangan);
		Sleep(speed);
		
		//kondisi naik turun kotak kuning
		if(klik==72){
			y=7;
		}
		else if(klik ==80){
			y=9;
		}
		
		//buat simbol pemainnya naik turun
		mvprintw(y,x, rintangan);
		
		//kondisi ketika simbol pemain nabrak rintangan
		if(y==a && x==b-i){
			clear();
			mvprintw (8,51, "GAME OVER!");
			printw("\nBaru segitu udah kalah?\nYour Score: %d", skors);
			getch();
			Sleep(5000);
			refresh();
			exit(0);
		}
		else if(y==c && x==d-i){
			clear();
			mvprintw (8,51, "GAME OVER!");
			printw("\nPractice Making Perfect, Semongko!\nYour Score : %d",skors);
			getch();
			Sleep(5000);
			refresh();
			exit(0);
		}
		else if(y==e && x==f-i){
			clear();
			mvprintw (8,51, "GAME OVER!");
			printw("\nKamu Hebat, Ayo coba lagi!\nYour Score: %d",skors);
			getch();
			Sleep(5000);
			refresh();
			exit(0);
		}
		else if(y==g && x==h-i){
			clear();
			mvprintw (8,51, "GAME OVER!");
			printw("\nyach ok lah skill kamu lumayan\nYour Score: %d",skors);
			getch();
			Sleep(5000);
			refresh();
			exit(0);
		}
		else if(y==j && x==k-i){
			clear();
			mvprintw (8,51, "GAME OVER!");
			printw("\nYah, Sayang Banget!\nYour Score: %d",skors);
			getch();
			Sleep(5000);
			refresh();
			exit(0);
		}
		else if(y==l && x==m-i){
			clear();
			mvprintw (8,51, "GAME OVER!");
			printw("\nKamu keren! Semoga cepet lulus yah.\nYour Score : %d" ,skors);
			getch();
			Sleep(50000);
			refresh();
			exit(0);
		}
		else if(y==n && x==o-i){
			clear();
			mvprintw (8,51, "GAME OVER!");
			printw("\nWah Sayang Sekali, Sudah Jauh...\nYour Score : %d",skors);
			getch();
			Sleep(5000);
			refresh();
			exit(0);
		}
		skors++;//syarat score supaya nilainya nambah
		mvprintw(13,11, "Score = ");
		mvprintw(13,20,"%d",skors); //integer desimal
		refresh();
		}
	}
}

