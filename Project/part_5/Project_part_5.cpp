#include "std_lib_facilities.h"

int main()
try
{
    int area (int lenqth, int width);
    int framed_area (int length, int width);
    void error (string sl, string s2);
    double ctok (double c);
    double ctok_1 (double c);
    void print_values (vector<int> v);

    // cout << "Success!\n";

    // cout << "Success!\n";

    // cout << "Success" << "!\n";

    // string success { "Success!" };
    // cout << success << '\n'; 

    /* string res = "7";
    vector<string> v(10);
    v[5] = res;
    cout << "Success!\n"; */
    
    /* vector<int> v(10);
    v[5] = 7;
    if (v[5] == 7)
        cout << "Success!\n"; */

    /* bool cond { true };
    if (cond)
        cout << "Success!\n";
    else
        cout << "Fail!\n"; */

    /* bool c = false;
    if (!c)
        cout << "Success!\n";
    else
        cout << "Fail!\n"; */

    /* string s = "gaре";
    bool c = "fool" < s;
    if (c)
        cout << "Success!\n"; */

    /* string s = "аре";
    if (s != "fool")
        cout << "Success!\n"; */
    
    /* string s = "аре";
    if (s != "fool")
        cout << "Success!\n"; */

    /* string s = "аре";
    if (s != "fool")
        cout << "Success!\n"; */

    /* vector<char> v (5);
    for (int i = 0; i < v.size(); ++i)
        cout << "Success!\n"; */

    /* vector<char> v (5);
    for (int i = 0; i < v.size(); ++i)
        cout << "Success!\n"; */

    /* string s = "Success!\n";
    for (int i = 0; i < 6; ++i)
        cout << s; */

    /* if  (true)
        cout << "Success!\n";
    else
        cout << "Fail!\n"; */

    /* int x = 2000;
    string с = to_string(x);
    if (с == "2000")
        cout << "Success!\n"; */

    /* string s = "Success!\n";
    for (int i = 0; i < 10; ++i)
        cout << s[i]; */

    /* vector<int> v(5);
    for (int i = 0; i < v.size(); ++i)
        cout << "Success!\n"; */

    /* int x = 2;
    double d = 8.5 - (x + 2);
    
    if (d == (2 * x + 0.5))
        cout << "Success!\n"; */

    /* string s = "Success!\n";
    for (int i = 0; i < 10; ++i)
        cout << s[i]; */

    /* int i = 0;
    int j = 9;

    while (i < 10)
        ++i;
    
    if (j < i)
        cout << "Success!\n"; */

    /* int i = 0;
    int j = 9;

    while (i < 10)
        ++i;

    if (j < i)
        cout << "Success!\n"; */

    /* int x { 4 };
    double d = 5 / (x - 2);
    
    if (d = 0.5 * x + 0.5)
        cout << "Success!\n"; */

    // cout << "Success!\n";

    /* int area (int lenqth, int width);

    int sl = area (7, 1);
    int s2 = area (7, 2);
    int sЗ = area (7, 3);
    int s4 = area (7, 4); */

    /* int x0 = area(7, 2);
    int xl = area(7, 3);
    int x2 = area(8, 2); */

    /* int length { 0 };
    int width { 0 };

    cout << "Введите длину и ширину картины: ";
    cin >> length;
    cin >> width;

    int area1 = area(length, width);

    if (area1 > 0)
        cout << "Площадь картины равна: " << area1 << endl;
    else
    {
        cout << "Ошибка: неположительная площадь картины (из функции area())\n";
        return 0;
    }

    int area2 = framed_area(length, width);

    if (area2 > 0)
        cout << "Площадь рамки равна: " << area2 << endl;
    else
    {
        cout << "Ошибка: неположительная площадь рамки\n";
        return 0;
    }

    double ratio = double(area1) / area2;
    cout << "Отношение площади картины к площади рамки: " << ratio << endl; */

    // error("Ошибка", " неперехвачена");

    /* vector<double> temps;
    const double max_temp = 100; // градусы
    const double min_temp = -273; // градусы
    double sum { 0 };
    double hiqh_temp { min_temp };
    double low_temp { max_temp };
    int no_of_temps { 0 };

    for (double temp; cin >> temp; )
        temps.push_back(temp);

    for (double x : temps)
    {
        ++no_of_temps;
        if (x > hiqh_temp)
            hiqh_temp = x;
        if (x < low_temp)
            low_temp = x;        
        sum += x;
    }
    cout << "Максимальная температура: " << hiqh_temp << endl;
    cout << "Минимальная температура: " << low_temp << endl;
    cout << "Средняя температура: " << sum/no_of_temps << endl; */


    /* double c { 0.0 };
    double d { 0.0 };
    char choise = ' ';
    cout << "Перевод градусов Цельсия в Фаренгейты или наоборот (c - Цельсия, f - Фаренгейты): ";
    cin >> choise;

    if ((choise != 'c') && (choise != 'f'))
    {
        cout << "Введен недопустимый символ";
        return 0;
    }

    if (choise == 'c')
    {
        cout << "Введите температуру в градусах Цельсия: ";
        cin >> c;
        d = ctok(c);

        if (d != -460.0)
            cout << "Температура в градусах Фаренгейта: " << d << endl;
    }
    else
    {
        cout << "Введите температуру в градусах Фаренгейта: ";
        cin >> c;
        d = ctok_1(c);

        if (d != -274.0)
            cout << "Температура в градусах Цельсия: " << d << endl;
    } */

    /* double count { 0 };
    double sum { 0 };
    vector<double> int_numbers;
    vector<double> diff;

    cout << "Введите количество суммируемых значений: ";
    cin >> count;
    if (!cin)
    {
        cout << "Ошибка ввода: введено не целое число\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        count = -1;
    }

    cout << "Введите ряд целочисленных значений: ";
    for (double in; cin >> in; )
        int_numbers.push_back(in);

    if (count > (double)int_numbers.size())
    {
        cout << "Размер массива введенных значений меньше количества суммируемых\n";
        count = int_numbers.size();
    }
    else if (count < 0)
    {
        cout << "Количество суммируемых чисел меньше нуля\n";
        count = int_numbers.size();
    }

    cout << "Сумма первых " << count << " чисел (";
    for (double i { 0 }; i < count; ++i)
    {
        cout << int_numbers[i] << " ";
        sum += int_numbers[i];
    }

    if (count > 0)
        cout << "\b) равна " << sum << endl;
    else
        cout << "\bравна " << sum << endl;
    
    cout << "Массив разностей между соседними величинами: ";
    for (int i { 0 }; i < int_numbers.size(); ++i)
    {
        if (i < (int_numbers.size() - 1))
        {
            diff.push_back(int_numbers[i + 1] - int_numbers[i]);
            cout << diff[i] << " ";
        }
    }

    cout << "\n"; */

    /* vector<int> fibonacci_array;
    int number { 0 };
    int index { 2 };

    fibonacci_array.push_back(1);
    fibonacci_array.push_back(1);

    while (true)
    {
        if (!((fibonacci_array[index - 1] > 0) && (fibonacci_array[index - 2] > (INT32_MAX - fibonacci_array[index - 1]))))
        {
            number = fibonacci_array[index - 2] + fibonacci_array[index - 1];
            fibonacci_array.push_back(number);
            ++index;
        }
        else
            break;
    }

    cout << "Максимальное число Фибоначчи в типе данных int: " << fibonacci_array[index - 1] << " с индексом " << index - 1 << endl; */

    /* vector<int> numbers_internal;
    vector<int> numbers_in;
    int bull { 0 };
    int cow { 0 };
    const int bull_max { 4 };
    const int cow_max { 4 };

    srand(time(NULL));
    while (numbers_internal.size() < 4)
    {
        int rnd = 1 + rand() % 9;
        bool match { false };

        for (int i { 0 }; i < numbers_internal.size(); ++i)
        {
            if (rnd == numbers_internal[i])
            {
                match = true;
                break;
            }
        }

        if (!match)
            numbers_internal.push_back(rnd);
    }

    while (true)
    {
        numbers_in.clear();

        while (numbers_in.size() < 4)
        {
            cout << "Введите четыре целых числа: ";
            for (int i = 0; i < 4; ++i)
            {
                int in { 0 };
                cin >> in;

                if ((!cin.fail()) && (in > 0) && (in < 10))
                    numbers_in.push_back(in);
                else
                {
                    numbers_in.clear();
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    break;
                }
            }

            if (numbers_in.size() == 0)
                cout << "Ошибка ввода!\n";
        }

        bull = 0;
        cow = 0;

        for (int i { 0 }; i < 4; ++i)
        {
            for (int j = 0; j < 4; ++j)
            {
                if ((numbers_internal[i] == numbers_in[j]) && (i == j))
                    ++bull;
                else if (numbers_internal[i] == numbers_in[j])
                    ++cow;
            }
            
        }

        if (bull == bull_max)
        {
            cout << "Вы выйграли, кличество быков равно 4\n";
            break;
        }
        else
            cout << "Количество быков " << bull << ", количество коров " << cow << ". Попробуйте еще раз\n";
    } */
    
    vector<int> sunday;
    vector<int> monday;
    vector<int> tuesday;
    vector<int> wednesday;
    vector<int> thursday;
    vector<int> friday;
    vector<int> saturday;

    int counter_bad_input { 0 };


    cout << "Введите дни недели и число: ";

    while (cin)
    {
        string str { "" };
        int in_number { 0 };

        cin >> str;
        cin >> in_number;

        transform(str.begin(), str.end(), str.begin(), [](unsigned char c){ return tolower(c); });

        if ((str == "sunday") || (str == "sun"))
            sunday.push_back(in_number);
        else if ((str == "monday") || (str == "mon"))
            monday.push_back(in_number);
        else if ((str == "tuesday") || (str == "tue"))
            tuesday.push_back(in_number);
        else if ((str == "wednesday") || (str == "wed"))
            wednesday.push_back(in_number);
        else if ((str == "thursday") || (str == "thu"))
            thursday.push_back(in_number);
        else if ((str == "friday") || (str == "fri"))
            friday.push_back(in_number);
        else if ((str == "saturday") || (str == "satu"))
            saturday.push_back(in_number);
        else if (str != "")
            ++counter_bad_input;
    }

    // вывод заначений по дня недели
    if (monday.size() != 0)
    {
        cout << "monday: ";
        print_values(monday);
    }
    if (tuesday.size() != 0)
    {
        cout << "tuesday: ";
        print_values(tuesday);
    }
    if (wednesday.size() != 0)
    {
        cout << "wednesday: ";
        print_values(wednesday);
    }
    if (thursday.size() != 0)
    {
        cout << "thursday: ";
        print_values(thursday);
    }
    if (friday.size() != 0)
    {
        cout << "friday: ";
        print_values(friday);
    }
    if (saturday.size() != 0)
    {
        cout << "saturday: ";
        print_values(saturday);
    }
    if (sunday.size() != 0)
    {
        cout << "sunday: ";
        print_values(sunday);
    }

    if (counter_bad_input != 0)
        cout << "Количество отбракованных записей: " << counter_bad_input << endl;


    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    keep_window_open();
    return 0;
}
catch(exception& e)
{
    cerr << "Ошибка: " << e.what() << '\n';
    keep_window_open();
    return 1;
}
catch(...)
{
    cerr << "Неизвестное исключение!\n";
    keep_window_open();
    return 2;
}




