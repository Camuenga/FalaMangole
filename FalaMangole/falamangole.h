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

private:
    const char *LineEditArg1length, *CombBoxArg2length;

public:
    falamangole(QWidget *parent = nullptr);
    ~falamangole();

private slots:
    void on_lineEdit_textChanged(const QString &arg1);
    void on_comboBox_currentTextChanged(const QString &arg1);
    void validateArg1ndArg2();

private:
    Ui::falamangole *ui;
};
#endif // FALAMANGOLE_H
