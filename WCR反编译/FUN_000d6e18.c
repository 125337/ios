// FUN_000d6e18 @ 000d6e18

void FUN_000d6e18(double param_1,double param_2,ulong param_3,undefined8 param_4,undefined8 param_5)

{
  ulong uVar1;
  ulong local_98;
  ulong local_48;
  ulong local_40;
  undefined4 local_38;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_4;
  local_18 = param_3;
  _objc_storeStrong(&local_28,param_5);
  uVar1 = local_18;
  FUN_000ea268();
  if ((uVar1 & 1) == 0) {
    local_38 = 1;
  }
  else {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20);
    if (uVar1 == 3) {
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      local_98 = uVar1;
      if (uVar1 == 0) {
        local_48 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        local_98 = local_48;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_40 = local_98;
      if (uVar1 == 0) {
        (*(code *)PTR__objc_release_02578630)(local_48);
      }
      (*(code *)PTR__objc_release_02578630)(uVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_translationInView__026cabb0,local_40);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_velocityInView__026cabd0,local_40);
      if ((44.0 < param_1) || (260.0 < param_2)) {
        FUN_000e9c18(local_18);
      }
      _objc_storeStrong(&local_40,0);
      local_38 = 0;
    }
    else {
      local_38 = 1;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

