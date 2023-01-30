#ifndef CHECKQUANTITY_H
#define CHECKQUANTITY_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class checkQuantity; }
QT_END_NAMESPACE

class checkQuantity : public QMainWindow
{
    Q_OBJECT

public:
    checkQuantity(QWidget *parent = nullptr);
    ~checkQuantity();

    void insertTableItems(void);

private:
    Ui::checkQuantity *ui;
};
#endif // CHECKQUANTITY_H
