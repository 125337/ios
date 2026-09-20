// FUN_00935084 @ 00935084

char * FUN_00935084(int param_1)

{
  char *local_8;
  
  if (param_1 == 4) {
    local_8 = "SIGILL";
  }
  else if (param_1 == 5) {
    local_8 = "SIGTRAP";
  }
  else if (param_1 == 6) {
    local_8 = "SIGABRT";
  }
  else if (param_1 == 8) {
    local_8 = "SIGFPE";
  }
  else if (param_1 == 10) {
    local_8 = "SIGBUS";
  }
  else if (param_1 == 0xb) {
    local_8 = "SIGSEGV";
  }
  else if (param_1 == 0xc) {
    local_8 = "SIGSYS";
  }
  else {
    local_8 = "SIGNAL";
  }
  return local_8;
}

