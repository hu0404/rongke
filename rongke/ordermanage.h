#ifndef ORDERMANAGE_H
#define ORDERMANAGE_H

#include <QWidget>

namespace Ui {
class ordermanage;
}

class ordermanage : public QWidget
{
    Q_OBJECT

public:
    explicit ordermanage(QWidget *parent = nullptr);
    ~ordermanage();
    void insertTableItems(void);

private:
    Ui::ordermanage *ui;
};

#endif // ORDERMANAGE_H
