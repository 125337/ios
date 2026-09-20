// FUN_00224fd4 @ 00224fd4

void FUN_00224fd4(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = param_2 + 0x20;
  local_20 = param_2;
  local_18 = param_2;
  _objc_loadWeakRetained();
  local_28 = lVar1;
  if ((((lVar1 != 0) && (FUN_00223ce4(lVar1), 0.0 < param_1)) &&
      (dVar2 = ABS(param_1 - *(double *)(param_2 + 0x28)), dVar2 <= DAT_02323db0)) &&
     (_CACurrentMediaTime(), param_1 < dVar2)) {
    FUN_002250e0(local_28);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

