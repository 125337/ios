// FUN_0171945c @ 0171945c

byte FUN_0171945c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong local_58 [3];
  int local_3c;
  ulong local_38;
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  if ((local_30 == 0) || (local_38 == 0)) {
    local_11 = 0;
    local_3c = 1;
  }
  else {
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (uVar2 == 0) {
      local_11 = 0;
      local_3c = 1;
    }
    else {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_topViewController_0269e588);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_38;
      (*(code *)PTR__objc_release_02578630)();
      if (uVar2 == uVar1) {
        uVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_visibleViewController_0269d460)
        ;
        if ((uVar1 & 1) != 0) {
          uVar1 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_visibleViewController_0269d460);
          _objc_retainAutoreleasedReturnValue();
          if ((uVar1 == 0) || (uVar1 == local_38)) {
            uVar3 = 0;
            local_3c = 0;
          }
          else {
            uVar3 = 1;
            local_11 = 0;
            local_3c = 1;
          }
          local_58[0] = uVar1;
          _objc_storeStrong(uVar3,local_58,0);
          if (local_3c != 0) goto LAB_017196f0;
        }
        local_11 = 1;
        local_3c = 1;
      }
      else {
        local_11 = 0;
        local_3c = 1;
      }
    }
  }
LAB_017196f0:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

