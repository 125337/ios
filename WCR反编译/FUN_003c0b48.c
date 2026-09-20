// FUN_003c0b48 @ 003c0b48

void FUN_003c0b48(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_88;
  undefined *local_58;
  undefined *local_48;
  undefined *local_40;
  undefined4 local_34;
  undefined *local_30;
  undefined8 local_28;
  undefined *local_20;
  undefined *local_18;
  
  local_20 = (undefined *)0x0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  puVar2 = local_20;
  FUN_003612b8(local_20,local_28);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_30 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  puVar3 = local_30;
  if (((ulong)puVar2 & 1) == 0) {
    bVar1 = local_30 == (undefined *)0x0;
    if (bVar1) {
      local_88 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_58 = local_88;
    }
    else {
      local_88 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_mutableCopy_0269d8a0);
      local_48 = local_88;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = local_88;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    FUN_00367110(local_20,local_28,local_40);
    puVar3 = local_40;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar3;
    local_34 = 1;
    _objc_storeStrong(&local_40,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar3;
    local_34 = 1;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

