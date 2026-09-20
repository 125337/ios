// FUN_003731a8 @ 003731a8

void FUN_003731a8(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  byte local_42;
  byte local_41;
  undefined *local_40;
  undefined *local_38;
  undefined4 local_2c;
  undefined8 local_28;
  ulong local_20;
  undefined8 local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  uVar1 = local_20;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_userInfo_0269f138);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if ((uVar3 & 1) == 0) {
    FUN_00373560();
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_homeSessionGroupingStyleMode_026a2890);
    local_41 = -1 < (long)DAT_026e0260 && DAT_026e0260 != puVar4;
    uVar1 = local_20;
    local_40 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_userInfo_0269f138);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    local_42 = (byte)uVar3;
    if ((local_41 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_setHomeGroupingInlineExpandedGro_026a2898,&cf___);
    }
    DAT_026e0260 = local_40;
    puVar4 = &DAT_028ca0d0;
    _objc_loadWeakRetained();
    local_58 = PTR_s_wcrGrouping_scheduleRefreshForTr_026a28a0;
    local_50 = puVar4;
    if (puVar4 != (undefined *)0x0) {
      if (((local_41 & 1) == 0) && ((local_42 & 1) == 0)) {
        FUN_003736ec(puVar4);
      }
      else {
        FUN_00373608(puVar4);
      }
      puVar4 = local_50;
      _WCRGroupingState();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_60 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_storeStrong(&local_60,0);
    }
    if ((local_50 == (undefined *)0x0) ||
       (puVar4 = local_38,
       (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_homeSessionGroupingEnabled_026a2888),
       ((ulong)puVar4 & 1) != 0)) {
      if ((local_50 != (undefined *)0x0) &&
         (puVar4 = local_50,
         (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_respondsToSelector__026ca818,local_58)
         , ((ulong)puVar4 & 1) != 0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_50,local_58,&cf_groupsChanged);
      }
    }
    else {
      FUN_0037395c(local_50,&cf_groupsDisabled);
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  else {
    local_2c = 1;
  }
  _objc_storeStrong(&local_20,0);
  return;
}

