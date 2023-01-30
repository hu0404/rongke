#ifndef FONTPAGE_H
#define FONTPAGE_H

#include <QWidget>

namespace Ui {
class fontpage;
}

class fontpage : public QWidget
{
    Q_OBJECT

public:
    explicit fontpage(QWidget *parent = nullptr);
    ~fontpage();

private:
    Ui::fontpage *ui;
};

#endif // FONTPAGE_H
