// FUN_00035870 @ 00035870

byte FUN_00035870(undefined8 param_1,byte param_2)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  undefined *local_118;
  bool local_79;
  undefined *local_78;
  undefined *local_70;
  char *local_68;
  undefined4 local_5c;
  ulong local_58 [3];
  ulong local_40;
  byte local_31;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  uVar1 = local_30;
  local_31 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_nativeUrl);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_0003102c();
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_session);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_0003102c();
  _objc_retainAutoreleasedReturnValue();
  local_58[0] = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_58[0];
  FUN_000366f8();
  if ((uVar1 & 1) == 0) {
    local_21 = 0;
    local_5c = 1;
  }
  else if ((local_31 & 1) == 0) {
    uVar1 = local_58[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_length_0269cca0);
    if (uVar1 == 0) {
      local_21 = 0;
      local_5c = 1;
    }
    else {
      uVar1 = local_30;
      FUN_00036aec();
      local_21 = (byte)uVar1 & 1;
      local_5c = 1;
    }
  }
  else {
    uVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    if ((uVar1 == 0) ||
       (uVar1 = local_58[0],
       (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_length_0269cca0), uVar1 == 0)) {
      local_21 = 0;
      local_5c = 1;
    }
    else {
      pcVar3 = "WCPayControlMgr";
      _objc_getClass();
      FUN_000323ec();
      _objc_retainAutoreleasedReturnValue();
      local_68 = pcVar3;
      if ((pcVar3 == (char *)0x0) ||
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar3,PTR_s_respondsToSelector__026ca818,
                     PTR_s_startTransferMoneyDetailLogic_na_0269d690), ((ulong)pcVar3 & 1) == 0)) {
        local_21 = 0;
        local_5c = 1;
      }
      else {
        local_79 = (local_31 & 1) == 0;
        if (local_79) {
          local_118 = (undefined *)0x0;
        }
        else {
          local_118 = PTR_WCRefineHelper_026ce000;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
          _objc_retainAutoreleasedReturnValue();
          local_78 = local_118;
        }
        local_79 = !local_79;
        (*(code *)PTR__objc_retain_02578638)();
        local_70 = local_118;
        if (local_79) {
          (*(code *)PTR__objc_release_02578630)(local_78);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_startTransferMoneyDetailLogic_na_0269d690,local_70,local_40,
                   local_58[0],0);
        local_21 = 1;
        local_5c = 1;
        _objc_storeStrong(&local_70,0);
      }
      _objc_storeStrong(&local_68,0);
    }
  }
  _objc_storeStrong(local_58);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

