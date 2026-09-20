// recordDownloadForKey:wrap:kind: @ 00eb1020

/* Function Stack Size: 0x28 bytes */

void WCRefineAutoDownloadQuotaHelper::recordDownloadForKey_wrap_kind_
               (ID param_1,SEL param_2,ID param_3,ID param_4,unsigned_long_long param_5)

{
  bool bVar1;
  long lVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  ID local_50;
  ID local_48;
  uint local_3c;
  unsigned_long_long local_38;
  undefined8 local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  lVar2 = local_28;
  local_38 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_3c = 1;
  }
  else {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_estimatedBytesForWrap_kind__0269d9f8,local_30,local_38);
    local_48 = IVar3;
    if (IVar3 == 0) {
      local_48 = 0x100000;
    }
    FUN_00ead8c0();
    _objc_retainAutoreleasedReturnValue();
    local_50 = IVar3;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(IVar3);
    IVar4 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_objectForKeyedSubscript__0269d098,local_28)
    ;
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    bVar1 = IVar4 == 0;
    if (bVar1) {
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedLongLong__0269d7f8,
                 local_48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,local_28);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      IVar4 = local_50;
      FUN_00ead934();
      FUN_00eb0aac(IVar4 + local_48);
    }
    local_3c = (uint)!bVar1;
    _objc_sync_exit(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    if (local_3c == 0) {
      if (bVar1) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_persistUsageCache_026ab1c0);
        puVar5 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar5);
      }
      local_3c = 0;
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

