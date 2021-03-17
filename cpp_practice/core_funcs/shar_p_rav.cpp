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
	Item *item = new Item;
	std::shared_ptr<Item> ptr1(item);
	{
		std::shared_ptr<Item> ptr2(ptr1);
		std::cout << "Killing one shared pointer\n";
	}

	std::cout << "Killing another pointer\n";

	return 0;
}

