#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
   /* double counter = 0;
    double number = 0;
    double min = 0;
    double max = 0;
    vector<double> numbers;

    cout << "Введите целочисленные числа: ";
    while (cin >> number)
    { 
        numbers.push_back(number);
        cout << "Вы только что ввели: " << number << "\n";
    }

    if (numbers.size() > 1)
    { 
        min = numbers[0];
        max = numbers[0];
    }

    cout << "Вы ввели числа:";
    while (counter < numbers.size())
    {
        if (counter != 0)
        {
            if (numbers[counter] < min) { min = numbers[counter]; }
            if (numbers[counter] > max) { max = numbers[counter]; }
        }
        // cout << " " << numbers[counter];
        ++counter;
    }

    cout << "\nМинимальное значение: " << min;
    cout << "\nМаксимальное значение: " << max << "\n";

    if (numbers[0] == numbers[1]) { cout << "Введенные числа равны\n"; }
    else if (abs(numbers[0] - numbers[1]) < 0.01) { cout << "Введенные числа почти равны\n"; } */

    /* vector<string> numbers;
    vector<double> numbers_double;
    vector<string> unit;
    string number;
    int counter = 1;
    constexpr double cm_to_m = 0.01;
    constexpr double inc_to_m = 0.0253995991943247;
    constexpr double ft_to_m = 3.28084;
    double min = 0.0;
    double max = 0.0;
    double sum = 0.0;
    bool sort_not_complete = 1;

    cout << "Введите значение длины (cm, m, inc, ft): ";
    while (cin >> number)
    {
        if ((counter%2) != 0) { numbers.push_back(number); }
        else
        {
            if ((number != "cm") && (number != "m") && (number != "inc") && (number != "ft")) { numbers.pop_back(); }
            else { unit.push_back(number); }
        }

        ++counter;
    }

    for (int i = 0; i <= (numbers.size() - 1); ++i)
    {
        if (unit[i] == "cm") { numbers_double.push_back(stod(numbers[i]) * cm_to_m); }
        else if (unit[i] == "inc") { numbers_double.push_back(stod(numbers[i]) * inc_to_m); }
        else if (unit[i] == "ft") { numbers_double.push_back(stod(numbers[i]) * ft_to_m); }
        else { numbers_double.push_back(stod(numbers[i])); }
    }

    while (sort_not_complete)
    {
        sort_not_complete = 0;

        for (int i = 0; i < (numbers_double.size() - 1); ++i)
        {
            if (numbers_double[i] > numbers_double[i + 1])
            {
                double buff = numbers_double[i + 1];
                numbers_double[i + 1] = numbers_double[i];
                numbers_double[i] = buff;

                sort_not_complete = 1;
            }
        }
    }

    if (numbers_double.size() > 1)
    { 
        min = numbers_double[0];
        max = numbers_double[0];
    }

    cout << "Введенные значения длин в метрах (отсортировано):" << endl;
    for (double db : numbers_double)
    {
        if (db < min) { min = db; }
        if (db > max) { max = db; }
        sum += db;

        cout << db << " m" << endl;
    }

    cout << "Общее количество записей: " << numbers_double.size() << " шт." << endl;
    cout << "Минимальное значение: " << min << " м" << endl;
    cout << "Максимальное значение: " << max << " м" << endl;
    cout << "Сумма: " << sum << " м" << endl; */

    /*constexpr double UAH_per_USD = 43.15;
    constexpr double RUB_per_USD = 77.7586;
    constexpr double CHY_per_USD = 6.9635;
    constexpr double GBP_per_USD = 0.73529;
    constexpr double EUR_per_USD = 0.84745;

    double money = 0;
    // string currency = "";
    char currency = ' ';

    cout << "Введите количество денег и валюту: ";
    cin >> money >> currency; */

    /* if (currency == "UAH") { cout << "Введенная валюта в долларах США: " << money / UAH_per_USD; }
    else if (currency == "RUB") { cout << "Введенная валюта в долларах США: " << money / RUB_per_USD; }
    else if (currency == "CHY") { cout << "Введенная валюта в долларах США: " << money / CHY_per_USD; }
    else { cout << "Введена неизвестная валюта"; } */

    /* switch (currency)
    {
        case 'U':
            cout << "Введенная валюта в долларах США: " << money / UAH_per_USD << endl;
            break;
        case 'R':
            cout << "Введенная валюта в долларах США: " << money / RUB_per_USD << endl;
            break;
        case 'C':
            cout << "Введенная валюта в долларах США: " << money / CHY_per_USD << endl;
            break;
        case 'G':
            cout << "Введенная валюта в долларах США: " << money / GBP_per_USD << endl;
            break;
        case 'E':
            cout << "Введенная валюта в долларах США: " << money / EUR_per_USD << endl;
            break;
        default:
            cout << "Введена неизвестная валюта\n";
            break;
    } */

    // for (int i = 97; i <= 122; ++i) { cout << i << " " << (char)i << endl; }

    /* int i = 48; // 48 57   65 90

    while (i <= 90)
    {
        cout << i << " " << (char)i << endl;

        if (i == 57) { i = 65; }
        else { ++i; }
    } */

    /* int num;
    void square_print (int x);

    cout << "Введите целое число: ";
    cin >> num;

    square_print(num);

    cout << "Квадрат " << num << " равен: " << endl; */

    /* string str = "";

    cout << "Ввводите слова: ";

    for (string str; cin >> str; )
    {
        if (str == "Broccoli") { cout << "BLEEP" << endl; }
        else { cout << str << endl; }
    } */

    /* vector<double> v;
    int size_vector = 0;
    double number = 0.0;
    double min = 0.0;
    double max = 0.0;

    vector<double> sort_vector (vector<double> numbers_double);

    cout << "Введите вещественные числа: ";
    while (cin >> number) { v.push_back(number); }

    v = sort_vector(v);

    min = v[v.size() / 2];
    max = v[(v.size() / 2) + 1];

    cout << "Медиана последовательности чисел: " << v[v.size() / 2] << endl; */

    /* vector<double> distance;
    double s = 0;
    double sum = 0;
    double min = 0;
    double max = 0;

    cout << "Введите значения расстояний: ";
    while (cin >> s)
    {
        distance.push_back(s);
        sum += s;
    }

    if (distance.size() > 0)
    {
        min = distance[0];
        max = distance[0];
    }

    for (double db: distance)
    {
        if (db < min) { min = db; }
        else if (db > max) { max = db; }
    }

    cout << "Суммарное расстояние: " << sum << endl;
    cout << "Максимальное расстояние: " << max << endl;
    cout << "Минимальное расстояние: " << min << endl;
    cout << "Среднее расстояние: " << sum / distance.size() << endl; */

    /* char guesser (int number);
    bool stop_game = 0;
    constexpr int max_number = 100;
    char answer = ' ';
    int max = max_number / 2;
    int max_prev = 0;
    int temp = 0;

    cout << "Загадайте целое число от 1 до " << max_number << " !\n";
    cout << "Начинаю угадывать :)\n";

    while (true)
    {
        answer = guesser (max);

        temp = max;

        if (answer == 'y')
        {
            max = max + (abs(max - max_prev) / 2);

        if (((abs(max - max_prev) / 2) == 0))
        {
            cout << "Загаданное число: " << max - 1 << endl;
            break;
        }
        }
        else if (answer == 'n')
        {
            max = max - (abs(max - max_prev) / 2);

        if (((abs(max - max_prev) / 2) == 0))
        {
            cout << "Загаданное число: " << max - 1 << endl;
            break;
        }
        }

        max_prev = temp;
    } */

    /*vector<string> numbers { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    constexpr char plus = '+';
    constexpr char minus = '-';
    constexpr char mul = '*';
    constexpr char div = '/';
    int a = 0.0;
    int b = 0.0;
    char oper = ' ';
    string str_a = "";
    string str_b = "";
    bool bool_a = false;
    bool bool_b = false;

    cout << "Программа калькулятор\n";
    cout << "Введите операнд №1: ";
    cin >> str_a;
    cout << "Введите операнд №2: ";
    cin >> str_b;
    cout << "Введите оператор: ";
    cin >> oper;

    for (int i = 0; i < numbers.size(); ++i)
    {
        if (str_a == numbers[i]) { a = i; bool_a = true; }
        if (str_b == numbers[i]) { b = i; bool_b = true; }
    }

    if (!bool_a) a = stoi(str_a);
    if (!bool_b) b = stoi(str_b);

    switch (oper)
    {
    case plus:
        cout << "Сумма " << a << " и " << b << " равна " << a + b << endl;
        break;
    case minus:
        cout << "Разница " << a << " и " << b << " равна " << a - b << endl;
        break;
    case mul:
        cout << "Произведение " << a << " и " << b << " равно " << a * b << endl;
        break;
    case div:
        cout << "Частное " << a << " на " << b << " равно " << a / b << endl;
        break;
    default:
        cout << "Введен неизвестный операнд\n";
        break;
    } */

    /* vector<string> numbers { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    bool not_number = 0;

    cout << "Вводите цифры:\n";
    for (string in_number; cin >> in_number ; )
    {
        not_number = 1;

        for (int i = 0; i < numbers.size(); ++i)
        {
            if (in_number == numbers[i])
            { 
                cout << "Была введена цифра: " << i << endl;
                not_number = 0;

                break;
            }
        /* if ((in_number >= 0) && (in_number <= 9)) { cout << "Была введена цифра: " << numbers[in_number] << endl;}
        else { cout << "Была введена НЕ цифра"; } */
        /* }

        if (not_number == 1) cout << "Была введена НЕ цифра\n";
    } */

    /* vector<double> table (64);
    int grain = 0;
    int sum = 0;

    cout << "Требуемое количество зерна: ";
    cin >> grain;

    // Заполнение вектора зерном
    table[0] = 1;
    for (int i = 1; i < table.size(); ++i) table[i] = table[i - 1] * 2;

    for (int i = 0; i < table.size(); ++i)
    {
        sum += table[i];

        cout << "Накопленное зерно на " << i << " шаге: " << sum << endl;

        if (grain <= sum)
        {
            cout << "Требуемое количество клеток: " << i + 1 << endl;
            break;
        }
    } */

    /* constexpr int interval_max = 100;
    int max = 0;
    int step = 0;
    int guess = interval_max / 2;
    char rec = ' ';
    bool first = true;
    int flaq = 0;
    char guesser (int number);

    while (true)
    {
        rec = guesser(guess);

        if (first && (rec == 'y'))
        {
            flaq = 1;
            first = false;
            max = interval_max;
        }
        else if (first && (rec == 'n'))
        {
            flaq = 2;
            first = false;
            max = interval_max / 2;
            rec = 'y';
        }

        if (rec == 'y')
        {
            step = (max - guess) / 2;
            guess = guess + step;

            if (step == 0)
            {
                cout << "Заданное число: " << guess + 1 << endl;
                break;
            }
        }
        else if (rec == 'n')
        {
            max = guess;
            step = abs(max - (guess - step)) / 2;
            guess = guess - step;

            if (step == 0)
            {
                cout << "Заданное число: " << guess - 1 << endl;
                break;
            }
        }
        
    } */

    /* constexpr int max = 3;
    constexpr int min = 1;
    string stone = "камень";
    string scissors = "ножницы";
    string paper = "бумага";
    int rnd_int = 1;
    string rnd_string = "камень";
    string in = "";

    while (true)
    {
        cout << "Камень, ножницы, или бумага: ";
        cin >> in;

        rnd_int = (rand() % (max - min + 1)) + min;

        switch (rnd_int)
        {
        case 1:
            rnd_string = "камень";
            break;
        
        case 2:
            rnd_string = "ножницы";
            break;
        
        case 3:
            rnd_string = "бумага";
            break;
        }

        if (rnd_string == in) cout << "Выбраны одинаковые элементы типа: " << in << ". Ничья" << endl;
        else
        {
            cout << "Человек выбрал " << in << ", а машина выбрала " << rnd_string;
            
            if (((in == "камень") && (rnd_string == "ножницы")) || ((in == "ножницы") && (rnd_string == "бумага")) || ((in == "ножницы") && (rnd_string == "бумага"))) cout << ". Победил человек!\n";
            else cout << ". Победила машина\n";
        }
    } */

    // простые числа
    vector<int> simple_1;
    vector<int> simple_2;
    int prime = 2;
    int max { 0 };

    cout << "Введите максимальный элемент последовательности > ";
    cin >> max;

    // заполнение массива чисел
    for (int i = 1; i <= max; ++i) { simple_1.push_back(i); }

    while (prime != -1)
    {
        // проверка на простоту
        for (int i = 0; i < simple_1.size(); ++i)
        {
            if (simple_1[i] == prime)
            {
                simple_2.push_back(prime);
                simple_1[i] = -1;
            }
            else if (simple_1[i] == 1) simple_1[i] = -1;
            else if ((simple_1[i] % prime) == 0)
            { 
                simple_1[i] = -1;
            }
        }

        prime = -1;

        for (int i = 0; i < simple_1.size(); ++i)
        {
            if (simple_1[i] != -1)
            {
                prime = simple_1[i];
                break;
            }
        }
    }

    for (int i : simple_2)
    {
        cout << i << endl;
    }

    cin.ignore();
    getchar();
    return 0;
}

/* void square_print (int x)
{
    int sum = 0;

    for (int i = 0; i < x; ++i ) { sum += x; }

    cout << "Квадрат " << x << " равен: " << sum << endl;
} */

/* vector<double> sort_vector (vector<double> numbers_double)
{
    bool sort_not_complete = 1;

        while (sort_not_complete)
    {
        sort_not_complete = 0;

        for (int i = 0; i < (numbers_double.size() - 1); ++i)
        {
            if (numbers_double[i] > numbers_double[i + 1])
            {
                double buff = numbers_double[i + 1];
                numbers_double[i + 1] = numbers_double[i];
                numbers_double[i] = buff;

                sort_not_complete = 1;
            }
        }
    }

    return numbers_double;
} */

/* char guesser (int number)
{
    char in = ' ';

    cout << "Загаданное число больше " << number << " (y - да, n - нет)? ";
    cin >> in;

    if (in == 'y')
    {
        return 'y';
    }
    else if (in == 'n')
    {
        return 'n';
    }
} */