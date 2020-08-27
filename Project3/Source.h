#pragma once

#include <stdlib.h>
#include <iostream>


#include "mysql_connection.h"

#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include "mysql_driver.h" 
#include "mysql.h"

MYSQL_RES* db();