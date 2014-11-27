#include "consoleui.h"

ConsoleUI::ConsoleUI()
{
    scientistService = ScientistService();
}

void ConsoleUI::start() {
    std::string inp;
    std::cout << "Welcome!!\nThe commands are:\t add" << std::endl;
    std::cin >> inp;

    if(inp == "add") {
        Scientist s = Scientist();
        int dayOfBirth, monthOfBirth, yearOfBirth;
        std::cin >> s.name >> s.gender >> dayOfBirth >> monthOfBirth >> yearOfBirth;

        s.dateOfBirth.addYears(yearOfBirth);
        s.dateOfBirth.addMonths(monthOfBirth);
        s.dateOfBirth.addDays(dayOfBirth);

        scientistService.add(s);
    }
}
