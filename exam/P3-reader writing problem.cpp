#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx; // mutex for synchronization
int sharedResource = 0; // shared resource

void reader() {
    mtx.lock();
    std::cout << "Reader reads: " << sharedResource << std::endl;
    mtx.unlock();
}

void writer(int value) {
    mtx.lock();
    sharedResource = value;
    std::cout << "Writer writes: " << sharedResource << std::endl;
    mtx.unlock();
}

int main() {
    int choice, value;

    while (true) {
        std::cout << "1. Read\n";
        std::cout << "2. Write\n";
        std::cout << "3. Quit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                reader();
                break;
            case 2:
                std::cout << "Enter a value to write: ";
                std::cin >> value;
                writer(value);
                break;
            case 3:
                std::cout << "Quitting...\n";
                return 0;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
