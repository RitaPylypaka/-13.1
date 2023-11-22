#include "dod.h"
#include "var.h" // підключили зовнішні оголошення змінних
using namespace nsVar;
void nsDod::dod() {
	a *= (x * (2 * n - 1) * (2 * n - 1)) / ((2 * n + 1) * (2 * n - 2));
}