#include <iostream>

using namespace std;

int main(){

    int t;cin>>t;
    if(cin.fail()||t<1||t>100000){
        cout<<"Введено некорректное значение";
        return 0;
    }

    //Создание t массивов
    for (int q=1; q<=t; q++){
        if (q==1){
            //Принятие значений одного графа
            int n1=0;//Кол-во вершин
            int m1=0;//Кол-во ребер
            cin>>n1;
            if(cin.fail()||n1<1||n1>500000){
                cout<<"Введено некорректное значение";
                return 0;
            }
            cin>>m1;
            if(cin.fail()||m1<0||m1>500000){
                cout<<"Введено некорректное значение";
                return 0;
            }
            // Выделение памяти под массив
            int** arr1;
            arr1 = new int* [m1];
            for (int i = 0; i < m1; i++)
            {
                arr1[i] = new int[2];
            }
            //Принятие значений
            for (int i = 0; i < m1; i++) {
                for (int j = 0; j < 2; j++) {
                    cin>>arr1[i][j];
                }
            }
            cout << "Вывод неотсортированного массива" << endl;
            for (int i = 0; i < m1; i++) {
                for (int j = 0; j < 2; j++) {
                    cout << arr1[i][j] << " ";
                }
                cout << endl;
            }
        }
        else if (q==2){
            //Принятие значений одного графа
            int n2=0;//Кол-во вершин
            int m2=0;//Кол-во ребер
            cin>>n2;
            if(cin.fail()||n2<1||n2>500000){
                cout<<"Введено некорректное значение";
                return 0;
            }
            cin>>m2;
            if(cin.fail()||m2<0||m2>500000){
                cout<<"Введено некорректное значение";
                return 0;
            }
            // Выделение памяти под массив
            int** arr2;
            arr2 = new int* [m2];
            for (int i = 0; i < m2; i++)
            {
                arr2[i] = new int[2];
            }
            //Принятие значений
            for (int i = 0; i < m2; i++) {
                for (int j = 0; j < 2; j++) {
                    cin>>arr2[i][j];
                }
            }
            cout << "Вывод неотсортированного массива" << endl;
            for (int i = 0; i < m2; i++) {
                for (int j = 0; j < 2; j++) {
                    cout << arr2[i][j] << " ";
                }
                cout << endl;
            }
        }
        else if (q==3){
            //Принятие значений одного графа
            int n3=0;//Кол-во вершин
            int m3=0;//Кол-во ребер
            cin>>n3;
            if(cin.fail()||n3<1||n3>500000){
                cout<<"Введено некорректное значение";
                return 0;
            }
            cin>>m3;
            if(cin.fail()||m3<0||m3>500000){
                cout<<"Введено некорректное значение";
                return 0;
            }
            // Выделение памяти под массив
            int** arr3;
            arr3 = new int* [m3];
            for (int i = 0; i < m3; i++)
            {
                arr3[i] = new int[2];
            }
            //Принятие значений
            for (int i = 0; i < m3; i++) {
                for (int j = 0; j < 2; j++) {
                    cin>>arr3[i][j];
                }
            }
            cout << "Вывод неотсортированного массива" << endl;
            for (int i = 0; i < m3; i++) {
                for (int j = 0; j < 2; j++) {
                    cout << arr3[i][j] << " ";
                }
                cout << endl;
            }
        }
        else if (q==4){
            //Принятие значений одного графа
            int n4=0;//Кол-во вершин
            int m4=0;//Кол-во ребер
            cin>>n4;
            if(cin.fail()||n4<1||n4>500000){
                cout<<"Введено некорректное значение";
                return 0;
            }
            cin>>m4;
            if(cin.fail()||m4<0||m4>500000){
                cout<<"Введено некорректное значение";
                return 0;
            }
            // Выделение памяти под массив
            int** arr4;
            arr4 = new int* [m4];
            for (int i = 0; i < m4; i++)
            {
                arr4[i] = new int[2];
            }
            //Принятие значений
            for (int i = 0; i < m4; i++) {
                for (int j = 0; j < 2; j++) {
                    cin>>arr4[i][j];
                }
            }
            cout << "Вывод неотсортированного массива" << endl;
            for (int i = 0; i < m4; i++) {
                for (int j = 0; j < 2; j++) {
                    cout << arr4[i][j] << " ";
                }
                cout << endl;
            }
        }
        else if (q==5){
            //Принятие значений одного графа
            int n5=0;//Кол-во вершин
            int m5=0;//Кол-во ребер
            cin>>n5;
            if(cin.fail()||n5<1||n5>500000){
                cout<<"Введено некорректное значение";
                return 0;
            }
            cin>>m5;
            if(cin.fail()||m5<0||m5>500000){
                cout<<"Введено некорректное значение";
                return 0;
            }
            // Выделение памяти под массив
            int** arr5;
            arr5 = new int* [m5];
            for (int i = 0; i < m5; i++)
            {
                arr5[i] = new int[2];
            }
            //Принятие значений
            for (int i = 0; i < m5; i++) {
                for (int j = 0; j < 2; j++) {
                    cin>>arr5[i][j];
                }
            }
        }
        else if (q==6){
            //Принятие значений одного графа
            int n6=0;//Кол-во вершин
            int m6=0;//Кол-во ребер
            cin>>n6;
            if(cin.fail()||n6<1||n6>500000){
                cout<<"Введено некорректное значение";
                return 0;
            }
            cin>>m6;
            if(cin.fail()||m6<0||m6>500000){
                cout<<"Введено некорректное значение";
                return 0;
            }
            // Выделение памяти под массив
            int** arr6;
            arr6 = new int* [m6];
            for (int i = 0; i < m6; i++)
            {
                arr6[i] = new int[2];
            }
            //Принятие значений
            for (int i = 0; i < m6; i++) {
                for (int j = 0; j < 2; j++) {
                    cin>>arr6[i][j];
                }
            }
        }
        else if (q==7){
            //Принятие значений одного графа
            int n7=0;//Кол-во вершин
            int m7=0;//Кол-во ребер
            cin>>n7;
            if(cin.fail()||n7<1||n7>500000){
                cout<<"Введено некорректное значение";
                return 0;
            }
            cin>>m7;
            if(cin.fail()||m7<0||m7>500000){
                cout<<"Введено некорректное значение";
                return 0;
            }
            // Выделение памяти под массив
            int** arr7;
            arr7 = new int* [m7];
            for (int i = 0; i < m7; i++)
            {
                arr7[i] = new int[2];
            }
            //Принятие значений
            for (int i = 0; i < m7; i++) {
                for (int j = 0; j < 2; j++) {
                    cin>>arr7[i][j];
                }
            }
        }
        else if (q==8){
            //Принятие значений одного графа
            int n8=0;//Кол-во вершин
            int m8=0;//Кол-во ребер
            cin>>n8;
            if(cin.fail()||n8<1||n8>500000){
                cout<<"Введено некорректное значение";
                return 0;
            }
            cin>>m8;
            if(cin.fail()||m8<0||m8>500000){
                cout<<"Введено некорректное значение";
                return 0;
            }
            // Выделение памяти под массив
            int** arr8;
            arr8 = new int* [m8];
            for (int i = 0; i < m8; i++)
            {
                arr8[i] = new int[2];
            }
            //Принятие значений
            for (int i = 0; i < m8; i++) {
                for (int j = 0; j < 2; j++) {
                    cin>>arr8[i][j];
                }
            }
        }
        else if (q==9){
            //Принятие значений одного графа
            int n9=0;//Кол-во вершин
            int m9=0;//Кол-во ребер
            cin>>n9;
            if(cin.fail()||n9<1||n9>500000){
                cout<<"Введено некорректное значение";
                return 0;
            }
            cin>>m9;
            if(cin.fail()||m9<0||m9>500000){
                cout<<"Введено некорректное значение";
                return 0;
            }
            // Выделение памяти под массив
            int** arr9;
            arr9 = new int* [m9];
            for (int i = 0; i < m9; i++)
            {
                arr9[i] = new int[2];
            }
            //Принятие значений
            for (int i = 0; i < m9; i++) {
                for (int j = 0; j < 2; j++) {
                    cin>>arr9[i][j];
                }
            }
        }
        else if (q==10){
            //Принятие значений одного графа
            int n10=0;//Кол-во вершин
            int m10=0;//Кол-во ребер
            cin>>n10;
            if(cin.fail()||n10<1||n10>500000){
                cout<<"Введено некорректное значение";
                return 0;
            }
            cin>>m10;
            if(cin.fail()||m10<0||m10>500000){
                cout<<"Введено некорректное значение";
                return 0;
            }
            // Выделение памяти под массив
            int** arr10;
            arr10 = new int* [m10];
            for (int i = 0; i < m10; i++)
            {
                arr10[i] = new int[2];
            }
            //Принятие значений
            for (int i = 0; i < m10; i++) {
                for (int j = 0; j < 2; j++) {
                    cin>>arr10[i][j];
                }
            }
        }
        else if (q==11){
            //Принятие значений одного графа
            int n11=0;//Кол-во вершин
            int m11=0;//Кол-во ребер
            cin>>n11;
            if(cin.fail()||n11<1||n11>500000){
                cout<<"Введено некорректное значение";
                return 0;
            }
            cin>>m11;
            if(cin.fail()||m11<0||m11>500000){
                cout<<"Введено некорректное значение";
                return 0;
            }
            // Выделение памяти под массив
            int** arr11;
            arr11 = new int* [m11];
            for (int i = 0; i < m11; i++)
            {
                arr11[i] = new int[2];
            }
            //Принятие значений
            for (int i = 0; i < m11; i++) {
                for (int j = 0; j < 2; j++) {
                    cin>>arr11[i][j];
                }
            }
        }
        else if (q==12){
            //Принятие значений одного графа
            int n12=0;//Кол-во вершин
            int m12=0;//Кол-во ребер
            cin>>n12;
            if(cin.fail()||n12<1||n12>500000){
                cout<<"Введено некорректное значение";
                return 0;
            }
            cin>>m12;
            if(cin.fail()||m12<0||m12>500000){
                cout<<"Введено некорректное значение";
                return 0;
            }
            // Выделение памяти под массив
            int** arr12;
            arr12 = new int* [m12];
            for (int i = 0; i < m12; i++)
            {
                arr12[i] = new int[2];
            }
            //Принятие значений
            for (int i = 0; i < m12; i++) {
                for (int j = 0; j < 2; j++) {
                    cin>>arr12[i][j];
                }
            }
        }

    }



    /*//Принятие значений одного графа
    int n=0;//Кол-во вершин
    int m=0;//Кол-во ребер
    cin>>n;
    if(cin.fail()||n<1||n>500000){
        cout<<"Введено некорректное значение";
        return 0;
    }
    cin>>m;
    if(cin.fail()||m<0||m>500000){
        cout<<"Введено некорректное значение";
        return 0;
    }
    // Выделение памяти под массив
    int** arr;
    arr = new int* [m];
    for (int i = 0; i < m; i++)
    {
        arr[i] = new int[2];
    }
    //Принятие значений
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < 2; j++) {
            cin>>arr[i][j];
        }
    }

    cout << "Вывод неотсортированного массива" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < 2; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }*/

    return 0;
}
