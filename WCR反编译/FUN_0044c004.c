// FUN_0044c004 @ 0044c004

void FUN_0044c004(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_b8;
  ulong local_60;
  undefined4 local_54;
  ulong local_48;
  ulong local_40 [3];
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*DAT_028caab0)(local_18,local_20,local_28);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_40[0] = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if (local_40[0] != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_removeFromSuperview_026ca800);
  }
  uVar1 = local_28;
  FUN_0045e9e0();
  if ((uVar1 & 1) == 0) {
    uVar1 = local_18;
    FUN_0045f078();
    if ((uVar1 & 1) == 0) {
      local_48 = 0;
      uVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_48;
      local_48 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if (local_48 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setHidden__026ca970,1);
      }
      local_54 = 1;
      _objc_storeStrong(&local_48,0);
      goto LAB_0044c588;
    }
  }
  if (local_28 == 0) {
    local_b8 = 0;
  }
  else {
    local_b8 = local_28;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = local_b8;
  if (local_b8 == 0) {
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_valueForKey__0269d128,&cf_model);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_60;
    local_60 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  if (local_60 == 0) {
    local_54 = 1;
  }
  else {
    uVar1 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_respondsToSelector__026ca818,PTR_s_setShowDesc__026a3e88);
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setShowDesc__026a3e88,0);
    }
    uVar1 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_respondsToSelector__026ca818,PTR_s_setEnableOperation__026a3e90);
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setEnableOperation__026a3e90,1);
    }
    uVar1 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_respondsToSelector__026ca818,PTR_s_setShowButtons__026a3e98);
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setShowButtons__026a3e98,1);
    }
    uVar1 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_respondsToSelector__026ca818,PTR_s_setPageWrapPid__026a3ea0);
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_setPageWrapPid__026a3ea0,_WCRLocalEmoticonPid);
    }
    local_54 = 0;
  }
  _objc_storeStrong(&local_60,0);
LAB_0044c588:
  _objc_storeStrong(local_40);
  _objc_storeStrong(&local_28,0);
  return;
}

