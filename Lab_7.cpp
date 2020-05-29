#include <iostream>

using namespace std;

void bubbleSort(int* arr, int size);

int main(){
    //Массив с диапозоном значений [11-90]
    // Выделение памяти под массив
    int a = 8,
        c = 80,
        b = 10;
    // Выделение памяти под массив
    int* arr2;
    arr2 = new int[c];
    //Создание и вывод массива
    int arr[8][10] = { 36, 69, 60, 21, 27, 13, 74, 25, 15, 61,
                       75, 54, 63, 55, 40, 76, 38, 44, 29, 77,
                       85, 39, 62, 30, 59, 79, 33, 37, 82, 73,
                       14, 71, 88, 22, 43, 18, 67, 41, 53, 66,
                       64, 34, 31, 16, 23, 28, 84, 70, 20, 24,
                       86, 32, 56, 89, 47, 26, 78, 17, 81, 19,
                       80, 52, 65, 49, 42, 83, 50, 87, 72, 11,
                       68, 45, 51, 46, 58, 35, 90, 57, 48, 12 };
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 10; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //Принятие массива входных значений
    cout<<"Количество элементов в последовательности: ";
    int g; cin>>g;
    if(cin.fail()||g<1||g>40){
        cout<<"Введено некорректное значение";
        return 0;
    }
    int* arrin;
    arrin = new int[g];
    cout<<"Введите элементы через пробел: ";
    for(int i=0; i<g; i++){
        cin>>arrin[i];
        if(cin.fail()){
            cout<<"Введено некорректное значение";
            return 0;
        }
    }

    cout<<endl<<endl<<"Поиск последовательным методом:"<<endl;
    cout<<endl;

    bool check=false;
    for(int k=0; k<g; k++){
        for(int i=0; i<8; i++){
            for(int j=0; j<10; j++){
                if(arrin[k]==arr[i][j]){
                    cout<<"Элемент "<<arrin[k]<<" найден. Находится в ячейке ["<<i<<"]["<<j<<"]"<<endl;
                    check=true;
                }
            }
        }
        if(check==false){
            cout<<"Элемента "<<arrin[k]<<" нет в массиве"<<endl;
        }
        check=false;
    }


    cout<<endl<<"======================================================================="<<endl
    <<endl;
    int w = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 10; j++) {
            arr2[w] = arr[i][j];
            w++;
        }
    }
    cout<<"Поиск бинарным методом"<<endl<<endl;

    bubbleSort(arr2,80);
    cout<<"Отсортированный массив:"<<endl;
    for(int i=0;i<80; i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;

    for(int p=0; p<g; p++){
        bool flag = false;
        int l = 0; // левая граница
        int r = 79; // правая граница
        int mid=0;
        while ((l <= r) && (flag != true)) {
            mid = (l + r) / 2;
            if (arr2[mid] == arrin[p])
                flag = true;
            if (arr2[mid] > arrin[p])
                r = mid - 1;
            else l = mid + 1;
        }
        if (flag) {
            cout << "Индекс элемента " << arrin[p] << " в массиве равен: " << mid<<endl;
        }else{
            cout << "Введенный элемент не найден"<<endl;
        }
    }
    return 0;
}

void bubbleSort(int* arr, int size){
    int tmp, i, j;
    for (i = 0; i < size - 1; ++i){
        for (j = 0; j < size - 1; ++j){
            if (arr[j + 1] < arr[j]){
                tmp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}
