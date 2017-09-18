
class Calculate
{
    double a, b, res;

    char op;

    Calculate(double firstNumber, double secondNumber, char operation) {
        a = firstNumber;
        b = secondNumber;
        op = operation;
    }


    Calculate(double firstNumber, double secondNumber) {
        a = firstNumber;
        b = secondNumber;
        op = "+";
    }


    Calculate() {
        a = 0;
        b = 0;
        op = "+";
    }

}