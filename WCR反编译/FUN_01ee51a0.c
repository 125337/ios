// FUN_01ee51a0 @ 01ee51a0

void FUN_01ee51a0(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_d0;
  cfstringStruct *local_c0;
  cfstringStruct *local_a0;
  cfstringStruct *local_90;
  bool local_79;
  cfstringStruct *local_78;
  cfstringStruct *local_68;
  cfstringStruct *local_58;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  bool local_31;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  pcVar4 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_31 = false;
  bVar1 = ((ulong)pcVar4 & 1) == 0;
  if (bVar1) {
    local_90 = &cf___;
  }
  else {
    local_90 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
    _objc_retainAutoreleasedReturnValue();
    local_30 = local_90;
  }
  local_31 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_90;
  if ((local_31 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  local_a0 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_a0 = (cfstringStruct *)0x0;
  }
  else {
    local_48 = local_28;
    FUN_01f0fad8();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a0,PTR_s_stringWithContentsOfFile_encodin_026a3340,local_48,4,0);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_a0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_a0;
  if (pcVar2 != (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  pcVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  bVar1 = false;
  local_79 = false;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_68 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_html)
    ;
    _objc_retainAutoreleasedReturnValue();
    bVar1 = true;
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    pcVar2 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_isKindOfClass__0269cd68,puVar3);
    local_79 = ((ulong)pcVar2 & 1) == 0;
    if (local_79) {
      local_d0 = &cf___;
    }
    else {
      local_d0 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_html);
      _objc_retainAutoreleasedReturnValue();
      local_78 = local_d0;
    }
    local_79 = !local_79;
    local_c0 = local_d0;
  }
  else {
    local_c0 = local_40;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_c0;
  if (local_79) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

