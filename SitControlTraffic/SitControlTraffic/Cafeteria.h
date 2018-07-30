#ifndef __CAFETERIA_H__
#define __CAFETERIA_H__

#include"Table.h"

#define WIDTH 2
#define HEIGHT 2

class Table;

class Cafeteria{
	private:
		Table room[WIDTH][HEIGHT];
	public:
		void updateStatus(); //Link with OpenCV
		void addUser(int number);
		void findTable(int number);
};

#endif
