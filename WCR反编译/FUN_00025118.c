// FUN_00025118 @ 00025118

void FUN_00025118(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long local_48;
  undefined4 local_40;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  lVar1 = local_20;
  FUN_0001a2e4();
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  lVar2 = local_30;
  if (lVar1 == 0) {
    lVar1 = local_28;
    FUN_00011760();
    _objc_retainAutoreleasedReturnValue();
    local_48 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
    lVar2 = local_48;
    if (lVar1 == 0) {
      lVar2 = local_28;
      FUN_00010978();
      _objc_retainAutoreleasedReturnValue();
      local_18 = lVar2;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = lVar2;
    }
    local_40 = 1;
    _objc_storeStrong(&local_48,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = lVar2;
    local_40 = 1;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

