#include "commentsview.h"
#include "ui_commentsview.h"
#include "mainwindow.h"
#include <QCloseEvent>

QString commentFilename;
QString pagename;
CommentsView::CommentsView(const int &words, const int &chars, const float &wordacc, const float &characc,const QString commentsField,const QString commentsFilelocation, const QString currentpagename, int rating, QWidget *parent) :
    QDialog(parent)
{
    ui = new Ui::CommentsView();
    ui->setupUi(this);
    ui->h_words->setText(QString::number(words));
    ui->h_characters->setText(QString::number(chars));
    ui->acc_word->setText(QString::number(wordacc));
    ui->acc_character->setText(QString::number(characc));
    ui->commentTextBrowser->setText(commentsField);
    ui->commentTextBrowser->setFocus();
    //ui->rating->setText(QString::number(rating));
    commentFilename = commentsFilelocation;
    pagename = currentpagename;

}


CommentsView::~CommentsView()
{
    delete ui;
}

void CommentsView::on_pushButton_clicked()
{

    QString comments = ui->commentTextBrowser->toPlainText();
    //QString rating = ui->rating->text();


    QFile jsonFile(commentFilename);
    jsonFile.open(QIODevice::ReadOnly | QIODevice::Text);
    QByteArray data = jsonFile.readAll();

    QJsonParseError errorPtr;
    QJsonDocument document = QJsonDocument::fromJson(data, &errorPtr);
    QJsonObject mainObj = document.object();
    QJsonObject pages = mainObj.value("pages").toObject();
    QJsonObject page = pages.value(pagename).toObject();
    jsonFile.close();
    page["comments"] = comments;
    //page["rating"] = rating;

    pages.remove(pagename);
    pages.insert(pagename,page);
    mainObj.remove("pages");
    mainObj.insert("pages",pages);
    document.setObject(mainObj);

    QFile jsonFile1(commentFilename);
    jsonFile1.open(QIODevice::WriteOnly);
    jsonFile1.write(document.toJson());

}
