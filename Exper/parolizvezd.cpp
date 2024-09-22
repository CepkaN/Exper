


#include <iostream>
#include <cassert>
#include <locale>
#include <limits>
#include <string>
#include <sstream>

#include <conio.h>


void clear_input() noexcept
{
    std::cin.clear(),
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    assert(std::cin);
}

template<typename Data, class Checker>
void input(const char* msg, const char* help, const Checker& checker, Data& dst, const bool check = true)
{
    for (;;)
    {
        assert(std::cout);
        std::cout << msg;
        std::string accumulate;
        for (;;)
        {
            auto code = _getch();
            if (code == 13 || code == 27)
                break;

            if (code == 224)
                _getch(),
                code = 8;

            if (code == 8)
            {
                std::cout << "\b \b";
                if (!accumulate.empty())
                    accumulate.pop_back();
            }
            else
            {
                const auto ch = static_cast<char>(code);
                accumulate += ch;
                std::cout << "*";
            }
        }

        std::stringstream ss(accumulate);
        assert(ss);
        ss >> dst;

        const bool invalid = check && !ss;
        if (invalid || !checker(dst))
            std::cout << "\nerror: " << help;
        else
            break;
    }
}

template<typename Data>
void input(const char* msg, const char* help, Data& dst, const bool check = true)
{
    const auto lambda = [](const Data&) { return true; };
    input(msg, help, lambda, dst, check);
}


int main(int argc, char* argv[])
{
    (void)argc;
    (void)argv;
    ::setlocale(LC_ALL, "");

    // допустим мы ожидаемы пароль:
    const char* expected_password = "123";

    // тогда валидатор введенного пароля имеет вид:
    const auto checker
        = [expected_password](const std::string& value)
        { return value == expected_password; };

    // в случае успеха 
    // результат ввода окажется в этой переменной:
    std::string result;

    input("\nenter password: ",
        "incorrect password!",
        checker,
        result
    );

    std::cout << "\naccess is allowed\n";
}