// dz_4.1.2.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

//class Figure {
//protected:
//    int sides;
//
//public:
//   
//    Figure() : sides(0) {}
//
//   
//    int getNumberOfSides() const {
//        return sides;
//    }
//
//   
//    virtual void printInfo() const {
//        std::cout << "Фигура: " << getNumberOfSides() << std::endl;
//    }
//};
//
//class Triangle : public Figure {
//public:
//  
//    Triangle() {
//        sides = 3;
//    }
//
//   
//    void printInfo() const override {
//        std::cout << "Треугольник: " << getNumberOfSides() << std::endl;
//    }
//};
//
//class Quadrilateral : public Figure {
//public:
//    
//    Quadrilateral() {
//        sides = 4;
//    }
//
//    
//    void printInfo() const override {
//        std::cout << "Четырёхугольник: " << getNumberOfSides() << std::endl;
//    }
//};
//
//int main() {
//    setlocale(LC_ALL, "Russian");
//
//    Figure genericFigure;
//    Triangle triangle;
//    Quadrilateral quadrilateral;
//
//    std::cout << "Количество сторон:\n";
//    genericFigure.printInfo();
//    triangle.printInfo();
//    quadrilateral.printInfo();
//
//    return 0;
//}


//class Figure {
//public:
//    virtual void printInfo() const = 0;
//};
//
//class Triangle : public Figure {
//protected:
//    double a, b, c;
//    double A, B, C;
//
//public:
//    Triangle(double sideA, double sideB, double sideC, double angleA, double angleB, double angleC)
//        : a(sideA), b(sideB), c(sideC), A(angleA), B(angleB), C(angleC) {
//    }
//
//    void printInfo() const override {
//        std::cout << "Треугольник:\n";
//        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << "\n";
//        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << "\n";
//    }
//};
//
//class RightTriangle : public Triangle {
//public:
//    RightTriangle(double sideA, double sideB)
//        : Triangle(sideA, sideB, sqrt(sideA* sideA + sideB * sideB), atan2(sideA, sideB) * 180 / 3.14,
//            atan2(sideB, sideA) * 180 / 3.14, 90) {
//    }
//
//    void printInfo() const override {
//        std::cout << "Прямоугольный треугольник:\n";
//        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << "\n";
//        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << "\n";
//    }
//};
//
//class IsoscelesTriangle : public Triangle {
//public:
//    IsoscelesTriangle(double equalSide, double base, double angle)
//        : Triangle(equalSide, equalSide, base, angle, angle, 180 - 2 * angle) {
//    }
//
//    void printInfo() const override {
//        std::cout << "Равнобедренный треугольник:\n";
//        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << "\n";
//        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << "\n";
//    }
//};
//
//class EquilateralTriangle : public Triangle {
//public:
//    EquilateralTriangle(double side)
//        : Triangle(side, side, side, 60, 60, 60) {
//    }
//
//    void printInfo() const override {
//        std::cout << "Равносторонний треугольник:\n";
//        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << "\n";
//        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << "\n";
//    }
//};
//
//class Quadrilateral : public Figure {
//protected:
//    double a, b, c, d;
//    double A, B, C, D;
//
//public:
//    Quadrilateral(double sideA, double sideB, double sideC, double sideD,
//        double angleA, double angleB, double angleC, double angleD)
//        : a(sideA), b(sideB), c(sideC), d(sideD), A(angleA), B(angleB), C(angleC), D(angleD) {
//    }
//
//    void printInfo() const override {
//        std::cout << "Четырёхугольник:\n";
//        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n";
//        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n";
//    }
//};
//
//class Rectangle : public Quadrilateral {
//public:
//    Rectangle(double sideA, double sideB)
//        : Quadrilateral(sideA, sideB, sideA, sideB, 90, 90, 90, 90) {
//    }
//
//    void printInfo() const override {
//        std::cout << "Прямоугольник:\n";
//        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n";
//        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n";
//    }
//};
//
//class Square : public Rectangle {
//public:
//    Square(double side)
//        : Rectangle(side, side) {
//    }
//
//    void printInfo() const override {
//        std::cout << "Квадрат:\n";
//        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n";
//        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n";
//    }
//};
//
//class Parallelogram : public Quadrilateral {
//public:
//    Parallelogram(double sideA, double sideB, double angle)
//        : Quadrilateral(sideA, sideB, sideA, sideB, angle, 180 - angle, angle, 180 - angle) {
//    }
//
//    void printInfo() const override {
//        std::cout << "Параллелограмм:\n";
//        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n";
//        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n";
//    }
//};
//
//class Rhombus : public Parallelogram {
//public:
//    Rhombus(double side, double angle)
//        : Parallelogram(side, side, angle) {
//    }
//
//    void printInfo() const override {
//        std::cout << "Ромб:\n";
//        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n";
//        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n";
//    }
//};
//
//int main() {
//    setlocale(LC_ALL, "Russian");
//    Triangle triangle(10, 20, 30, 50, 60, 70);
//    triangle.printInfo();
//
//    RightTriangle rightTriangle(10, 20);
//    rightTriangle.printInfo();
//
//    IsoscelesTriangle isoscelesTriangle(10, 30, 50);
//    isoscelesTriangle.printInfo();
//
//    EquilateralTriangle equilateralTriangle(30);
//    equilateralTriangle.printInfo();
//
//    Quadrilateral quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
//    quadrilateral.printInfo();
//
//    Rectangle rectangle(10, 20);
//    rectangle.printInfo();
//
//    Square square(20);
//    square.printInfo();
//
//    Parallelogram parallelogram(20, 30, 30);
//    parallelogram.printInfo();
//
//    Rhombus rhombus(30, 30);
//    rhombus.printInfo();
//
//    return 0;
//}

