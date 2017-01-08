/**
 * Copyright (C) 2013-2017 Feng Lee <feng@emqtt.io>
 *
 * This library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef CONNFORM_H
#define CONNFORM_H

#include <QWidget>
#include "mqttform.h"

namespace Ui {
class ConnForm;
}

class ConnForm : public MqttForm
{
    Q_OBJECT
    
public:
    explicit ConnForm(QWidget *parent = 0);
    ~ConnForm();

public slots:
    void updateUiStatus();

private slots:
    void onConnect();
    void onDisconnect();

private:
    Ui::ConnForm *ui;
};

#endif // CONNFORM_H
