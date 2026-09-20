// FUN_00017874 @ 00017874

void FUN_00017874(undefined8 param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_110;
  undefined *local_c0;
  undefined *local_a8;
  undefined *local_78;
  byte local_69;
  undefined *local_68;
  byte local_59;
  undefined *local_58;
  undefined *local_50;
  undefined4 local_48;
  char *local_38;
  undefined *local_30;
  undefined *local_28;
  
  local_30 = (undefined *)0x0;
  _objc_storeStrong(&local_30,param_1);
  pcVar1 = "BaseMsgContentViewController";
  _objc_getClass();
  puVar2 = local_30;
  local_38 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isKindOfClass__0269cd68,pcVar1);
  puVar3 = local_30;
  if (((ulong)puVar2 & 1) == 0) {
    FUN_0001a198(local_30,PTR_s_baseMsgContentViewController_0269d2c8);
    _objc_retainAutoreleasedReturnValue();
    local_59 = 0;
    local_69 = 0;
    local_a8 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      local_c0 = local_30;
      FUN_0001a198(local_30,PTR_s_GetCurrentViewController_0269d2d0);
      _objc_retainAutoreleasedReturnValue();
      local_59 = 1;
      local_58 = local_c0;
      if (local_c0 == (undefined *)0x0) {
        local_c0 = local_30;
        FUN_0001a198(local_30,PTR_s_m_delegate_0269d0e0);
        _objc_retainAutoreleasedReturnValue();
        local_69 = 1;
        local_68 = local_c0;
      }
      local_a8 = local_c0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_a8;
    if ((local_69 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    if ((local_59 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isKindOfClass__0269cd68,local_38);
    puVar3 = local_50;
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = local_50;
      FUN_0001a198(local_50,PTR_s_m_delegate_0269d0e0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_50;
      local_50 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isKindOfClass__0269cd68,local_38);
      puVar3 = local_50;
      if (((ulong)puVar2 & 1) == 0) {
        puVar3 = PTR_WCRefineHelper_026ce000;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
        _objc_retainAutoreleasedReturnValue();
        local_78 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,local_38);
        if (((ulong)puVar3 & 1) == 0) {
          local_110 = (undefined *)0x0;
        }
        else {
          local_110 = local_78;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = local_110;
        local_48 = 1;
        _objc_storeStrong(&local_78,0);
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = puVar3;
        local_48 = 1;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = puVar3;
      local_48 = 1;
    }
    _objc_storeStrong(&local_50,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar3;
    local_48 = 1;
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

