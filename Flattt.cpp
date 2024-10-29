#include <iostream>
using namespace std;

class Flat {
public:
	Flat(int s, int price) : s(s), price(price) {}
	bool operator ==(const Flat& other) {
		return s == other.s;
	}

	bool operator !=(const Flat& other) {
		return s != other.s;
	}
	Flat& operator=(const Flat& other) {
		//динамического поля нет, то сделаем вид что есть
		if (this != &other) {
			/*if(ptr != nullptr){
				delete[] ptr;
			}*/
			s = other.s;
			price = other.price;
		}
		return *this;
	}
	bool operator <(const Flat& other) {
		return price < other.price;
	}

	bool operator >(const Flat& other) {
		return price > other.price;
	}

	bool operator <=(const Flat& other) const {
		return price <= other.price;
	}

	bool operator >=(const Flat& other) const {
		return price >= other.price;
	}
private:
	int s;
	int price;
};
int main()
{

}