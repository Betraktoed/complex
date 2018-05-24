#include <iostream>
using namespace std;

class complex_t{
private:
	float a;
	float b;
public:
	complex_t(float A,float B){a = A;b = B;};
	complex_t(){a = 0;b = 0;};
	complex_t(const complex_t& ct);
	float geta(){return a;};
	float getb(){return b;};
	complex_t operator*( const complex_t& obj);
	complex_t operator/( const complex_t& obj);
	void operator+=(const complex_t& obj);
	void operator-=(const complex_t& obj);
	void operator*=(const complex_t& obj);
	void operator/=(const complex_t& obj);
	void operator=(const complex_t& obj);
	bool operator==(const complex_t& obj);
	std::ostream& operator<<(std::ostream &output);
	void operator>>(std::istream &input);
};

