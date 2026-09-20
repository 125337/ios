// FUN_006b8b54 @ 006b8b54

void FUN_006b8b54(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_38;
  ulong local_30;
  uint local_28;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if ((local_18 == 0) || (uVar1 = local_18, FUN_006b8e24(), (uVar1 & 1) == 0)) {
    local_28 = 1;
  }
  else if ((DAT_028cc1a0 & 1) == 0) {
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    FUN_006b9234();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    local_28 = 1;
  }
  else {
    FUN_006b97b0();
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar1;
    if (uVar1 != 0) {
      uVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_18;
      local_38 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      FUN_006b98dc();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      _objc_storeStrong(&local_38,0);
    }
    else {
      uVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      FUN_006b9234();
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    local_28 = (uint)(uVar1 == 0);
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

