/********************************************************************************
** Form generated from reading ui file 'mainwindow.ui'
**
** Created: Wed Apr 15 23:23:49 2009
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTableWidget>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QAction *actionExit;
    QAction *actionOpen;
    QAction *action_Save;
    QAction *actionAbout;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QFrame *frame_2;
    QFormLayout *formLayout;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEditFrom;
    QLineEdit *lineEditTo;
    QPushButton *pushButtonDisplay;
    QLabel *ToLabel;
    QPushButton *pushButton_Test;
    QSpacerItem *horizontalSpacer;
    QTableWidget *tableWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menu_Help;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName(QString::fromUtf8("MainWindowClass"));
        MainWindowClass->resize(654, 468);
        actionExit = new QAction(MainWindowClass);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionOpen = new QAction(MainWindowClass);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon;
        icon.addPixmap(QPixmap(QString::fromUtf8(":/images/win/fileopen.png")), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon);
        actionOpen->setShortcutContext(Qt::ApplicationShortcut);
        action_Save = new QAction(MainWindowClass);
        action_Save->setObjectName(QString::fromUtf8("action_Save"));
        QIcon icon1;
        icon1.addPixmap(QPixmap(QString::fromUtf8(":/images/win/filesave.png")), QIcon::Normal, QIcon::Off);
        action_Save->setIcon(icon1);
        action_Save->setShortcutContext(Qt::ApplicationShortcut);
        actionAbout = new QAction(MainWindowClass);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionAbout->setShortcutContext(Qt::ApplicationShortcut);
        actionAbout->setMenuRole(QAction::AboutRole);
        centralWidget = new QWidget(MainWindowClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setMargin(11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::Box);
        frame_2->setFrameShadow(QFrame::Raised);
        formLayout = new QFormLayout(frame_2);
        formLayout->setSpacing(6);
        formLayout->setMargin(11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        frame = new QFrame(frame_2);
        frame->setObjectName(QString::fromUtf8("frame"));
        gridLayout = new QGridLayout(frame);
        gridLayout->setSpacing(6);
        gridLayout->setMargin(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(0);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEditFrom = new QLineEdit(frame);
        lineEditFrom->setObjectName(QString::fromUtf8("lineEditFrom"));
        lineEditFrom->setMaxLength(4);

        gridLayout->addWidget(lineEditFrom, 0, 1, 1, 1);

        lineEditTo = new QLineEdit(frame);
        lineEditTo->setObjectName(QString::fromUtf8("lineEditTo"));

        gridLayout->addWidget(lineEditTo, 0, 4, 1, 1);

        pushButtonDisplay = new QPushButton(frame);
        pushButtonDisplay->setObjectName(QString::fromUtf8("pushButtonDisplay"));

        gridLayout->addWidget(pushButtonDisplay, 0, 5, 1, 1);

        ToLabel = new QLabel(frame);
        ToLabel->setObjectName(QString::fromUtf8("ToLabel"));

        gridLayout->addWidget(ToLabel, 0, 3, 1, 1);

        pushButton_Test = new QPushButton(frame);
        pushButton_Test->setObjectName(QString::fromUtf8("pushButton_Test"));

        gridLayout->addWidget(pushButton_Test, 0, 6, 1, 1);


        formLayout->setWidget(0, QFormLayout::LabelRole, frame);

        horizontalSpacer = new QSpacerItem(441, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout->setItem(0, QFormLayout::FieldRole, horizontalSpacer);


        verticalLayout->addWidget(frame_2);

        tableWidget = new QTableWidget(centralWidget);
        if (tableWidget->columnCount() < 8)
            tableWidget->setColumnCount(8);
        if (tableWidget->rowCount() < 16)
            tableWidget->setRowCount(16);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setMouseTracking(true);
        tableWidget->setAlternatingRowColors(true);
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setShowGrid(true);
        tableWidget->setRowCount(16);
        tableWidget->setColumnCount(8);
        tableWidget->horizontalHeader()->setDefaultSectionSize(72);
        tableWidget->horizontalHeader()->setMinimumSectionSize(64);
        tableWidget->verticalHeader()->setDefaultSectionSize(72);
        tableWidget->verticalHeader()->setMinimumSectionSize(64);

        verticalLayout->addWidget(tableWidget);

        MainWindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindowClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 654, 23));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menu_Help = new QMenu(menuBar);
        menu_Help->setObjectName(QString::fromUtf8("menu_Help"));
        MainWindowClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindowClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindowClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindowClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindowClass->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menu_Help->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(action_Save);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menu_Help->addAction(actionAbout);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(action_Save);
        mainToolBar->addSeparator();

        retranslateUi(MainWindowClass);
        QObject::connect(pushButton_Test, SIGNAL(clicked()), MainWindowClass, SLOT(DisplayTestDialog()));

        QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowClass)
    {
        MainWindowClass->setWindowTitle(QApplication::translate("MainWindowClass", "PhAlphabetEditor", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("MainWindowClass", "Exit", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("MainWindowClass", "&Open", 0, QApplication::UnicodeUTF8));
        actionOpen->setShortcut(QApplication::translate("MainWindowClass", "Ctrl+O", 0, QApplication::UnicodeUTF8));
        action_Save->setText(QApplication::translate("MainWindowClass", "&Save", 0, QApplication::UnicodeUTF8));
        action_Save->setShortcut(QApplication::translate("MainWindowClass", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindowClass", "&About", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindowClass", "From: ", 0, QApplication::UnicodeUTF8));
        lineEditFrom->setInputMask(QApplication::translate("MainWindowClass", "hhhh; ", 0, QApplication::UnicodeUTF8));
        lineEditFrom->setText(QString());
        lineEditTo->setInputMask(QApplication::translate("MainWindowClass", "hhhh; ", 0, QApplication::UnicodeUTF8));
        pushButtonDisplay->setText(QApplication::translate("MainWindowClass", "&Display", 0, QApplication::UnicodeUTF8));
        ToLabel->setText(QApplication::translate("MainWindowClass", "To: ", 0, QApplication::UnicodeUTF8));
        pushButton_Test->setText(QApplication::translate("MainWindowClass", "&Test", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindowClass", "File", 0, QApplication::UnicodeUTF8));
        menu_Help->setTitle(QApplication::translate("MainWindowClass", "&Help", 0, QApplication::UnicodeUTF8));
        mainToolBar->setWindowTitle(QApplication::translate("MainWindowClass", "Toobar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
