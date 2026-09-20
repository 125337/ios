// FUN_007b0960 @ 007b0960

void FUN_007b0960(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  bool bVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong local_60;
  byte local_51;
  undefined *local_50;
  undefined1 *local_38;
  undefined1 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  FUN_007ac894();
  if ((param_1 & 1) == 0) {
    (*DAT_028ccc08)(local_18,local_20,local_28);
  }
  else {
    puVar5 = PTR_WCRefineTelegramGroupingStore_026ce5a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineTelegramGroupingStore_026ce5a8,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_30 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_selectedTab_026a2a78);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 0;
    local_38 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_hidePinned_026a30d0);
    bVar4 = true;
    if (((ulong)puVar5 & 1) == 0) {
      puVar6 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isFilteringActive_026a30c8);
      bVar4 = false;
      if (((ulong)puVar6 & 1) != 0) {
        puVar5 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        local_51 = 1;
        local_50 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar4 = true;
        if (((ulong)puVar5 & 1) == 0) {
          puVar6 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_kind_026a27e8);
          bVar4 = true;
          if (puVar6 != (undefined1 *)((long)&MACH_HEADER.cputype + 1)) {
            puVar6 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_kind_026a27e8);
            bVar4 = puVar6 == (undefined1 *)((long)&MACH_HEADER.magic + 2);
          }
        }
      }
    }
    if ((local_51 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    if (bVar4) {
      uVar7 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_allTopSessions_026a8100);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_18;
      uVar2 = local_20;
      pcVar1 = DAT_028ccc08;
      local_60 = uVar7;
      (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_count_0269cfe0);
      (*pcVar1)(uVar3,uVar2,uVar7);
      _objc_storeStrong(&local_60,0);
    }
    else {
      (*DAT_028ccc08)(local_18,local_20,local_28);
    }
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_30,0);
  }
  return;
}

