#ifndef KYSQL_APPLICATION_H
#define KYSQL_APPLICATION_H

#include <QApplication>
#include <QDebug>

#include "utils/logger.h"

#include "window/main_window.h"
#include "models/connection.h"

class Application : public QApplication
{
  Q_OBJECT

public:
  explicit Application(int argc, char ** argv);

  ~Application();
  int exec();

public:
  QString config_path;
  QString config_filename;

public:
  MainWindow main_window;
  QList<Connection*> connections;
};

#endif // KYSQL_APPLICATOIN_H
