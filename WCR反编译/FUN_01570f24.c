// FUN_01570f24 @ 01570f24

void FUN_01570f24(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_70;
  undefined *local_48;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  undefined *local_18;
  
  local_20 = (undefined *)0x0;
  _objc_storeStrong(&local_20,param_1);
  puVar3 = local_20;
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  bVar1 = ((ulong)puVar3 & 1) == 0;
  if (bVar1) {
    local_48 = (undefined *)0x0;
  }
  else {
    local_48 = local_20;
    _objc_getAssociatedObject(local_20,DAT_028c5f80);
    _objc_retainAutoreleasedReturnValue();
    local_30 = local_48;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_48;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  puVar3 = local_28;
  puVar2 = PTR__OBJC_CLASS___NSNull_026ce0e8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (puVar3 == puVar2) {
    local_18 = (undefined *)0x0;
  }
  else {
    if (local_28 == (undefined *)0x0) {
      local_70 = DAT_028e3918;
    }
    else {
      local_70 = local_28;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_70;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

