// FUN_01ef17c0 @ 01ef17c0

void FUN_01ef17c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_170;
  cfstringStruct *local_160;
  cfstringStruct *local_150;
  cfstringStruct *local_140;
  cfstringStruct *local_f0;
  cfstringStruct *local_d8;
  cfstringStruct *local_c8;
  cfstringStruct *local_b0;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_50,param_1);
  local_58 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_58,param_2);
  local_60 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_60,param_3);
  if (local_50 == (cfstringStruct *)0x0) {
    local_b0 = &cf___;
  }
  else {
    local_b0 = local_50;
  }
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_68 = local_b0;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  pcVar2 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    if (local_58 == (cfstringStruct *)0x0) {
      local_d8 = &cf__g_TTNx;
    }
    else {
      local_d8 = local_58;
    }
    local_c8 = local_d8;
  }
  else {
    local_c8 = local_68;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = local_c8;
  if (local_60 == (cfstringStruct *)0x0) {
    local_f0 = &cf_wcr;
  }
  else {
    local_f0 = local_60;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_78 = local_f0;
  pcVar2 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_rangeOfString_options__0269d118,&cf__,4);
  if (pcVar2 != (cfstringStruct *)0x7fffffffffffffff) {
    pcVar3 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_substringToIndex__0269d6c0,pcVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = local_70;
    local_70 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar5 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_substringFromIndex__0269d120,
               (undefined1 *)((long)&pcVar2->field0_0x0 + 1));
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_78;
    local_78 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    pcVar2 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
    if (pcVar2 == (cfstringStruct *)0x0) {
      if (local_58 == (cfstringStruct *)0x0) {
        local_140 = &cf__g_TTNx;
      }
      else {
        local_140 = local_58;
      }
      _objc_storeStrong(&local_70,local_140);
    }
    pcVar2 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
    if (pcVar2 == (cfstringStruct *)0x0) {
      if (local_60 == (cfstringStruct *)0x0) {
        local_150 = &cf_wcr;
      }
      else {
        local_150 = local_60;
      }
      _objc_storeStrong(&local_78,local_150);
    }
  }
  local_48 = &cf_name;
  if (local_70 == (cfstringStruct *)0x0) {
    local_160 = &cf__g_TTNx;
  }
  else {
    local_160 = local_70;
  }
  local_38 = local_160;
  local_40 = &cf_author;
  if (local_78 == (cfstringStruct *)0x0) {
    local_170 = &cf_wcr;
  }
  else {
    local_170 = local_78;
  }
  local_30 = local_170;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_38,&local_48,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

