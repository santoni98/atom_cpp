#include <iostream>
#include <fstream>
//#include <string>

using namespace std;

int main() {
    cout<<"Выберите действие, которое хотите совершить:"<<endl<<
          "  1 - Добавление в конец"                    <<endl<<
          "  2 - Отбор (с N до M символа)"              <<endl<<
          "  3 - Вставка текста из файла"               <<endl<<
          "  Действие номер: ";
    int x; cin>>x;
    if (cin.fail()||x!=1&&x!=2&&x!=3){
        cout<<endl<<"Введено некорректное значение..."<<endl;
        return 0;
    }

    if (x==1){
        //Добавление в конец
        cout << "Введите строку: ";
        string ff;
        cin.sync();
        getline(cin, ff);
        /*   Добавить в конец файла *.txt   */
        ofstream out("text.txt", std::ios::app);
        if (out.is_open()){
            out << ff << endl;
        }
        out.close();
        //return 0;
    }else if(x==2){
        //Отбор (с N до M символа)
        int N,M;

        cout<<"N = "<<N<<"M = "<<M;
        //return 0;
    }else if(x==3){
        //Вставка текста из файла
        ifstream infile;
        ofstream outfile;

        infile.open("of.txt");
        outfile.open("text.txt");

        char buffer[1000];          //буффер под строку

        while(!infile.eof()){        //пока не конец исходного файла
            infile.getline(buffer,sizeof(buffer));  //читаем построчно
            outfile<<buffer<<endl;                  //записываем строку в выходной файл
        }

        infile.close();     //закрываем
        outfile.close();    //файлы
        cout<<endl<<"Вставка успешно завершена"<<endl;
        //return 0;
    }
    ifstream infile;
    infile.open("text.txt");
    char buffer[1000];          //буффер под строку
    cout<<endl<<endl;
    while(!infile.eof()){        //пока не конец исходного файла
        infile.getline(buffer,sizeof(buffer));
        cout<<buffer<<endl;
    }
    infile.close();     //закрываем
    return 0;
}
