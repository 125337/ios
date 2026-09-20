// FUN_0088bbb8 @ 0088bbb8

void FUN_0088bbb8(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined4 local_38;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = local_20;
  FUN_008825d8();
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_38 = 1;
  }
  else {
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf_newline_s_,&cf__n);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_40 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    pcVar1 = local_40;
    if (segment_command_00000020.segname < pcVar2) {
      pcVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_substringToIndex__0269d6c0,0x14);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_40;
      pcVar3 = local_40;
      local_48 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_substringFromIndex__0269d120,
                 (undefined1 *)((long)&pcVar3[-1].field2_0x10 + 4));
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      local_50 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf________);
      _objc_retainAutoreleasedReturnValue();
      local_38 = 1;
      local_18 = pcVar2;
      _objc_storeStrong(&local_50);
      _objc_storeStrong(&local_48,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
      local_38 = 1;
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

