#ifndef PRODUCTIONSOP_H
#define PRODUCTIONSOP_H

#include <QWidget>

namespace Ui {
class productionsop;
}

class productionsop : public QWidget
{
    Q_OBJECT

public:
    explicit productionsop(QWidget *parent = nullptr);
    ~productionsop();
    void insertTableItems(void);


private:
    Ui::productionsop *ui;
};

#endif // PRODUCTIONSOP_H
