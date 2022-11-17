#ifndef HOMEWORK_H
#define HOMEWORK_H

#include <QObject>

class homework : public QObject
{
    Q_OBJECT
public:
    explicit homework(QObject *parent = nullptr, const QString &descr = "");
    ~homework(); //destructor:  Called when the object dies
    void print_info()const;

//signals:
private:
    QString m_descr;

};

#endif // HOMEWORK_H
