// FUN_005c3224 @ 005c3224

void FUN_005c3224(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_78;
  ulong local_40;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  FUN_0059d260(local_20,&cf_previewUrls);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_28 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  bVar1 = (uVar2 & 1) == 0;
  if (bVar1) {
    local_78 = 0;
  }
  else {
    local_78 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_firstObject_0269d1f8);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_78;
  }
  FUN_005c37ac();
  _objc_retainAutoreleasedReturnValue();
  local_18 = local_78;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

