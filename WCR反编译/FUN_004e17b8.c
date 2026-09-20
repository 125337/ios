// FUN_004e17b8 @ 004e17b8

byte FUN_004e17b8(double param_1,undefined8 param_2)

{
  ulong uVar1;
  double dVar2;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar1 = local_20;
  _objc_getAssociatedObject(local_20,&DAT_028cadf4);
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_doubleValue_026ca608);
  if ((uVar1 & 1) == 0) {
    local_11 = 0;
  }
  else {
    _CFAbsoluteTimeGetCurrent();
    dVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_doubleValue_026ca608);
    if (dVar2 <= param_1) {
      _objc_setAssociatedObject(local_20,&DAT_028cadf4,0,1);
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

