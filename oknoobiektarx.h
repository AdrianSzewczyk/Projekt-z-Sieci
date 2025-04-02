#ifndef OKNOOBIEKTARX_H
#define OKNOOBIEKTARX_H

#include <QDialog>
#include "obiektarx.h"
#include "warstwauslug.h"
#include <QPropertyAnimation>

namespace Ui {
class OknoObiektARX;
}
class OknoObiektARX : public QDialog
{
    Q_OBJECT
public:
    explicit OknoObiektARX(QWidget *parent = nullptr);
    ~OknoObiektARX();
    void setWarstwaUslug(WarstwaUslug* w){usluga=w;};
    void UstawienieARX();
    void UstawieniaDomyslneWidgetow();
private slots:
    void on_ZatwierdzenieUstawien_accepted();
    void on_Zaklocenie_checkStateChanged(const Qt::CheckState &arg1);
private:
    Ui::OknoObiektARX *ui;
    ObiektARX *obiekt;
    WarstwaUslug *usluga;
    std::mt19937 generator;
};

#endif // OKNOOBIEKTARX_H

