// FUN_002b517c @ 002b517c

byte FUN_002b517c(undefined8 param_1)

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
    _objc_getAssociatedObject(local_20,&DAT_028c9802);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if ((uVar2 & 1) == 0) {
      uVar1 = local_20;
      _objc_getAssociatedObject(local_20,&DAT_028c9803);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_11 = (byte)uVar2 & 1;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    else {
      local_11 = 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

