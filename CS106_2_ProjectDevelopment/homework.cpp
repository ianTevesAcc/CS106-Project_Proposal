#include "homework.h"
#include <QDebug>

// constructor
homework::homework(QObject *parent, const QString &descr)
        :QObject(parent), m_descr((descr))
{
    qDebug()<< "homework object contructed";
}

//destructor
homework::~homework()
{
    qDebug()<< "homework object" << m_descr << "is dying (memory will be free)";
}

void homework::print_info() const
{
    qDebug()<< "homework..."<< m_descr;
}
