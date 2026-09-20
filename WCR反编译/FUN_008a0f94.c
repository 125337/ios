// FUN_008a0f94 @ 008a0f94

void FUN_008a0f94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  cfstringStruct *local_90;
  cfstringStruct *local_60;
  cfstringStruct *local_48;
  ulong local_40;
  undefined8 local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_40 = 0;
  local_38 = param_2;
  _objc_storeStrong(&local_40,param_3);
  bVar1 = DAT_028cdd70 == (code *)0x0;
  if (bVar1) {
    local_90 = (cfstringStruct *)0x0;
  }
  else {
    local_90 = local_30;
    (*DAT_028cdd70)(local_30,local_38,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_60 = local_90;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_90;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  uVar5 = local_40;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((uVar5 & 1) == 0) ||
     (uVar5 = local_40,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_40,PTR_s_isEqualToString__0269ccc8,&cf_ChatBot_Ask_Xiaowei), pcVar3 = local_48
     , (uVar5 & 1) == 0)) {
    pcVar3 = local_48;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar3;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    uVar5 = (ulong)pcVar3 & 0xffffffff;
    if (((ulong)pcVar3 & 1) != 0) {
      pcVar4 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
      local_28 = local_48;
      pcVar3 = (cfstringStruct *)0x0;
      uVar5 = 0;
      if (pcVar4 != (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        goto LAB_008a1298;
      }
    }
    FUN_008a1538(uVar5);
    local_28 = local_48;
    if (pcVar3 == (cfstringStruct *)0x1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = &cf___;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
    }
  }
LAB_008a1298:
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

