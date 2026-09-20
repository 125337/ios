// FUN_01ef01e0 @ 01ef01e0

void FUN_01ef01e0(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  uVar1 = local_20;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_mutableCopy_0269d8a0);
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_30 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,
             (*(byte *)(param_1 + 0x20) ^ 1) & 1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_pinned);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_createdAt);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  uVar1 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(uVar1);
  return;
}

