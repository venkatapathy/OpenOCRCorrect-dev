/********************************************************************************
** Form generated from reading UI file 'commentsview.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMENTSVIEW_H
#define UI_COMMENTSVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CommentsView
{
public:
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *h_words;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QLineEdit *h_characters;
    QSpacerItem *horizontalSpacer_2;
    QFrame *line_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_6;
    QFrame *line;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_7;
    QLineEdit *acc_word;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_8;
    QLineEdit *acc_character;
    QLabel *label_3;
    QTextBrowser *commentTextBrowser;

    void setupUi(QDialog *CommentsView)
    {
        if (CommentsView->objectName().isEmpty())
            CommentsView->setObjectName(QString::fromUtf8("CommentsView"));
        CommentsView->resize(479, 377);
        horizontalLayout_4 = new QHBoxLayout(CommentsView);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(CommentsView);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_3->addWidget(label);

        line_3 = new QFrame(CommentsView);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(CommentsView);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        h_words = new QLineEdit(CommentsView);
        h_words->setObjectName(QString::fromUtf8("h_words"));
        h_words->setDragEnabled(true);
        h_words->setReadOnly(true);

        verticalLayout->addWidget(h_words);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_4 = new QLabel(CommentsView);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);

        h_characters = new QLineEdit(CommentsView);
        h_characters->setObjectName(QString::fromUtf8("h_characters"));
        h_characters->setDragEnabled(true);
        h_characters->setReadOnly(true);

        verticalLayout_2->addWidget(h_characters);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);


        horizontalLayout_3->addLayout(verticalLayout_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        line_2 = new QFrame(CommentsView);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(line_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_6 = new QLabel(CommentsView);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_4->addWidget(label_6);

        line = new QFrame(CommentsView);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_7 = new QLabel(CommentsView);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_5->addWidget(label_7);

        acc_word = new QLineEdit(CommentsView);
        acc_word->setObjectName(QString::fromUtf8("acc_word"));
        acc_word->setDragEnabled(true);
        acc_word->setReadOnly(true);

        verticalLayout_5->addWidget(acc_word);


        horizontalLayout_2->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_8 = new QLabel(CommentsView);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_6->addWidget(label_8);

        acc_character = new QLineEdit(CommentsView);
        acc_character->setObjectName(QString::fromUtf8("acc_character"));
        acc_character->setDragEnabled(true);
        acc_character->setReadOnly(true);

        verticalLayout_6->addWidget(acc_character);


        horizontalLayout_2->addLayout(verticalLayout_6);


        verticalLayout_4->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_4);


        verticalLayout_7->addLayout(horizontalLayout_3);

        label_3 = new QLabel(CommentsView);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_7->addWidget(label_3);

        commentTextBrowser = new QTextBrowser(CommentsView);
        commentTextBrowser->setObjectName(QString::fromUtf8("commentTextBrowser"));
        commentTextBrowser->setMaximumSize(QSize(604, 16777215));
        QFont font;
        font.setFamily(QString::fromUtf8("Shobhika"));
        font.setPointSize(14);
        font.setBold(false);
        font.setWeight(50);
        commentTextBrowser->setFont(font);

        verticalLayout_7->addWidget(commentTextBrowser);


        horizontalLayout_4->addLayout(verticalLayout_7);


        retranslateUi(CommentsView);

        QMetaObject::connectSlotsByName(CommentsView);
    } // setupUi

    void retranslateUi(QDialog *CommentsView)
    {
        CommentsView->setWindowTitle(QCoreApplication::translate("CommentsView", "View Comments", nullptr));
        label->setText(QCoreApplication::translate("CommentsView", "<html><head/><body><p><span style=\" font-weight:600;\">Total Errors</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("CommentsView", "Words", nullptr));
        label_4->setText(QCoreApplication::translate("CommentsView", "Characters", nullptr));
        label_6->setText(QCoreApplication::translate("CommentsView", "<b>Accuracy</b>", nullptr));
        label_7->setText(QCoreApplication::translate("CommentsView", "Word-Level", nullptr));
        label_8->setText(QCoreApplication::translate("CommentsView", "Character-Level", nullptr));
        label_3->setText(QCoreApplication::translate("CommentsView", "<b>Comments</b>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CommentsView: public Ui_CommentsView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMENTSVIEW_H