void print_values (vector<int> v)
{
    int sum { 0 };

    for (int i : v)
    {
        cout << i << ", ";
        sum += i;
    }


    cout << "\b\b. Сумма чисел равна " << sum << " \n";
}

double ctok (double c)
{
    // перевод температуры из градусов Цельсия в Фаренгейта
    if (c < -273.15)
    {
        cout << "Ошибка: введенная температура ниже абсолютного нуля\n";
        return -460;
    }

    return (c * 9.0 / 5.0) + 32;
}

double ctok_1 (double c)
{
    // перевод температуры из градусов Фаренгейта в Цельсия
    if (c < -459.67)
    {
        cout << "Ошибка: введенная температура ниже абсолютного нуля\n";
        return -274.0;
    }

    return (c - 32.0) * 5.0 / 9.0;
}

int area (int length, int width)
{
    // вычисление площади прямоугольника
    if ((length <= 0) || (width <= 0))
    {
        cout << "Неположительные параметры для функции area()\n";
        return -1;
    }

    return length * width;
}

int framed_area (int length, int width)
{
    // вычисление площади рамки
    constexpr int frame_width = 2;

    if (((length - (2 * frame_width)) <= 0) || (width - frame_width <= 0))
    {
        cout << "Неположительные аргументы функции area() при вызове из функции framed_area()\n";
        return -1;
    }

    return area (length - 2 * frame_width, width - 2 * frame_width);
}

void error (string sl, string s2)
{
    throw runtime_error (sl + s2);
}