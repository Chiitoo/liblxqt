/*
 * Copyright (C) 2016  P.L. Lucas
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/
#ifndef __VirtualBackend_H__
#define __VirtualBackend_H__

#include <QObject>
#include "lxqtglobals.h"

namespace LXQt
{

class LXQT_API VirtualBackEnd:public QObject
{
Q_OBJECT

public:    
    VirtualBackEnd(QObject *parent = 0);
   
    virtual bool isBacklightAvailable();
    virtual bool isBacklightOff();
    virtual void setBacklight(int value);
    virtual int getBacklight();
    virtual int getMaxBacklight();
    
signals:
    void backlightChanged(int value);
};

} // namespace LXQt

#endif  // __VirtualBackend_H__