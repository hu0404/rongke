#ifndef PRODUCTIONREPORT_H
#define PRODUCTIONREPORT_H

#include <QWidget>

namespace Ui {
class productionreport;
}

class productionreport : public QWidget
{
    Q_OBJECT

public:
    explicit productionreport(QWidget *parent = nullptr);
    ~productionreport();
    void insertTableItems(void);

private:
    Ui::productionreport *ui;
};

#endif // PRODUCTIONREPORT_H
