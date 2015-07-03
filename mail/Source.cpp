#include<iostream>
#include<locale>
#include<string>
#include<windows.h>

using namespace std;

struct mails{
	int sender;
	int resiver;
	int mail1;
	int mail2;
	int mail3;
	int mail4;
	int mail5;
	int mail6;
	int mail7;
	int mail8;
	int mail9;
	int mail10;
};

int main(){

	setlocale (LC_ALL, "bulgarian");

	mails mail[1000];
	mails swap;
	int n;
	cout << "Въведете брой писма: ";
	cin >> n ;

	for (int i = 0; i < n; i++){
	
		cout << "Изпращач №: " << i+1 << " : ";
		cin >> mail[i].sender;

		cout << "Получател №: " << i+1 << " : ";
		cin >> mail[i].resiver;

		cout << "Първо число №: " << i+1 << " : ";
		cin >> mail[i].mail1;

		cout << "Второ число №: " << i+1 << " : ";
		cin >> mail[i].mail2;

		cout << "Трето число №: " << i+1 << " : ";
		cin >> mail[i].mail3;

		cout << "Четвърто число №: " << i+1 << " : ";
		cin >> mail[i].mail4;

		cout << "Пето число №: " << i+1 << " : ";
		cin >> mail[i].mail5;

		cout << "Шесто число №: " << i+1 << " : ";
		cin >> mail[i].mail6;

		cout << "Седмо число №: " << i+1 << " : ";
		cin >> mail[i].mail7;

		cout << "Осмо число №: " << i+1 << " : ";
		cin >> mail[i].mail8;

		cout << "Девето число №: " << i+1 << " : ";
		cin >> mail[i].mail9;

		cout << "Десето число №: " << i+1 << " : ";
		cin >> mail[i].mail10;
	}
		cout << "******* Въведени данни *******" << endl;
		for (int i = 0; i < n; i++){
	
		cout << i+1 << " . " << mail[i].sender << "@" << mail[i].resiver << "@" << mail[i].mail1 << "@" <<  mail[i].mail2 << "@" << mail[i].mail3 << "@" << mail[i].mail4 << "@" 
		<< mail[i].mail5 << "@" << mail[i].mail6 << "@" << mail[i].mail7 << "@" << mail[i].mail8 << "@" << mail[i].mail9 << "@" << mail[i].mail10 << endl; 

		}

		cout << "******* Сортирани на десетични данни  *******" << endl;

		for (int i = 0 ; i < n - 1 ; i++){
			for (int j = 0; j < n - i - 1; j++){
				if(mail[j].sender > mail[j+1].sender){
					swap = mail[j];
					mail[j] = mail[j + 1];
					mail[j + 1] = swap;
				} 
				else if (mail[j].sender = mail[j+1].sender){
					if (mail[j].resiver > mail[j+1].resiver){
						swap = mail[j];
						mail[j] = mail[j + 1];
						mail[j + 1] = swap;
					} else if (mail[j].resiver = mail[j+1].resiver){
						if (mail[j].mail1 > mail[j+1].mail1){
						swap = mail[j];
						mail[j] = mail[j + 1];
						mail[j + 1] = swap;
						}
					}
				} 
			}
		}

		for (int i = 0; i < n; i++)
		{
		cout << i+1 << " . " << mail[i].sender << "@" << mail[i].resiver << "@" << mail[i].mail1 << "@" <<  mail[i].mail2 << "@" << mail[i].mail3 << "@" << mail[i].mail4 << "@" 
		<< mail[i].mail5 << "@" << mail[i].mail6 << "@" << mail[i].mail7 << "@" << mail[i].mail8 << "@" << mail[i].mail9 << "@" << mail[i].mail10 << endl; 
		}

		cout << "******* Преобразувани и сортирани двочини данни *******" << endl;


		for (int i = 0; i < n; i++){

			std::string izp;
			if (mail[i].sender == 0 ){
				izp = '0';
			}
			else 
			while(mail[i].sender!=0) {izp=(mail[i].sender %2==0 ?"0":"1")+izp; mail[i].sender /=2;}
			cout << i+1 << " . "<< izp << "@";

			std::string pol;
			if (mail[i].resiver == 0 ){
				pol = '0';
			}
			else 
			while(mail[i].resiver!=0) {pol=(mail[i].resiver %2==0 ?"0":"1")+pol; mail[i].resiver /=2;}
			cout << pol << "@";

			std::string ch1;
			if (mail[i].mail1 == 0 ){
				ch1 = '0';
			}
			else 
			while(mail[i].mail1!=0) {ch1=(mail[i].mail1 %2==0 ?"0":"1")+ch1; mail[i].mail1 /=2;}
			cout << ch1 << "@";

			std::string ch2;
			if (mail[i].mail2 == 0 ){
				ch2 = '0';
			}
			else 
			while(mail[i].mail2!=0) {ch2=(mail[i].mail2 %2==0 ?"0":"1")+ch2; mail[i].mail2 /=2;}
			cout << ch2 << "@";

			
			std::string ch3;
			if (mail[i].mail3 == 0 ){
				ch3 = '0';
			}
			else 
			while(mail[i].mail3!=0) {ch3=(mail[i].mail3 %2==0 ?"0":"1")+ch3; mail[i].mail3 /=2;}
			cout << ch3 << "@";

			std::string ch4;
			if (mail[i].mail4 == 0 ){
				ch4 = '0';
			}
			else 
			while(mail[i].mail4!=0) {ch4=(mail[i].mail4 %2==0 ?"0":"1")+ch4; mail[i].mail4 /=2;}
			cout << ch4 << "@";
			
			std::string ch5;
			if (mail[i].mail5 == 0 ){
				ch5 = '0';
			}
			else 
			while(mail[i].mail5!=0) {ch5=(mail[i].mail5 %2==0 ?"0":"1")+ch5; mail[i].mail5 /=2;}
			cout << ch5 << "@";

			std::string ch6;
			if (mail[i].mail6 == 0 ){
				ch6 = '0';
			}
			else 
			while(mail[i].mail6!=0) {ch6=(mail[i].mail6 %2==0 ?"0":"1")+ch6; mail[i].mail6 /=2;}
			cout << ch6 << "@";

			std::string ch7;
			if (mail[i].mail7 == 0 ){
				ch7 = '0';
			}
			else 
			while(mail[i].mail7!=0) {ch7=(mail[i].mail7 %2==0 ?"0":"1")+ch7; mail[i].mail7 /=2;}
			cout << ch7 << "@";

			std::string ch8;
			if (mail[i].mail8 == 0 ){
				ch8 = '0';
			}
			else 
			while(mail[i].mail8!=0) {ch8=(mail[i].mail8 %2==0 ?"0":"1")+ch8; mail[i].mail8 /=2;}
			cout << ch8 << "@";

			std::string ch9;
			if (mail[i].mail9 == 0 ){
				ch9 = '0';
			}
			else 
			while(mail[i].mail9!=0) {ch9=(mail[i].mail9 %2==0 ?"0":"1")+ch9; mail[i].mail9 /=2;}
			cout << ch9 << "@";

			std::string ch10;
			if (mail[i].mail10 == 0 ){
				ch10 = '0';
			}
			else 
			while(mail[i].mail10!=0) {ch10=(mail[i].mail10 %2==0 ?"0":"1")+ch10; mail[i].mail10 /=2;}
			cout << ch10 << endl;
		}

	system ("pause");
	return 0;
}