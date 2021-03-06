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

#include "main.h"
#include "tablettester.h"

#include <QDebug>

TabletTesterApp::TabletTesterApp(int &argc, char **argv)
	: QApplication(argc, argv)
{
}

bool TabletTesterApp::event(QEvent *e) {
	if(e->type() == QEvent::TabletEnterProximity || e->type() == QEvent::TabletLeaveProximity) {
		QTabletEvent *te = static_cast<QTabletEvent*>(e);
		qDebug() << (e->type() == QEvent::TabletEnterProximity ? "near" : "leave") << te->pointerType();
		emit tabletProximity(e->type() == QEvent::TabletEnterProximity, te->pointerType());

		return true;
	}
	return QApplication::event(e);
}

int main(int argc, char *argv[])
{
	TabletTesterApp a(argc, argv);
	TabletTester w;
	w.show();

	return a.exec();
}
