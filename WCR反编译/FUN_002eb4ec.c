// FUN_002eb4ec @ 002eb4ec

void FUN_002eb4ec(undefined8 param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_c8;
  undefined4 local_c0;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  undefined8 local_78;
  undefined8 local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined8 local_58;
  undefined8 local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  undefined8 local_30;
  cfstringStruct *local_28;
  
  local_b0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_b0,param_1);
  pcVar2 = local_b0;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)pcVar2 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_a8 = &cf___;
    local_c0 = 1;
  }
  else {
    pcVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_mutableCopy_0269d8a0);
    pcVar3 = pcVar2;
    local_c8 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
    local_38 = 0;
    local_30 = 0;
    local_40 = pcVar3;
    local_28 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_replaceOccurrencesOfString_withS_026a1e00,&cf__,&cf___,0,0,pcVar3);
    pcVar2 = local_c8;
    pcVar3 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
    local_58 = 0;
    local_50 = 0;
    local_60 = pcVar3;
    local_48 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_replaceOccurrencesOfString_withS_026a1e00,&cf__,&cf___,0,0,pcVar3);
    pcVar2 = local_c8;
    pcVar3 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
    local_78 = 0;
    local_70 = 0;
    local_80 = pcVar3;
    local_68 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_replaceOccurrencesOfString_withS_026a1e00,&cf_newline_s_,&cf__n,0,0,
               pcVar3);
    pcVar2 = local_c8;
    pcVar3 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
    local_98 = 0;
    local_90 = 0;
    local_a0 = pcVar3;
    local_88 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_replaceOccurrencesOfString_withS_026a1e00,&cf_creturn_s_,&cf___,0,0,
               pcVar3);
    pcVar2 = local_c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_a8 = pcVar2;
    local_c0 = 1;
    _objc_storeStrong(&local_c8,0);
  }
  _objc_storeStrong(&local_b0,0);
  _objc_autoreleaseReturnValue(local_a8);
  return;
}

