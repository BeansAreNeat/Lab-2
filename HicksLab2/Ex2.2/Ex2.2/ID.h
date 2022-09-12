#pragma once
// File ID.h
#ifndef ID_H
#define ID_H
#include<iostream>

namespace idclass1
{
	class ID
	{
	public:
		ID();
		ID(int, int, int);
		void display();
	private:
		int left;
		int middle;
		int right;
	};
} // end of idclass1 namespace
#endif