#ifndef CONNECTION_WINDOW_H
#define CONNECTION_WINDOW_H

#include <QWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QFormLayout>
#include <QHBoxLayout>

#include "../utils/logger.h"

#include "../models/connection.h"

class ConnectionWindow : public QWidget {
  Q_OBJECT

 public:
  explicit ConnectionWindow(QWidget *parent = Q_NULLPTR, Qt::WindowFlags f = Qt::WindowFlags());
  ~ConnectionWindow();

 public:
  void init_widget(Connection *connection);
  void set_connection_properties();

 public:
  Connection *connection;

  public slots:
  void save_connection();

 private:
 QLineEdit *txt_connection_name;
 QLineEdit *txt_connection_host;
 QLineEdit *txt_connection_port;
 QLineEdit *txt_connection_username;
 QLineEdit *txt_connection_password;
};

#endif // CONNECTION_WINDOW_H
