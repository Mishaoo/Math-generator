#include <iostream>
#include <random>
#include <iomanip>
#include <string>
using namespace std;




int generateRandomNumber(int min, int max) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(min, max);
    return dis(gen);
}

int main()
{

    while (true)
    {

        cout << "Hello, this is a generator of simple mathematical examples (+, -, /, *) After answering the following questions, you can customize the generation for yourself" << endl;
        cout << endl;




        bool operationPlus = false;
        bool operationMinus = false;
        bool operationDivision = false;
        bool operationMultiplication = false;



        while (operationDivision != true && operationMinus != true && operationPlus != true && operationMultiplication != true)
        {
            string test;
            cout << "(enter exit for exit)" << endl;
            cout << "Enter all math operations(+, -, /, *):";
            getline(cin, test);

            if (test == "exit") return 0;

            for (int i = 0; i < test.length(); i++)
            {
                if (test[i] == '+') operationPlus = true;
                if (test[i] == '-') operationMinus = true;
                if (test[i] == '/') operationDivision = true;
                if (test[i] == '*') operationMultiplication = true;
            }
        }



        cout << endl;




        long int numberRangeMin = 0;
        long int numberRangeMax = 0;

        cout << "Enter the range:" << endl;
        cout << "\tmin number:";
        cin >> numberRangeMin;
        cout << "\tmax number:";
        cin >> numberRangeMax;

        if (numberRangeMin >= numberRangeMax)
        {
            while (numberRangeMin >= numberRangeMax)
            {
                cout << "The minimum number cannot be greater than the maximum number. enter new number" << endl;

                cout << "Enter the range:" << endl;
                cout << "\tmin number:";
                cin >> numberRangeMin;
                cout << "\tmax number:";
                cin >> numberRangeMax;
            }
        }





        cout << endl;

        int score_examples;
        cout << "How many examples to write:";
        cin >> score_examples;

        cout << endl;

        char selectSolution;
        cout << "Show solution examples(Enter y - yes or n - no):";
        cin >> selectSolution;

        while (selectSolution != 'y' && selectSolution != 'n')
            cin >> selectSolution;




        cout << endl;
        cout << endl;

        cout << "-------------------------------" << endl;

        cout << "Your settings: " << endl;
        cout << "\tmin range - " << numberRangeMin << endl;
        cout << "\tmax range - " << numberRangeMax << endl;
        cout << endl;

        cout << "Math operation: ";

        if (operationPlus == true) cout << " + ";
        if (operationMinus == true) cout << " - ";
        if (operationDivision == true) cout << " / ";
        if (operationMultiplication == true) cout << " * ";

        cout << endl;
        cout << endl;

        cout << "Show solution: ";

        if (selectSolution == 'y') cout << " yes" << endl;
        else cout << " no" << endl;

        cout << "------------------------------------" << endl;


        long double number1 = generateRandomNumber(numberRangeMin, numberRangeMax);
        long double number2 = generateRandomNumber(numberRangeMin, numberRangeMax);


        for (int i = 0; i < score_examples; )
        {
            number1 = generateRandomNumber(numberRangeMin, numberRangeMax);
            number2 = generateRandomNumber(numberRangeMin, numberRangeMax);
            if (selectSolution == 'y')
            {
                if (operationPlus == true)
                {
                    cout << std::fixed << std::setprecision(2) << number1 << " + " << number2 << " =\t" << number1 + number2 << endl;
                    i++;
                }
                number1 = generateRandomNumber(numberRangeMin, numberRangeMax);
                number2 = generateRandomNumber(numberRangeMin, numberRangeMax);

                if (operationMinus == true)
                {
                    cout << max(number1, number2) << " - " << min(number1, number2) << std::fixed << std::setprecision(2) << " =\t" << max(number1, number2) - min(number1, number2) << endl;
                    i++;
                }
                number1 = generateRandomNumber(numberRangeMin, numberRangeMax);
                number2 = generateRandomNumber(numberRangeMin, numberRangeMax);

                if (operationDivision == true)
                {
                    cout << number1 << " / " << number2 << " =\t" << std::fixed << std::setprecision(2) << number1 / number2 << endl;
                    i++;
                }
                number1 = generateRandomNumber(numberRangeMin, numberRangeMax);
                number2 = generateRandomNumber(numberRangeMin, numberRangeMax);

                if (operationMultiplication == true)
                {
                    cout << number1 << " * " << number2 << " =\t" << std::fixed << std::setprecision(2) << number1 * number2 << endl;
                    i++;
                }
                number1 = generateRandomNumber(numberRangeMin, numberRangeMax);
                number2 = generateRandomNumber(numberRangeMin, numberRangeMax);
            }

            else
            {
                if (operationPlus == true)
                {
                    cout << number1 << " + " << number2 << " = ?" << endl;
                    i++;
                }
                number1 = generateRandomNumber(numberRangeMin, numberRangeMax);
                number2 = generateRandomNumber(numberRangeMin, numberRangeMax);

                if (operationMinus == true)
                {
                    cout << number1 << " - " << number2 << " = ?" << endl;
                    i++;
                }
                number1 = generateRandomNumber(numberRangeMin, numberRangeMax);
                number2 = generateRandomNumber(numberRangeMin, numberRangeMax);

                if (operationDivision == true)
                {
                    cout << number1 << " / " << number2 << " = ?" << endl;
                    i++;
                }
                number1 = generateRandomNumber(numberRangeMin, numberRangeMax);
                number2 = generateRandomNumber(numberRangeMin, numberRangeMax);

                if (operationMultiplication == true)
                {
                    cout << number1 << " * " << number2 << " = ?" << endl;
                    i++;
                }
                number1 = generateRandomNumber(numberRangeMin, numberRangeMax);
                number2 = generateRandomNumber(numberRangeMin, numberRangeMax);
            }
        }


        system("pause");
        system("cls");

    }


    return 0;
}
