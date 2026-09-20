// FUN_007b4010 @ 007b4010

void FUN_007b4010(undefined8 param_1)

{
  undefined8 uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *local_50;
  undefined *local_48;
  undefined4 local_40;
  ulong local_30;
  cfstringStruct *local_28;
  undefined *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  uVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_userInfo_0269f138);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar4);
  (*(code *)PTR__objc_release_02578630)();
  uVar2 = (uint)uVar3;
  if ((uVar5 & 1) == 0) {
    FUN_007ac894();
    if ((uVar2 & 1) == 0) {
      local_40 = 1;
    }
    else {
      puVar6 = PTR_WCRefineTelegramGroupingStore_026ce5a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineTelegramGroupingStore_026ce5a8,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_48 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_invalidateFilteredSessionCache_026a2fc0);
      puVar6 = &DAT_028ccbe8;
      _objc_loadWeakRetained();
      puVar7 = puVar6;
      _objc_getAssociatedObject();
      _objc_retainAutoreleasedReturnValue();
      local_50 = puVar7;
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_reloadTabs_026a8240);
      puVar6 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isFilteringActive_026a30c8);
      if (((ulong)puVar6 & 1) != 0) {
        FUN_007b9b78();
        puVar6 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = _WCRefineHomeGroupsDidChangeNotification;
        local_28 = &cf_wcrTelegramTabChanged;
        puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_20 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_20,&local_28,1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar6,PTR_s_postNotificationName_object_user_026a1e90,uVar1,0);
        (*(code *)PTR__objc_release_02578630)(puVar8);
        (*(code *)PTR__objc_release_02578630)(puVar7);
        (*(code *)PTR__objc_release_02578630)(puVar6);
      }
      _objc_storeStrong(&local_50);
      _objc_storeStrong(&local_48,0);
      local_40 = 0;
    }
  }
  else {
    local_40 = 1;
  }
  _objc_storeStrong(&local_30,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

