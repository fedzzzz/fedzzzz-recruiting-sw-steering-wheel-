#ifndef STATEOFSENSORS_H
#define STATEOFSENSORS_H

#include <QObject>
#include <QDebug>
#include "data.h"

class StateOfSensors : public QObject
{
    Q_OBJECT

    //da aggiungere ancora sensori


public:
    explicit StateOfSensors(QObject *parent = nullptr);



signals:

};

#endif // STATEOFSENSORS_H
