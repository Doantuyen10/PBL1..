#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

class mon_hoc {
private:
    float diembt, diemgk, diemck;

    float diemtb() const {
        return (diembt * 20 + diemgk * 30 + diemck * 50) / 100;
    }

    float diemgpa() const {
        return (diembt * 20 + diemgk * 30 + diemck * 50) / 100 / 10 * 4;
    }

public:
    friend class sinhvien;
    
};

class sinhvien {
private:
    string name;
    string mssv;
    string quequan;
    string gioitinh;
    mon_hoc giaitich;
    mon_hoc vatly;
    mon_hoc Tienganh;
    mon_hoc LTHDT;
    mon_hoc Triet;

public:
	
	string getmssv(){
		return mssv;
		};
	string getname(){
		return name;
		};
	
    void nhap() {
	
        cout << "Nhap ten sinh vien: ";
        getline(cin, name);

		cout << "Nhap mssv sinh vien: ";
        getline(cin, mssv);

        cout << "Nhap gioi tinh sinh vien: ";
        getline(cin, gioitinh);

        cout << "Nhap que quan sinh vien: ";
        getline(cin, quequan);
    }

    void nhapdiem() {
        cout << "______________________________________________________________________________";
        
do {
		cout<<endl<<"Nhap diem mon giai tich :";
	    cout << endl << "Diem bai tap: ";
        cin >> giaitich.diembt;
        cout << "Diem giua ki: ";
        cin >> giaitich.diemgk;
        cout << "Diem cuoi ki: ";
        cin >> giaitich.diemck;
} while ( giaitich.diembt < 0 || giaitich.diembt >10 || giaitich.diemgk < 0 || giaitich.diemgk >10 || giaitich.diemck < 0 || giaitich.diemck >10 );
    
        
		cout << "..........................................................................";

do{		cout <<endl<<"Nhap diem mon vat ly: ";
        cout <<endl<< "Diem bai tap : ";
        cin >> vatly.diembt;
        cout << "Diem giua ki: ";
        cin >> vatly.diemgk;
       cout << "Diem cuoi ki: ";
        cin >> vatly.diemck;
} while ( vatly.diembt < 0 || vatly.diembt >10 || vatly.diemgk < 0 || vatly.diemgk >10 || vatly.diemck < 0 || vatly.diemck >10 );       
        cout << "..........................................................................";

do{		cout <<endl<<"Nhap diem mon Tieng anh : ";
        cout <<endl<< "Diem bai tap : ";
        cin >> Tienganh.diembt;
        cout << "Diem giua ki: ";
        cin >> Tienganh.diemgk;
        cout << "Diem cuoi ki: ";
        cin >> Tienganh.diemck;
} while ( Tienganh.diembt < 0 || Tienganh.diembt >10 || Tienganh.diemgk < 0 || Tienganh.diemgk >10 || Tienganh.diemck < 0 || Tienganh.diemck >10 );
        cout << "..........................................................................";
do{		cout <<endl<<"Nhap diem mon LTHDT : ";
        cout <<endl<< "Diem bai tap : ";
        cin >> LTHDT.diembt;
        cout << "Diem giua ki: ";
        cin >> LTHDT.diemgk;
        cout << "Diem cuoi ki: ";
        cin >> LTHDT.diemck;
} while ( LTHDT.diembt < 0 || LTHDT.diembt >10 || LTHDT.diemgk < 0 || LTHDT.diemgk >10 || LTHDT.diemck < 0 || LTHDT.diemck >10 );
        cout << "..........................................................................";
do{		cout <<endl<<"Nhap diem mon Triet : ";
        cout <<endl<< "Diem bai tap : ";
        cin >> Triet.diembt;
        cout << "Diem giua ki: ";
        cin >> Triet.diemgk;
        cout << "Diem cuoi ki: ";
        cin >> Triet.diemck;
} while ( Triet.diembt < 0 || Triet.diembt >10 || Triet.diemgk < 0 || Triet.diemgk >10 || Triet.diemck < 0 || Triet.diemck >10 );
    }
	
