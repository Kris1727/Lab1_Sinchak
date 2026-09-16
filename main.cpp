#include <iostream>
#include <string>

using namespace std;

class Friend {
private:
    string name;
    int birthYear;
    string phoneNumber;
    string hobby;
    bool isCloseFriend;

public:
    // Конструктор зі списком ініціалізації (як у прикладі)
    Friend(string n, int year, string phone, string h, bool close)
        : name(n),
          birthYear(year),
          phoneNumber(phone),
          hobby(h),
          isCloseFriend(close) {}

    // Метод виведення інформації про друга
    void printInfo() const {
        cout << "--- Інформація про друга ---" << endl;
        cout << "Ім'я: " << name << endl;
        cout << "Рік народження: " << birthYear << endl;
        cout << "Телефон: " << phoneNumber << endl;
        cout << "Хобі: " << hobby << endl;
        cout << "Статус: " << (isCloseFriend ? "Близький друг" : "Знайомий") << endl;
    }

    // Метод розрахунку віку
    int calculateAge(int currentYear) const {
        return currentYear - birthYear;
    }

    // Метод оновлення номера телефону
    void updatePhoneNumber(string newPhone) {
        if (!newPhone.empty()) {
            phoneNumber = newPhone;
        }
    }
};

int main() {
    // Створення об'єкта класу Friend
    Friend myFriend("Олександр", 2003, "+380971234567", "Фотографія", true);

    // Демонстрація методів
    myFriend.printInfo();
    cout << "Вік: " << myFriend.calculateAge(2026) << " р." << endl;

    myFriend.updatePhoneNumber("+380509876543");
    cout << "\nПісля оновлення номера телефону:\n";
    myFriend.printInfo();

    return 0;
}