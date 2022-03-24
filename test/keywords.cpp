// module
module;

#include <tuple>
#include <typeinfo>

export module A;
import B;
export import C;

// namespace
namespace ns {
}

// globals/modifiers
static constexpr int v1 = 1;
inline int v2 = 2;
extern int v3;
thread_local int v4;
constinit int v5 = 5;
const volatile register int v6 = 6;

consteval auto id(auto x) { return x; }

// types
class A {
public:
    explicit A();
    void Test1() const noexcept {}
    auto Test2() const noexcept -> void { }
    virtual int Foo() { return 41; }

    auto& operator=(const A&) = default;
protected:
private:
    friend class G;
    mutable int x;
};

struct alignas(8) B final : public virtual A {
    auto GetAlign() { return alignof(decltype(*this)); }
    auto GetSize() { return sizeof(decltype(*this)); }
    int Foo() override { return 42; }
};

enum class C {};
union D {};

typedef C E;
using F = D;

// template
template <typename T>
class H {
    decltype(auto) Test() {
        return 0;
    }
};

// control flows
int ControlFlows() {
Start:
    if (1) {} else {}
    
    while(true) {
        if (true) continue; else break;
    }
    
    for (;;) { goto Start; }

    switch (false) {
    case 1: break;
    default: break;
    }

    return 0;
}

// cast
class Base {
    virtual void Foo();
};
class Derived : public Base {

};
void Cast() {
    const int x = static_cast<int>(0.0);
    int* p1     = const_cast<int*>(&x);
    float* p2   = reinterpret_cast<float*>(p1);
    Base* p3    = new Derived; 
    Derived* p4 = dynamic_cast<Derived*>(p3);
}

// built-in types
void BuiltinType() {
    using TestType = 
        std::tuple<char, char8_t, char16_t, char32_t, wchar_t, 
                   float, double, long double,
                   bool, short, int, long, signed long long, unsigned short,
                   void*, decltype(nullptr)>;
}

// exceptions
void Exception() {
    try {
        throw 0;
    } catch (int x) {
    
    }
}

// new/delete
void NewDelete() {
    delete new int;
    delete[] new int[10];
}

// misc
void Misc() {
    auto& tid = typeid(A);
    asm ("");
}

// concept
// TODO

// coroutine
// TODO
