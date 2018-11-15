#-------------------------------------------------
#
# Project created by QtCreator 2018-05-10T11:09:40
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = puremvc
TEMPLATE = app


SOURCES += main.cpp\
    Core/Controller.cpp \
    Core/Model.cpp \
    Core/View.cpp \
    Patterns/Command.cpp \
    Patterns/Facade.cpp \
    Patterns/Mediator.cpp \
    Patterns/Notification.cpp \
    Patterns/Notifier.cpp \
    Patterns/Proxy.cpp \
    Patterns/UpdateData.cpp \
    ApplicationFacade.cpp \
    LoginCommand.cpp \
    LoginForm.cpp \
    LoginInfo.cpp \
    LoginMediator.cpp \
    LoginProxy.cpp \
    LoginResult.cpp

HEADERS  += \
    Core/Controller.h \
    Core/Model.h \
    Core/View.h \
    Interface/ICommand.h \
    Interface/IController.h \
    Interface/IFacade.h \
    Interface/IMediator.h \
    Interface/IModel.h \
    Interface/INotification.h \
    Interface/INotifier.h \
    Interface/IObserver.h \
    Interface/IProxy.h \
    Interface/IUpdateData.h \
    Interface/IView.h \
    Interface/IViewComponent.h \
    Patterns/Command.h \
    Patterns/Facade.h \
    Patterns/Mediator.h \
    Patterns/Notification.h \
    Patterns/Notifier.h \
    Patterns/Proxy.h \
    Patterns/UpdateData.h \
    ApplicationFacade.h \
    LoginCommand.h \
    LoginForm.h \
    LoginInfo.h \
    LoginMediator.h \
    LoginProxy.h \
    LoginResult.h \
    ui_login_dialog.h

FORMS    += \
    login_dialog.ui

DISTFILES +=
