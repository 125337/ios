// FUN_0088d498 @ 0088d498

void FUN_0088d498(undefined8 param_1)

{
  ulong uVar1;
  ulong local_48;
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
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_valueForKey__0269d128,&cf_m_unreadImageView);
    _objc_retainAutoreleasedReturnValue();
    local_28 = uVar1;
    if (uVar1 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isHidden_026ca768);
      if ((uVar1 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setHidden__026ca970,1);
      }
    }
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_valueForKey__0269d128,&cf_m_quickTransTipButton);
    _objc_retainAutoreleasedReturnValue();
    local_40[0] = uVar1;
    if (uVar1 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isHidden_026ca768);
      if ((uVar1 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_setHidden__026ca970,1);
      }
    }
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_valueForKey__0269d128,&cf_transTipButtonContainer);
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar1;
    if (uVar1 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isHidden_026ca768);
      if ((uVar1 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setHidden__026ca970,1);
      }
    }
    _objc_storeStrong(&local_48);
    _objc_storeStrong(local_40,0);
    _objc_storeStrong(&local_28,0);
    local_1c = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

