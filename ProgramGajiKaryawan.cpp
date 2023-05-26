
#include<iostream>
using namespace std;


int gajiNormal(int jamKNormal, int upahPJam){
	int gaji_normal=jamKNormal*upahPJam;
	return gaji_normal;
}

int jamLembur(int jmlhJamKrj, int jamKrjNorml){
	int jam_lembur=jmlhJamKrj-jamKrjNorml;
	return jam_lembur;
}


int transportLembur1(int gajinormal){
	int transLembur=0.30*gajinormal;
	return transLembur;
}

int transportLembur2(int gajinormal){
	int transLembur=0.20*gajinormal;
	return transLembur;
}

int totalGaji(int gjNormal, int translmbr){
	int totalgaji=gjNormal + translmbr;
	return totalgaji;
}

void hasil(string h_nama, string h_nik, string h_namaGol, int h_total){
	cout<<"*******************************************************************************"<<endl;
		cout<<"\tData Karyawan "<<endl;
		cout<<"\tNama Karyawan\t\t : "<<h_nama<<endl; 
		cout<<"\tNomor Induk Karyawan\t : "<<h_nik<<endl;
		cout<<"\tNama Golongan\t\t : "<<h_namaGol<<endl;
		cout<<"\tTotal Gaji\t\t : "<<h_total;
	cout<<"\n*******************************************************************************\n"<<endl;
}

void golA(string g_nama, string g_nik){
	cout<<"*******************************************************************************"<<endl;
	cout<<"\t\t\t    G O L O N G A N   | A | \n"<<endl;
	cout<<"*******************************************************************************\n"<<endl;
	string namaGolongan="Staff Atau Karyawan";
	cout<<"\tKeterangan : "<<endl;
	cout<<"\tJam Kerja Normal   = 24 jam"<<endl;
	cout<<"\tUpah per Jam\t   = 20000"<<endl;
	int jamKerjaNormal= 24;
	int upah=20000;
	int jumlahKerjaNormal;
	int gaji_Normal=gajiNormal(jamKerjaNormal,upah);
	cout<<"\tGaji Normal\t   = "<<gaji_Normal<<endl;
	
	int jumlah;
	cout<<"\n\tBerapa Total jam Kerja = ";
	cin>>jumlah;
	
	int jamlembur=jamLembur(jumlah, jamKerjaNormal);
	cout<<"\tJam Lembur = "<<jamlembur<<endl;
	
	if(jamlembur>25){
		cout<<"\n\t\tJam lemburnya "<<jamlembur<<" lebih dari 25 jam"<<endl;
		cout<<"\tmaka akan mendapatkan tambahan transport lembur sebesar 30 persen\n"<<endl;
		cout<<"\t"<<endl;
		int tambahan=transportLembur1(gaji_Normal);
		cout<<"\tMaka Total Gaji = "<<gaji_Normal<<" + "<<tambahan<<endl;
		cout<<"\t                = "<<totalGaji(gaji_Normal, tambahan)<<endl;
		cout<<"\n"<<endl;
		hasil(g_nama, g_nik, namaGolongan, totalGaji(gaji_Normal, tambahan));
	}
	else if(jamlembur>=10 && jamlembur<=25){
		cout<<"\nJam lemburnya "<<jamlembur<<" , lebih dari sama dengan 10 dan kurang dari sama dengan 25 jam"<<endl;
		cout<<"\tmaka akan mendapatkan tambahan transport lembur sebesar 20 persen\n"<<endl;
		cout<<"\t"<<endl;
		int tambahan=transportLembur2(gaji_Normal);
		cout<<"\tMaka Total Gaji = "<<gaji_Normal<<" + "<<tambahan<<endl;
		cout<<"\t                = "<<totalGaji(gaji_Normal, tambahan)<<endl;
		cout<<"\n"<<endl;
		hasil(g_nama, g_nik, namaGolongan, totalGaji(gaji_Normal, tambahan));
	}
	else if(jamlembur<10){
		cout<<"\nJam Lemburnya kurang dari 10, maka tidak mendapatkan tambahan transport lembur"<<endl;
		hasil(g_nama, g_nik, namaGolongan, gaji_Normal);
	}
	
}

