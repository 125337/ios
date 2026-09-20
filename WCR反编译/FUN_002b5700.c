// FUN_002b5700 @ 002b5700

byte FUN_002b5700(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
  }
  else {
    uVar1 = local_20;
    _objc_getAssociatedObject(local_20,&DAT_028c9804);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if ((uVar2 & 1) == 0) {
      uVar1 = local_20;
      _objc_getAssociatedObject(local_20,&DAT_028c9805);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (uVar1 == 0) {
        local_11 = 0;
      }
      else {
        local_11 = 1;
      }
    }
    else {
      local_11 = 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

