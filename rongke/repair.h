#ifndef REPAIR_H
#define REPAIR_H

#include <QWidget>

namespace Ui {
class repair;
}

class repair : public QWidget
{
    Q_OBJECT

public:
    explicit repair(QWidget *parent = nullptr);
    ~repair();

private:
    Ui::repair *ui;
};

#endif // REPAIR_H
