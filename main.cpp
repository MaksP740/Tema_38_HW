#include "Ingredient.h"
#include "Queue.h"
#include <deque>
#include <queue>
#include <iostream>

int main() {

    //========================[ TASK 1 ]============================

    // myQueue::Queue<std::string> numbers;
    //
    // numbers.push_back("One");
    // numbers.push_back("Two");
    // numbers.push_back("Three");
    // numbers.push_back("Four");
    // numbers.push_back("Five");
    // numbers.push_back("Six");
    //
    // numbers.show();
    //
    // numbers.pop_front();
    // numbers.pop_front();
    // numbers.push_back("Seven");
    //
    // numbers.show();
    //
    // int result = 0;
    // while (!numbers.isEmpty()) {
    //         std::string item = numbers.first();
    //         if (item[0] == 'F' || item[0] == 'T') {
    //            result++;
    //         }
    //         numbers.pop_front();
    //     }
    // cout << "Кількість рядків, що починаються з букв F або T: " << result << endl;

    //========================[ TASK 2 ]============================

    priority_queue<Ingredient> borsh;

    int choice;

    do {

        cout << "\n========== МУЛЬТИКУХНЯ ==========\n";
        cout << "1 - Додати інгредієнт\n";
        cout << "2 - Показати інгредієнти\n";
        cout << "3 - Почати готувати борщ\n";
        cout << "0 - Вихід\n";
        cout << "========================================\n";
        cout << "Ваш вибір: ";
        cin >> choice;

        switch (choice) {

            case 1: {

                string name;
                int time;

                cin.ignore();

                cout << "Введіть назву інгредієнта: ";
                getline(cin, name);

                cout << "Введіть час приготування (хв): ";
                cin >> time;

                borsh.push(Ingredient(name, time));

                cout << "Інгредієнт додано!\n";
                break;
            }

            case 2: {

                if (borsh.empty()) {
                    cout << "Список інгредієнтів порожній!\n";
                    break;
                }

                priority_queue<Ingredient> temp = borsh;

                cout << "\n===== Інгредієнти для страви =====\n";

                while (!temp.empty()) {

                    Ingredient item = temp.top();

                    cout << item.getName() << " - " << item.getTime() << " хв\n";
                    temp.pop();
                }
                break;
            }

            case 3: {

                if (borsh.empty()) {
                    cout << "Немає інгредієнтів для страви!\n";
                    break;
                }

                cout << "\n======== ГОТУЄМО ========\n";

                while (!borsh.empty()) {

                    Ingredient item = borsh.top();

                    cout << "Готуємо: "
                         << item.getName()
                         << " ("
                         << item.getTime()
                         << " хв)\n";

                    borsh.pop();
                }

                cout << "\nГотово! Смачного\n";
                break;
            }

            case 0:
                cout << "Вихід з програми...\n";
                break;

            default:
                cout << "Невірний вибір!\n";
        }

    } while (choice != 0);
    return 0;
}
