// FUN_0007c508 @ 0007c508

byte FUN_0007c508(undefined8 param_1)

{
  long lVar1;
  long local_30;
  undefined4 local_24;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    lVar1 = local_20;
    FUN_0007e51c();
    _objc_retainAutoreleasedReturnValue();
    local_11 = 0;
    local_30 = lVar1;
    if (lVar1 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      local_11 = lVar1 != 0;
      (*(code *)PTR__objc_release_02578630)(lVar1);
    }
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

