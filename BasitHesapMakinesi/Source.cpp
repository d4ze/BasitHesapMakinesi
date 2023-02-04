#include <iostream>
using namespace std;

int main() {
	

	cout << "######################################\n";
	cout << "#####    BASIT HESAP MAKINESI    #####\n";
	cout << "######################################\n";
	cout << endl << endl << endl;



	float sayi1, sayi2, sonuc;
	char islem;
	cout << "Lutfen sirasi ile islemleri giriniz (Ornek: 5+25)" << "\n" << ": ";
	cin >> sayi1 >> islem >> sayi2;


	switch (islem)
	{
	case '+':
		sonuc = sayi1 + sayi2;
		cout << "######################################\n";
		cout << "Isleminizin sonucu = " << sonuc << endl;
		cout << "######################################\n";
		break;
	case '-':
		sonuc = sayi1 - sayi2;
		cout << "######################################\n";
		cout << "Isleminizin sonucu = " << sonuc << endl;
		cout << "######################################\n";
		break;
	case '*':
		sonuc = sayi1 * sayi2;
		cout << "######################################\n";
		cout << "Isleminizin sonucu = " << sonuc << endl;
		cout << "######################################\n";
		break;
	case '/':
		sonuc = sayi1 / sayi2;
		cout << "######################################\n";
		cout << "Isleminizin sonucu = " << sonuc << endl;
		cout << "######################################\n";
		break;


	default:
		cout << "######################################\n";
		cout << "Hatali bir islem girdiniz!!!" << endl;
		cout << "######################################\n";
		break;
	}


	return 0;
}