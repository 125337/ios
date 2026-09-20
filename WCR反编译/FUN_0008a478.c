// FUN_0008a478 @ 0008a478

void FUN_0008a478(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
    goto LAB_0008a5d8;
  }
  uVar1 = local_20;
  _objc_getAssociatedObject(local_20,DAT_026df758);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_30 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar1 & 1) == 0) {
LAB_0008a5b8:
    local_18 = 0;
  }
  else {
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    local_18 = local_30;
    if (uVar1 == 0) goto LAB_0008a5b8;
    (*(code *)PTR__objc_retain_02578638)();
  }
  local_24 = 1;
  _objc_storeStrong(&local_30,0);
LAB_0008a5d8:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

