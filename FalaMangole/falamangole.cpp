#include "falamangole.h"
#include "./ui_falamangole.h"

falamangole::falamangole(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::falamangole)
{
    ui->setupUi(this);
}

falamangole::~falamangole()
{
    delete ui;
}

void falamangole::on_lineEdit_textChanged(const QString &arg1)
{

}

