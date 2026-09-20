// FUN_0157aea8 @ 0157aea8

void FUN_0157aea8(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 local_48;
  ulong local_40;
  undefined4 local_34;
  ulong local_30;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  uVar2 = param_1;
  local_20 = param_1;
  local_18 = param_1;
  FUN_01563370();
  _objc_retainAutoreleasedReturnValue();
  local_30 = 0;
  local_28 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getChatContact_0269d630);
  if ((uVar2 & 1) != 0) {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_getChatContact_0269d630);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_30;
    local_30 = uVar1;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  if ((local_30 == 0) &&
     (uVar2 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_GetContact_0269d2c0),
     (uVar2 & 1) != 0)) {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_GetContact_0269d2c0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_30;
    local_30 = uVar1;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  uVar2 = *(ulong *)(param_1 + 0x20);
  FUN_01564574();
  if ((uVar2 & 1) == 0) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    FUN_0157b4bc();
    if ((uVar2 & 1) == 0) {
      FUN_015611fc();
      _objc_retainAutoreleasedReturnValue();
      local_40 = uVar2;
      if (uVar2 == 0) {
        local_34 = 1;
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + 0x20);
        (*(code *)PTR__objc_retain_02578638)();
        local_48 = uVar3;
        if ((local_30 == 0) || (uVar2 = local_30, FUN_01564574(), (uVar2 & 1) == 0)) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,
                     &cf_S_MRN_W_Jel_yr_YS);
          local_34 = 1;
        }
        else {
          _objc_storeStrong(&local_48,local_30);
          FUN_01560ee4(local_48,local_40);
          FUN_0157b188();
          FUN_0157b6ec(&cf__,5);
          local_34 = 0;
        }
        _objc_storeStrong(&local_48,0);
      }
      _objc_storeStrong(&local_40,0);
    }
    else {
      local_34 = 1;
    }
  }
  else if ((local_30 == 0) || (uVar2 = local_30, FUN_01564574(), (uVar2 & 1) == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MRN_W_Jel_yr);
    local_34 = 1;
  }
  else {
    FUN_0157b188();
    FUN_0157b3cc();
    if ((uVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__bXTS1Y_);
      local_34 = 1;
    }
    else {
      local_34 = 1;
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

