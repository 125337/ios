// FUN_0043310c @ 0043310c

void FUN_0043310c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_70;
  ulong local_68;
  undefined4 local_60;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  undefined8 local_38;
  ulong local_30;
  ulong local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_40 = 0;
  local_38 = param_2;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  local_50 = 0;
  if (DAT_028ca868 != (code *)0x0) {
    uVar1 = local_30;
    (*DAT_028ca868)(local_30,local_38,local_40,local_48);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_50;
    local_50 = uVar1;
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  uVar1 = local_40;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  uVar3 = local_48;
  if ((uVar1 & 1) != 0) {
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar3 & 1) != 0) {
      uVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,&cf__font_set);
      local_28 = local_50;
      if ((uVar3 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_60 = 1;
        goto LAB_00433508;
      }
      uVar1 = local_40;
      FUN_00433ab0();
      _objc_retainAutoreleasedReturnValue();
      local_68 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
      uVar3 = local_50;
      if (uVar1 == 0) {
LAB_004333bc:
        uVar3 = local_50;
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = uVar3;
        local_60 = 1;
      }
      else {
        puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
        if ((uVar3 & 1) == 0) goto LAB_004333bc;
        uVar1 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_mutableCopy_0269d8a0);
        local_70 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_count_0269cfe0);
        uVar3 = local_50;
        if (uVar1 == 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = uVar3;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_70,PTR_s_replaceObjectAtIndex_withObject__026a38a0,0,local_68);
          uVar3 = local_70;
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = uVar3;
        }
        local_60 = 1;
        _objc_storeStrong(&local_70,0);
      }
      _objc_storeStrong(&local_68,0);
      goto LAB_00433508;
    }
  }
  uVar3 = local_50;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = uVar3;
  local_60 = 1;
LAB_00433508:
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

