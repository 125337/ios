// instagramShortcodeFromURL: @ 0106185c

/* Function Stack Size: 0x18 bytes */

ID WCRefineLinkParser::instagramShortcodeFromURL_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  ID IVar3;
  undefined1 *puVar4;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined4 local_54;
  ID local_50;
  SEL local_48;
  ID local_40;
  ID local_38;
  ID local_30;
  undefined8 local_28;
  undefined8 local_20;
  ID local_18;
  
  local_50 = 0;
  local_48 = param_2;
  local_40 = param_1;
  _objc_storeStrong(&local_50,param_3);
  IVar1 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  if (IVar1 == 0) {
    local_38 = 0;
    local_54 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
               PTR_s_regularExpressionWithPattern_opt_0269ef10,
               &cf_instagram__com_______________reel_reels_p_tv____A_Za_z0_9_____,1,0);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_50;
    IVar3 = local_50;
    local_60 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    local_28 = 0;
    local_20 = 0;
    local_30 = IVar3;
    local_18 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_firstMatchInString_options_range_0269ef48,IVar1,0,0,IVar3);
    _objc_retainAutoreleasedReturnValue();
    local_68 = puVar2;
    if ((puVar2 == (undefined1 *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberOfRanges_0269ef18),
       local_38 = local_50, puVar2 < (undefined1 *)((long)&MACH_HEADER.magic + 2))) {
      local_38 = 0;
    }
    else {
      puVar4 = local_68;
      puVar2 = PTR_s_rangeAtIndex__0269ef20;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_rangeAtIndex__0269ef20,1);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_substringWithRange__0269d138,puVar4,puVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    local_54 = 1;
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_50,0);
  _objc_autoreleaseReturnValue();
  return local_38;
}

