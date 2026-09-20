// FUN_0084f998 @ 0084f998

void FUN_0084f998(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_40 [3];
  ulong local_28;
  undefined4 local_1c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 == 0) {
    local_1c = 1;
  }
  else {
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_28 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_name_0269d828);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if ((uVar2 & 1) != 0) {
      uVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    FUN_00859200(local_18);
    uVar1 = local_18;
    FUN_0085959c();
    _objc_retainAutoreleasedReturnValue();
    local_40[0] = uVar1;
    if (uVar1 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000,uVar1,PTR_s_setAlpha__026ca860);
    }
    _objc_storeStrong(local_40);
    _objc_storeStrong(&local_28,0);
    local_1c = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