    void xuat() const {
    	
        cout <<endl<<"DANH SACH THONG TIN SINH VIEN:"<<endl
			 << "sinh vien: " << name << endl
             << "mssv: " << mssv << endl
             << "que quan: " << quequan << endl
             << "gioi tinh: " << gioitinh << endl;
    }

    void xuatdiem() const {
        cout << "---------BANG DIEM (BT-GK-CK-TB-GPA)-------------" << endl
             << "giai tich: " << giaitich.diembt << " " << giaitich.diemgk << " " << giaitich.diemck << " " << giaitich.diemtb() << " " << giaitich.diemgpa() << endl
             << "vat ly: " << vatly.diembt << " " << vatly.diemgk << " " << vatly.diemck << " " << vatly.diemtb() << " " << vatly.diemgpa() << endl
             << "Tieng anh: " << Tienganh.diembt << " " << Tienganh.diemgk << " " << Tienganh.diemck << " " << Tienganh.diemtb() << " " << Tienganh.diemgpa() << endl
             << "LTHDT: " << LTHDT.diembt << " " << LTHDT.diemgk << " " << LTHDT.diemck << " " << LTHDT.diemtb() << " " << LTHDT.diemgpa() << endl
             << "Triet: " << Triet.diembt << " " << Triet.diemgk << " " << Triet.diemck << " " << Triet.diemtb() << " " << Triet.diemgpa() << endl
			 <<"-----------------------------------------------------\n";
    }
	void xuatfile() const {
	ofstream of("filexuattt.txt", ios::app);
	of << "sinh vien: " << name << endl
        	 << "mssv: " << mssv << endl
             << "que quan: " << quequan << endl
        	 << "gioi tinh: " << gioitinh << endl; 
    of <<endl<< "---------BANG DIEM (BT-GK-CK-TB-GPA)-------------" << endl
             << "giai tich: " << giaitich.diembt << " " << giaitich.diemgk << " " << giaitich.diemck << " " << giaitich.diemtb() << " " << giaitich.diemgpa() << endl
             << "vat ly: " << vatly.diembt << " " << vatly.diemgk << " " << vatly.diemck << " " << vatly.diemtb() << " " << vatly.diemgpa() << endl
             << "Tieng anh: " << Tienganh.diembt << " " << Tienganh.diemgk << " " << Tienganh.diemck << " " << Tienganh.diemtb() << " " << Tienganh.diemgpa() << endl
             << "LTHDT: " << LTHDT.diembt << " " << LTHDT.diemgk << " " << LTHDT.diemck << " " << LTHDT.diemtb() << " " << LTHDT.diemgpa() << endl
             << "Triet: " << Triet.diembt << " " << Triet.diemgk << " " << Triet.diemck << " " << Triet.diemtb() << " " << Triet.diemgpa() << endl;
    }        
	 };
void sapxep(vector<sinhvien>& lop_hoc) {
    int n = lop_hoc.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (lop_hoc[j].getname() > lop_hoc[j + 1].getname()) {
                swap(lop_hoc[j], lop_hoc[j + 1]);
            }
        }
    }
}
void xuatlop(const vector<sinhvien>& lop_hoc) {

    for (int i=0;i<lop_hoc.size();i++) {
        lop_hoc[i].xuat();
    	lop_hoc[i].xuatdiem();
    };
    }

void xuatfilelop(const vector<sinhvien>&lop_hoc) {
	for (int i=0;i<lop_hoc.size();i++) {
        lop_hoc[i].xuatfile();
        cout<<"DA XUAT FILE THANH CONG";
    };
		
};
	

void nhapsiso(int& i) {
    cout << "Nhap so sinh vien cua lop: ";
    cin >> i;
    cin.ignore();
};
void nhaplop(vector<sinhvien>& lop_hoc)
	{for (int i = 0; i < lop_hoc.size(); ++i) {
        cout << endl << "Nhap thong tin sinh vien " << i + 1 << endl;
        lop_hoc[i].nhap();
        lop_hoc[i].nhapdiem();
        cin.ignore();
    };
    }


