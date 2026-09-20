// FUN_003fab0c @ 003fab0c

bool FUN_003fab0c(double param_1)

{
  double dVar1;
  bool bVar2;
  
  _CFAbsoluteTimeGetCurrent();
  bVar2 = 0.35 <= param_1 - DAT_028ca5c0;
  dVar1 = param_1;
  if (!bVar2) {
    dVar1 = DAT_028ca5c0;
  }
  DAT_028ca5c0 = dVar1;
  return bVar2;
}

