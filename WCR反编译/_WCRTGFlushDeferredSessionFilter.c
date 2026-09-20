// _WCRTGFlushDeferredSessionFilter @ 007ac528

void _WCRTGFlushDeferredSessionFilter(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  uint local_88;
  ulong local_50;
  ulong local_48;
  ulong local_40 [3];
  undefined *local_28;
  undefined4 local_1c;
  ulong local_18;
  
  if ((((DAT_028ccbf8 & 1) == 0) || (FUN_007ac894(), (param_1 & 1) == 0)) ||
     ((DAT_028ccbf9 & 1) != 0)) {
    DAT_028ccbf8 = 0;
  }
  else {
    DAT_028ccbf8 = 0;
    FUN_007ac8c8();
    _objc_retainAutoreleasedReturnValue();
    local_18 = param_1;
    if (param_1 == 0) {
      local_1c = 1;
    }
    else {
      puVar1 = PTR_WCRefineTelegramGroupingStore_026ce5a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineTelegramGroupingStore_026ce5a8,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_18;
      local_28 = puVar1;
      FUN_007aca00(local_18,PTR_s_topSessions_026a81b0,0);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_18;
      local_40[0] = uVar2;
      FUN_007aca00(local_18,PTR_s_allTopSessions_026a8100,0);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_18;
      local_48 = uVar3;
      FUN_007aca00(local_18,PTR_s_normalSessions_026a81b8,0);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_28;
      local_50 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isFilteringActive_026a30c8);
      local_88 = 1;
      if (((ulong)puVar1 & 1) == 0) {
        puVar1 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_88 = (uint)puVar4;
        (*(code *)PTR__objc_release_02578630)(puVar1);
      }
      if ((local_88 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_filterSessionArraysInPlaceTop_al_026a81c0,local_40[0],local_48,
                   local_50);
      }
      _objc_storeStrong(&local_50);
      _objc_storeStrong(&local_48,0);
      _objc_storeStrong(local_40,0);
      _objc_storeStrong(&local_28,0);
      local_1c = 0;
    }
    _objc_storeStrong(&local_18,0);
  }
  return;
}

