#include <iostream>
#include <vector>
#include <cmath>
#include <math.h>
#include <limits>

int main()
{
    /* working with std, general print std::cout <<
    std::cout <<"hello world" << std::endl;
    std::cout <<"wsg gng";
    */

    /* general data types ints, bools string double etc,
    int x = 12;
    int y = 6;
    char grade = 'o';
    std::string burger = "hello";
    std::cout <<x*y;
    std::cout <<grade;
    std::cout <<burger << '\n';
    */

    /* std in >> d, user input
    const double pie = 3.14;
    double r;
    std::cout << "enter radius" << '\n';
    std::cin >> r;
    std::cout << "your circumfrence is " << r*2*pie;
    return 0;
    */

    // namepace first{ x = 1;} namespace second{x=2;} lets you have same for variables, using namespace first,
    //using namespace std;
    //using std::cout this lets you just not write the std portion
    // lets you pick which you are picking

    //typedef lets you give new identifier for datatypes
    // ex. typedef std::string text
    // text burger = "hello"
    // "using" also works
    // ex. using text = std::string;
    /*
        int student = 12;
        student/=2;
        student*=2;
        student++;
        student--;
        student+=2;
        */
    // type conversion
    //   double x = (int) 1.124;
    //   std::cout << x;

    /*
        std::string name;
        double age;

        std::cout << "Whats your age?: ";
        std::cin >> age;

        std::cout << "Whats your name?: ";
        std::getline(std::cin >> std::ws, name);

        std::cout<< "Hello " << name << ". You are " << age<< " years old";

    */
    /*
        int x= 0;
        if (x < 1)
        {
            std::cout << "burger";
        }
        else if (x==0)
        {
            std::cout << "nothing happened";
        }
        else
        {
            std::cout << "ham";
        }

    */
    // alternative to if and else statements
    /*
    int number = 1;
    std::cout << (number == 1 ?"burger" : "nothing");

    std::cout << (number % 2 ? "even number" : "odd number");
    */
    // && and
    // ! not
    // || or
    //
    /*
    char input;
    double temp;
    std::cout << "***** TEMP CONVERT *****" << '\n';
    std::cout << "F = Farenheight" << '\n' << "C = Celcius" << '\n' << "What units would you like to convert from: ";
    std::cin >> input;
    std::cout << "************************\n";

    if (input ==  'F' || input == 'f')
    {
        std::cout << "Enter temperature in Celsius: ";
        std::cin >> temp;
        temp = (1.8 * temp) + 32;
        std::cout << "Your temp is: " << temp << 'F\n';

    }
    else if (input ==  'C' || input == 'c')
    {
        std::cout << "Enter temperature in Farenheight: ";
        std::cin >> temp;
        temp = (temp - 32)/ 1.8;
        std::cout << "Your temp is: " << temp << 'C\n';
    }
    else
    {
        std::cout << "Enter valid value";
    }

*/

    //name.lenght() name.empty() name.clear() name.append("string") name.at(0) name.insert(0, "h) name.find("h") name.erase(0, 3)
    /*
    int i = 1;
    for (int i = 1; i <= 3; i++)
    {
        std::cout << "burger12";
    }

    while (i>=1)
    {
        std::cout << "burger";
        i++;
        break;
    }
    do{std::cout<< "burg12122123213er";}while (i>20);

*/

    //break stops, continue skips the itteration
    /*
        srand(time(NULL));

        int num = (rand() % 20 ) +1 ;

    */
/*
    std::string question [] = {
        "1.  What is my name", "2. WHat is my last name", "3. Is the earth flath", "4. Are burgers good"
    };
    std::string options[][4] = {{"A. burger boy", "B Zafar he", "C. Suhani", "D. Kiarad"},
        {"A. Zafar Heidari" , "B. Burgerboy" ,"C. patel" ,"D. Josh"},
        {"A. Yes", "B. No", "C. Maybe", "D. Kinda"}, {"A. Yes", "B. No", "C. Maybe", "D. Kinda"}};
    char answer[] = {'D', 'A', 'B', 'A'};

    int size = sizeof(question)/sizeof(question[0]);
    int guesses = 1;
    char guess;
    bool run = true;

    for (int i = 0; i < size; i++)
    {
        run = true;
        std::cout << "*************************\n";
        std::cout << question[i] << '\n';
        std::cout << "*************************\n";

        for (int j = 0; j < sizeof(options[i])/sizeof(options[j][0]); j++)
        {
            std::cout << options[i][j] << '\n';
        }
        while (run == true)
            {
        std::cin >> guess;
        guess = std::toupper(guess);
        if  (guess == answer[i])
        {
            std::cout <<"Correct\n";
            guesses ++;
            run =false;
        }
        else if (guess != 'A' && guess != 'B' && guess != 'C' && guess != 'D')
        {
            std::cout << "Type a correct option\n";
            std::cin.clear(); // clears error flags (good practice)
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        else
        {
            std::cout << "Wrong answer\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            guesses ++;
        }
            };
    }
std::cout << "You guessed " << guesses << " times\n";

*/

    //test commit
    return 0;
}