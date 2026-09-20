// FUN_007b1b6c @ 007b1b6c

void FUN_007b1b6c(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  FUN_007ac894();
  if ((param_1 & 1) == 0) {
    (*DAT_028ccc40)(local_18,local_20);
  }
  else {
    FUN_007b4b00();
    if ((param_1 & 1) == 0) {
      puVar1 = PTR_WCRefineTelegramGroupingStore_026ce5a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineTelegramGroupingStore_026ce5a8,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_28 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_selectedTab_026a2a78);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      if (((uint)puVar2 >> 6 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_invalidateUnreadBadgeCache_026a81c8);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_invalidateFilteredSessionCache_026a2fc0);
      }
      (*DAT_028ccc40)(local_18,local_20);
      FUN_007ad034(local_18);
      _objc_storeStrong(&local_28,0);
    }
    else {
      (*DAT_028ccc40)(local_18,local_20);
    }
  }
  return;
}

