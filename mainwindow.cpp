#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);

    ui->textBrowser->hide();
    ui->pushButton_4->hide();
    ui->label_16->hide();
    ui->label_17->hide();
    ui->spinBox_12->hide();
    ui->horizontalSlider_12->hide();

    ui->checkBox->setChecked(true);
    ui->checkBox_3->setChecked(true);

    QObject::connect(ui->spinBox, SIGNAL(valueChanged(int)), ui->horizontalSlider, SLOT(setValue(int)));
    QObject::connect(ui->spinBox_2, SIGNAL(valueChanged(int)), ui->horizontalSlider_2, SLOT(setValue(int)));
    QObject::connect(ui->spinBox_3, SIGNAL(valueChanged(int)), ui->horizontalSlider_3, SLOT(setValue(int)));
    QObject::connect(ui->spinBox_4, SIGNAL(valueChanged(int)), ui->horizontalSlider_4, SLOT(setValue(int)));
    QObject::connect(ui->spinBox_5, SIGNAL(valueChanged(int)), ui->horizontalSlider_5, SLOT(setValue(int)));
    QObject::connect(ui->spinBox_6, SIGNAL(valueChanged(int)), ui->horizontalSlider_6, SLOT(setValue(int)));
    QObject::connect(ui->spinBox_7, SIGNAL(valueChanged(int)), ui->horizontalSlider_7, SLOT(setValue(int)));
    QObject::connect(ui->spinBox_8, SIGNAL(valueChanged(int)), ui->horizontalSlider_8, SLOT(setValue(int)));
    QObject::connect(ui->spinBox_9, SIGNAL(valueChanged(int)), ui->horizontalSlider_9, SLOT(setValue(int)));
    QObject::connect(ui->spinBox_10, SIGNAL(valueChanged(int)), ui->horizontalSlider_10, SLOT(setValue(int)));
    QObject::connect(ui->spinBox_11, SIGNAL(valueChanged(int)), ui->horizontalSlider_11, SLOT(setValue(int)));
    QObject::connect(ui->spinBox_12, SIGNAL(valueChanged(int)), ui->horizontalSlider_12, SLOT(setValue(int)));



    QObject::connect(ui->horizontalSlider, SIGNAL(valueChanged(int)), ui->spinBox, SLOT(setValue(int)));
    QObject::connect(ui->horizontalSlider_2, SIGNAL(valueChanged(int)), ui->spinBox_2, SLOT(setValue(int)));
    QObject::connect(ui->horizontalSlider_3, SIGNAL(valueChanged(int)), ui->spinBox_3, SLOT(setValue(int)));
    QObject::connect(ui->horizontalSlider_4, SIGNAL(valueChanged(int)), ui->spinBox_4, SLOT(setValue(int)));
    QObject::connect(ui->horizontalSlider_5, SIGNAL(valueChanged(int)), ui->spinBox_5, SLOT(setValue(int)));
    QObject::connect(ui->horizontalSlider_6, SIGNAL(valueChanged(int)), ui->spinBox_6, SLOT(setValue(int)));
    QObject::connect(ui->horizontalSlider_7, SIGNAL(valueChanged(int)), ui->spinBox_7, SLOT(setValue(int)));
    QObject::connect(ui->horizontalSlider_8, SIGNAL(valueChanged(int)), ui->spinBox_8, SLOT(setValue(int)));
    QObject::connect(ui->horizontalSlider_9, SIGNAL(valueChanged(int)), ui->spinBox_9, SLOT(setValue(int)));
    QObject::connect(ui->horizontalSlider_10, SIGNAL(valueChanged(int)), ui->spinBox_10, SLOT(setValue(int)));
    QObject::connect(ui->horizontalSlider_11, SIGNAL(valueChanged(int)), ui->spinBox_11, SLOT(setValue(int)));
    QObject::connect(ui->horizontalSlider_12, SIGNAL(valueChanged(int)), ui->spinBox_12, SLOT(setValue(int)));

    QObject::connect(ui->checkBox_2, SIGNAL(clicked()), ui->horizontalSlider_12, SLOT(show()));
    QObject::connect(ui->checkBox_2, SIGNAL(clicked()), ui->spinBox_12, SLOT(show()));
    QObject::connect(ui->checkBox_2, SIGNAL(clicked()), ui->label_16, SLOT(show()));

    QObject::connect(ui->checkBox, SIGNAL(clicked()), ui->horizontalSlider_12, SLOT(hide()));
    QObject::connect(ui->checkBox, SIGNAL(clicked()), ui->spinBox_12, SLOT(hide()));
    QObject::connect(ui->checkBox, SIGNAL(clicked()), ui->label_16, SLOT(hide()));


    QObject::connect(ui->checkBox_2, SIGNAL(clicked()), ui->horizontalSlider_4, SLOT(hide()));
    QObject::connect(ui->checkBox_2, SIGNAL(clicked()), ui->horizontalSlider_5, SLOT(hide()));
    QObject::connect(ui->checkBox_2, SIGNAL(clicked()), ui->horizontalSlider_6, SLOT(hide()));
    QObject::connect(ui->checkBox_2, SIGNAL(clicked()), ui->horizontalSlider_7, SLOT(hide()));
    QObject::connect(ui->checkBox_2, SIGNAL(clicked()), ui->horizontalSlider_8, SLOT(hide()));
    QObject::connect(ui->checkBox_2, SIGNAL(clicked()), ui->horizontalSlider_10, SLOT(hide()));

    QObject::connect(ui->checkBox_2, SIGNAL(clicked()), ui->spinBox_4, SLOT(hide()));
    QObject::connect(ui->checkBox_2, SIGNAL(clicked()), ui->spinBox_5, SLOT(hide()));
    QObject::connect(ui->checkBox_2, SIGNAL(clicked()), ui->spinBox_6, SLOT(hide()));
    QObject::connect(ui->checkBox_2, SIGNAL(clicked()), ui->spinBox_7, SLOT(hide()));
    QObject::connect(ui->checkBox_2, SIGNAL(clicked()), ui->spinBox_8, SLOT(hide()));
    QObject::connect(ui->checkBox_2, SIGNAL(clicked()), ui->spinBox_10, SLOT(hide()));

    QObject::connect(ui->checkBox_2, SIGNAL(clicked()), ui->label_4, SLOT(hide()));
    QObject::connect(ui->checkBox_2, SIGNAL(clicked()), ui->label_5, SLOT(hide()));
    QObject::connect(ui->checkBox_2, SIGNAL(clicked()), ui->label_6, SLOT(hide()));
    QObject::connect(ui->checkBox_2, SIGNAL(clicked()), ui->label_7, SLOT(hide()));
    QObject::connect(ui->checkBox_2, SIGNAL(clicked()), ui->label_8, SLOT(hide()));
    QObject::connect(ui->checkBox_2, SIGNAL(clicked()), ui->label_10, SLOT(hide()));


    QObject::connect(ui->checkBox, SIGNAL(clicked()), ui->horizontalSlider_4, SLOT(show()));
    QObject::connect(ui->checkBox, SIGNAL(clicked()), ui->horizontalSlider_5, SLOT(show()));
    QObject::connect(ui->checkBox, SIGNAL(clicked()), ui->horizontalSlider_6, SLOT(show()));
    QObject::connect(ui->checkBox, SIGNAL(clicked()), ui->horizontalSlider_7, SLOT(show()));
    QObject::connect(ui->checkBox, SIGNAL(clicked()), ui->horizontalSlider_8, SLOT(show()));
    QObject::connect(ui->checkBox, SIGNAL(clicked()), ui->horizontalSlider_10, SLOT(show()));

    QObject::connect(ui->checkBox, SIGNAL(clicked()), ui->spinBox_4, SLOT(show()));
    QObject::connect(ui->checkBox, SIGNAL(clicked()), ui->spinBox_5, SLOT(show()));
    QObject::connect(ui->checkBox, SIGNAL(clicked()), ui->spinBox_6, SLOT(show()));
    QObject::connect(ui->checkBox, SIGNAL(clicked()), ui->spinBox_7, SLOT(show()));
    QObject::connect(ui->checkBox, SIGNAL(clicked()), ui->spinBox_8, SLOT(show()));
    QObject::connect(ui->checkBox, SIGNAL(clicked()), ui->spinBox_10, SLOT(show()));

    QObject::connect(ui->checkBox, SIGNAL(clicked()), ui->label_4, SLOT(show()));
    QObject::connect(ui->checkBox, SIGNAL(clicked()), ui->label_5, SLOT(show()));
    QObject::connect(ui->checkBox, SIGNAL(clicked()), ui->label_6, SLOT(show()));
    QObject::connect(ui->checkBox, SIGNAL(clicked()), ui->label_7, SLOT(show()));
    QObject::connect(ui->checkBox, SIGNAL(clicked()), ui->label_8, SLOT(show()));
    QObject::connect(ui->checkBox, SIGNAL(clicked()), ui->label_10, SLOT(show()));
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{
    double hwAverage;
    double examAverage;
    double grade;

    if(ui->checkBox->isChecked())
    {
            hwAverage =
                    ( ui->spinBox->value() +
                    ui->spinBox_2->value() +
                    ui->spinBox_3->value() +
                    ui->spinBox_4->value() +
                    ui->spinBox_5->value() +
                    ui->spinBox_6->value() +
                    ui->spinBox_7->value() +
                    ui->spinBox_8->value() )/8.0;


            if(ui->checkBox_3->isChecked())
            {
                examAverage = ( 0.2*ui->spinBox_9->value() +
                                0.2*ui->spinBox_10->value() +
                                0.35*ui->spinBox_11->value() )/(0.75);
                grade = 0.25*hwAverage + 0.75*examAverage;
            }
            else
            {
                if(ui->spinBox_9->value() > ui->spinBox_10->value())
                {
                    examAverage = (0.3*ui->spinBox_9->value() + 0.44*ui->spinBox_11->value())/0.74;
                }
                else
                {
                    examAverage = (0.3*ui->spinBox_10->value() + 0.44*ui->spinBox_11->value())/0.74;
                }
                grade = 0.25*hwAverage + 0.74*examAverage;

            }
    }
    else
    {
        hwAverage = (0.05*ui->spinBox->value() + 0.05*ui->spinBox_2->value() + 0.05*ui->spinBox_3->value() + 0.35*ui->spinBox_12->value())/0.5;
        if(ui->checkBox_3->isChecked())
        {
            examAverage = (0.25*ui->spinBox_9->value() + 0.3*ui->spinBox_11->value())/0.55;
            grade = 0.5*hwAverage + 0.55*examAverage;
        }
        else
        {
            examAverage = ui->spinBox_11->value();
            grade = 0.5*(hwAverage + examAverage);
        }
    }

    ui->lcdNumber->display(hwAverage);
    ui->lcdNumber_2->display(examAverage);
    ui->lcdNumber_3->display(grade);
}

