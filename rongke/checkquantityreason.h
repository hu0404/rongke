#ifndef CHECKQUANTITYREASON_H
#define CHECKQUANTITYREASON_H

#include <QWidget>

namespace Ui {
class checkquantityreason;
}

class checkquantityreason : public QWidget
{
    Q_OBJECT

public:
    explicit checkquantityreason(QWidget *parent = nullptr);
    ~checkquantityreason();
    void insertTableItems(void);

private:
    Ui::checkquantityreason *ui;
};

#endif // CHECKQUANTITYREASON_H
