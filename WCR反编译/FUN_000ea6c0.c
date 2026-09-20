// FUN_000ea6c0 @ 000ea6c0

void FUN_000ea6c0(undefined8 param_1,byte param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_30;
  undefined4 local_28;
  byte local_21;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_21 = param_2;
  if (local_20 == 0) {
    local_18 = 0;
    local_28 = 1;
  }
  else {
    local_30 = 0;
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_valueForKey__0269d128,&cf_m_oMsgSearchHelper);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_30;
    local_30 = uVar1;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if ((local_30 == 0) && ((local_21 & 1) != 0)) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_initMsgSearchHelper__0269ea40);
      if ((uVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_initMsgSearchHelper__0269ea40,0);
        uVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_valueForKey__0269d128,&cf_m_oMsgSearchHelper);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_30;
        local_30 = uVar1;
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
    }
    uVar2 = local_30;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar2;
    local_28 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

