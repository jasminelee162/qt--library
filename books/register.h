﻿#ifndef REGISTER_H
#define REGISTER_H

#include <QWidget>

namespace Ui {
class Register;
}

class Register : public QWidget
{
  Q_OBJECT

public:
  explicit Register(QWidget *parent = nullptr);
  ~Register();

private slots:
  void on_pushButton_clicked();

  void on_pushButton_2_clicked();

private:
  Ui::Register *ui;
};

#endif // REGISTER_H
