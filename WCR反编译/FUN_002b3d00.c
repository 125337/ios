// FUN_002b3d00 @ 002b3d00

byte FUN_002b3d00(double param_1,undefined8 param_2)

{
  long lVar1;
  double dVar2;
  long local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  lVar1 = local_20;
  _objc_getAssociatedObject(local_20,&DAT_028c9800);
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  if (lVar1 == 0) {
    local_11 = 0;
  }
  else {
    _CACurrentMediaTime();
    dVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_doubleValue_026ca608);
    if (dVar2 < param_1) {
      _objc_setAssociatedObject(local_20,&DAT_028c9800,0,1);
      local_11 = 0;
    }
    else {
      local_11 = 1;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

