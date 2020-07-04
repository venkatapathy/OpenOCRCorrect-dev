#include "DiffView.h"
#include "ui_DiffView.h"

DiffView::DiffView(QWidget *parent)
	: QMainWindow(parent)
{
	ui = new Ui::DiffView();
	ui->setupUi(this);
}

DiffView::~DiffView()
{
	delete ui;
}
