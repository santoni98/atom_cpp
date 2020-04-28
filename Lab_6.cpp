#include <iostream>
#include <math.h>

using namespace std;

int main() {
    //Размерность массива
    int a = 10,
        b = 10;

    // Выделение памяти под массив
    int** arr;
    arr = new int* [a];
    for (int i = 0; i < a; i++)
    {
        arr[i] = new int[b];
    }
    // Выделение памяти под второй массив
    int** arr2;
    arr2 = new int* [a];
    for (int i = 0; i < a; i++)
    {
        arr2[i] = new int[b];
    }

    //Вывод неотсортированного массива
    cout << "Вывод неотсортированного массива" << endl;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            arr2[i][j] = rand() % 99 + 1;
            //arr2[i][j] = 0;
            cout << arr2[i][j] << "\t";
        }
        cout << endl << endl;
    }

    //Присвоение старых значений массиву
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            arr[i][j] = arr2[i][j];
        }
    }
    //Сортировка ПУЗЫРЬКОВАЯ
    cout << "Метод ПУЗЫРЬКОВЫЙ" << endl;
    int sravneniya1 = 0, perestanovki1 = 0;
    for (int i = 0; i < a; i++) {
        for (int k = 0; k < 10; k++) {
            bool flag = true;
            for (int j = 0; j < b - 1; j++) {
                //Алгоритм сортировки
                sravneniya1++;
                if (abs(arr[i][j]) < abs(arr[i][j + 1])) {
                    // меняем элементы местами
                    flag = false;
                    swap(arr[i][j], arr[i][j + 1]);
                    perestanovki1++;
                }
            }
            if (flag) { break; }
        }
    }
    //Вывод
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl << endl;
    }
    cout << "Сравнений " << sravneniya1 << "\t" << "Перестановок " << perestanovki1 << endl << endl;


    //Присвоение старых значений массиву
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            arr[i][j] = arr2[i][j];
        }
    }
    //Сортировка МЕТОДОМ ОТБОРА
    cout << "Метод ОТБОРА" << endl;
    int length = a;
    int sravneniya2 = 0, perestanovki2 = 0;
    for (int i = 0; i < a; i++) {
        for (int startIndex = 0; startIndex < length - 1; ++startIndex) {
            int biggestIndex = startIndex;
            for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex) {
                if (abs(arr[i][currentIndex]) > abs(arr[i][biggestIndex])) {
                    biggestIndex = currentIndex;
                }
                sravneniya2++;
            }
            swap(arr[i][startIndex], arr[i][biggestIndex]);
            perestanovki2++;
        }
    }
    //Вывод
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl << endl;
    }
    cout << "Сравнений " << sravneniya2 << "\t" << "Перестановок " << perestanovki2 << endl << endl;



    //Присвоение старых значений массиву
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            arr[i][j] = arr2[i][j];
        }
    }
    //Сортировка МЕТОДОМ ВСТАВКИ
    cout << "Метод ВСТАВКИ" << endl;
    int sravneniya3 = 0, perestanovki3 = 0;
    for (int i = 0; i < a; i++) {
        //Алгоритм сортировки
        int newElement, location;
        for (int j = 1; j < a; j++) {
            newElement = arr[i][j];
            location = j - 1;
            if (location >= 0 && abs(arr[i][location]) < abs(newElement)) {

            }else sravneniya3++;
            while (location >= 0 && abs(arr[i][location]) < abs(newElement)) {
                sravneniya3++;
                arr[i][location + 1] = arr[i][location];
                perestanovki3++;
                location = location - 1;
            }
            arr[i][location + 1] = newElement;
            perestanovki3++;
        }
    }
    //Вывод
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl << endl;
    }
    cout << "Сравнений " << sravneniya3 << "\t" << "Перестановок " << perestanovki3 << endl << endl;


    //Присвоение старых значений массиву
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            arr[i][j] = arr2[i][j];
        }
    }
    //Сортировка ШЕЛЛА
    cout << "Метод ШЕЛЛА" << endl;
    int sravneniya4 = 0, perestanovki4 = 0;
    int i, j, step;
    int tmp1;
    for (int p = 0; p < a; p++) {
        for (step = a / 2; step > 0; step /= 2) {
            for (i = step; i < a; i++) {
                tmp1 = arr[p][i];
                for (j = i; j >= step; j -= step) {
                    sravneniya4++;
                    if (tmp1 > arr[p][j - step]) {
                        arr[p][j] = arr[p][j - step];
                        perestanovki4++;
                    }
                    else
                        break;
                }
                arr[p][j] = tmp1;
            }
        }
    }
    //Вывод
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl << endl;
    }
    cout << "Сравнений " << sravneniya4 << "\t" << "Перестановок " << perestanovki4 << endl << endl;

    //Присвоение старых значений массиву
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            arr[i][j] = arr2[i][j];
        }
    }
    //Сортировка "БЫСТРАЯ"
    cout << "Метод \"БЫСТРЫЙ\"" << endl;
    int sravneniya5 = 0, perestanovki5 = 0;

    int r, c, f, m, k = 0;
    r = a;
    c = a;

    int* stackl = new int[c], * stackr = new int[c];
    for (f = 0; f < r; f++) {
        for (m = 0; m < c; m++) {
            int sp = 1; stackl[sp] = 0; stackr[sp] = c - 1;
            while (sp > 0) {
                int left = stackl[sp];
                int right = stackr[sp];
                sp--;
                while (left < right) {
                    int w = left, q = right;
                    float middle = arr[f][(left + right) / 2];
                    while (w < q) {
                        while (arr[f][w] > middle) {
                            w++;
                        }
                        while (middle > arr[f][q]) {
                            q--;
                        }
                        sravneniya5++;
                        if (w <= q) {
                            float temp = arr[f][w];
                            arr[f][w] = arr[f][q];
                            arr[f][q] = temp;
                            perestanovki5++;
                            w++;
                            q--;
                        }
                    }
                    if (w < right) {
                        sp++;
                        stackl[sp] = w;
                        stackr[sp] = right;
                    }
                    right = q;
                }
            }
        }
    }

    //Вывод
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl << endl;
    }
    cout << "Сравнений " << sravneniya5 << "\t" << "Перестановок " << perestanovki5 << endl << endl;

    cout << "Таблица сравнений сортировок: " << endl;

    printf("=====================================================================================\n");
    printf("|  Алгоритм сортировки      |  Количество сравнений     |  Количество перестановок  |\n");
    printf("=====================================================================================\n");

    cout << "  Сортировка ПУЗЫРЬКОВАЯ                 " << sravneniya1 << "\t\t\t" << perestanovki1 << "             " << endl;
    cout << "  Сортировка ОТБОРОМ                     " << sravneniya2 << "\t\t\t" << perestanovki2 << "             " << endl;
    cout << "  Сортировка ВСТАВКАМИ                   " << sravneniya3 << "\t\t\t" << perestanovki3 << "             " << endl;
    cout << "  Сортировка ШЕЛЛА                       " << sravneniya4 << "\t\t\t" << perestanovki4 << "             " << endl;
    cout << "  Сортировка БЫСТРАЯ                     " << sravneniya5 << "\t\t\t" << perestanovki5 << "             " << endl;

    printf("=====================================================================================\n");

    return 0;
}
