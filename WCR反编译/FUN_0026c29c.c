// FUN_0026c29c @ 0026c29c

void FUN_0026c29c(ulong param_1)

{
  ulong uVar1;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  undefined4 local_40;
  ulong local_30;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  uVar1 = param_1;
  local_20 = param_1;
  local_18 = param_1;
  FUN_0026a600();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_objectForKeyedSubscript__0269d098,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar1;
  if (uVar1 == 0) {
    local_40 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_objectForKeyedSubscript__0269d098,&cf_item);
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar1;
    FUN_0026c610();
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar1;
    if (uVar1 != 0) {
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_mutableCopy_0269d8a0);
      local_58 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_setObject_forKeyedSubscript__0269d248,local_50,&cf_item);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_setObject_forKeyedSubscript__0269d248,local_58,
                 *(undefined8 *)(param_1 + 0x20));
      _objc_storeStrong(&local_30,local_58);
      _objc_storeStrong(&local_48,local_50);
      _objc_storeStrong(&local_58,0);
    }
    uVar1 = local_48;
    FUN_00269ce0();
    if ((uVar1 & 1) == 0) {
      if (*(long *)(param_1 + 0x28) < 0x1ae) {
        FUN_0026aa80(*(undefined8 *)(param_1 + 0x20),*(long *)(param_1 + 0x28) + 1);
        local_40 = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_removeObjectForKey__0269d700,*(undefined8 *)(param_1 + 0x20));
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_6eeNN_ezT);
        FUN_0026c8d0(local_30,0);
        local_40 = 1;
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_removeObjectForKey__0269d700,*(undefined8 *)(param_1 + 0x20));
      FUN_0026c8d0(local_30,1);
      local_40 = 1;
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

