// FUN_001f16ec @ 001f16ec

uint FUN_001f16ec(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  uint local_70;
  ulong local_50;
  ulong local_38;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  bVar1 = local_18 == 0;
  if (bVar1) {
    local_50 = 0;
  }
  else {
    local_50 = local_18;
    _objc_getAssociatedObject(local_18,DAT_026dfaa8);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_50;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_20 = local_50;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  uVar3 = local_20;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_70 = 0;
  if ((uVar3 & 1) != 0) {
    uVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_boolValue_026ca540);
    local_70 = (uint)uVar3;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return local_70 & 1;
}

