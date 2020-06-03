#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int Hash(string str){
    double h=0;
    for(int i=0; i<str.length(); i++){
        int temp=(int) str[i];
        int temp1=str.length()%100;
        h+=(temp*(i+19)+temp1)*(temp*i+temp1)/2;
    }
    while(h<10000){
        h*=(int) h%13;
    }
    while(h>99999){
        h/=7;
    }
    return h;
}

int main(){
    ifstream infile;
    infile.open("test_8_lab.txt");

	int str_quantity=0;
	string two_str;
	while(infile) {
		string str;
		getline(infile, str);
		if(str!=""){
			if(str_quantity%2==0){
				two_str=str;
				str_quantity++;
			}else{
				two_str+=str+"\n";
				cout<<two_str<<"\t"<<Hash(two_str)<<endl;
				/*** Функция_хэширования ***/
				str_quantity++;
			}
		}
  	}
    infile.close();

    //Поиск хэша
    cout<<"==========================================================";
    cout<<endl<<"Введите хэш для поиска строки(5 цифр): ";
    int x;
    cin>>x;
    if(cin.fail()||x<10000||x>99999){
        cout<<"Введено некорректное значение... ";
        return 0;
    }

    //Поиск хэша
    ifstream infile1;
    infile1.open("test_8_lab.txt");
    str_quantity=0;
    while(infile1) {
		string str;
		getline(infile1, str);
		if(str!=""){
			if(str_quantity%2==0){
				two_str=str;
				str_quantity++;
			}else{
				two_str+=str+"\n";
				if(x==Hash(two_str)){
                    cout<<"Хэш найден. Искомая строка:"<<endl<<two_str<<endl;
                    return 0;
                }
				str_quantity++;
			}
		}
  	}
    cout<<"Хэш не найден.";
    return 0;
}
