/********************************************************************************
** Form generated from reading UI file 'ProjectHierarchyWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTHIERARCHYWINDOW_H
#define UI_PROJECTHIERARCHYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProjectHierarchyWindow
{
public:
    QGridLayout *gridLayout;
    QTreeView *treeView;

    void setupUi(QWidget *ProjectHierarchyWindow)
    {
        if (ProjectHierarchyWindow->objectName().isEmpty())
            ProjectHierarchyWindow->setObjectName(QString::fromUtf8("ProjectHierarchyWindow"));
        ProjectHierarchyWindow->resize(714, 525);
        gridLayout = new QGridLayout(ProjectHierarchyWindow);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        treeView = new QTreeView(ProjectHierarchyWindow);
        treeView->setObjectName(QString::fromUtf8("treeView"));

        gridLayout->addWidget(treeView, 0, 0, 1, 1);


        retranslateUi(ProjectHierarchyWindow);

        QMetaObject::connectSlotsByName(ProjectHierarchyWindow);
    } // setupUi

    void retranslateUi(QWidget *ProjectHierarchyWindow)
    {
        ProjectHierarchyWindow->setWindowTitle(QCoreApplication::translate("ProjectHierarchyWindow", "ProjectHierarchyWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProjectHierarchyWindow: public Ui_ProjectHierarchyWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTHIERARCHYWINDOW_H
