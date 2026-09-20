// trimUsageCacheIfNeeded: @ 00eb0b78

/* Function Stack Size: 0x18 bytes */

void WCRefineAutoDownloadQuotaHelper::trimUsageCacheIfNeeded_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_58;
  uint local_4c;
  undefined *local_48;
  SEL local_40;
  ID local_38;
  undefined *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined *local_18;
  
  local_48 = (undefined *)0x0;
  local_40 = param_2;
  local_38 = param_1;
  _objc_storeStrong(&local_48,param_3);
  puVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0);
  if (&DAT_00003a98 < puVar2) {
    puVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_allKeys_0269ef58);
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_count_0269cfe0);
    puVar2 = local_48;
    local_30 = puVar3 + -0x1d4c;
    local_28 = 0;
    local_20 = 0;
    bVar1 = local_30 != (undefined *)0x0;
    local_18 = local_30;
    if (bVar1) {
      puVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_subarrayWithRange__0269d848,0,local_30);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_removeObjectsForKeys__026a35f0);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      FUN_00eb0cf4(local_48);
      FUN_00eb0aac();
    }
    local_4c = (uint)!bVar1;
    _objc_storeStrong(&local_58,0);
  }
  else {
    local_4c = 1;
  }
  _objc_storeStrong(&local_48,0);
  return;
}

