#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
 Declarations Tasks
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t)
 put them here:
 
    int
    char
    bool
    float
    double
    void
  
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration function.
    give each declaration an initial value
        just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        'void' is a return type. you do not need to declare 3 variables of type 'void'.
    at the end of the function, pass each variable to the ignoreUnused function
 
3) write out 10 functions
    each declaration should have a random number of parameters in the function parameter list.
    add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    pass each of your function parameters to the ignoreUnused function. 
    if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    
5) in the main function at the end
    for each of those functions declared, write out how the function would look if called with correct arguments
 
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Wait for my code review.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    
    int year = 2020;
    int month = 1;
    int day = 9;
    
    char name[7] = "szymon";
    char firstLetter = 's';
    char greeting[] = "hello";

    bool earthRound = true;
    bool aliens = true;
    bool goodAtCpp = false;

    float quarter = 0.25f;
    float gravity = 9.80665f;
    float almostFive = 4.999f;

    double pi = 3.14159265;
    double avogadro = 6.022e23;
    double lightSpeed = 3e8;

    ignoreUnused(number, year, month, day, name, firstLetter, greeting, earthRound, aliens, goodAtCpp, quarter, gravity, almostFive, pi, avogadro, lightSpeed); //passing each variable declared to the ignoreUnused() function
}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */

void chooseInstrument(char instrumentType, int instrument = 0)
{
    ignoreUnused(instrument, instrumentType);
}

/*
 2)
 */

int calculateAge(int day = 29, int month = 4, int year = 1999)
{
    ignoreUnused(day, month, year);
    return {};
}

/*
 3)
 */

bool checkIfCanDrive(int age, int legalAge = 18)
{
    ignoreUnused(age, legalAge);
    return {};
}

/*
 4)
 */

float calculateForce(float mass, float acc = -9.8f)
{
    ignoreUnused(mass, acc);
    return {};
}

/*
 5)
 */

void pickFlavor(int flavor = 0)
{
    ignoreUnused(flavor);
}
/*
 6)
 */

bool checkIfTaller(int height, int compareToHeight = 193 )
{
    ignoreUnused(height, compareToHeight);
    return {};
}
/*
 7)
 */

void setEQNode(int nodeNum, float qWidth = 0.71f, float gain = 0.0f, int freq = 1000)
{
    ignoreUnused(nodeNum, qWidth, gain, freq);
}
/*
 8)
 */

double multiply(double numberA, double numberB)
{
    ignoreUnused(numberA, numberB);
    return {};
}

/*
 9)
 */

double calculateTimeDifference(double startTime, double endTime)
{
    ignoreUnused(startTime, endTime);
    return {};
}


/*
 10)
 */

int pickRandomNumber(int startNumber = 0, int endNumber = 100)
{
    ignoreUnused(startNumber, endNumber);
    return {};
}

int main()
{
    //example of calling that function
    rentACar(6, 2); 
    
    //1)
    chooseInstrument('s', 5);
    
    //2)
    calculateAge();
    
    //3)
    checkIfCanDrive(16);

    //4)
    calculateForce(25.6f, 5.4f);

    //5)
    pickFlavor(2);
    
    //6)
    checkIfTaller(190);
    
    //7)
    setEQNode(3, 1.0f, 2.85f, 1200);
    
    //8)
    multiply(6.2, 5.86);
    
    //9)
    calculateTimeDifference(29.56, 2431.87);

    //10)
    pickRandomNumber(2, 9);

    
    std::cout << "good to go!" << std::endl;
    return 0;    
}
