// FUN_015710f8 @ 015710f8

void FUN_015710f8(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_70;
  undefined *local_58;
  undefined *local_40;
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
    local_58 = (undefined *)0x0;
  }
  else {
    local_58 = local_20;
    _objc_getAssociatedObject(local_20,DAT_028c5f88);
    _objc_retainAutoreleasedReturnValue();
    local_30 = local_58;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_58;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  bVar1 = local_28 == (undefined *)0x0;
  if (bVar1) {
    local_70 = &DAT_028e3908;
    _objc_loadWeakRetained();
    local_40 = local_70;
  }
  else {
    local_70 = local_28;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_70;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

