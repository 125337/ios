// FUN_006130bc @ 006130bc

void FUN_006130bc(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_18 = 0;
    local_30 = 1;
  }
  else {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_hasPrefix__0269d320,&cf__);
    uVar1 = local_20;
    if ((uVar2 & 1) == 0) {
      uVar2 = 9;
      _NSSearchPathForDirectoriesInDomains(9,1,1);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_38 = uVar1;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
      if (uVar1 == 0) {
        local_18 = 0;
      }
      else {
        uVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_stringByAppendingPathComponent__026cab30,local_20);
        _objc_retainAutoreleasedReturnValue();
        local_18 = uVar1;
      }
      local_30 = 1;
      _objc_storeStrong(&local_38,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar1;
      local_30 = 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

