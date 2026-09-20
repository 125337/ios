// FUN_000e3bcc @ 000e3bcc

void FUN_000e3bcc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_38 [3];
  undefined *local_20;
  undefined *local_18;
  
  local_18 = (undefined *)0x0;
  _objc_storeStrong(&local_18,param_1);
  puVar1 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_028c8393);
  _objc_retainAutoreleasedReturnValue();
  local_20 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_20;
    local_20 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_18;
    FUN_000d8d08(local_18,"m_arrMsg");
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_38[0] = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((ulong)puVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_addObjectsFromArray__0269d540,local_38[0]);
    }
    _objc_setAssociatedObject(local_18,&DAT_028c8393,local_20,1);
    _objc_storeStrong(local_38,0);
  }
  puVar1 = local_20;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

