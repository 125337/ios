// FUN_00610820 @ 00610820

undefined1 FUN_00610820(double param_1,double *param_2)

{
  double dVar1;
  undefined1 local_11;
  
  if (param_2 == (double *)0x0) {
    local_11 = 0;
  }
  else {
    dVar1 = param_1;
    _CFAbsoluteTimeGetCurrent();
    if (dVar1 - *param_2 < param_1) {
      local_11 = 0;
    }
    else {
      *param_2 = dVar1;
      local_11 = 1;
    }
  }
  return local_11;
}

