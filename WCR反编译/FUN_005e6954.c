// FUN_005e6954 @ 005e6954

void FUN_005e6954(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_40;
  int local_38;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar4 = local_28;
  if (local_20 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
    if (((uVar4 & 1) != 0) &&
       (uVar4 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
       uVar4 != 0)) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKeyPath__026a0b98,local_28);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_40 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
      uVar4 = uVar2 & 0xffffffff;
      if ((uVar2 & 1) == 0) {
LAB_005e6b64:
        local_38 = 0;
      }
      else {
        uVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
        uVar2 = local_40;
        uVar4 = 0;
        if (uVar3 == 0) goto LAB_005e6b64;
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar2;
        uVar4 = 1;
        local_38 = 1;
      }
      _objc_storeStrong(uVar4,&local_40,0);
      if (local_38 == 0) {
        local_18 = 0;
        local_38 = 1;
      }
      goto LAB_005e6bcc;
    }
  }
  local_18 = 0;
  local_38 = 1;
LAB_005e6bcc:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

