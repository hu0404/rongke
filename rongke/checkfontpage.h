#ifndef CHECKFONTPAGE_H
#define CHECKFONTPAGE_H

#include <QWidget>

namespace Ui {
class checkfontpage;
}

class checkfontpage : public QWidget
{
    Q_OBJECT

public:
    explicit checkfontpage(QWidget *parent = nullptr);
    ~checkfontpage();

private:
    Ui::checkfontpage *ui;
};

#endif // CHECKFONTPAGE_H
