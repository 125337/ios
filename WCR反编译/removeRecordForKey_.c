// removeRecordForKey: @ 00eb080c

/* Function Stack Size: 0x18 bytes */

void WCRefineAutoDownloadQuotaHelper::removeRecordForKey_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long local_90;
  ulong local_48;
  byte local_39;
  ulong local_38;
  int local_2c;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_2c = 1;
  }
  else {
    FUN_00ead8c0();
    _objc_retainAutoreleasedReturnValue();
    local_39 = 0;
    local_38 = uVar1;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(uVar1);
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,local_28)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar2;
    if (uVar2 == 0) {
      local_2c = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_removeObjectForKey__0269d700,local_28);
      uVar2 = local_38;
      FUN_00ead934();
      uVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_unsignedLongLongValue_0269d6b8);
      if (uVar3 < uVar2) {
        local_90 = uVar2 - uVar3;
      }
      else {
        local_90 = 0;
      }
      FUN_00eb0aac(local_90);
      local_39 = 1;
      local_2c = 0;
    }
    _objc_storeStrong(&local_48,0);
    if (local_2c == 0) {
      local_2c = 0;
    }
    _objc_sync_exit(uVar1);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (local_2c == 0) {
      if ((local_39 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_persistUsageCache_026ab1c0);
        puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
      local_2c = 0;
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

