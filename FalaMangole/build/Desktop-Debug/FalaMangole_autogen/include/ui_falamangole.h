/********************************************************************************
** Form generated from reading UI file 'falamangole.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FALAMANGOLE_H
#define UI_FALAMANGOLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_falamangole
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QComboBox *comboBox;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *falamangole)
    {
        if (falamangole->objectName().isEmpty())
            falamangole->setObjectName("falamangole");
        falamangole->resize(300, 350);
        falamangole->setMinimumSize(QSize(300, 350));
        falamangole->setMaximumSize(QSize(300, 350));
        centralwidget = new QWidget(falamangole);
        centralwidget->setObjectName("centralwidget");
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(20, 40, 251, 61));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(horizontalLayoutWidget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);

        comboBox = new QComboBox(horizontalLayoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        horizontalLayout->addWidget(comboBox);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 160, 61, 41));
        QFont font;
        font.setPointSize(23);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("QLabel{color: rgb(224, 27, 36);}\n"
""));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(110, 160, 111, 41));
        QFont font1;
        font1.setPointSize(24);
        label_2->setFont(font1);
        label_2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{color: rgb(246, 211, 45)}"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(220, 160, 21, 41));
        QFont font2;
        font2.setPointSize(25);
        font2.setBold(true);
        label->setFont(font2);
        label->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        label->setStyleSheet(QString::fromUtf8("QLabel{color: rgb(246, 211, 45)}"));
        falamangole->setCentralWidget(centralwidget);
        menubar = new QMenuBar(falamangole);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 300, 20));
        falamangole->setMenuBar(menubar);
        statusbar = new QStatusBar(falamangole);
        statusbar->setObjectName("statusbar");
        falamangole->setStatusBar(statusbar);

        retranslateUi(falamangole);

        QMetaObject::connectSlotsByName(falamangole);
    } // setupUi

    void retranslateUi(QMainWindow *falamangole)
    {
        falamangole->setWindowTitle(QCoreApplication::translate("falamangole", "falamangole", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("falamangole", "digite cal\303\243o", nullptr));
        comboBox->setItemText(0, QString());
        comboBox->setItemText(1, QCoreApplication::translate("falamangole", "A", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("falamangole", "B", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("falamangole", "C", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("falamangole", "D", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("falamangole", "E", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("falamangole", "F", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("falamangole", "G", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("falamangole", "H", nullptr));
        comboBox->setItemText(9, QCoreApplication::translate("falamangole", "I", nullptr));
        comboBox->setItemText(10, QCoreApplication::translate("falamangole", "J", nullptr));
        comboBox->setItemText(11, QCoreApplication::translate("falamangole", "K", nullptr));
        comboBox->setItemText(12, QCoreApplication::translate("falamangole", "L", nullptr));
        comboBox->setItemText(13, QCoreApplication::translate("falamangole", "M", nullptr));
        comboBox->setItemText(14, QCoreApplication::translate("falamangole", "N", nullptr));
        comboBox->setItemText(15, QCoreApplication::translate("falamangole", "O", nullptr));
        comboBox->setItemText(16, QCoreApplication::translate("falamangole", "P", nullptr));
        comboBox->setItemText(17, QCoreApplication::translate("falamangole", "Q", nullptr));
        comboBox->setItemText(18, QCoreApplication::translate("falamangole", "R", nullptr));
        comboBox->setItemText(19, QCoreApplication::translate("falamangole", "S", nullptr));
        comboBox->setItemText(20, QCoreApplication::translate("falamangole", "T", nullptr));
        comboBox->setItemText(21, QCoreApplication::translate("falamangole", "U", nullptr));
        comboBox->setItemText(22, QCoreApplication::translate("falamangole", "V", nullptr));
        comboBox->setItemText(23, QCoreApplication::translate("falamangole", "W", nullptr));
        comboBox->setItemText(24, QCoreApplication::translate("falamangole", "Y", nullptr));
        comboBox->setItemText(25, QCoreApplication::translate("falamangole", "Z", nullptr));

        label_3->setText(QCoreApplication::translate("falamangole", "Fala", nullptr));
        label_2->setText(QCoreApplication::translate("falamangole", "Mangol", nullptr));
        label->setText(QCoreApplication::translate("falamangole", "\303\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class falamangole: public Ui_falamangole {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FALAMANGOLE_H
