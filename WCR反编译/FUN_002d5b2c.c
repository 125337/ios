// FUN_002d5b2c @ 002d5b2c

void FUN_002d5b2c(void)

{
  bool bVar1;
  qword qVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  cfstringStruct *local_a0;
  bool local_59;
  cfstringStruct *local_58;
  cfstringStruct *local_50 [2];
  uint local_40;
  cfstringStruct local_30;
  
  pcVar3 = &cf_CAppViewControllerManager;
  _NSClassFromString();
  pcVar4 = &cf_getTabBarController;
  local_30.field2_0x10 = (undefined *)pcVar3;
  _NSSelectorFromString();
  local_a0 = pcVar4;
  local_30.field1_0x8 = (qword)pcVar4;
  if (((cfstringStruct *)local_30.field2_0x10 != (cfstringStruct *)0x0) &&
     (local_a0 = (cfstringStruct *)local_30.field2_0x10,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_30.field2_0x10,PTR_s_respondsToSelector__026ca818,pcVar4),
     ((ulong)local_a0 & 1) != 0)) {
    pcVar3 = (cfstringStruct *)local_30.field2_0x10;
    (*(code *)PTR__objc_msgSend_02578628)(local_30.field2_0x10,local_30.field1_0x8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UITabBarController_026ce108;
    local_30.field0_0x0 = (qword)pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITabBarController_026ce108,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
    qVar2 = local_30.field0_0x0;
    bVar1 = ((ulong)pcVar3 & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_30.field3_0x18 = qVar2;
    }
    local_40 = (uint)bVar1;
    local_a0 = &local_30;
    _objc_storeStrong(local_a0,0);
    if (local_40 != 0) goto LAB_002d5db8;
  }
  FUN_002b64a4();
  _objc_retainAutoreleasedReturnValue();
  local_59 = local_a0 == (cfstringStruct *)0x0;
  local_50[0] = local_a0;
  if (local_59) {
    local_a0 = (cfstringStruct *)0x0;
  }
  else {
    FUN_0029cc70();
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_a0;
  }
  local_59 = !local_59;
  (*(code *)PTR__objc_retain_02578638)();
  local_30.field3_0x18 = (long)local_a0;
  if (local_59) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  local_40 = 1;
  _objc_storeStrong(local_50,0);
LAB_002d5db8:
  _objc_autoreleaseReturnValue(local_30.field3_0x18);
  return;
}

