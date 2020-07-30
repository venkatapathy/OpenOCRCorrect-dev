/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionNew;
    QAction *actionSpell_Check;
    QAction *actionLoad_Next_Page;
    QAction *actionLoad_Prev_Page;
    QAction *actionLoadGDocPage;
    QAction *actionToDevanagari;
    QAction *actionLoadData;
    QAction *actionLoadDict;
    QAction *actionLoadOCRWords;
    QAction *actionLoadDomain;
    QAction *actionLoadSubPS;
    QAction *actionLoadConfusions;
    QAction *actionSugg;
    QAction *actionCreateBest2OCR;
    QAction *actionToSlp1;
    QAction *actionCreateSuggestionLog;
    QAction *actionCreateSuggestionLogNearestPriority;
    QAction *actionErrorDetectionRep;
    QAction *actionErrorDetectWithoutAdaptation;
    QAction *actionCPair;
    QAction *actionToSlp1_2;
    QAction *actionToDev;
    QAction *actionExtractDev;
    QAction *actionPrimarySecOCRPair;
    QAction *actionCPairIEROcrVsCorrect;
    QAction *actionEditDistRep;
    QAction *actionConfusionFreqHist;
    QAction *actionCPairGEROcrVsCorrect;
    QAction *actionFilterOutGT50EditDisPairs;
    QAction *actionPrepareFeatures;
    QAction *actionErrorDetectionRepUniq;
    QAction *actionSanskrit;
    QAction *actionHindi;
    QAction *actionEnglish;
    QAction *actionAllFontProperties;
    QAction *actionBold;
    QAction *actionUnBold;
    QAction *actionLeftAlign;
    QAction *actionRightAlign;
    QAction *actionCentreAlign;
    QAction *actionJusitfiedAlign;
    QAction *actionAccuracyLog;
    QAction *actionHighlight;
    QAction *actionSave_As_HTML;
    QAction *actionSave_As_2;
    QAction *actionHighlight_2;
    QAction *actionFontBlack;
    QAction *actionViewAverageAccuracies;
    QAction *actionSuperscript;
    QAction *actionSubscript;
    QAction *actionInsert_Horizontal_Line;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QProgressBar *progressBar;
    QLineEdit *lineEdit;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *viewallcomments;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QTextEdit *textEdit;
    QTextBrowser *textBrowser;
    QGraphicsView *graphicsView;
    QMenuBar *menuBar;
    QMenu *menuOCR_Correction_Window;
    QMenu *menuCreateReports;
    QMenu *menuSaveVariables;
    QMenu *menuConvertFiles;
    QMenu *menuFeatureExtraction;
    QMenu *menuSelectLanguage;
    QMenu *menuFontAndLayout;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1296, 708);
        MainWindow->setMouseTracking(true);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Images/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon1);
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Images/save-as.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_As->setIcon(icon2);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Images/New.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon3);
        actionSpell_Check = new QAction(MainWindow);
        actionSpell_Check->setObjectName(QString::fromUtf8("actionSpell_Check"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Images/spellcheck.png"), QSize(), QIcon::Normal, QIcon::On);
        actionSpell_Check->setIcon(icon4);
        actionLoad_Next_Page = new QAction(MainWindow);
        actionLoad_Next_Page->setObjectName(QString::fromUtf8("actionLoad_Next_Page"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Images/next-page.png"), QSize(), QIcon::Normal, QIcon::On);
        actionLoad_Next_Page->setIcon(icon5);
        actionLoad_Prev_Page = new QAction(MainWindow);
        actionLoad_Prev_Page->setObjectName(QString::fromUtf8("actionLoad_Prev_Page"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Images/previous-page.png"), QSize(), QIcon::Normal, QIcon::On);
        actionLoad_Prev_Page->setIcon(icon6);
        actionLoadGDocPage = new QAction(MainWindow);
        actionLoadGDocPage->setObjectName(QString::fromUtf8("actionLoadGDocPage"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Images/SaveLoadPwords1.png"), QSize(), QIcon::Normal, QIcon::On);
        actionLoadGDocPage->setIcon(icon7);
        actionToDevanagari = new QAction(MainWindow);
        actionToDevanagari->setObjectName(QString::fromUtf8("actionToDevanagari"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/Images/toDevangari.png"), QSize(), QIcon::Normal, QIcon::On);
        actionToDevanagari->setIcon(icon8);
        actionLoadData = new QAction(MainWindow);
        actionLoadData->setObjectName(QString::fromUtf8("actionLoadData"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/Images/LoadData.png"), QSize(), QIcon::Normal, QIcon::On);
        actionLoadData->setIcon(icon9);
        actionLoadDict = new QAction(MainWindow);
        actionLoadDict->setObjectName(QString::fromUtf8("actionLoadDict"));
        actionLoadOCRWords = new QAction(MainWindow);
        actionLoadOCRWords->setObjectName(QString::fromUtf8("actionLoadOCRWords"));
        actionLoadDomain = new QAction(MainWindow);
        actionLoadDomain->setObjectName(QString::fromUtf8("actionLoadDomain"));
        actionLoadSubPS = new QAction(MainWindow);
        actionLoadSubPS->setObjectName(QString::fromUtf8("actionLoadSubPS"));
        actionLoadConfusions = new QAction(MainWindow);
        actionLoadConfusions->setObjectName(QString::fromUtf8("actionLoadConfusions"));
        actionSugg = new QAction(MainWindow);
        actionSugg->setObjectName(QString::fromUtf8("actionSugg"));
        actionCreateBest2OCR = new QAction(MainWindow);
        actionCreateBest2OCR->setObjectName(QString::fromUtf8("actionCreateBest2OCR"));
        actionToSlp1 = new QAction(MainWindow);
        actionToSlp1->setObjectName(QString::fromUtf8("actionToSlp1"));
        actionCreateSuggestionLog = new QAction(MainWindow);
        actionCreateSuggestionLog->setObjectName(QString::fromUtf8("actionCreateSuggestionLog"));
        actionCreateSuggestionLogNearestPriority = new QAction(MainWindow);
        actionCreateSuggestionLogNearestPriority->setObjectName(QString::fromUtf8("actionCreateSuggestionLogNearestPriority"));
        actionErrorDetectionRep = new QAction(MainWindow);
        actionErrorDetectionRep->setObjectName(QString::fromUtf8("actionErrorDetectionRep"));
        actionErrorDetectWithoutAdaptation = new QAction(MainWindow);
        actionErrorDetectWithoutAdaptation->setObjectName(QString::fromUtf8("actionErrorDetectWithoutAdaptation"));
        actionCPair = new QAction(MainWindow);
        actionCPair->setObjectName(QString::fromUtf8("actionCPair"));
        actionToSlp1_2 = new QAction(MainWindow);
        actionToSlp1_2->setObjectName(QString::fromUtf8("actionToSlp1_2"));
        actionToDev = new QAction(MainWindow);
        actionToDev->setObjectName(QString::fromUtf8("actionToDev"));
        actionExtractDev = new QAction(MainWindow);
        actionExtractDev->setObjectName(QString::fromUtf8("actionExtractDev"));
        actionPrimarySecOCRPair = new QAction(MainWindow);
        actionPrimarySecOCRPair->setObjectName(QString::fromUtf8("actionPrimarySecOCRPair"));
        actionCPairIEROcrVsCorrect = new QAction(MainWindow);
        actionCPairIEROcrVsCorrect->setObjectName(QString::fromUtf8("actionCPairIEROcrVsCorrect"));
        actionEditDistRep = new QAction(MainWindow);
        actionEditDistRep->setObjectName(QString::fromUtf8("actionEditDistRep"));
        actionConfusionFreqHist = new QAction(MainWindow);
        actionConfusionFreqHist->setObjectName(QString::fromUtf8("actionConfusionFreqHist"));
        actionCPairGEROcrVsCorrect = new QAction(MainWindow);
        actionCPairGEROcrVsCorrect->setObjectName(QString::fromUtf8("actionCPairGEROcrVsCorrect"));
        actionFilterOutGT50EditDisPairs = new QAction(MainWindow);
        actionFilterOutGT50EditDisPairs->setObjectName(QString::fromUtf8("actionFilterOutGT50EditDisPairs"));
        actionPrepareFeatures = new QAction(MainWindow);
        actionPrepareFeatures->setObjectName(QString::fromUtf8("actionPrepareFeatures"));
        actionErrorDetectionRepUniq = new QAction(MainWindow);
        actionErrorDetectionRepUniq->setObjectName(QString::fromUtf8("actionErrorDetectionRepUniq"));
        actionSanskrit = new QAction(MainWindow);
        actionSanskrit->setObjectName(QString::fromUtf8("actionSanskrit"));
        actionHindi = new QAction(MainWindow);
        actionHindi->setObjectName(QString::fromUtf8("actionHindi"));
        actionEnglish = new QAction(MainWindow);
        actionEnglish->setObjectName(QString::fromUtf8("actionEnglish"));
        actionAllFontProperties = new QAction(MainWindow);
        actionAllFontProperties->setObjectName(QString::fromUtf8("actionAllFontProperties"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/Images/AllFont.png"), QSize(), QIcon::Normal, QIcon::On);
        actionAllFontProperties->setIcon(icon10);
        actionBold = new QAction(MainWindow);
        actionBold->setObjectName(QString::fromUtf8("actionBold"));
        actionUnBold = new QAction(MainWindow);
        actionUnBold->setObjectName(QString::fromUtf8("actionUnBold"));
        actionLeftAlign = new QAction(MainWindow);
        actionLeftAlign->setObjectName(QString::fromUtf8("actionLeftAlign"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/Images/AlignLeft.png"), QSize(), QIcon::Normal, QIcon::On);
        actionLeftAlign->setIcon(icon11);
        actionRightAlign = new QAction(MainWindow);
        actionRightAlign->setObjectName(QString::fromUtf8("actionRightAlign"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/Images/AlignRight.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon12.addFile(QString::fromUtf8(":/Images/AlignCenter.png"), QSize(), QIcon::Normal, QIcon::On);
        actionRightAlign->setIcon(icon12);
        actionCentreAlign = new QAction(MainWindow);
        actionCentreAlign->setObjectName(QString::fromUtf8("actionCentreAlign"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/Images/AlignCenter.png"), QSize(), QIcon::Normal, QIcon::On);
        actionCentreAlign->setIcon(icon13);
        actionJusitfiedAlign = new QAction(MainWindow);
        actionJusitfiedAlign->setObjectName(QString::fromUtf8("actionJusitfiedAlign"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/Images/JustifiedAlign.png"), QSize(), QIcon::Normal, QIcon::On);
        actionJusitfiedAlign->setIcon(icon14);
        actionAccuracyLog = new QAction(MainWindow);
        actionAccuracyLog->setObjectName(QString::fromUtf8("actionAccuracyLog"));
        actionHighlight = new QAction(MainWindow);
        actionHighlight->setObjectName(QString::fromUtf8("actionHighlight"));
        actionHighlight->setChecked(false);
        actionHighlight->setEnabled(true);
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/Images/highlight-icon.png"), QSize(), QIcon::Normal, QIcon::On);
        actionHighlight->setIcon(icon15);
        actionSave_As_HTML = new QAction(MainWindow);
        actionSave_As_HTML->setObjectName(QString::fromUtf8("actionSave_As_HTML"));
        actionSave_As_2 = new QAction(MainWindow);
        actionSave_As_2->setObjectName(QString::fromUtf8("actionSave_As_2"));
        actionHighlight_2 = new QAction(MainWindow);
        actionHighlight_2->setObjectName(QString::fromUtf8("actionHighlight_2"));
        actionFontBlack = new QAction(MainWindow);
        actionFontBlack->setObjectName(QString::fromUtf8("actionFontBlack"));
        actionViewAverageAccuracies = new QAction(MainWindow);
        actionViewAverageAccuracies->setObjectName(QString::fromUtf8("actionViewAverageAccuracies"));
        actionSuperscript = new QAction(MainWindow);
        actionSuperscript->setObjectName(QString::fromUtf8("actionSuperscript"));
        actionSubscript = new QAction(MainWindow);
        actionSubscript->setObjectName(QString::fromUtf8("actionSubscript"));
        actionInsert_Horizontal_Line = new QAction(MainWindow);
        actionInsert_Horizontal_Line->setObjectName(QString::fromUtf8("actionInsert_Horizontal_Line"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_3 = new QVBoxLayout(centralWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setMaximumSize(QSize(500, 16777215));
        progressBar->setValue(0);
        progressBar->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(progressBar);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMaximumSize(QSize(500, 16777215));

        verticalLayout_2->addWidget(lineEdit);


        horizontalLayout_4->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout_2->addWidget(pushButton_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        viewallcomments = new QPushButton(centralWidget);
        viewallcomments->setObjectName(QString::fromUtf8("viewallcomments"));

        horizontalLayout_3->addWidget(viewallcomments);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setMaximumSize(QSize(120, 16777215));
        QFont font;
        font.setFamily(QString::fromUtf8("FreeSans"));
        font.setItalic(true);
        textEdit->setFont(font);
        textEdit->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        textEdit->setReadOnly(true);

        horizontalLayout->addWidget(textEdit);

        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Shobhika"));
        font1.setPointSize(16);
        font1.setItalic(false);
        textBrowser->setFont(font1);
        textBrowser->setMouseTracking(true);
        textBrowser->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        textBrowser->setUndoRedoEnabled(true);
        textBrowser->setReadOnly(false);
        textBrowser->setAcceptRichText(true);
        textBrowser->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextEditable|Qt::TextEditorInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(textBrowser);

        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setMinimumSize(QSize(608, 0));
        graphicsView->setMaximumSize(QSize(608, 16777215));
        graphicsView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        graphicsView->setAlignment(Qt::AlignCenter);
        graphicsView->setRenderHints(QPainter::NonCosmeticDefaultPen);
        graphicsView->setDragMode(QGraphicsView::ScrollHandDrag);
        graphicsView->setTransformationAnchor(QGraphicsView::AnchorViewCenter);
        graphicsView->setResizeAnchor(QGraphicsView::AnchorViewCenter);

        horizontalLayout->addWidget(graphicsView);


        verticalLayout_3->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1296, 22));
        menuOCR_Correction_Window = new QMenu(menuBar);
        menuOCR_Correction_Window->setObjectName(QString::fromUtf8("menuOCR_Correction_Window"));
        menuCreateReports = new QMenu(menuBar);
        menuCreateReports->setObjectName(QString::fromUtf8("menuCreateReports"));
        menuSaveVariables = new QMenu(menuBar);
        menuSaveVariables->setObjectName(QString::fromUtf8("menuSaveVariables"));
        menuConvertFiles = new QMenu(menuBar);
        menuConvertFiles->setObjectName(QString::fromUtf8("menuConvertFiles"));
        menuFeatureExtraction = new QMenu(menuBar);
        menuFeatureExtraction->setObjectName(QString::fromUtf8("menuFeatureExtraction"));
        menuSelectLanguage = new QMenu(menuBar);
        menuSelectLanguage->setObjectName(QString::fromUtf8("menuSelectLanguage"));
        menuFontAndLayout = new QMenu(menuBar);
        menuFontAndLayout->setObjectName(QString::fromUtf8("menuFontAndLayout"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setEnabled(true);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(textBrowser, graphicsView);

        menuBar->addAction(menuSelectLanguage->menuAction());
        menuBar->addAction(menuOCR_Correction_Window->menuAction());
        menuBar->addAction(menuCreateReports->menuAction());
        menuBar->addAction(menuSaveVariables->menuAction());
        menuBar->addAction(menuFontAndLayout->menuAction());
        menuBar->addAction(menuConvertFiles->menuAction());
        menuBar->addAction(menuFeatureExtraction->menuAction());
        menuOCR_Correction_Window->addAction(actionNew);
        menuOCR_Correction_Window->addAction(actionOpen);
        menuOCR_Correction_Window->addAction(actionSave);
        menuOCR_Correction_Window->addAction(actionSave_As_2);
        menuOCR_Correction_Window->addAction(actionHighlight);
        menuOCR_Correction_Window->addAction(actionLoad_Next_Page);
        menuOCR_Correction_Window->addAction(actionLoad_Prev_Page);
        menuOCR_Correction_Window->addSeparator();
        menuOCR_Correction_Window->addAction(actionLoadGDocPage);
        menuOCR_Correction_Window->addAction(actionToDevanagari);
        menuOCR_Correction_Window->addAction(actionLoadData);
        menuOCR_Correction_Window->addAction(actionLoadDict);
        menuOCR_Correction_Window->addAction(actionLoadOCRWords);
        menuOCR_Correction_Window->addAction(actionLoadDomain);
        menuOCR_Correction_Window->addAction(actionLoadSubPS);
        menuOCR_Correction_Window->addAction(actionLoadConfusions);
        menuOCR_Correction_Window->addAction(actionSugg);
        menuOCR_Correction_Window->addAction(actionToSlp1);
        menuCreateReports->addAction(actionCreateBest2OCR);
        menuCreateReports->addAction(actionCreateSuggestionLog);
        menuCreateReports->addAction(actionCreateSuggestionLogNearestPriority);
        menuCreateReports->addAction(actionErrorDetectionRep);
        menuCreateReports->addAction(actionErrorDetectWithoutAdaptation);
        menuCreateReports->addAction(actionErrorDetectionRepUniq);
        menuCreateReports->addAction(actionAccuracyLog);
        menuCreateReports->addAction(actionViewAverageAccuracies);
        menuSaveVariables->addAction(actionCPair);
        menuSaveVariables->addAction(actionPrimarySecOCRPair);
        menuSaveVariables->addAction(actionCPairIEROcrVsCorrect);
        menuSaveVariables->addAction(actionCPairGEROcrVsCorrect);
        menuConvertFiles->addAction(actionToSlp1_2);
        menuConvertFiles->addAction(actionToDev);
        menuConvertFiles->addAction(actionExtractDev);
        menuConvertFiles->addAction(actionEditDistRep);
        menuConvertFiles->addAction(actionConfusionFreqHist);
        menuConvertFiles->addAction(actionFilterOutGT50EditDisPairs);
        menuFeatureExtraction->addAction(actionPrepareFeatures);
        menuSelectLanguage->addAction(actionSanskrit);
        menuSelectLanguage->addAction(actionHindi);
        menuSelectLanguage->addAction(actionEnglish);
        menuFontAndLayout->addAction(actionAllFontProperties);
        menuFontAndLayout->addAction(actionBold);
        menuFontAndLayout->addAction(actionUnBold);
        menuFontAndLayout->addSeparator();
        menuFontAndLayout->addAction(actionLeftAlign);
        menuFontAndLayout->addAction(actionRightAlign);
        menuFontAndLayout->addAction(actionCentreAlign);
        menuFontAndLayout->addAction(actionJusitfiedAlign);
        menuFontAndLayout->addAction(actionHighlight);
        menuFontAndLayout->addAction(actionFontBlack);
        menuFontAndLayout->addAction(actionSuperscript);
        menuFontAndLayout->addAction(actionSubscript);
        menuFontAndLayout->addAction(actionInsert_Horizontal_Line);
        mainToolBar->addAction(actionNew);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionSave);
        mainToolBar->addAction(actionSave_As);
        mainToolBar->addAction(actionLoadData);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionHighlight);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionLoad_Prev_Page);
        mainToolBar->addAction(actionLoad_Next_Page);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionLoadGDocPage);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionSanskrit);
        mainToolBar->addAction(actionEnglish);
        mainToolBar->addAction(actionHindi);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionToDevanagari);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionAllFontProperties);
        mainToolBar->addAction(actionBold);
        mainToolBar->addAction(actionUnBold);
        mainToolBar->addAction(actionLeftAlign);
        mainToolBar->addAction(actionCentreAlign);
        mainToolBar->addAction(actionRightAlign);
        mainToolBar->addAction(actionJusitfiedAlign);
        mainToolBar->addAction(actionFontBlack);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_As->setText(QCoreApplication::translate("MainWindow", "Save As", nullptr));
#if QT_CONFIG(shortcut)
        actionSave_As->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNew->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSpell_Check->setText(QCoreApplication::translate("MainWindow", "Spell Check(CntrlShftC)", nullptr));
#if QT_CONFIG(shortcut)
        actionSpell_Check->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionLoad_Next_Page->setText(QCoreApplication::translate("MainWindow", "Page(CntlShiftR)>>", nullptr));
#if QT_CONFIG(tooltip)
        actionLoad_Next_Page->setToolTip(QCoreApplication::translate("MainWindow", "Page(CntlShiftR)>>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionLoad_Next_Page->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionLoad_Prev_Page->setText(QCoreApplication::translate("MainWindow", "<<Page(CntrlShftL)", nullptr));
#if QT_CONFIG(tooltip)
        actionLoad_Prev_Page->setToolTip(QCoreApplication::translate("MainWindow", "<<Page(CntrlShftL)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionLoad_Prev_Page->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+L", nullptr));
#endif // QT_CONFIG(shortcut)
        actionLoadGDocPage->setText(QCoreApplication::translate("MainWindow", "Save&LoadPWords(CntrlShftP)", nullptr));
#if QT_CONFIG(shortcut)
        actionLoadGDocPage->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionToDevanagari->setText(QCoreApplication::translate("MainWindow", "toDevanagari(CntrlD)", nullptr));
#if QT_CONFIG(shortcut)
        actionToDevanagari->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+D", nullptr));
#endif // QT_CONFIG(shortcut)
        actionLoadData->setText(QCoreApplication::translate("MainWindow", "LoadData", nullptr));
        actionLoadDict->setText(QCoreApplication::translate("MainWindow", "LoadDict", nullptr));
        actionLoadOCRWords->setText(QCoreApplication::translate("MainWindow", "LoadOCRWords", nullptr));
        actionLoadDomain->setText(QCoreApplication::translate("MainWindow", "LoadDomain", nullptr));
        actionLoadSubPS->setText(QCoreApplication::translate("MainWindow", "LoadSubPS", nullptr));
        actionLoadConfusions->setText(QCoreApplication::translate("MainWindow", "LoadConfusions", nullptr));
        actionSugg->setText(QCoreApplication::translate("MainWindow", "sugg", nullptr));
#if QT_CONFIG(shortcut)
        actionSugg->setShortcut(QCoreApplication::translate("MainWindow", "Menu", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCreateBest2OCR->setText(QCoreApplication::translate("MainWindow", "CreateBest2OCR", nullptr));
        actionToSlp1->setText(QCoreApplication::translate("MainWindow", "toSlp1", nullptr));
#if QT_CONFIG(shortcut)
        actionToSlp1->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+G", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCreateSuggestionLog->setText(QCoreApplication::translate("MainWindow", "CreateSuggestionLog", nullptr));
        actionCreateSuggestionLogNearestPriority->setText(QCoreApplication::translate("MainWindow", "CreateSuggestionLogNearestPriority", nullptr));
        actionErrorDetectionRep->setText(QCoreApplication::translate("MainWindow", "ErrorDetectionRep", nullptr));
        actionErrorDetectWithoutAdaptation->setText(QCoreApplication::translate("MainWindow", "ErrorDetectWithoutAdaptation", nullptr));
        actionCPair->setText(QCoreApplication::translate("MainWindow", "CPair", nullptr));
        actionToSlp1_2->setText(QCoreApplication::translate("MainWindow", "toSlp1", nullptr));
        actionToDev->setText(QCoreApplication::translate("MainWindow", "toDev", nullptr));
        actionExtractDev->setText(QCoreApplication::translate("MainWindow", "ExtractDevWords", nullptr));
#if QT_CONFIG(tooltip)
        actionExtractDev->setToolTip(QCoreApplication::translate("MainWindow", "ExtractDevWords", nullptr));
#endif // QT_CONFIG(tooltip)
        actionPrimarySecOCRPair->setText(QCoreApplication::translate("MainWindow", "PrimarySecOCRPairs", nullptr));
        actionCPairIEROcrVsCorrect->setText(QCoreApplication::translate("MainWindow", "CPairIEROcrVsCorrect", nullptr));
        actionEditDistRep->setText(QCoreApplication::translate("MainWindow", "EditDistRep", nullptr));
        actionConfusionFreqHist->setText(QCoreApplication::translate("MainWindow", "ConfusionFreqHist", nullptr));
        actionCPairGEROcrVsCorrect->setText(QCoreApplication::translate("MainWindow", "CPairGEROcrVsCorrect", nullptr));
        actionFilterOutGT50EditDisPairs->setText(QCoreApplication::translate("MainWindow", "FilterOutGT50EditDisPairs", nullptr));
        actionPrepareFeatures->setText(QCoreApplication::translate("MainWindow", "PrepareFeatures", nullptr));
        actionErrorDetectionRepUniq->setText(QCoreApplication::translate("MainWindow", "ErrorSuggRepUniq", nullptr));
        actionSanskrit->setText(QCoreApplication::translate("MainWindow", "Sanskrit", nullptr));
        actionHindi->setText(QCoreApplication::translate("MainWindow", "Hindi/Marathi", nullptr));
        actionEnglish->setText(QCoreApplication::translate("MainWindow", "English", nullptr));
#if QT_CONFIG(tooltip)
        actionEnglish->setToolTip(QCoreApplication::translate("MainWindow", "English", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAllFontProperties->setText(QCoreApplication::translate("MainWindow", "AllFontProperties", nullptr));
        actionBold->setText(QCoreApplication::translate("MainWindow", "Bold", nullptr));
        actionUnBold->setText(QCoreApplication::translate("MainWindow", "UnBold", nullptr));
        actionLeftAlign->setText(QCoreApplication::translate("MainWindow", "LeftAlign", nullptr));
        actionRightAlign->setText(QCoreApplication::translate("MainWindow", "RightAlign", nullptr));
        actionCentreAlign->setText(QCoreApplication::translate("MainWindow", "CentreAlign", nullptr));
        actionJusitfiedAlign->setText(QCoreApplication::translate("MainWindow", "JusitfiedAlign", nullptr));
        actionAccuracyLog->setText(QCoreApplication::translate("MainWindow", "AccuracyLog", nullptr));
        actionHighlight->setText(QCoreApplication::translate("MainWindow", "Highlight", nullptr));
#if QT_CONFIG(shortcut)
        actionHighlight->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+H", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_As_HTML->setText(QCoreApplication::translate("MainWindow", "Save As HTML", nullptr));
        actionSave_As_2->setText(QCoreApplication::translate("MainWindow", "Save As", nullptr));
        actionHighlight_2->setText(QCoreApplication::translate("MainWindow", "Highlight", nullptr));
        actionFontBlack->setText(QCoreApplication::translate("MainWindow", "FontBlack", nullptr));
        actionViewAverageAccuracies->setText(QCoreApplication::translate("MainWindow", "ViewAverageAccuracies", nullptr));
        actionSuperscript->setText(QCoreApplication::translate("MainWindow", "Superscript", nullptr));
        actionSubscript->setText(QCoreApplication::translate("MainWindow", "Subscript", nullptr));
        actionInsert_Horizontal_Line->setText(QCoreApplication::translate("MainWindow", "Insert Horizontal Line", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_3->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">Open any file in CorrectorOutput Folder to view Changes made.</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Compare Output", nullptr));
        viewallcomments->setText(QCoreApplication::translate("MainWindow", "View All Comments", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Shobhika'; font-size:16pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:11pt;\">Please Select the Language from top left menu before loading any document.</span></p></body></html>", nullptr));
        menuOCR_Correction_Window->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuCreateReports->setTitle(QCoreApplication::translate("MainWindow", "Reports", nullptr));
        menuSaveVariables->setTitle(QCoreApplication::translate("MainWindow", "SaveVariables", nullptr));
        menuConvertFiles->setTitle(QCoreApplication::translate("MainWindow", "ConvertFiles", nullptr));
        menuFeatureExtraction->setTitle(QCoreApplication::translate("MainWindow", "FeatureExtraction", nullptr));
        menuSelectLanguage->setTitle(QCoreApplication::translate("MainWindow", "SelectLanguage", nullptr));
        menuFontAndLayout->setTitle(QCoreApplication::translate("MainWindow", "FontAndLayout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
