#ifndef __Table_H__
#define __Table_H__

enum Status{
	EMPTY = 0,
	SEAT,
	SEATING
};

class Table{
	private:
		Status seat[2][3];
	public:
		void setSeat(int x, int y, Status nowStatus);
		void addUser(int number);  //This function in Cafeteria::addUser
		Status tableLayout();
};

#endif
