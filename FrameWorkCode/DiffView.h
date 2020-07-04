#pragma once

#include <QMainWindow>
namespace Ui { class DiffView; };

class DiffView : public QMainWindow
{
	Q_OBJECT

public:
	DiffView(QWidget *parent = Q_NULLPTR);
	~DiffView();

private:
	Ui::DiffView *ui;
};
