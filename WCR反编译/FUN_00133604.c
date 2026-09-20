// FUN_00133604 @ 00133604

void FUN_00133604(undefined8 param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong local_38;
  ulong local_30;
  int local_28;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar2 = local_18;
  FUN_0012e2f4();
  uVar1 = (uint)uVar2;
  if ((uVar2 & 1) == 0) {
    FUN_0012e3fc();
    if ((uVar1 & 1) == 0) {
      local_28 = 1;
    }
    else {
      uVar2 = local_18;
      FUN_0012f0c4();
      _objc_retainAutoreleasedReturnValue();
      local_30 = uVar2;
      if ((uVar2 == 0) ||
         ((*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isHidden_026ca768), (uVar2 & 1) != 0)) {
        local_28 = 1;
      }
      else {
        uVar2 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_valueForKey__0269d128,&cf_viewModel);
        _objc_retainAutoreleasedReturnValue();
        local_38 = uVar2;
        if ((uVar2 == 0) ||
           ((*(code *)PTR__objc_msgSend_02578628)
                      (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_isSender_0269d1b0),
           (uVar2 & 1) == 0)) {
          local_28 = 1;
        }
        else {
          uVar2 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isSender_0269d1b0);
          FUN_001316c4(local_18,local_30,(uint)uVar2 & 1);
          local_28 = 0;
        }
        _objc_storeStrong(&local_38,0);
      }
      _objc_storeStrong(&local_30,0);
      if (local_28 == 0) {
        local_28 = 0;
      }
    }
  }
  else {
    local_28 = 1;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

