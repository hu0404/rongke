#ifndef MAINTAINANCE_H
#define MAINTAINANCE_H

#include <QWidget>

namespace Ui {
class maintainance;
}

class maintainance : public QWidget
{
    Q_OBJECT

public:
    explicit maintainance(QWidget *parent = nullptr);
    ~maintainance();

private:
    Ui::maintainance *ui;
};

#endif // MAINTAINANCE_H
