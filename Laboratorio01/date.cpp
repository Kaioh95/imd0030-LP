#include "date.h"

bool operator == (const date& d1, const date& d2){
//check for equality
	if(!d1.valid()) { return false; };
	if(!d2.valid()) { return false; };
	if ( (d1.day()==d2.day())
		&& (d1.month()==d2.month())
		&& (d1.year()==d2.year())) {
		return true;
	};
	return false;
}

