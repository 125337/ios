// bilibiliBVFromURL: @ 0105073c

/* Function Stack Size: 0x18 bytes */

ID WCRefineLinkParser::bilibiliBVFromURL_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  undefined1 *puVar4;
  cfstringStruct *local_c0;
  cfstringStruct *local_b0;
  cfstringStruct *local_88;
  undefined1 *local_60;
  undefined1 *local_58;
  cfstringStruct *local_50;
  SEL local_48;
  ID local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  undefined8 local_28;
  undefined8 local_20;
  cfstringStruct *local_18;
  
  local_50 = (cfstringStruct *)0x0;
  local_48 = param_2;
  local_40 = param_1;
  _objc_storeStrong(&local_50,param_3);
  puVar2 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
             PTR_s_regularExpressionWithPattern_opt_0269ef10,&cf__BV_a_zA_Z0_9__10__,1,0);
  _objc_retainAutoreleasedReturnValue();
  if (local_50 == (cfstringStruct *)0x0) {
    local_b0 = &::cf___;
  }
  else {
    local_b0 = local_50;
  }
  pcVar3 = local_50;
  local_58 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  local_28 = 0;
  local_20 = 0;
  local_30 = pcVar3;
  local_18 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_firstMatchInString_options_range_0269ef48,local_b0,0,0,pcVar3);
  _objc_retainAutoreleasedReturnValue();
  local_60 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberOfRanges_0269ef18);
  local_c0 = local_50;
  bVar1 = puVar2 < (undefined1 *)((long)&MACH_HEADER.magic + 2);
  if (bVar1) {
    local_c0 = (cfstringStruct *)0x0;
  }
  else {
    puVar4 = local_60;
    puVar2 = PTR_s_rangeAtIndex__0269ef20;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_rangeAtIndex__0269ef20,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_substringWithRange__0269d138,puVar4,puVar2)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_88 = local_c0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_c0;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_88);
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_38;
}

