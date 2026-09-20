// FUN_007b047c @ 007b047c

void FUN_007b047c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  uint local_d0;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined4 local_38;
  ulong local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulong *puVar2;
  
  puVar2 = &local_28;
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(puVar2,param_3);
  uVar1 = (uint)puVar2;
  FUN_007ac894();
  uVar4 = local_28;
  if (((uVar1 & 1) == 0) || ((DAT_028ccbf9 & 1) != 0)) {
    (*DAT_028ccc00)(local_18,local_20,local_28);
    local_38 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
    uVar5 = local_28;
    if ((uVar4 & 1) != 0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
      if ((uVar5 & 1) == 0) {
        uVar5 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_mutableCopy_0269d8a0);
        uVar4 = local_28;
        local_28 = uVar5;
        (*(code *)PTR__objc_release_02578630)(uVar4);
      }
    }
    uVar6 = local_18;
    (*DAT_028ccc00)(local_18,local_20,local_28);
    uVar1 = (uint)uVar6;
    FUN_007b4b00();
    if ((uVar1 & 1) == 0) {
      DAT_028ccbf8 = 0;
      puVar3 = PTR_WCRefineTelegramGroupingStore_026ce5a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineTelegramGroupingStore_026ce5a8,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = local_18;
      local_40 = puVar3;
      FUN_007aca00(local_18,PTR_s_topSessions_026a81b0,PTR_s_setTopSessions__026a2ff0);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = local_18;
      local_48 = uVar6;
      FUN_007aca00(local_18,PTR_s_allTopSessions_026a8100,PTR_s_setAllTopSessions__026a2fe8);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = local_18;
      local_50 = uVar7;
      FUN_007aca00(local_18,PTR_s_normalSessions_026a81b8,0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_40;
      local_58 = uVar6;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isFilteringActive_026a30c8);
      local_d0 = 1;
      if (((ulong)puVar3 & 1) == 0) {
        puVar3 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_d0 = (uint)puVar8;
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      if ((local_d0 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_filterSessionArraysInPlaceTop_al_026a81c0,local_48,local_50,
                   local_58);
      }
      _objc_storeStrong(&local_58);
      _objc_storeStrong(&local_50,0);
      _objc_storeStrong(&local_48,0);
      _objc_storeStrong(&local_40,0);
      local_38 = 0;
    }
    else {
      DAT_028ccbf8 = 1;
      local_38 = 1;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

