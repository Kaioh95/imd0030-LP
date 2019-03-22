#ifndef _DATE_H_
#define _DATE_H_

#include <iostream>

using namespace std;

class date{
private:
	int year_;
	int month_;
	int day_;

public:
	date();
	date(const int& d, const int& m, const int& y);

	bool valid(void) const;

	int getday() const;
	int getmonth() const;
	int getyear() const;

	void set_day (const int& day);
	void set_month (const int& month);
	void set_year(const int& year);

	friend istream& operator>>(istream& is, date& d);
	friend ostream& operator<<(ostream& os, const date& d);

	int convert_date_to_days();
	int operator- (date d);
};


#endif