// FUN_0010f6c0 @ 0010f6c0

void FUN_0010f6c0(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined8 local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  undefined *local_90;
  undefined4 local_88;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined8 local_58;
  undefined8 local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  undefined8 local_30;
  cfstringStruct *local_28;
  
  local_70 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_70,param_1);
  pcVar1 = local_70;
  FUN_0010ee50();
  _objc_retainAutoreleasedReturnValue();
  local_78 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = &cf___;
    local_88 = 1;
  }
  else {
    pcVar2 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_containsString__0269d0b0,&cf_<);
    pcVar1 = local_78;
    if (((ulong)pcVar2 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = pcVar1;
      local_88 = 1;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
                 PTR_s_regularExpressionWithPattern_opt_0269ef10,&cf_<__[CDATA_[([_s_S]*_)_]_]>,0,0)
      ;
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableString_026cdfb0;
      local_90 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_78;
      puVar3 = local_90;
      pcVar4 = local_78;
      local_98 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
      pcVar5 = local_78;
      local_38 = 0;
      local_30 = 0;
      local_a8 = 0;
      local_d8 = PTR___NSConcreteGlobalBlock_02578658;
      local_d0 = 0xd0800000;
      local_cc = 0;
      local_c8 = FUN_00114ff8;
      local_c0 = &DAT_0257a2a8;
      local_a0 = pcVar4;
      local_40 = pcVar4;
      local_28 = pcVar4;
      (*(code *)PTR__objc_retain_02578638)();
      pcVar1 = local_98;
      local_b8 = pcVar5;
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_enumerateMatchesInString_options_0269ef28,pcVar2,0,local_a8,local_a0,
                 &local_d8);
      pcVar2 = local_98;
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0);
      pcVar1 = local_98;
      if (pcVar2 == (cfstringStruct *)0x0) {
        pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
                   PTR_s_regularExpressionWithPattern_opt_0269ef10,&cf_<[_>__>,0,0);
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_78;
        pcVar5 = local_78;
        local_e0 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
        local_58 = 0;
        local_50 = 0;
        local_60 = pcVar5;
        local_48 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_stringByReplacingMatchesInString_0269ef30,pcVar1,0,0,pcVar5,&cf___);
        _objc_retainAutoreleasedReturnValue();
        local_e8 = pcVar2;
        FUN_0010ee50();
        _objc_retainAutoreleasedReturnValue();
        local_88 = 1;
        local_68 = pcVar2;
        _objc_storeStrong(&local_e8);
        _objc_storeStrong(&local_e0,0);
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_68 = pcVar1;
        local_88 = 1;
      }
      _objc_storeStrong(&local_b0);
      _objc_storeStrong(&local_b8,0);
      _objc_storeStrong(&local_98,0);
      _objc_storeStrong(&local_90,0);
    }
  }
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_70,0);
  _objc_autoreleaseReturnValue(local_68);
  return;
}

