// FUN_01587628 @ 01587628

byte FUN_01587628(undefined8 param_1,byte param_2)

{
  long lVar1;
  long lVar2;
  long local_30;
  byte local_21;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  local_21 = param_2;
  _objc_getAssociatedObject(local_20,DAT_028c5ed8);
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar1;
  if (lVar1 == 0) {
    local_11 = 0;
  }
  else {
    lVar1 = local_20;
    _objc_getAssociatedObject(local_20,DAT_028c5ee0);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar1);
    if (lVar2 == 1) {
      local_11 = local_21 & 1;
    }
    else {
      local_11 = (local_21 ^ 1) & 1;
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

