#include <iostream>
#include <cmath>

// Функция для вычисления площади круга тут я гуглил а не чат джипити
double areaOfCircle(double radius) {
    return M_PI * radius * radius;
}

// Функция для вычисления площади кольца тут тоже
double areaOfRing(double outerRadius, double innerRadius) {
    // Площадь кольца = площадь большего круга - площадь меньшего круга тут крч ТРЕШ
    return areaOfCircle(outerRadius) - areaOfCircle(innerRadius);
}

int main() {
    double outerRadius, innerRadius;
    
    std::cout << "Введите внешний радиус кольца: ";
    std::cin >> outerRadius;
    
    std::cout << "Введите внутренний радиус кольца: ";
    std::cin >> innerRadius;
    
    // Проверка на корректность введенных данных ЮТУБ В ПОМОЩЬ
    if (outerRadius <= innerRadius) {
        std::cout << "Ошибка: Внешний радиус должен быть больше внутреннего радиуса." << std::endl;
        return 1;
    }
    
    // Вызов функции для вычисления площади кольца ВАН ЛАВ ПЛЮСЫ ТУТ Я ПЛАКАЛ=)
    double ringArea = areaOfRing(outerRadius, innerRadius);
    
    std::cout << "Площадь кольца с внешним радиусом " << outerRadius << " и внутренним радиусом " << innerRadius << " равна " << ringArea << std::endl;
    
    return 0;
}

