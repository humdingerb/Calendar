/*
 * Copyright 2017 Akshay Agarawl <agarwal.akshay.akshay8@gmail.com>
 * All rights reserved. Distributed under the terms of the MIT license.
 */

#ifndef PREFERENCES_H
#define PREFERENCES_H


#include <string>

#include <File.h>
#include <Message.h>
#include <Path.h>


class Preferences {
public:
	void			Load(const char* filename);
	void			Save(const char* filename);

	Preferences&	operator =(Preferences p);

	BPath			fSettingsPath;

	int32			fStartOfWeekOffset;
	bool			fHeaderVisible;
};


#endif