// FUN_007b3ad0 @ 007b3ad0

void FUN_007b3ad0(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *local_50;
  undefined *local_48;
  undefined4 local_3c;
  ulong local_38;
  undefined *local_30 [3];
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  FUN_007b0308();
  puVar2 = &DAT_028ccbe8;
  _objc_loadWeakRetained();
  uVar3 = local_18;
  local_30[0] = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_userInfo_0269f138);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar4;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  uVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_enabled);
  uVar1 = (uint)uVar3;
  if ((uVar3 & 1) == 0) {
    FUN_007ac894();
    if ((uVar1 & 1) == 0) {
      local_3c = 1;
    }
    else {
      uVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_selection);
      if ((uVar3 & 1) == 0) {
        uVar3 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_settings)
        ;
        if ((uVar3 & 1) == 0) {
          puVar2 = PTR_WCRefineTelegramGroupingStore_026ce5a8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineTelegramGroupingStore_026ce5a8,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar2;
          local_48 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_selectedTab_026a2a78);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_tabForId__026a8278);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)();
          (*(code *)PTR__objc_release_02578630)(puVar6);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          if (puVar2 == (undefined *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_selectTabId__026a8280,&cf_all);
            FUN_007b6b44(0,&cf_all,0);
          }
          puVar2 = local_30[0];
          _objc_getAssociatedObject(local_30[0],DAT_026f4658);
          _objc_retainAutoreleasedReturnValue();
          local_50 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_reloadTabs_026a8240);
          puVar2 = local_30[0];
          FUN_007b8ad4();
          if (((ulong)puVar2 & 1) == 0) {
            FUN_007b9b78();
          }
          FUN_007bd2a8(local_30[0]);
          _objc_storeStrong(&local_50);
          _objc_storeStrong(&local_48,0);
          local_3c = 0;
        }
        else {
          FUN_007bdf10(local_30[0]);
          local_3c = 1;
        }
      }
      else {
        local_3c = 1;
      }
    }
  }
  else {
    FUN_007bde54(local_30[0]);
    local_3c = 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(local_30,0);
  _objc_storeStrong(&local_18,0);
  return;
}

