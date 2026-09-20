// contentByReplacingDisplayText:quotedDisplayText:originalContent: @ 00fbbcf0

/* Function Stack Size: 0x28 bytes */

ID WCRefineHelper::contentByReplacingDisplayText_quotedDisplayText_originalContent_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined1 *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_e0;
  cfstringStruct *local_c0;
  cfstringStruct *local_a8;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  undefined4 local_64;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  SEL local_38;
  ID local_30;
  cfstringStruct *local_28;
  
  local_40 = (cfstringStruct *)0x0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_48,param_4);
  local_50 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_50,param_5);
  pcVar3 = local_40;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)pcVar3 & 1) == 0) {
    local_a8 = &::cf___;
  }
  else {
    local_a8 = local_40;
  }
  (*(code *)PTR__objc_retain_02578638)();
  pcVar3 = local_50;
  local_58 = local_a8;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)pcVar3 & 1) == 0) {
    local_c0 = &::cf___;
  }
  else {
    local_c0 = local_50;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = local_c0;
  FUN_00fba334();
  local_28 = local_58;
  if (((ulong)local_c0 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_64 = 1;
    goto LAB_00fbc040;
  }
  pcVar4 = local_60;
  FUN_00fbc094(local_60,local_58);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_48;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_70 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)pcVar3 & 1) == 0) {
    local_e0 = &::cf___;
  }
  else {
    local_e0 = local_48;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_78 = local_e0;
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_78;
  local_78 = local_e0;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  pcVar3 = local_78;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (pcVar3 == (cfstringStruct *)0x0) {
LAB_00fbbfd4:
    pcVar3 = local_70;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar3;
  }
  else {
    pcVar3 = local_70;
    FUN_00fbc9a4();
    puVar1 = (undefined1 *)((long)&pcVar3[-0x400000000000000].field0_0x0 + 1);
    if (puVar1 == (undefined1 *)0x0) goto LAB_00fbbfd4;
    pcVar3 = local_70;
    FUN_00fbcc2c(puVar1,local_70,local_78);
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar3;
  }
  local_64 = 1;
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_70,0);
LAB_00fbc040:
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

