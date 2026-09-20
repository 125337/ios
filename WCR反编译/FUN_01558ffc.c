// FUN_01558ffc @ 01558ffc

undefined8 FUN_01558ffc(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_58;
  ulong local_30;
  ulong local_28;
  ulong local_20;
  undefined8 local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar3 = local_20;
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  bVar1 = (uVar3 & 1) == 0;
  if (bVar1) {
    local_58 = 0;
  }
  else {
    local_58 = local_20;
    _objc_getAssociatedObject(local_20,DAT_028c5fb8);
    _objc_retainAutoreleasedReturnValue();
    local_30 = local_58;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_58;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  uVar3 = local_28;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((uVar3 & 1) == 0) ||
     (uVar3 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_integerValue_026ca750),
     uVar3 != 1)) {
    local_18 = DAT_028e3988;
  }
  else {
    local_18 = 1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_18;
}

