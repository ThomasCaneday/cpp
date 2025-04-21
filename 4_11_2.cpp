// For each declaration, if the declaration is not a definition, write a definition for it
// For each declaration, if the declaration is a definition, write a declaration for it that
// is not also a definition


#include <complex>
#include <string>

extern char ch;
extern std::string s;
extern int count;
const extern double pi;
int error_number = 1;

const extern char* name;
const extern char* season[];

struct Date;
extern int day;
double sqrt(double) { return 0; }
template<class T> T abs(T a);

typedef std::complex<class Tp> Point;
struct User { int i; } user;
enum Beer { };
namespace NS {};