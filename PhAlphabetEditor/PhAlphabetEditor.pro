# #####################################################################
# Automatically generated by qmake (2.01a) Thu Mar 19 22:23:16 2009
# #####################################################################
TEMPLATE = app
TARGET = 
DEPENDPATH += . \
    debug \
    qtc-gdbmacros \
    release
INCLUDEPATH += . \
    ../PhTranslateLib

# Input
HEADERS += mainwindow.h \
    cphonetictableitem.h \
    ../PhTranslateLib/LanguageCodes.h \
    ../PhTranslateLib/PhTranslator.h \
    charentrydialog.h \
    testdialog.h
FORMS += mainwindow.ui \
    charentrydialog.ui \
    testdialog.ui
SOURCES += main.cpp \
    mainwindow.cpp \
    debug/qrc_textedit.cpp \
    qtc-gdbmacros/gdbmacros.cpp \
    release/qrc_textedit.cpp \
    cphonetictableitem.cpp \
    charentrydialog.cpp \
    testdialog.cpp \
    ../PhTranslateLib/PhTranslator.cpp
OTHER_FILES += 
