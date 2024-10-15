    #include <iostream>
    #include <windows.h>
    #include <string>
    #include <locale.h>
    using namespace std;

    int main()
    {
        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);
        int number;
        cout << "Введіть число: ";
        cin >> number;
        int i = 2;
        bool isPrime = true;
        while (i < number) {
            if (number % i == 0) {
                isPrime = false; 
                break;
            }
            i++;
        }
        if (isPrime) {
            cout << "Число є простим." << endl;
        }
        else {
            cout << "Число не є простим." << endl;
        }
        return 0;
    }