//class Figure {
//public:
//    virtual void printInfo() const {
//        std::cout << "Фигура:\n";
//        std::cout << (isValid() ? "Правильная" : "Неправильная") << "\n";
//        std::cout << "Количество сторон: " << getSideCount() << "\n";
//    }
//
//    virtual bool isValid() const {
//        return true;  
//    }
//
//    virtual int getSideCount() const {
//        return 0;  
//    }
//};
//
//class Triangle : public Figure {
//protected:
//    double a, b, c;
//    double A, B, C;
//
//public:
//    Triangle(double sideA, double sideB, double sideC, double angleA, double angleB, double angleC)
//        : a(sideA), b(sideB), c(sideC), A(angleA), B(angleB), C(angleC) {
//    }
//
//    void printInfo() const override {
//        std::cout << "Треугольник:\n";
//        Figure::printInfo();
//        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << "\n";
//        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << "\n";
//    }
//
//    bool isValid() const override {
//        
//        return fabs(A + B + C - 180) < 1e-6 && Figure::isValid();
//    }
//
//    int getSideCount() const override {
//        return 3;
//    }
//};
//
//class RightTriangle : public Triangle {
//public:
//    RightTriangle(double sideA, double sideB)
//        : Triangle(sideA, sideB, sqrt(sideA* sideA + sideB * sideB), atan2(sideA, sideB) * 180 / 3.14,
//            atan2(sideB, sideA) * 180 / 3.14, 90) {
//    }
//
//    void printInfo() const override {
//        std::cout << "Прямоугольный треугольник:\n";
//        Triangle::printInfo();
//    }
//};
//
//class IsoscelesTriangle : public Triangle {
//public:
//    IsoscelesTriangle(double equalSide, double base, double angle)
//        : Triangle(equalSide, equalSide, base, angle, angle, 180 - 2 * angle) {
//    }
//
//    void printInfo() const override {
//        std::cout << "Равнобедренный треугольник:\n";
//        Triangle::printInfo();
//    }
//};
//
//class EquilateralTriangle : public Triangle {
//public:
//    EquilateralTriangle(double side)
//        : Triangle(side, side, side, 60, 60, 60) {
//    }
//
//    void printInfo() const override {
//        std::cout << "Равносторонний треугольник:\n";
//        Triangle::printInfo();
//    }
//};
//
//class Quadrilateral : public Figure {
//protected:
//    double a, b, c, d;
//    double A, B, C, D;
//
//public:
//    Quadrilateral(double sideA, double sideB, double sideC, double sideD,
//        double angleA, double angleB, double angleC, double angleD)
//        : a(sideA), b(sideB), c(sideC), d(sideD), A(angleA), B(angleB), C(angleC), D(angleD) {
//    }
//
//    void printInfo() const override {
//        std::cout << "Четырёхугольник:\n";
//        Figure::printInfo();
//        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n";
//        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n";
//    }
//
//    bool isValid() const override {
//        
//        return fabs(A + B + C + D - 360) < 1e-6 && Figure::isValid();
//    }
//
//    int getSideCount() const override {
//        return 4;
//    }
//};
//
//class Rectangle : public Quadrilateral {
//public:
//    Rectangle(double sideA, double sideB)
//        : Quadrilateral(sideA, sideB, sideA, sideB, 90, 90, 90, 90) {
//    }
//
//    void printInfo() const override {
//        std::cout << "Прямоугольник:\n";
//        Quadrilateral::printInfo();
//    }
//};
//
//class Square : public Rectangle {
//public:
//    Square(double side)
//        : Rectangle(side, side) {
//    }
//
//    void printInfo() const override {
//        std::cout << "Квадрат:\n";
//        Rectangle::printInfo();
//    }
//};
//
//class Parallelogram : public Quadrilateral {
//public:
//    Parallelogram(double sideA, double sideB, double angle)
//        : Quadrilateral(sideA, sideB, sideA, sideB, angle, 180 - angle, angle, 180 - angle) {
//    }
//
//    void printInfo() const override {
//        std::cout << "Параллелограмм:\n";
//        Quadrilateral::printInfo();
//    }
//};
//
//class Rhombus : public Parallelogram {
//public:
//    Rhombus(double side, double angle)
//        : Parallelogram(side, side, angle) {
//    }
//
//    void printInfo() const override {
//        std::cout << "Ромб:\n";
//        Parallelogram::printInfo();
//    }
//};
//
//int main() {
//    setlocale(LC_ALL, "Russian");
//    Figure figure;
//    figure.printInfo();
//
//    Triangle triangle(10, 20, 30, 50, 60, 70);
//    triangle.printInfo();
//
//    RightTriangle rightTriangle(10, 20);
//    rightTriangle.printInfo();
//
//    IsoscelesTriangle isoscelesTriangle(10, 20, 50);
//    isoscelesTriangle.printInfo();
//
//    EquilateralTriangle equilateralTriangle(30);
//    equilateralTriangle.printInfo();
//
//    Quadrilateral quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
//    quadrilateral.printInfo();
//
//    Rectangle rectangle(10, 20);
//    rectangle.printInfo();
//
//    Square square(20);
//    square.printInfo();
//
//    Parallelogram parallelogram(20, 30, 30);
//    parallelogram.printInfo();
//
//    Rhombus rhombus(30, 30);
//    rhombus.printInfo();
//
//    return 0;
//}