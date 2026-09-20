// douyinVideoIDFromURL: @ 0102e54c

/* Function Stack Size: 0x18 bytes */

ID WCRefineLinkParser::douyinVideoIDFromURL_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  cfstringStruct *local_108;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined4 local_9c;
  cfstringStruct *local_98;
  undefined *local_90;
  byte local_81;
  undefined *local_80;
  byte local_71;
  undefined *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  SEL local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  undefined8 local_30;
  cfstringStruct *local_28;
  
  local_60 = (cfstringStruct *)0x0;
  local_58 = param_2;
  local_50 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_60,param_3);
  pcVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_50,PTR_s_queryValueForKey_inURLString__026ade88,&cf_video_id,local_60);
  _objc_retainAutoreleasedReturnValue();
  local_68 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
  pcVar4 = local_68;
  local_71 = 0;
  local_81 = 0;
  bVar1 = false;
  if (pcVar2 != (cfstringStruct *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_alphanumericCharacterSet_026a2e60);
    _objc_retainAutoreleasedReturnValue();
    local_71 = 1;
    local_70 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_81 = 1;
    puVar6 = PTR_s_rangeOfCharacterFromSet__0269db68;
    local_80 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = pcVar4 == (cfstringStruct *)0x7fffffffffffffff;
    local_98 = pcVar4;
    local_90 = puVar6;
  }
  if ((local_81 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_80);
  }
  if ((local_71 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  pcVar4 = local_68;
  if (bVar1) {
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = pcVar4;
    local_9c = 1;
    goto LAB_0102e8dc;
  }
  puVar3 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
             PTR_s_regularExpressionWithPattern_opt_0269ef10,&cf_video_id___a_zA_Z0_9___,1,0);
  _objc_retainAutoreleasedReturnValue();
  if (local_60 == (cfstringStruct *)0x0) {
    local_108 = &::cf___;
  }
  else {
    local_108 = local_60;
  }
  pcVar4 = local_60;
  local_a8 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
  local_38 = 0;
  local_30 = 0;
  local_40 = pcVar4;
  local_28 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_firstMatchInString_options_range_0269ef48,local_108,0,0,pcVar4);
  _objc_retainAutoreleasedReturnValue();
  local_b0 = puVar3;
  if (puVar3 == (undefined1 *)0x0) {
LAB_0102e8ac:
    local_48 = (cfstringStruct *)0x0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberOfRanges_0269ef18);
    local_48 = local_60;
    if (puVar3 < (undefined1 *)((long)&MACH_HEADER.magic + 2)) goto LAB_0102e8ac;
    puVar5 = local_b0;
    puVar3 = PTR_s_rangeAtIndex__0269ef20;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_rangeAtIndex__0269ef20,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_substringWithRange__0269d138,puVar5,puVar3)
    ;
    _objc_retainAutoreleasedReturnValue();
  }
  local_9c = 1;
  _objc_storeStrong(&local_b0);
  _objc_storeStrong(&local_a8,0);
LAB_0102e8dc:
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_48;
}

