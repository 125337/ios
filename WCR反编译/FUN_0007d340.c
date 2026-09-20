// FUN_0007d340 @ 0007d340

void FUN_0007d340(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long local_60;
  byte local_51;
  long local_50;
  undefined4 local_48;
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  lVar1 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = lVar1;
  FUN_0007e51c();
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar1;
  if (lVar1 == 0) {
    if ((local_20 == 0) || (local_30 == 0)) {
      local_18 = 0;
      local_48 = 1;
    }
    else {
      lVar1 = local_20;
      FUN_0007e9dc();
      _objc_retainAutoreleasedReturnValue();
      local_50 = lVar1;
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
      if (lVar1 == 0) {
        local_18 = 0;
        local_48 = 1;
      }
      else {
        local_51 = 0;
        lVar1 = local_30;
        FUN_0007eb2c(local_30,local_20,0,local_50,&local_51);
        _objc_retainAutoreleasedReturnValue();
        local_60 = lVar1;
        if ((local_51 & 1) == 0) {
          local_18 = 0;
        }
        else {
          FUN_0007b310();
          _objc_retainAutoreleasedReturnValue();
          local_18 = lVar1;
        }
        local_48 = 1;
        _objc_storeStrong(&local_60,0);
      }
      _objc_storeStrong(&local_50,0);
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = 1;
    local_18 = lVar1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

