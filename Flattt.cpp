#include <iostream>
using namespace std;

class Flat {
public:
	Flat(int s) : s(s) {}
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
		}
		return *this;
	}
	bool operator <(const Flat& other) {
		return s < other.s;
	}

	bool operator >(const Flat& other) {
		return s > other.s;
	}

	bool operator <=(const Flat& other) const {
		return s <= other.s;
	}

	bool operator >=(const Flat& other) const {
		return s >= other.s;
	}
private:
	int s;
};
int main()
{

}