/********************************************************************************
** Form generated from reading UI file 'commentsview.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMENTSVIEW_H
#define UI_COMMENTSVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CommentsView
{
public:
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
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *horizontalSpacer_10;
    QTextBrowser *commentTextBrowser;
    QPushButton *pushButton;

    void setupUi(QDialog *CommentsView)
    {
        if (CommentsView->objectName().isEmpty())
            CommentsView->setObjectName(QStringLiteral("CommentsView"));
        CommentsView->resize(479, 377);
        verticalLayout_7 = new QVBoxLayout(CommentsView);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label = new QLabel(CommentsView);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_3->addWidget(label);

        line_3 = new QFrame(CommentsView);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(CommentsView);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        h_words = new QLineEdit(CommentsView);
        h_words->setObjectName(QStringLiteral("h_words"));

        verticalLayout->addWidget(h_words);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_4 = new QLabel(CommentsView);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_2->addWidget(label_4);

        h_characters = new QLineEdit(CommentsView);
        h_characters->setObjectName(QStringLiteral("h_characters"));

        verticalLayout_2->addWidget(h_characters);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);


        horizontalLayout_3->addLayout(verticalLayout_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        line_2 = new QFrame(CommentsView);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(line_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_6 = new QLabel(CommentsView);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_4->addWidget(label_6);

        line = new QFrame(CommentsView);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_7 = new QLabel(CommentsView);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_5->addWidget(label_7);

        acc_word = new QLineEdit(CommentsView);
        acc_word->setObjectName(QStringLiteral("acc_word"));

        verticalLayout_5->addWidget(acc_word);


        horizontalLayout_2->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_8 = new QLabel(CommentsView);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_6->addWidget(label_8);

        acc_character = new QLineEdit(CommentsView);
        acc_character->setObjectName(QStringLiteral("acc_character"));

        verticalLayout_6->addWidget(acc_character);


        horizontalLayout_2->addLayout(verticalLayout_6);


        verticalLayout_4->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_4);


        verticalLayout_7->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_3 = new QLabel(CommentsView);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_5->addWidget(label_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_9);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_10);


        horizontalLayout_5->addLayout(horizontalLayout_4);


        verticalLayout_7->addLayout(horizontalLayout_5);

        commentTextBrowser = new QTextBrowser(CommentsView);
        commentTextBrowser->setObjectName(QStringLiteral("commentTextBrowser"));
        commentTextBrowser->setMaximumSize(QSize(604, 16777215));
        QFont font;
        font.setFamily(QStringLiteral("Shobhika"));
        font.setPointSize(14);
        font.setBold(false);
        font.setWeight(50);
        commentTextBrowser->setFont(font);
        commentTextBrowser->setReadOnly(false);
        commentTextBrowser->setOverwriteMode(true);

        verticalLayout_7->addWidget(commentTextBrowser);

        pushButton = new QPushButton(CommentsView);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setUnderline(false);
        font1.setWeight(75);
        pushButton->setFont(font1);

        verticalLayout_7->addWidget(pushButton);


        retranslateUi(CommentsView);

        QMetaObject::connectSlotsByName(CommentsView);
    } // setupUi

    void retranslateUi(QDialog *CommentsView)
    {
        CommentsView->setWindowTitle(QApplication::translate("CommentsView", "View Comments", 0));
        label->setText(QApplication::translate("CommentsView", "<b>Total Highlights</b>", 0));
        label_2->setText(QApplication::translate("CommentsView", "Words", 0));
        label_4->setText(QApplication::translate("CommentsView", "Characters", 0));
        label_6->setText(QApplication::translate("CommentsView", "<b>Accuracy</b>", 0));
        label_7->setText(QApplication::translate("CommentsView", "Word-Level", 0));
        label_8->setText(QApplication::translate("CommentsView", "Character-Level", 0));
        label_3->setText(QApplication::translate("CommentsView", "<html><head/><body><p><span style=\" font-weight:600;\">Add Comments</span></p></body></html>", 0));
        pushButton->setText(QApplication::translate("CommentsView", "Save", 0));
    } // retranslateUi

};

namespace Ui {
    class CommentsView: public Ui_CommentsView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMENTSVIEW_H
