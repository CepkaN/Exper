//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<unordered_map>
//#include<random>
//#include<map>
//
//struct S {
//	mutable int x = 1;
//	int& r = x;
//	void f(int y)const {
//		r = y;
//		std::cout << "hh\n";
//	}
//	void f(){
//		std::cout << "ff\n";
//	}
//	std::weak_ordering operator<=>(const S& s)const {
//		return std::weak_ordering::equivalent;
//	}
//};
//
//std::vector<int> compress(std::vector<int> a) {
//	std::vector<int> b = a;
//
//	std::sort(b.begin(), b.end());
//	b.erase(std::unique(b.begin(), b.end()), b.end());
//
//	for (int& x : a)
//		x = int(std::lower_bound(b.begin(), b.end(), x) - b.begin());
//
//	return a;
//}
//struct Greater {
//	bool operator()(int x, int y) {
//		return x > y;
//	}
//};
//
//struct Singleton{
//private:
//	Singleton(){}
//	static Singleton* ptr;
//
//	Singleton(const Singleton&) = delete;
//	Singleton& operator=(const Singleton) = delete;
//public:
//	static Singleton& getObject() {
//		if (ptr == nullptr) {
//			ptr = new Singleton();
//		}
//		return *ptr;
//	}
//
//};
//
//std::mt19937 rnd1(483);
//
//class BigInteger {};
//BigInteger operator""_bi(unsigned long long x) {
//	return BigInteger();
//}
//
//
//Singleton* Singleton::ptr = nullptr;
//
//
//template<int N>
//struct Fibonacci {
//	static const int value = Fibonacci<N - 1>::value + Fibonacci<N - 2>::value;
//};
//template<>
//struct Fibonacci<1>{
//	static const int value = 1;
//};
//template<>
//struct Fibonacci < 0 > {
//	static const int value = 0;
//};
//
//struct Foo
//{
//	long long   i:8;
//	float f;
//	char  c:1;
//};
//struct alignas(alignof(long double)) Foo2
//{
//	// put your definition here
//};
//struct Empty {};
//
//struct alignas(64) Empty64 {};
//
//
//void ff(int& g) {
//	std::cout << "odin\n";
//}
//void ff(int&& g) {
//	std::cout << "dva\n";
//}
//template<typename T>
//void sw(T& x, T& y) {
//	T tmp = std::move(x);
//	x = std::move(y);
//	y = std::move(tmp);
//}
//template<typename T>
//void test() {
//	std::cout << requires(T a, T b) { a + b; } << '\n';
//}
//
//int main() {
//
//	//BigInteger bi = 1_bi;
//	//
//
//
//	//const S s;
//
//	//s.f(2);
//	//std::cout << s.x;
//
//	////Singleton& s = Singleton::getObject();
//	//std::cout << rnd1() << '\n' << rnd1() % 1000 << '\n';
//	//std::uniform_int_distribution<int> distrib(1, 10);
//	//std::cout << distrib(rnd1) << '\n';
//
//	//std::vector<int>v{ 23,5,23,34 };
//	//std::sort(v.begin(), v.end(), Greater());
//	//for (auto& t : v) {
//	//	std::cout << t << ' ';
//	//}std::cout << '\n';
//
//	//std::cout << Fibonacci<20>::value;
//	
//	int d=6;
//	int&& t = 7;
//	ff(d);
//	ff(3);
//	ff(std::move(t));
//	int a = 0, b = 10;
//	std::cout << a << ' ' << b << '\n';
//
//	sw<int>(a, b);
//	std::cout << a << ' ' << b<< '\n';
//
//	decltype(throw 1)* p = &d;
//	std::cout << *&p << '\n';
//	std::cout << '\n';
//
//	test<int>();
//	test<std::string>();
//	test<void>();
//	test<std::vector<int>>();
//
//	std::cout << '\n';
//	auto fibonacci = []<typename T>(int n)->T{
//		return n > 2 ? fibonacci(n - 1) + fibonacci(n - 2) : 1;
//		};
//	std::cout << fibonacci(10);
//
//	const int x=2; { int x[x]; }
//
//	return 0;
//}
//
//
