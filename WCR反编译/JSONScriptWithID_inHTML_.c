// JSONScriptWithID:inHTML: @ 01057f64

/* Function Stack Size: 0x20 bytes */

ID WCRefineLinkParser::JSONScriptWithID_inHTML_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined *local_78;
  undefined4 local_6c;
  long local_68;
  long local_60;
  SEL local_58;
  ID local_50;
  ID local_48;
  long local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_60 = 0;
  local_58 = param_2;
  local_50 = param_1;
  _objc_storeStrong(&local_60,param_3);
  local_68 = 0;
  _objc_storeStrong(&local_68,param_4);
  lVar1 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
  if ((lVar1 == 0) ||
     (lVar1 = local_68, (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0),
     puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8, lVar1 == 0)) {
    local_48 = 0;
    local_6c = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
               PTR_s_escapedPatternForString__0269ef40,local_60);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_stringWithFormat__0269cca8,
               &cf_<script[_>__id_____________>__>___s_S____<_script>);
    _objc_retainAutoreleasedReturnValue();
    local_78 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar3 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
               PTR_s_regularExpressionWithPattern_opt_0269ef10,local_78,1,0);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_68;
    lVar4 = local_68;
    local_80 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
    local_38 = 0;
    local_30 = 0;
    local_40 = lVar4;
    local_28 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_firstMatchInString_options_range_0269ef48,lVar1,0,0,lVar4);
    _objc_retainAutoreleasedReturnValue();
    local_88 = puVar3;
    if ((puVar3 == (undefined1 *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberOfRanges_0269ef18),
       local_48 = local_50, lVar1 = local_68, puVar3 < (undefined1 *)((long)&MACH_HEADER.magic + 2))
       ) {
      local_48 = 0;
    }
    else {
      puVar5 = local_88;
      puVar3 = PTR_s_rangeAtIndex__0269ef20;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_rangeAtIndex__0269ef20,1);
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_substringWithRange__0269d138,puVar5,puVar3);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_JSONObjectFromString__026adcc0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(lVar1);
    }
    local_6c = 1;
    _objc_storeStrong(&local_88);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_78,0);
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  _objc_autoreleaseReturnValue();
  return local_48;
}

