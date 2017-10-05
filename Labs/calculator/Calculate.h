
#ifndef Calculate_H_
#define Calculate_H_

    class Calculate {

        public :

            // Constructors
            Calculate(double* resPtr, char operation, double firstNumber, double secondNumber);
            Calculate(double* resPtr, char operation, double firstNumber);
            Calculate(double* resPtr);

            // Methods
            double run();

        private :

            // Variables
            double a, b, res;

            double* resPtr;

            // Char
            char op;

            // Methods
            double add (double a, double b);
            double sub (double a, double b);
            double multiply (double a, double b);
            double divide (double a, double b);
            int modulo (int a, int b);



    };

#endif