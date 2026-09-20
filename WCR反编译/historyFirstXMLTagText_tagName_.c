// historyFirstXMLTagText:tagName: @ 01b2b6fc

/* Function Stack Size: 0x20 bytes */

ID WCRefineKeywordAlertHistoryViewController::historyFirstXMLTagText_tagName_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  cfstringStruct *pcVar6;
  undefined1 *local_c0;
  undefined8 local_b8;
  undefined1 *local_b0;
  long local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined4 local_8c;
  long local_88;
  undefined1 *local_80;
  long local_78;
  undefined *local_70;
  SEL local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined1 *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  undefined *local_28;
  
  local_70 = (undefined1 *)0x0;
  local_68 = param_2;
  local_60 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_70,param_3);
  local_78 = 0;
  _objc_storeStrong(&local_78,param_4);
  puVar1 = local_70;
  FUN_01b1fc40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_78;
  local_80 = puVar1;
  FUN_01b1fc40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_80;
  local_88 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
  if ((puVar3 == (undefined1 *)0x0) ||
     (lVar2 = local_88, (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0),
     lVar2 == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = &::cf___;
    local_8c = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
               PTR_s_escapedPatternForString__0269ef40,local_88);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_98 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
               &cf_<__(_:_s[_>____>_____<___>);
    _objc_retainAutoreleasedReturnValue();
    local_a8 = 0;
    local_b8 = 0;
    puVar1 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
    local_a0 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
               PTR_s_regularExpressionWithPattern_opt_0269ef10,puVar4,9,&local_b8);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(&local_a8,local_b8);
    puVar3 = local_80;
    local_b0 = puVar1;
    if ((local_a8 == 0) && (puVar1 != (undefined1 *)0x0)) {
      puVar5 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
      local_48 = 0;
      local_40 = 0;
      local_50 = puVar5;
      local_38 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_firstMatchInString_options_range_0269ef48,puVar3,0,0,puVar5);
      _objc_retainAutoreleasedReturnValue();
      local_c0 = puVar1;
      if ((puVar1 == (undefined1 *)0x0) ||
         ((*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_numberOfRanges_0269ef18),
         puVar1 < (undefined1 *)((long)&MACH_HEADER.magic + 2))) {
        (*(code *)PTR__objc_retain_02578638)();
        local_58 = &::cf___;
      }
      else {
        puVar3 = local_c0;
        puVar1 = PTR_s_rangeAtIndex__0269ef20;
        (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_rangeAtIndex__0269ef20,1);
        if ((puVar3 == (undefined1 *)0x7fffffffffffffff) ||
           (puVar5 = local_80, local_30 = puVar3, local_28 = puVar1,
           (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0), pcVar6 = local_60,
           puVar5 < puVar3 + (long)puVar1)) {
          (*(code *)PTR__objc_retain_02578638)();
          local_58 = &::cf___;
        }
        else {
          puVar5 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_80,PTR_s_substringWithRange__0269d138,puVar3,puVar1);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_historyNormalizedXMLText__026bee38);
          _objc_retainAutoreleasedReturnValue();
          local_58 = pcVar6;
          (*(code *)PTR__objc_release_02578630)(puVar5);
        }
      }
      local_8c = 1;
      _objc_storeStrong(&local_c0,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_58 = &::cf___;
      local_8c = 1;
    }
    _objc_storeStrong(&local_b0);
    _objc_storeStrong(&local_a8,0);
    _objc_storeStrong(&local_a0,0);
    _objc_storeStrong(&local_98,0);
  }
  _objc_storeStrong(&local_88);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_70,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_58;
}

