// FUN_0019655c @ 0019655c

void FUN_0019655c(undefined8 param_1,long param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  cfstringStruct *local_158;
  long local_140;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  long local_80;
  undefined4 local_74;
  long local_70;
  undefined *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58 [3];
  cfstringStruct *local_40;
  long local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  pcVar1 = local_30;
  local_38 = param_2;
  FUN_00184b18();
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar1;
  FUN_001881a0();
  _objc_retainAutoreleasedReturnValue();
  local_58[0] = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_objectForKeyedSubscript__0269d098,&cf_text);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  FUN_00184b18();
  _objc_retainAutoreleasedReturnValue();
  local_60 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    FUN_00184b18();
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_60;
    local_60 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  pcVar1 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    FUN_001998fc();
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_60;
    local_60 = pcVar1;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  local_70 = local_38;
  local_74 = 0;
  if (local_38 < 0) {
    local_140 = 0;
  }
  else {
    local_140 = local_38;
  }
  local_80 = local_140;
  puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__ld);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_40;
  local_68 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_158 = &cf___;
  }
  else {
    local_158 = local_40;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_88 = local_158;
  pcVar2 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_60,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,local_68);
  _objc_retainAutoreleasedReturnValue();
  local_90 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar2,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__COUNT,local_68);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_90;
  local_90 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar2 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_90,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__SECTION,local_88);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_90;
  local_90 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar2 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_90,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,local_88);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_90;
  local_90 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_90;
  FUN_00184b18();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  local_28 = local_90;
  if (pcVar2 == (cfstringStruct *)0x0) {
    pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__6e__);
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
  }
  _objc_storeStrong(&local_90);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(local_58,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

