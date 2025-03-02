#include "falamangole.h"
#include "./ui_falamangole.h"
#include "QMessageBox"
#include "QDebug"

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
    this->LineEditArg1length = new char[arg1.length()];
    this->LineEditArg1length = arg1.toStdString().c_str();
    validateArg1ndArg2();
}

void falamangole::on_comboBox_currentTextChanged(const QString &arg1)
{
    this->CombBoxArg2length = arg1.toStdString().c_str();
    validateArg1ndArg2();
}

void falamangole:: validateArg1ndArg2(){
    qDebug() << (this->LineEditArg1length);
    qDebug() << sizeof(this->CombBoxArg2length);

}



