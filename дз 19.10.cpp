#include <iostream>
#include <string>

class Human
{
    //в этом классе представлены поля и методы, характерные для всех людей
public:

    Human() {}
    ~Human() {}

    void SetAge(int age) { age_ = age; };
    int GetAge()const { return age_; };
    void SetHeigh(int heigh) { heigh_ = heigh; };
    double GetHeigh()const { return heigh_; };
    void SetName(int name) { name_ = name; };
    std::string GetName()const { return name_; };

    void Talk()
    {
        std::cout << "blablabla" << "\n";
    }

private:
    int age_;
    std::string name_;
    double heigh_;

};

class Zhitel : public Human
{
    //тут представлены поля и методы, которые характерны только для жителей данного дома
public:



    void SetNumberOfFlat(int NumberOfFlat) { NumberOfFlat_; }
    int GetNumberOfFlat()const { return NumberOfFlat_; }

    void OpenTheDoor()
    {
        std::cout << "Door is open" << "\n";
    };

    void CloseTheDoor()
    {
        std::cout << "Door is close" << "\n";
    };

private:
    int NumberOfFlat_;
};

class TheMain : public Human
{
    //в этом классе представлен метод, который доступен только для упраляющего дома
public:
    //
    void TheTest() { std::cout << "проведён опрос среди жиетелей" << "\n"; }
};

int main()
{
    Human Vladislave;
    Vladislave.Talk();

    Zhitel ZhivoiVladislave;
    ZhivoiVladislave.Talk();
    ZhivoiVladislave.OpenTheDoor();

    TheMain KrytoiVladislave;
    KrytoiVladislave.Talk();
    KrytoiVladislave.TheTest();
}

