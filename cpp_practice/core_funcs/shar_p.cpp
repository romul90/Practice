#include <iostream>
#include <memory>

class Foo
{
public:
	void doSomething()
	{
		std::cout << "I am doing something!" << std::endl;
	}
};

class Bar
{
private:
	std::shared_ptr<Foo> pFoo;
public:
	Bar()
	{
		pFoo = std::shared_ptr<Foo>(new Foo());
	}
	
	std::shared_ptr<Foo> getFoo()
	{
		return pFoo;
	}
};

int main()
{
	Bar* pBar = new Bar();

	std::shared_ptr<Foo> pFoo = pBar->getFoo();

	pFoo->doSomething();

	delete pBar;

	pFoo->doSomething();

	return 0;
}

