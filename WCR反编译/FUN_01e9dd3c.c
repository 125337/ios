// FUN_01e9dd3c @ 01e9dd3c

undefined8 FUN_01e9dd3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined *local_58;
  undefined4 local_4c;
  long local_48;
  long local_40;
  undefined8 local_38;
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_40 = 0;
  _objc_storeStrong(&local_40,param_2);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_3);
  lVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if ((lVar1 == 0) ||
     (lVar1 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0),
     puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8, lVar1 == 0)) {
    local_38 = 0;
    local_4c = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
               PTR_s_escapedPatternForString__0269ef40,local_48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_stringWithFormat__0269cca8,&cf___i____s___s___0_9________0_9_____px);
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar3 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
               PTR_s_regularExpressionWithPattern_opt_0269ef10,local_58,0,0);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_40;
    lVar4 = local_40;
    local_60 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    local_28 = 0;
    local_20 = 0;
    local_30 = lVar4;
    local_18 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_firstMatchInString_options_range_0269ef48,lVar1,0,0,lVar4);
    _objc_retainAutoreleasedReturnValue();
    local_68 = puVar3;
    if ((puVar3 == (undefined1 *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberOfRanges_0269ef18),
       lVar1 = local_40, puVar3 < (undefined1 *)((long)&MACH_HEADER.magic + 2))) {
      local_38 = 0;
    }
    else {
      puVar5 = local_68;
      puVar3 = PTR_s_rangeAtIndex__0269ef20;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_rangeAtIndex__0269ef20,1);
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_substringWithRange__0269d138,puVar5,puVar3);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_38 = param_1;
      (*(code *)PTR__objc_release_02578630)(lVar1);
    }
    local_4c = 1;
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  return local_38;
}

