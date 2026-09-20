// FUN_00546a48 @ 00546a48

void FUN_00546a48(undefined8 param_1,byte param_2)

{
  long lVar1;
  long local_28;
  undefined4 local_20;
  byte local_19;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_19 = param_2;
  if (local_18 == 0) {
    local_20 = 1;
  }
  else {
    lVar1 = local_18;
    FUN_00546750();
    _objc_retainAutoreleasedReturnValue();
    local_28 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
    if (lVar1 == 0) {
      local_20 = 1;
    }
    else {
      if ((local_19 & 1) == 0) {
        FUN_00550cf8();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(lVar1);
      }
      else {
        FUN_00550cf8();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(lVar1);
      }
      local_20 = 0;
    }
    _objc_storeStrong(&local_28,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

