#include <iostream>

template <typename... T> void ignoreUnused(T &&...) {}

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free
functions. This will be the first project where the code you write will be
compiled and you will be responsible for making sure it compiles before
submitting it for review.


 1) Write down the names of the 6 major primitive types available in C++  here:

    int
    float
    bool
    double
    char
    unsigned int


2) for each primitive type, write out 3 variable declarations inside the
variableDeclaration() function on line 59. a) give each variable declaration an
initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type
'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of
type 'void'. b) at the end of the function, call ignoreUnused once and pass all
of your variables to it. see line 71 for an example

3) Declare 10 free functions
    each declaration should have a random number of parameters in the function
parameter list. When naming your parameters, choose names that are relevant to
the task implied by the function's name. remember: Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing
semicolon 5) pass each of your function parameters to the ignoreUnused function
like you did in b) 6) if your function returns something other than void, add
'return { };' at the end of it. 7) provide default values for an arbitrary
number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the
formatting of your 10 functions.  At this point, you might have something that
looks like this: float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar );
return { }; } This does not conform with the coding standard for this course
(check the Readme.MD) and needs to be corrected

9) in the main function at the end:
    for each of those functions declared,
        a) write out how the function would look if called with correct
arguments b) if the function returned anything, store it in a local variable via
the 'auto' keyword. c) pass the local variables to ignoreUnused() as you did in
2b) see main() for an example of this.

10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

// 2)
void variableDeclarations() {
    // example:
    int number =
      2; // declaration of a variable named "number", that uses the primitive
         // type 'int', and the variable's initial value is '2'
    int height = 70;
    int weight = 180;
    
    float temperature = 70.5f;
    float speed = 5.5f;
    float pressure = 14.7f;
    
    bool isSad = false;
    bool isHappy = true;
    bool isAlive = true;
    
    double distance = 5.5;
    double time = 2.5;
    double velocity = -5.5;
    
    char letter = 'a';
    char symbol = '$';
    char digit = '1';
    
    unsigned int age = 18;
    unsigned int population = 4000000;
    unsigned int count = 10;
    
    ignoreUnused(
      number, height, weight, temperature, speed, pressure, isSad, isHappy,
      isAlive, distance, time, velocity, letter, symbol, digit, age, population,
      count); // passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(
    int rentalDuration,
    int carType = 0) // function declaration with random number of arguments,
                     // arbitrary number of arguments have default value
{
    ignoreUnused(rentalDuration, carType); // passing each function parameter to
                                         // the ignoreUnused() function
    return {}; // if your function returns something other than void, add 'return
             // {};' at the end of it.
}

/*
 1)
 */
bool isItBadWeather(bool raining, int timeOfDay = 0) 
{
    ignoreUnused(raining, timeOfDay);
    return {};
}

/*
 2)
 */
int addNumbers(int num1, int num2) 
{
    ignoreUnused(num1, num2);
    return {};
}

/*
 3)
 */
float getPressure(float temperature, float humidity) 
{
    ignoreUnused(temperature, humidity);
    return {};
}

/*
 4)
 */
char mostUsedKeystroke(char key1, char key2, char key3) 
{
    ignoreUnused(key1, key2, key3);
    return {};
}

/*
 5)
 */
unsigned int
getNumberOfGrandmothers(unsigned int numberOfParents,
                        unsigned int numberOfDeadGrandmothers = 0) 
{
    ignoreUnused(numberOfParents, numberOfDeadGrandmothers);
    return {};
}

/*
 6)
 */
double lookupPrice(double basePrice, double discount = 0) 
{
    ignoreUnused(basePrice, discount);
    return {};
}

/*
 7)
 */
int countDaysInJail(int numberOfTallyMarks,
                    int numberOfDaysIForgotToCount = 0) 
{
   ignoreUnused(numberOfTallyMarks, numberOfDaysIForgotToCount);
    return {};
}

/*
 8)
 */
char asciiToChar(int code) 
{
    ignoreUnused(code);
    return {};
}

/*
 9)
 */
float timeToArrival(float latitude, float longitude) 
{
    ignoreUnused(latitude, longitude);
    return {};
}

/*
 10)
 */
bool isCold(float temperature, float windVelocity = 0) 
{
    ignoreUnused(temperature, windVelocity);
    return {};
}

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left,
 entering a message, and click [Commit and push].

 If you didn't already:
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single
 message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main() 
{
    // example of calling that function, storing the value, and passing it to
    // ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2);

    // 1)
    auto time = isItBadWeather(false);
    // 2)
    auto sum = addNumbers(8, 16);
    // 3)
    auto pressure = getPressure(70.f, 50.f);
    // 4)
    auto mostUsedKey = mostUsedKeystroke('t', 'e', 's');
    // 5)
    auto numGrandparents = getNumberOfGrandmothers(4);
    // 6)
    auto price = lookupPrice(20.0, 5.0);
    // 7)
    auto days =  countDaysInJail(15894, 6);
    // 8)
    auto character =  asciiToChar(75);
    // 9)
    auto minutes = timeToArrival(41.8781f, -87.6298f);
    // 10)
    auto cold = isCold(0.f);

  ignoreUnused(carRented, time, sum, pressure, mostUsedKey, numGrandparents, price, days, character, minutes, cold);
    std::cout << "good to go!" << std::endl;
    return 0;
}
