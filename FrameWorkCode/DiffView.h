#pragma once

#include <QMainWindow>
namespace Ui { class DiffView; };

class DiffView : public QMainWindow
{
	Q_OBJECT

public:
    DiffView( QString &str1, QString &str2, QString &str3, const QString &acc1, const QString &acc2, const QString &acc3,QWidget *parent = Q_NULLPTR);
	~DiffView();

private:
	Ui::DiffView *ui;
};
