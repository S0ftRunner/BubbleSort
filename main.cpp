//Сортировка пузырьком

#include <iostream> // подключение библиотеки ввода - вывода
using namespace std; // использование пространств имен std
// ---------------------------------------------------------------------------
int main()
{
    cout << "салам алекум\n";
    const int size = 10; // для массивов всегда лучше использовать const
    setlocale(LC_ALL, "ru"); // для вывода на русском
    int arr[size];
    cout << "Введите 10 цифр для массива: \n";

    for (int i = 0; i < size; i++) // заполнение массива
    {
        cin >> arr[i];
    }

    cout << "Неотсортированный массив: \n";

    for (int i = 0; i < size; i++)  // вывод массива, введенный пользователем
    {
        cout << arr[i] << "\t";
    }

    cout << "\n";

    for (int i = 0; i < size-1; i++) // сортировка пузырьком
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1]) // если левый элемент больше правого, то меняем местами
            {
                int temp; // меняем местами с помощью третьей переменной
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "Отсортированный массив: \n";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }

    cout << "Спасибо за внимание:)\n";

    return 0;
}
// ---------------------------------------------------------------------------