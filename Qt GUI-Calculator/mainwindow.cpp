#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDebug>
#include<QString>
double firstNum,secondNum;
//bool userIsSecondNumberTyping=false;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton_Key_0,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_Key_1,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_Key_2,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_Key_3,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_Key_4,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_Key_5,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_Key_6,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_Key_7,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_Key_8,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_Key_9,SIGNAL(released()),this,SLOT(digit_pressed()));


   connect(ui->pushButton_Plus_Divide_Sign,SIGNAL(released()),this,SLOT( unary_operation_pressed()));
   connect(ui->pushButton_Percent_Sign,SIGNAL(released()),this,SLOT( unary_operation_pressed()));



   connect(ui->pushButton_Add_Sign,SIGNAL(released()),this,SLOT(binary_Operation_pressed()));
    connect(ui->pushButton_Mutiply, SIGNAL(released()),this,SLOT(binary_Operation_pressed()));
     connect(ui->pushButton_Minus_Sign, SIGNAL(released()),this,SLOT(binary_Operation_pressed()));
     connect(ui->pushButton_Divide, SIGNAL(released()),this,SLOT(binary_Operation_pressed()));



     ui->pushButton_Add_Sign->setCheckable(true);
     ui->pushButton_Minus_Sign->setCheckable(true);
     ui->pushButton_Mutiply->setCheckable(true);
     ui->pushButton_Divide->setCheckable(true);
    }




MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::digit_pressed()
{
 QPushButton *button=(QPushButton*)sender();
 //ui->label->setText(button->text());
 double labelNumber;
 QString newLabel;
 if((ui->pushButton_Divide->isChecked()||ui->pushButton_Add_Sign->isChecked()
         ||ui->pushButton_Mutiply->isChecked()||ui->pushButton_Minus_Sign->isChecked()  ))
 {
    labelNumber=   button->text().toDouble( );


 }
 else
 {


         labelNumber=(ui->label->text() +
                      button->text()).toDouble( );




 }
 newLabel=QString::number( labelNumber,'g',15);


 //newLabel=QString::number(labelNumber,'g',15);
 ui->label->setText(newLabel);

}

void MainWindow::on_pushButton_Key_Point_released()
{QString labelValue;
     labelValue= ui->label->text();
    if(labelValue.contains( "."))
    {
        ui->label->setText("oops,syntax error!");
    }
    else{
        ui->label->setText(ui->label->text()+".");


    }
}
    void MainWindow::unary_operation_pressed()
    {
       QPushButton *button =(QPushButton*)sender();
       double labelNumber;
       QString newLabel;
       if(button->text()=="+/-")
       {
           labelNumber=ui->label->text().toDouble();
           labelNumber=labelNumber*-1;
           newLabel=QString::number(labelNumber,'g',15);
          ui->label->setText(QString::number(firstNum)+"*"+QString::number(secondNum)+" = "+newLabel);

       }
       if(button->text()=="%")
       {
           labelNumber=ui->label->text().toDouble();
           labelNumber=labelNumber*0.001;
           newLabel=QString::number(labelNumber,'g',15);
          ui->label->setText(newLabel);

       }


    }





void MainWindow::on_pushButton_Clear_released()
{
   // ui->label->setText(" ");
    ui->pushButton_Add_Sign->setChecked(false);
    ui->pushButton_Divide->setChecked(false);
    ui->pushButton_Minus_Sign->setChecked(false);
    ui->pushButton_Mutiply->setChecked(false);
   // userIsSecondNumberTyping=false;
    ui->label->setText("0");
}

void MainWindow::on_pushButton_Equal_Sign_released()
{
    double labelNumber;
    QString newLabel;
    secondNum =ui->label->text().toDouble();


    if(ui->pushButton_Add_Sign->isChecked())
    {
        labelNumber=firstNum+secondNum;
        newLabel=QString::number(labelNumber,'g',15);
        ui->label->setText(QString::number(firstNum)+"+"+QString::number(secondNum)+" = "+newLabel);
ui->pushButton_Add_Sign->setChecked(false);
    }


   else  if(ui->pushButton_Divide->isChecked())
    {
       labelNumber=firstNum/secondNum;
       newLabel=QString::number(labelNumber,'g',15);
      ui->label->setText(QString::number(firstNum)+"/"+QString::number(secondNum)+" = "+newLabel);
ui->pushButton_Divide->setChecked(false);

    }



   else  if(ui->pushButton_Mutiply->isChecked())
    {
      //  ui->label->setText();
        labelNumber=firstNum*secondNum;

        newLabel=QString::number(labelNumber,'g',15);
        ui->label->setText(QString::number(firstNum)+"*"+QString::number(secondNum)+" = "+newLabel);
ui->pushButton_Mutiply->setChecked(false);

    }


    else  if(ui->pushButton_Minus_Sign->isChecked())
     {
         labelNumber=firstNum-secondNum;

         newLabel =QString::number(labelNumber,'g',15);
         ui->label->setText(newLabel);
         ui->pushButton_Minus_Sign->setChecked(false);
ui->label->setText(QString::number(firstNum)+"-"+QString::number(secondNum)+" = "+newLabel);
     }
  //  userIsSecondNumberTyping=false;


}
void MainWindow::binary_Operation_pressed()
{
    QPushButton *button= (QPushButton*)sender();
  firstNum=ui->label->text().toDouble();
    button->setChecked(true);
}
