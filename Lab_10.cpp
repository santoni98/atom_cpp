#include <iostream>
#include <fstream>

using namespace std;

int main() {
    for(int g=1;g<3;g++){
        cout<<"Выберите действие, которое хотите совершить:"<<endl<<
            "  1 - Добавление в конец"                      <<endl<<
            "  2 - Отбор (с N до M символа)"                <<endl<<
            "  3 - Вставка текста из файла"                 <<endl<<
            "  4 - Вывод текста с файла text.txt"           <<endl<<
            "  Действие номер: ";
            int x; cin>>x;
            if (cin.fail()||x!=1&&x!=2&&x!=3&&x!=4){
                cout<<endl<<"Введено некорректное значение..."<<endl;
                return 0;
            }

            if (x==1){
                //Добавление в конец
                cout << "Введите строку: ";
                string ff;
                cin.sync();
                getline(cin, ff);
                /*   Добавить в конец файла text.txt   */
                ofstream out("text.txt", std::ios::app);
                if (out.is_open()){
                    out <<" "<<ff ;
            }
            cout<<"Копирование успешно завершено"<<endl;
            out.close();
            //return 0;
        }else if(x==2){
            //Отбор (с N до M символа)
            ifstream infile;
            infile.open("text.txt");
            string otborny;
            while(infile){
                string str;
    		          getline(infile, str);
                      int t=str.length();
                      otborny+=str+"\n";
            }
            cout<<"String length = "<<otborny.length()<<endl;
            int N,M;
            cout<<"N = ";
            cin>>N;
            if(cin.fail()||N<1||N>otborny.length()){
                cout<<"Введено некорректное значение... ";
                return 0;
            }
            cout<<"M = ";
            cin>>M;
            if(cin.fail()||M<N||M>otborny.length()){
                cout<<"Введено некорректное значение... ";
                return 0;
            }

            //cout<<otborny<<endl<<otborny.length();
            cout<<endl<<"Отобранная строка: "<<endl;
            for(int r=N-1; r<M;r++){
                cout<<otborny[r];
            }
        }else if(x==3){
            //Вставка текста из файла
            ifstream infile;
            ofstream outfile;
            infile.open("of.txt");
            outfile.open("text.txt");
            char buffer[1000];           //буффер под строку
            while(!infile.eof()){        //пока не конец исходного файла
                infile.getline(buffer,sizeof(buffer));  //читаем построчно
                outfile<<buffer<<endl;                  //записываем строку в выходной файл
            }

            infile.close();     //закрываем
            outfile.close();    //файлы
            cout<<endl<<"Вставка успешно завершена"<<endl;
            //return 0;
        }else if(x==4){
            ifstream infile;
            infile.open("text.txt");
            string all;
            while(infile){
                string str;
    		    getline(infile, str);
                int t=str.length();
                all+=str+"\n";
            }
            cout<<all;
        }
        cin.get();cin.get();

        if(g==1) system("cls");
    }
    return 0;
}
