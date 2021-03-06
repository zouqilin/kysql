#ifndef TEST_CONFIGURATION_H
#define TEST_CONFIGURATION_H

#include "../../test_helper.h"

#include "../src/utils/configuration.h"

class TestConfiguration: public QObject
{
  Q_OBJECT
private slots:
  void initTestCase();
  void cleanupTestCase();

private slots:
  void test_load();
  void test_save();
  void test_split_key();
  void test_is_exist();
  void test_key_exist();
  void test_key_get();
  void test_get_int();
  void test_get_string();

private:
  // helper methods
  Configuration* init_config();
};

#endif // TEST_CONFIGURATION_H
