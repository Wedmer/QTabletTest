/*

   Qt tablet event tester

   Copyright (C) 2014 Calle Laakkonen

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software Foundation,
   Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
*/
#ifndef TABLETTESTER_H
#define TABLETTESTER_H

#include <QMainWindow>

class EventLogDialog;

class TabletTester : public QMainWindow
{
	Q_OBJECT

public:
	TabletTester(QWidget *parent = 0);
	~TabletTester();

private:
	EventLogDialog *_eventlog;
};

#endif // TABLETTESTER_H
