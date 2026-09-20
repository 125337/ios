// FUN_00eefa38 @ 00eefa38

void FUN_00eefa38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_88;
  undefined *local_78;
  undefined *local_48;
  bool local_39;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = (undefined *)0x0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  puVar3 = local_28;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  puVar2 = local_28;
  local_39 = false;
  bVar1 = false;
  if (((ulong)puVar3 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    bVar1 = ((ulong)puVar2 & 1) == 0;
    if (bVar1) {
      local_88 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_48 = local_88;
    }
    else {
      local_88 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_mutableCopy_0269d8a0);
      local_38 = local_88;
    }
    local_39 = !bVar1;
    local_78 = local_88;
  }
  else {
    local_78 = local_28;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_78;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  if (local_39) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  _objc_setAssociatedObject(local_18,&DAT_028e2b10,local_30,1);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return;
}

