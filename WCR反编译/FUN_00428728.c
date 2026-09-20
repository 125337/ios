// FUN_00428728 @ 00428728

void FUN_00428728(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  undefined1 *puVar6;
  undefined1 *local_d8;
  undefined8 local_d0;
  cfstringStruct *local_c8;
  undefined1 *local_c0;
  undefined8 local_b8;
  undefined1 *local_b0;
  long local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined4 local_8c;
  long local_88 [3];
  cfstringStruct *local_70;
  long local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined1 *local_50;
  undefined *local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  undefined8 local_30;
  cfstringStruct *local_28;
  
  local_60 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_60,param_1);
  local_68 = 0;
  _objc_storeStrong(&local_68,param_2);
  pcVar1 = local_60;
  FUN_0040494c();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_68;
  local_70 = pcVar1;
  FUN_0040494c();
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_70;
  local_88[0] = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
  if ((pcVar1 == (cfstringStruct *)0x0) ||
     (lVar2 = local_88[0], (*(code *)PTR__objc_msgSend_02578628)(local_88[0],PTR_s_length_0269cca0),
     lVar2 == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = &cf___;
    local_8c = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
               PTR_s_escapedPatternForString__0269ef40,local_88[0]);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_98 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
               &cf_<__(_:_s[_>____>_____<___>);
    _objc_retainAutoreleasedReturnValue();
    local_a8 = 0;
    local_b8 = 0;
    puVar3 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
    local_a0 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
               PTR_s_regularExpressionWithPattern_opt_0269ef10,puVar4,9,&local_b8);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(&local_a8,local_b8);
    pcVar1 = local_70;
    local_b0 = puVar3;
    if ((local_a8 == 0) && (puVar3 != (undefined1 *)0x0)) {
      pcVar5 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
      local_38 = 0;
      local_30 = 0;
      local_d0 = 0;
      local_c8 = pcVar5;
      local_40 = pcVar5;
      local_28 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_matchesInString_options_range__0269ef68,pcVar1,0,0,pcVar5);
      _objc_retainAutoreleasedReturnValue();
      local_c0 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_lastObject_0269d200);
      _objc_retainAutoreleasedReturnValue();
      local_d8 = puVar3;
      if ((puVar3 == (undefined1 *)0x0) ||
         ((*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberOfRanges_0269ef18),
         puVar3 < (undefined1 *)((long)&MACH_HEADER.magic + 2))) {
        (*(code *)PTR__objc_retain_02578638)();
        local_58 = &cf___;
      }
      else {
        puVar6 = local_d8;
        puVar3 = PTR_s_rangeAtIndex__0269ef20;
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_rangeAtIndex__0269ef20,1);
        if ((puVar6 == (undefined1 *)0x7fffffffffffffff) ||
           (pcVar1 = local_70, local_50 = puVar6, local_48 = puVar3,
           (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0),
           pcVar1 < (cfstringStruct *)(puVar6 + (long)puVar3))) {
          (*(code *)PTR__objc_retain_02578638)();
          local_58 = &cf___;
        }
        else {
          pcVar1 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_70,PTR_s_substringWithRange__0269d138,puVar6,puVar3);
          _objc_retainAutoreleasedReturnValue();
          pcVar5 = pcVar1;
          FUN_0040e428();
          _objc_retainAutoreleasedReturnValue();
          local_58 = pcVar5;
          (*(code *)PTR__objc_release_02578630)(pcVar1);
        }
      }
      local_8c = 1;
      _objc_storeStrong(&local_d8);
      _objc_storeStrong(&local_c0,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_58 = &cf___;
      local_8c = 1;
    }
    _objc_storeStrong(&local_b0);
    _objc_storeStrong(&local_a8,0);
    _objc_storeStrong(&local_a0,0);
    _objc_storeStrong(&local_98,0);
  }
  _objc_storeStrong(local_88);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_autoreleaseReturnValue(local_58);
  return;
}