void timsv( vector<sinhvien>& lop_hoc) {
    int i;
    string ms;
    do{
		cout << "Nhap thong tin tim kiem (1-mssv, 2-ten): ";
        cin >> i;
    } while (i != 1 && i != 2);

    cin.ignore();
    cout << "Nhap thong tin : ";
    getline(cin, ms);

    for (int j = 0; j < lop_hoc.size(); j++) {
        if ((i == 1 && lop_hoc[j].getmssv() == ms) || (i == 2 && lop_hoc[j].getname() == ms)) {
            cout << "\nThong tin sinh vien:\n";
            lop_hoc[j].xuat();
     		lop_hoc[j].xuatdiem();
            return;
        }
	};
	}
void sua_tt(vector<sinhvien>& lop_hoc){
	int i;
    string ms;
    do{
		cout << "Nhap thong sv sua (1-mssv, 2-ten): ";
        cin >> i;
    } while (i != 1 && i != 2);

    cout << "Nhap thong tin : ";
    cin.ignore();
    getline(cin, ms);

    for (int j = 0; j < lop_hoc.size(); j++) {
        if ((i == 1 && lop_hoc[j].getmssv() == ms) || (i == 2 && lop_hoc[j].getname() == ms)) {
        cin.ignore();
        lop_hoc[i].nhap();
        lop_hoc[i].nhapdiem();
    };
    };
    }
void themsv(vector<sinhvien> &lop_hoc,int &siso) {
    sinhvien sv;
    sv.nhap();
    sv.nhapdiem();
    lop_hoc.push_back(sv);
    siso++;
}
void xoa_sv( vector<sinhvien>& lop_hoc) {
    int i;
    string ms;
    do{
		cout << "Nhap thong tin sv can xoa(1-mssv, 2-ten): ";
        cin >> i;
    } while (i != 1 && i != 2);

    cin.ignore();
    cout << "Nhap thong tin : ";
    getline(cin, ms);

    for (int j = 0; j < lop_hoc.size(); j++) {
        if ((i == 1 && lop_hoc[j].getmssv() == ms) || (i == 2 && lop_hoc[j].getname() == ms)) {
            lop_hoc.erase(lop_hoc.begin() + j);
        cout<<"DA XOA SINH VIEN THANH CONG."<<endl;
        };
       
	};
	}
int main() {
	int luachon;
    int siso;
    nhapsiso(siso);
    vector<sinhvien> lop_hoc(siso);
do{
	do{
	//giao dien
	cout << " 		-----CHUONG TRINH QUAN LY SINH VIEN-----"<<endl
<<"          				(By Doan Thanh Tuyen & Nguyen Van Huan)"<<endl
<<"      1->Nhap thong tin sinh vien."<<endl
<<"      2->Hien thi danh sach sinh vien."<<endl
<<"      3->Them sinh vien moi."<<endl
<<"      4->Xoa sinh vien cua lop."<<endl
<<"      5->Sua thong tin sinh."<<endl
<<"      6->Tim kiem thong tin sinh vien."<<endl
<<"      7->Xuat danh sach sinh vien cua lop ra file."<<endl
<<"      0->Thoat."<<endl;
cout<<"NHAP LUA CHON CUA BAN: ";
cin >> luachon;
cin.ignore();
if(luachon==0) return 0;
	
} while (!(luachon>0 && luachon <=7));

switch(luachon){
	case 1:
		nhaplop(lop_hoc);
	
		break;
	case 2:
		sapxep(lop_hoc);	
		xuatlop(lop_hoc);
		break;
	case 3:
		themsv(lop_hoc,siso);
		break;
	case 4:
		xoa_sv(lop_hoc);
		break;
	case 5:
		sua_tt(lop_hoc);
		break;
	case 6:
		timsv(lop_hoc);
		break;
	case 7:
		sapxep(lop_hoc);
		xuatfilelop(lop_hoc);
		break;
	default:
		cout<<"lua chon khong dung";
		};
} while(true);
		
		
		
		
		
	
	
	
		
			

    
    
    
    
    
    
	
    return 0;
}

