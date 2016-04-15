#pragma once

#include <QNetworkAccessManager>
#include <QAuthenticator>
#include <QNetworkReply>
#include <QObject>
#include "mainwindow.h"


class EzPublishService : public QObject {
Q_OBJECT

public:

    explicit EzPublishService(QObject *parent = 0);

    void loadLogFileList(MainWindow *mainWindow);

    void downloadLogFile(MainWindow *mainWindow, QString fileName);

private:

    QNetworkAccessManager *networkManager;
    QNetworkReply *reply;
    MainWindow *mainWindow;
    static const QString rootPath;
    QString logFileListPath;
    QString logFileDownloadPath;
    LogFileSource logFileSource;

    void addAuthHeader(QNetworkRequest *r);

    void ignoreSslErrorsIfAllowed(QNetworkReply *reply);

    void showEzPublishServerErrorMessage(
            QString message = QString(""), bool withSettingsButton = true);

    QString getHeaderValue(QNetworkReply *reply, QString key);

signals:

private slots:

    void slotAuthenticationRequired(QNetworkReply *reply,
                                    QAuthenticator *authenticator);

    void slotReplyFinished(QNetworkReply *);

    void logFileDownloadProgress(qint64 bytesReceived, qint64 bytesTotal);
};
