#include <iostream>

using namespace std;

void bubbleSort(int* arr, int size);

int main(){
    //Массив с диапозоном значений [11-90]
    // Выделение памяти под массив
    int a = 8,
        c = 40,
        b = 10;

    // Выделение памяти под массив
    int* arr2;
    arr2 = new int[c];

    int arr[8][10] = { 36, 69, 60, 21, 27, 13, 74, 25, 15, 61,
                       75, 54, 63, 55, 40, 76, 38, 44, 29, 77,
                       85, 39, 62, 30, 59, 79, 33, 37, 82, 73,
                       14, 71, 88, 22, 43, 18, 67, 41, 53, 66,
                       64, 34, 31, 16, 23, 28, 84, 70, 20, 24,
                       86, 32, 56, 89, 47, 26, 78, 17, 81, 19,
                       80, 52, 65, 49, 42, 83, 50, 87, 72, 11,
                       68, 45, 51, 46, 58, 35, 90, 57, 48, 12 };
    int x;
    cout << "Введите число в диапозоне [11-90] >> ";
    cin >> x;

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 10; j++) {
            if (arr[i][j] == x && j%2!=0) {
                cout << endl<<"Число находится в "<<j+1<<" столбце, в "<<i+1<<" строке"<<endl;
                break;
            }
        }
    }


    cout<<endl<<endl<<"Поиск бинарным методом"<<endl;
    int w = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 10; j++) {
            if (j % 2 != 0) {
                arr2[w] = arr[i][j];
                //cout<<arr2[w]<<" ";
                w++;
            }
        }
    }

    bubbleSort(arr2,40);
    cout<<"Отсортированный массив:"<<endl;
    for(int i=0;i<40; i++){
        cout<<arr2[i]<<" ";
    }
    bool flag = false;
    int key=x;
    int l = 0; // левая граница
    int r = 39; // правая граница
    int mid;

    while ((l <= r) && (flag != true)) {
      mid = (l + r) / 2;

      if (arr2[mid] == key) flag = true;
      if (arr2[mid] > key) r = mid - 1;
      else l = mid + 1;
    }

    if (flag) cout << "Индекс элемента " << key << " в массиве равен: " << mid;
    else cout << "Извините, но такого элемента в массиве нет";

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