void golB(string g_nama, string g_nik){
	cout<<"*******************************************************************************"<<endl;
	cout<<"\t\t\t    G O L O N G A N   | B | \n"<<endl;
	cout<<"*******************************************************************************\n"<<endl;
	string namaGolongan="Maneger Divisi";
	cout<<"\tKeterangan : "<<endl;
	cout<<"\tJam Kerja Normal   = 24 jam"<<endl;
	cout<<"\tUpah per Jam\t   = 25000"<<endl;
	int jamKerjaNormal= 24;
	int upah=25000;
	int jumlahKerjaNormal;
	int gaji_Normal=gajiNormal(jamKerjaNormal,upah);
	cout<<"\tGaji Normal\t   = "<<gaji_Normal<<endl;
	
	int jumlah;
	cout<<"\n\tBerapa Total jam Kerja = ";
	cin>>jumlah;
	
	int jamlembur=jamLembur(jumlah, jamKerjaNormal);
	cout<<"\tJam Lembur = "<<jamlembur<<endl;
	
	if(jamlembur>25){
		cout<<"\n\t\tJam lemburnya "<<jamlembur<<" lebih dari 25 jam"<<endl;
		cout<<"\tmaka akan mendapatkan tambahan transport lembur sebesar 30 persen\n"<<endl;
		cout<<"\t"<<endl;
		int tambahan=transportLembur1(gaji_Normal);
		cout<<"\tMaka Total Gaji = "<<gaji_Normal<<" + "<<tambahan<<endl;
		cout<<"\t                = "<<totalGaji(gaji_Normal, tambahan)<<endl;
		cout<<"\n"<<endl;
		hasil(g_nama, g_nik, namaGolongan, totalGaji(gaji_Normal, tambahan));
	}
	else if(jamlembur>=10 && jamlembur<=25){
		cout<<"\nJam lemburnya "<<jamlembur<<" , lebih dari sama dengan 10 dan kurang dari sama dengan 25 jam"<<endl;
		cout<<"\tmaka akan mendapatkan tambahan transport lembur sebesar 20 persen\n"<<endl;
		cout<<"\t"<<endl;
		int tambahan=transportLembur2(gaji_Normal);
		cout<<"\tMaka Total Gaji = "<<gaji_Normal<<" + "<<tambahan<<endl;
		cout<<"\t                = "<<totalGaji(gaji_Normal, tambahan)<<endl;
		cout<<"\n"<<endl;
		hasil(g_nama, g_nik, namaGolongan, totalGaji(gaji_Normal, tambahan));
	}
	else if(jamlembur<10){
		cout<<"\nJam Lemburnya kurang dari 10, maka tidak mendapatkan tambahan transport lembur"<<endl;
		hasil(g_nama, g_nik, namaGolongan, gaji_Normal);
	}
	
}