void MainWindow::on_checkBox_clicked()
{
    ui->label_17->hide();
    ui->checkBox->setChecked(true);
    ui->checkBox_2->setChecked(false);
}

void MainWindow::on_checkBox_2_clicked()
{
    ui->label_17->show();
    ui->checkBox_2->setChecked(true);
    ui->checkBox->setChecked(false);
}

void MainWindow::on_checkBox_3_clicked()
{
    ui->checkBox_3->setChecked(true);
    ui->checkBox_4->setChecked(false);
}

void MainWindow::on_checkBox_4_clicked()
{
    ui->checkBox_4->setChecked(true);
    ui->checkBox_3->setChecked(false);
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->checkBox->click();
    ui->checkBox_3->click();
    ui->spinBox->setValue(0);
    ui->spinBox_2->setValue(0);
    ui->spinBox_3->setValue(0);
    ui->spinBox_4->setValue(0);
    ui->spinBox_5->setValue(0);
    ui->spinBox_6->setValue(0);
    ui->spinBox_7->setValue(0);
    ui->spinBox_8->setValue(0);
    ui->spinBox_9->setValue(0);
    ui->spinBox_10->setValue(0);
    ui->spinBox_11->setValue(0);
    ui->spinBox_12->setValue(0);
    ui->lcdNumber->display(0);
    ui->lcdNumber_2->display(0);
    ui->lcdNumber_3->display(0);
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->textBrowser->show();
    ui->pushButton_4->show();

    ui->label->hide();
    ui->label_2->hide();
    ui->label_3->hide();
    ui->label_4->hide();
    ui->label_5->hide();
    ui->label_6->hide();
    ui->label_7->hide();
    ui->label_8->hide();
    ui->label_9->hide();
    ui->label_10->hide();
    ui->label_11->hide();
    ui->label_12->hide();
    ui->label_14->hide();
    ui->label_15->hide();
    ui->label_16->hide();
    ui->label_17->hide();

    ui->spinBox->hide();
    ui->spinBox_2->hide();
    ui->spinBox_3->hide();
    ui->spinBox_4->hide();
    ui->spinBox_5->hide();
    ui->spinBox_6->hide();
    ui->spinBox_7->hide();
    ui->spinBox_8->hide();
    ui->spinBox_9->hide();
    ui->spinBox_10->hide();
    ui->spinBox_11->hide();
    ui->spinBox_12->hide();

    ui->horizontalSlider->hide();
    ui->horizontalSlider_2->hide();
    ui->horizontalSlider_3->hide();
    ui->horizontalSlider_4->hide();
    ui->horizontalSlider_5->hide();
    ui->horizontalSlider_6->hide();
    ui->horizontalSlider_7->hide();
    ui->horizontalSlider_8->hide();
    ui->horizontalSlider_9->hide();
    ui->horizontalSlider_10->hide();
    ui->horizontalSlider_11->hide();
    ui->horizontalSlider_12->hide();

    ui->line_3->hide();
    ui->line_4->hide();

    ui->pushButton->hide();
    ui->pushButton_2->hide();

    ui->lcdNumber->hide();
    ui->lcdNumber_2->hide();
    ui->lcdNumber_3->hide();

}

