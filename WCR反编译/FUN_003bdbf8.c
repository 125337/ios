// FUN_003bdbf8 @ 003bdbf8

void FUN_003bdbf8(undefined8 param_1,byte param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_60;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  undefined4 local_20;
  byte local_19;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  local_19 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_20 = 1;
  }
  else if (((local_19 & 1) == 0) || (uVar1 = local_18, FUN_003bda5c(), (uVar1 & 1) == 0)) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_homeGroupingExcludeSessions_026a2be0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_60 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      local_38 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_38;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = local_60;
    if (puVar3 == (undefined *)0x0) {
      (*(code *)PTR__objc_release_02578630)(local_38);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_removeObject__0269d678,local_18);
    if ((local_19 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_addObject__0269d180,local_18);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_setHomeGroupingExcludeSessionsEn_026a2ef0,1);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_setHomeGroupingExcludeSessions__026a2ef8,local_30);
    _objc_storeStrong(&local_30);
    _objc_storeStrong(&local_28,0);
    local_20 = 0;
  }
  else {
    FUN_003bdb54(0);
    local_20 = 1;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

