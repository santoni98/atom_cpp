#include <iostream>

using namespace std;

int main(){
    int n,      //количество сотрудников, нанятых Павлом
        a,      //нижняя граница скилла
        v,      //уровень скилла сотрудника
        r,      //верхняя граница скилла
        m=0;    //максимальное количество разработчиков
    cin>>n;
    if(cin.fail()||1>n||n>100000){
        cout<<"Введено некорректное значение...";
        return 0;
    }

    // Выделение памяти под массив
    int** arr;
    arr = new int* [n];
    for (int i = 0; i < n; i++){
        arr[i] = new int[4];
    }

    //Заполнение массива
    for(int i=0; i<n; i++){
        arr[i][0]=i+1;
        cin>>a;
        if(cin.fail()||1>a||a>300000){
            cout<<"Введено некорректное значение...";
            return 0;
        }
        arr[i][1]=a;
        cin>>v;
        if(cin.fail()||a>v||v>300000){
            cout<<"Введено некорректное значение...";
            return 0;
        }
        arr[i][2]=v;
        cin>>r;
        if(cin.fail()||v>r||r>300000){
            cout<<"Введено некорректное значение...";
            return 0;
        }
        arr[i][3]=r;
    }
      //Вывод массива
    cout<<endl<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;


    int max=-1;
    int iclone;
    int j;
    for(int i=0;i<n;i++){
        j = 0;
        while(j<n){
            if(j!=i){
                if(arr[i][1]<=arr[j][2]&&arr[i][3]>=arr[j][2]){
                    if(arr[j][1]<=arr[i][2]&&arr[j][3]>=arr[i][2]){
                        cout<<arr[i][0]<<" "<<arr[j][0]<<endl;
                        m++;
                    }
                }
            }
            j++;
        }
        cout<<endl;
        if(m>max){
            max=m;
            iclone=i;
        }
        m=0;
    }
    cout<<max<<endl;

    //Вывод
    j = 0;
    cout<<arr[iclone][0]<<" ";
    while(j<n){//
        if(j!=iclone){
            if(arr[iclone][1]<=arr[j][2]&&arr[iclone][3]>=arr[j][2]){
                if(arr[j][1]<=arr[iclone][2]&&arr[j][3]>=arr[iclone][2]){
                    cout<<arr[j][0]<<" ";
                }
            }
        }
        j++;
    }

    return 0;
}
/* Входные значения
5
2 4 6
1 3 5
2 6 9
1 1 2
2 3 3
*/
