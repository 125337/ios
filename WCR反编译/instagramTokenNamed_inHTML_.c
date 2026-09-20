// instagramTokenNamed:inHTML: @ 01061a58

/* Function Stack Size: 0x20 bytes */

ID WCRefineLinkParser::instagramTokenNamed_inHTML_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  undefined1 *puVar6;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined *local_68;
  undefined4 local_5c;
  ID local_58;
  long local_50;
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
  local_58 = 0;
  _objc_storeStrong(&local_58,param_4);
  lVar1 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  if ((lVar1 == 0) ||
     (IVar2 = local_58, (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0),
     IVar2 == 0)) {
    local_38 = 0;
    local_5c = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
               &cf______s___s__________);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
    local_68 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
               PTR_s_regularExpressionWithPattern_opt_0269ef10,puVar3,0,0);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_58;
    IVar5 = local_58;
    local_70 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
    local_28 = 0;
    local_20 = 0;
    local_30 = IVar5;
    local_18 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_firstMatchInString_options_range_0269ef48,IVar2,0,0,IVar5);
    _objc_retainAutoreleasedReturnValue();
    local_78 = puVar4;
    if ((puVar4 == (undefined1 *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_numberOfRanges_0269ef18),
       local_38 = local_58, puVar4 < (undefined1 *)((long)&MACH_HEADER.magic + 2))) {
      local_38 = 0;
    }
    else {
      puVar6 = local_78;
      puVar3 = PTR_s_rangeAtIndex__0269ef20;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_rangeAtIndex__0269ef20,1);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_substringWithRange__0269d138,puVar6,puVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    local_5c = 1;
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_autoreleaseReturnValue();
  return local_38;
}

