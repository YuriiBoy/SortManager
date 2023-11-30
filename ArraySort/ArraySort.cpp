#include "Header.h"
#include "Menu.h"
#include"UniverSort.h"

int main()
{
    std::string taskName = "Arrays Sort Manager";
    std::vector<std::string> menuList = {
        "Bubble Sort",
        "Incertion Sort",
        "Selection Sort",
        "Exit"
    };

    std::unique_ptr<Menu> m(new Menu(taskName, menuList));
    auto usort = std::make_unique<UniverSort>();
    auto bsort = std::make_unique<BubbleSort>();    
    auto isort = std::make_unique<InsertionSort>();
    auto ssort = std::make_unique <SelectionSort>();

    
    m->displayTaskName();
    m->displayMenuList();
   

    bool stop = false;
    do {
        int choice = m->getChoice();
        switch (choice)
        {
        case 1:
            usort->setArray();
            usort->message();
            usort->display();
            bsort->message();
            usort->bubblesort();
            usort->display();
            break;
        case 2:
            usort->setArray();
            usort->message();
            usort->display();
            isort->message();
            usort->bubblesort();
            usort->display();
            break;
        case 3:
            usort->setArray();
            usort->message();
            usort->display();
            ssort->message();
            usort->bubblesort();
            usort->display();
            break;
        case 4: stop = true;
            break; std::cout << "\n Wrong choice";
        default:
            break;
        }
        if (stop) {
            break;
        }

    } while (m->allowContinue());

    
    std::cout << "\n Finish program";
}
