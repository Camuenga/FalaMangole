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
    arg1length = arg1.length();
    validateArg1ndArg2();
}

void falamangole::on_comboBox_currentTextChanged(const QString &arg1)
{
   arg2length = arg1.length();
    validateArg1ndArg2();
}

void falamangole:: validateArg1ndArg2(){
    qDebug() << arg1length;
    qDebug() << arg2length;

    if(arg1length && arg2length){
        QMessageBox MBoxW;
        MBoxW.warning(this,"Warning","Don't cant makes SQL request of two fiedls");
    }
    if(arg1length == 0 && arg2length == 1){
        qDebug() << "makes SQL request of two fiedls";
    }
    if(arg1length == 1 && arg2length == 0){
        qDebug() << "makes SQL request of two fiedls";
    }
}
