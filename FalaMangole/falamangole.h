#ifndef FALAMANGOLE_H
#define FALAMANGOLE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class falamangole;
}
QT_END_NAMESPACE

class falamangole : public QMainWindow
{
    Q_OBJECT

public:
    falamangole(QWidget *parent = nullptr);
    ~falamangole();

private:
    Ui::falamangole *ui;
};
#endif // FALAMANGOLE_H
