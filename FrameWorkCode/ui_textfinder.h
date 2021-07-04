/********************************************************************************
** Form generated from reading UI file 'textfinder.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTFINDER_H
#define UI_TEXTFINDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TextFinder
{
public:
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *findLabel;
    QLineEdit *findLineEdit;
    QLabel *replaceLabel;
    QLineEdit *replaceLineEdit;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *findPreviousButton;
    QPushButton *findNextButton;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *replaceButton;
    QPushButton *replaceAllButton;

    void setupUi(QDialog *TextFinder)
    {
        if (TextFinder->objectName().isEmpty())
            TextFinder->setObjectName(QString::fromUtf8("TextFinder"));
        TextFinder->resize(377, 189);
        QFont font;
        font.setPointSize(11);
        TextFinder->setFont(font);
        TextFinder->setSizeGripEnabled(false);
        horizontalLayout_3 = new QHBoxLayout(TextFinder);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setFormAlignment(Qt::AlignCenter);
        formLayout->setHorizontalSpacing(10);
        formLayout->setVerticalSpacing(12);
        formLayout->setContentsMargins(10, 10, 10, 10);
        findLabel = new QLabel(TextFinder);
        findLabel->setObjectName(QString::fromUtf8("findLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, findLabel);

        findLineEdit = new QLineEdit(TextFinder);
        findLineEdit->setObjectName(QString::fromUtf8("findLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, findLineEdit);

        replaceLabel = new QLabel(TextFinder);
        replaceLabel->setObjectName(QString::fromUtf8("replaceLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, replaceLabel);

        replaceLineEdit = new QLineEdit(TextFinder);
        replaceLineEdit->setObjectName(QString::fromUtf8("replaceLineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, replaceLineEdit);


        verticalLayout->addLayout(formLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(10, 3, 10, 2);
        findPreviousButton = new QPushButton(TextFinder);
        findPreviousButton->setObjectName(QString::fromUtf8("findPreviousButton"));

        horizontalLayout->addWidget(findPreviousButton);

        findNextButton = new QPushButton(TextFinder);
        findNextButton->setObjectName(QString::fromUtf8("findNextButton"));

        horizontalLayout->addWidget(findNextButton);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(10, 2, 10, 3);
        replaceButton = new QPushButton(TextFinder);
        replaceButton->setObjectName(QString::fromUtf8("replaceButton"));
        replaceButton->setFont(font);

        horizontalLayout_2->addWidget(replaceButton);

        replaceAllButton = new QPushButton(TextFinder);
        replaceAllButton->setObjectName(QString::fromUtf8("replaceAllButton"));
        replaceAllButton->setFont(font);

        horizontalLayout_2->addWidget(replaceAllButton);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);


        horizontalLayout_3->addLayout(verticalLayout);


        retranslateUi(TextFinder);

        QMetaObject::connectSlotsByName(TextFinder);
    } // setupUi

    void retranslateUi(QDialog *TextFinder)
    {
        TextFinder->setWindowTitle(QApplication::translate("TextFinder", "Find and Replace", nullptr));
        findLabel->setText(QApplication::translate("TextFinder", "Find:", nullptr));
        replaceLabel->setText(QApplication::translate("TextFinder", "Replace:", nullptr));
        findPreviousButton->setText(QApplication::translate("TextFinder", "Find Previous", nullptr));
        findNextButton->setText(QApplication::translate("TextFinder", "Find Next", nullptr));
        replaceButton->setText(QApplication::translate("TextFinder", "Replace", nullptr));
        replaceAllButton->setText(QApplication::translate("TextFinder", "Replace All", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TextFinder: public Ui_TextFinder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTFINDER_H