void golC(string g_nama, string g_nik){
	cout<<"*******************************************************************************"<<endl;
	cout<<"\t\t\t    G O L O N G A N   | C | \n"<<endl;
	cout<<"*******************************************************************************\n"<<endl;
	string namaGolongan="Direktur";
	cout<<"\tKeterangan : "<<endl;
	cout<<"\tJam Kerja Normal   = 24 jam"<<endl;
	cout<<"\tUpah per Jam\t   = 30000"<<endl;
	int jamKerjaNormal= 24;
	int upah=30000;
	int jumlahKerjaNormal;
	int gaji_Normal=gajiNormal(jamKerjaNormal,upah);
	cout<<"\tGaji Normal\t   = "<<gaji_Normal<<endl;
	
	int jumlah;
	cout<<"\n\tBerapa Total jam Kerja = ";
	cin>>jumlah;
	
	int jamlembur=jamLembur(jumlah, jamKerjaNormal);
	cout<<"\tJam Lembur = "<<jamlembur<<endl;
	
	if(jamlembur>25){
		cout<<"\n\t\tJam lemburnya "<<jamlembur<<" lebih dari 25 jam"<<endl;
		cout<<"\tmaka akan mendapatkan tambahan transport lembur sebesar 30 persen\n"<<endl;
		cout<<"\t"<<endl;
		int tambahan=transportLembur1(gaji_Normal);
		cout<<"\tMaka Total Gaji = "<<gaji_Normal<<" + "<<tambahan<<endl;
		cout<<"\t                = "<<totalGaji(gaji_Normal, tambahan)<<endl;
		cout<<"\n"<<endl;
		hasil(g_nama, g_nik, namaGolongan, totalGaji(gaji_Normal, tambahan));
	}
	else if(jamlembur>=10 && jamlembur<=25){
		cout<<"\nJam lemburnya "<<jamlembur<<" , lebih dari sama dengan 10 dan kurang dari sama dengan 25 jam"<<endl;
		cout<<"\tmaka akan mendapatkan tambahan transport lembur sebesar 25 persen\n"<<endl;
		cout<<"\t"<<endl;
		int tambahan=transportLembur2(gaji_Normal);
		cout<<"\tMaka Total Gaji = "<<gaji_Normal<<" + "<<tambahan<<endl;
		cout<<"\t                = "<<totalGaji(gaji_Normal, tambahan)<<endl;
		cout<<"\n"<<endl;
		hasil(g_nama, g_nik, namaGolongan, totalGaji(gaji_Normal, tambahan));
	}
	else if(jamlembur<10){
		cout<<"\nJam Lemburnya kurang dari 10, maka tidak mendapatkan tambahan transport lembur"<<endl;
		hasil(g_nama, g_nik, namaGolongan, gaji_Normal);
	}

	
}



int main(){
	int jamNormal, upah;
	int j;
	j=0;
	string nama, nik;
	char pilihan, pilih, A, a, B, b, C, c;
			
			do{
			menu:
			cout<<"*******************************************************************************"<<endl;
			cout<<"\t\t    T O T A L   P E M B A Y A R A N   G A J I\n"<<endl;
			cout<<"\t\t          K E L O M P O K   N E P T U N E\n"<<endl;
			cout<<"*******************************************************************************"<<endl;
			cout<<"Silakan Pilih Golongan untuk menghitung pembayaran gaji setiap karyawan\n"<<endl;
			cout<<"\tA. Staff Atau Karyawan"<<endl;
			cout<<"\tB. Maneger Divisi"<<endl;
			cout<<"\tC. Direktur"<<endl;
			
			cout<<"Silakan Input Data Karyawan"<<endl;
			cout<<"\tNama Karyawan\t\t : "; 
			cin>>nama;
			cout<<"\tNomor Induk Karyawan\t : "; 
			cin>>nik;
			cout<<"\tPilih Golongan (A/B/C)\t : "; 
			cin>>pilihan;
			
			system("cls");
			
			switch(pilihan){
				case 'A' : 
					case 'a':
						golA(nama, nik);
						break;
				case 'B' :
					case 'b':
						golB(nama, nik);
						break;
				case 'C':
					case 'c':
						golC(nama, nik);
						break;
				
				default:
					cout<<"Maaf Pilihan Anda belum tersedia, Silakan coba kembali"<<endl;
					break;
			}
			
			cout<<"\nApakah Anda ingin menghitung gaji karyawan lagi? (Y/N) = ";
			cin>>pilih;
			system("cls");
			if(pilih=='y' || pilih=='Y'){	
			}
			if(pilih=='n' || pilih=='N'){
				goto akhir;
			}
		 
		}while(pilih=='y' || pilih=='Y');
			
			
		
		
	
	
	akhir:
	system("cls");
		cout<<"*******************************************************************************"<<endl;
		cout<<"\t\t\t    T E R I M A   K A S I H \n"<<endl;
		cout<<"\t\t\t T E L A H   M E N G U N A K A N \n"<<endl;
		cout<<"\t\t\t    A P L I K A S I   I N I \n"<<endl;
		cout<<"*******************************************************************************"<<endl;
		
	return 0;
	}
