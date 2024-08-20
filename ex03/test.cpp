#include <iostream>

class Number
{
public:
    Number(int value) : value(value) {}

    void setValue(int newValue)
    {
        value = newValue;
    }

    int getValue() const
    {
        return value;
    }

private:
    int value;
};

class Holder
{
public:
    Holder(Number number) : number(number) {}

    void show() const
    {
        std::cout << "Number: " << number.getValue() << std::endl;
    }

private:
    Number &number; // Copy of Number
};

int main()
{
    Number num(42);
    Holder holder(num);

    holder.show(); // Output: Number: 42

    num.setValue(99);
    holder.show(); // Output: Number: 42 (No change)

    return 0;
}
