// FUN_0064212c @ 0064212c

bool FUN_0064212c(double param_1)

{
  bool bVar1;
  
  _CFAbsoluteTimeGetCurrent();
  bVar1 = 2.0 <= param_1 - DAT_028cbaa0;
  if (bVar1) {
    DAT_028cbaa0 = param_1;
  }
  return bVar1;
}

