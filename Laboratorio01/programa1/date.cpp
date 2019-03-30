#include "date.h"

date::date(const int& d, const int& m, const int& y){
	day_ = d;
	month_ = m;
	year_ = y;
};

date::date(){ year_= 0; month_ = 0; day_ = 0;};

int date::getday() const {return day_;};
int date::getmonth() const {return month_;};
int date::getyear() const {return year_;};

void date::set_day(const int& day) {date::day_ = day;};
void date::set_month(const int& month) {date::month_ = month;};
void date::set_year(const int& year) {date::year_ = year;};

bool date::valid() const{
	if(year_ < 0)
		return false;
	if(month_>12 || month_<1) 
		return false;
	if(day_ > 31 || day_ < 1) 
		return false;

	if(day_ > 31 && (month_== 2 || month_== 4 || month_== 6 || month_== 9 || month_==11))
		return false;

	if (day_==30 && month_==2) 
		return false;

	if (year_< 2000){
		if((day_==29 && month_==2) && !((year_-1900)%4 == 0)) 
			return false;	
	};

	if (year_>2000){
		if((day_==29 && month_==2) && !((year_-2000)%4 == 0)) 
			return false;
	};

	return true;
};


istream& operator>>(istream& is, date& d){
	is>>d.day_>>d.month_>>d.year_;
	return is;
}
ostream& operator<<(ostream& os, const date& d){
	os<<" "<<d.getday()<<"/"<<d.getmonth()<<"/"<<d.getyear()<<" ";
	return os;
}

//Função que transforma a data de em dias, desde o ano 0.
int date::convert_date_to_days(){
	int number_of_days = 0;
	number_of_days += day_;
	number_of_days += year_*365;

	if(month_ == 2)
		number_of_days += 31;
	else if(month_ == 3)
		number_of_days += 59;
	else if(month_ == 4)
		number_of_days += 90;
	else if(month_ == 5)
		number_of_days += 120;
	else if(month_ == 6)
		number_of_days += 151;
	else if(month_ == 7)
		number_of_days += 181;
	else if(month_ == 8)
		number_of_days += 212;
	else if(month_ == 9)
		number_of_days += 243;
	else if(month_ == 10)
		number_of_days += 273;
	else if(month_ == 11)
		number_of_days += 304;
	else if(month_ == 12)
		number_of_days += 334;

	if (year_< 2000){
		if(month_==2 && (year_-1900)%4 == 0)
			number_of_days += 1;	
	}

	if (year_>2000){
		if(month_==2 && (year_-2000)%4 == 0)
			number_of_days += 1;
	}

	return number_of_days;
}

//Sobrecarga do operador de subtração, para cálculo posterior.
int date::operator- (date d){
	int days = convert_date_to_days() - d.convert_date_to_days();
	return days;
}