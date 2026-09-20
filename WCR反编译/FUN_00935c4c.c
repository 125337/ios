// FUN_00935c4c @ 00935c4c

char * FUN_00935c4c(int param_1)

{
  char *local_8;
  
  if (param_1 == 1) {
    local_8 = "EXC_BAD_ACCESS";
  }
  else if (param_1 == 2) {
    local_8 = "EXC_BAD_INSTRUCTION";
  }
  else if (param_1 == 3) {
    local_8 = "EXC_ARITHMETIC";
  }
  else if (param_1 == 5) {
    local_8 = "EXC_SOFTWARE";
  }
  else if (param_1 == 6) {
    local_8 = "EXC_BREAKPOINT";
  }
  else if (param_1 == 10) {
    local_8 = "EXC_CRASH";
  }
  else {
    local_8 = "EXC";
  }
  return local_8;
}

