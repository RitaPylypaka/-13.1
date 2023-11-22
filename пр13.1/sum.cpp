#include <math.h>
#include "dod.h"
#include "sum.h"
#include "var.h" // підключили зовнішні оголошення змінних
using namespace nsDod;
using namespace nsVar;
void nsSum::sum() {
	n = 1;
	a = x * x * x / 6;
	s = a;
	do {
		n++;
		dod(); // виклик процедури обчислення доданку
		s += a;
		s = PI / 2 - (x + s);
	} while (fabs(a) >= e);
}