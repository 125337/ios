// FUN_01cd81bc @ 01cd81bc

void FUN_01cd81bc(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if ((local_20 == 0) ||
     (uVar1 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     uVar1 == 0)) {
    uVar1 = local_28;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar1;
  }
  else {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
    uVar1 = local_20;
    if (uVar2 < 0xd) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_substringToIndex__0269d6c0,0xc);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_18 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

