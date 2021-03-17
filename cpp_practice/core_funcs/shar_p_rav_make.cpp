#include <memory>
#include <iostream>

class Item
{
public:
	Item() {std::cout << "Item acquired\n"; }
	~Item() {std::cout << "Item destroyed\n"; }
};

int main()
{
	auto ptr1 = std::make_shared<Item>();
	{
		auto ptr2 = ptr1;
		std::cout << "Killing one shared pointer\n";
	}

	std::cout << "Killing another pointer\n";

	return 0;
}

