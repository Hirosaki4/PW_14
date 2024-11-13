#include <iostream>
#include <vector>
#include <string>
#include <Windows.h>

// Структура для зберігання інформації про товар
struct Product {
    std::string name;
    double price;
    int quantity;
};

// Функція для знаходження найдорожчого товару
Product findMostExpensive(const std::vector<Product>& products) {
    Product mostExpensive = products[0];
    for (const auto& product : products) {
        if (product.price > mostExpensive.price) {
            mostExpensive = product;
        }
    }
    return mostExpensive;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    // Введення товарів у вектор
    std::vector<Product> products = {
        {"Телефон", 799.99, 10},
        {"Ноутбук", 1200.50, 5},
        {"Навушники", 199.99, 20}
    };

    // Знаходження найдорожчого товару
    Product expensiveProduct = findMostExpensive(products);

    // Виведення результату
    std::cout << "Найдорожчий товар: " << expensiveProduct.name << "\n";
    std::cout << "Ціна: " << expensiveProduct.price << "\n";
    std::cout << "Кількість: " << expensiveProduct.quantity << "\n";

    return 0;
}