void MainWindow::on_pushButton_4_clicked()
{

    ui->textBrowser->hide();
    ui->pushButton_4->hide();

    ui->label->show();
    ui->label_2->show();
    ui->label_3->show();
    ui->label_4->show();
    ui->label_5->show();
    ui->label_6->show();
    ui->label_7->show();
    ui->label_8->show();
    ui->label_9->show();
    ui->label_10->show();
    ui->label_11->show();
    ui->label_12->show();
    ui->label_14->show();
    ui->label_15->show();
    ui->label_16->show();
    ui->label_17->show();

    ui->spinBox->show();
    ui->spinBox_2->show();
    ui->spinBox_3->show();
    ui->spinBox_4->show();
    ui->spinBox_5->show();
    ui->spinBox_6->show();
    ui->spinBox_7->show();
    ui->spinBox_8->show();
    ui->spinBox_9->show();
    ui->spinBox_10->show();
    ui->spinBox_11->show();
    ui->spinBox_12->show();

    ui->horizontalSlider->show();
    ui->horizontalSlider_2->show();
    ui->horizontalSlider_3->show();
    ui->horizontalSlider_4->show();
    ui->horizontalSlider_5->show();
    ui->horizontalSlider_6->show();
    ui->horizontalSlider_7->show();
    ui->horizontalSlider_8->show();
    ui->horizontalSlider_9->show();
    ui->horizontalSlider_10->show();
    ui->horizontalSlider_11->show();
    ui->horizontalSlider_12->show();
    if(ui->checkBox->isChecked()) ui->checkBox->click();
    if(ui->checkBox_2->isChecked()) ui->checkBox_2->click();

    ui->line_3->show();
    ui->line_4->show();

    ui->pushButton->show();
    ui->pushButton_2->show();

    ui->lcdNumber->show();
    ui->lcdNumber_2->show();
    ui->lcdNumber_3->show();
}
