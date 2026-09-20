// FUN_01e9cda8 @ 01e9cda8

void FUN_01e9cda8(undefined8 param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_a8;
  cfstringStruct *local_88;
  undefined8 local_80;
  cfstringStruct *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined4 local_5c;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  undefined8 local_30;
  cfstringStruct *local_28;
  
  local_50 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_50,param_1);
  if (local_50 == (cfstringStruct *)0x0) {
    local_a8 = &cf___;
  }
  else {
    local_a8 = local_50;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = local_a8;
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_length_0269cca0);
  pcVar5 = local_58;
  if (local_a8 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = pcVar5;
    local_5c = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
               PTR_s_regularExpressionWithPattern_opt_0269ef10,&cf___i_<_DOCTYPE_s_html,0,0);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = local_58;
    pcVar2 = local_58;
    local_68 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
    local_38 = 0;
    local_30 = 0;
    local_80 = 0;
    local_78 = pcVar2;
    local_40 = pcVar2;
    local_28 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_matchesInString_options_range__0269ef68,pcVar5,0,0,pcVar2);
    _objc_retainAutoreleasedReturnValue();
    local_70 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_count_0269cfe0);
    pcVar5 = local_58;
    if ((undefined1 *)((long)&MACH_HEADER.magic + 1) < puVar1) {
      puVar3 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_objectAtIndexedSubscript__0269cc78,1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_substringToIndex__0269d6c0,puVar4);
      _objc_retainAutoreleasedReturnValue();
      local_88 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      pcVar5 = local_88;
      puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
      _objc_retainAutoreleasedReturnValue();
      local_48 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      local_5c = 1;
      _objc_storeStrong(&local_88,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = pcVar5;
      local_5c = 1;
    }
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_autoreleaseReturnValue(local_48);
  return;
}

