// FUN_0058ffc0 @ 0058ffc0

void FUN_0058ffc0(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  uint local_30;
  undefined *local_20;
  undefined *local_18;
  
  local_20 = (undefined *)0x0;
  _objc_storeStrong(&local_20,param_1);
  puVar3 = local_20;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    local_18 = (undefined *)0x0;
    local_30 = 1;
    goto LAB_0059033c;
  }
  puVar3 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  FUN_00589bc8();
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (puVar3 == (undefined *)0x0) {
LAB_005901f4:
    puVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_payload);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSData_026ce1d0;
    local_48 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((((ulong)puVar3 & 1) == 0) ||
       (puVar2 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0),
       puVar3 = local_48, puVar2 == (undefined *)0x0)) {
      local_18 = (undefined *)0x0;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = puVar3;
    }
    local_30 = 1;
    _objc_storeStrong(&local_48,0);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSData_026ce1d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
    puVar3 = local_40;
    bVar1 = puVar2 != (undefined *)0x0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = puVar3;
    }
    local_30 = (uint)bVar1;
    _objc_storeStrong(bVar1,&local_40,0);
    if (local_30 == 0) goto LAB_005901f4;
  }
  _objc_storeStrong(&local_38,0);
LAB_0059033c:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

