// FUN_000387bc @ 000387bc

void FUN_000387bc(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long local_30;
  uint local_28;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  lVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  bVar1 = lVar2 != 0;
  if (bVar1) {
    FUN_00036174();
    _objc_retainAutoreleasedReturnValue();
    local_30 = lVar2;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(lVar2);
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(param_1,puVar4,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,local_18);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_sync_exit(lVar2);
    (*(code *)PTR__objc_release_02578630)(lVar2);
    _objc_storeStrong(&local_30,0);
  }
  local_28 = (uint)!bVar1;
  _objc_storeStrong(&local_18,0);
  return;
}

