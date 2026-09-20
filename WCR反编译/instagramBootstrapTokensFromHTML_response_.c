// instagramBootstrapTokensFromHTML:response: @ 01061ce0

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

ID WCRefineLinkParser::instagramBootstrapTokensFromHTML_response_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  ID IVar6;
  long lVar7;
  ID IVar8;
  uint local_2a4;
  undefined *local_250;
  undefined *local_248;
  undefined *local_228;
  undefined *local_208;
  undefined1 auStack_1a0 [8];
  long local_198;
  long *local_190;
  ID local_160;
  undefined *local_158;
  undefined *local_150;
  byte local_141;
  undefined *local_140;
  undefined *local_138;
  undefined1 *local_130;
  undefined *local_128;
  undefined8 local_120;
  ID local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  ID local_100;
  ID local_f8;
  undefined *local_f0;
  undefined *local_e8;
  ID local_e0;
  SEL local_d8;
  ID local_d0;
  ID local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e0 = 0;
  local_d8 = param_2;
  local_d0 = param_1;
  _objc_storeStrong(&local_e0,param_3);
  local_e8 = (undefined *)0x0;
  _objc_storeStrong(&local_e8,param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_d0;
  local_f0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_d0,PTR_s_instagramTokenNamed_inHTML__026ae0e8,&cf_csrf_token,local_e0);
  _objc_retainAutoreleasedReturnValue();
  local_100 = 0;
  IVar8 = local_e0;
  local_f8 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0);
  if (IVar8 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
               PTR_s_regularExpressionWithPattern_opt_0269ef10,&cf__LSD__________token___________,0,
               0);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_e0;
    IVar8 = local_e0;
    local_108 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0);
    local_c0 = 0;
    local_b8 = 0;
    local_120 = 0;
    local_118 = IVar8;
    local_c8 = IVar8;
    local_b0 = IVar8;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_firstMatchInString_options_range_0269ef48,IVar3,0,0,IVar8);
    _objc_retainAutoreleasedReturnValue();
    local_110 = puVar2;
    if ((puVar2 == (undefined1 *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberOfRanges_0269ef18),
       IVar3 = local_e0, puVar2 < (undefined1 *)((long)&MACH_HEADER.magic + 2))) {
      IVar8 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d0,PTR_s_instagramTokenNamed_inHTML__026ae0e8,&cf_lsd,local_e0);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_100;
      local_100 = IVar8;
      (*(code *)PTR__objc_release_02578630)(IVar3);
    }
    else {
      puVar4 = local_110;
      puVar2 = PTR_s_rangeAtIndex__0269ef20;
      (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_rangeAtIndex__0269ef20,1);
      local_130 = puVar4;
      local_128 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_substringWithRange__0269d138,puVar4,puVar2);
      _objc_retainAutoreleasedReturnValue();
      IVar8 = local_100;
      local_100 = IVar3;
      (*(code *)PTR__objc_release_02578630)(IVar8);
    }
    _objc_storeStrong(&local_110);
    _objc_storeStrong(&local_108,0);
  }
  puVar2 = local_e8;
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_URL_026a1c90);
  _objc_retainAutoreleasedReturnValue();
  local_141 = 0;
  local_208 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_208 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,
               &cf_https___www_instagram_com_);
    _objc_retainAutoreleasedReturnValue();
    local_140 = local_208;
  }
  local_141 = puVar2 == (undefined *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_138 = local_208;
  if ((local_141 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_140);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSHTTPCookie_026cec90;
  puVar5 = local_e8;
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_allHeaderFields_026aaec0);
  _objc_retainAutoreleasedReturnValue();
  local_228 = puVar5;
  if (puVar5 == (undefined *)0x0) {
    local_228 = *(undefined **)PTR____NSDictionary0___02578288;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_cookiesWithResponseHeaderFields__026adc28,local_228,local_138);
  _objc_retainAutoreleasedReturnValue();
  local_150 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar5);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_158 = puVar2;
  _memset(auStack_1a0,0,0x40);
  puVar2 = local_150;
  (*(code *)PTR__objc_retain_02578638)();
  local_248 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,0x10);
  if (local_248 != (undefined *)0x0) {
    lVar7 = *local_190;
    local_250 = (undefined *)0x0;
    do {
      do {
        if (*local_190 - lVar7 != 0) {
          _objc_enumerationMutation(*local_190 - lVar7,puVar2);
        }
        IVar8 = *(ID *)(local_198 + (long)local_250 * 8);
        local_160 = IVar8;
        (*(code *)PTR__objc_msgSend_02578628)(IVar8,PTR_s_name_0269d828);
        _objc_retainAutoreleasedReturnValue();
        IVar3 = IVar8;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar8);
        puVar1 = local_158;
        puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
        if (IVar3 != 0) {
          IVar3 = local_160;
          (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_name_0269d828);
          _objc_retainAutoreleasedReturnValue();
          IVar8 = local_160;
          (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_value_0269d830);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_stringWithFormat__0269cca8,&cf______);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*(code *)PTR__objc_release_02578630)(IVar8);
          (*(code *)PTR__objc_release_02578630)(IVar3);
          IVar3 = local_f8;
          (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_length_0269cca0);
          local_2a4 = 0;
          if (IVar3 == 0) {
            IVar3 = local_160;
            (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_name_0269d828);
            _objc_retainAutoreleasedReturnValue();
            IVar8 = IVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            IVar6 = IVar8;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_2a4 = (uint)IVar6;
            (*(code *)PTR__objc_release_02578630)(IVar8);
            (*(code *)PTR__objc_release_02578630)(IVar3);
          }
          if ((local_2a4 & 1) != 0) {
            IVar8 = local_160;
            (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_value_0269d830);
            _objc_retainAutoreleasedReturnValue();
            IVar3 = local_f8;
            local_f8 = IVar8;
            (*(code *)PTR__objc_release_02578630)(IVar3);
          }
        }
        local_250 = local_250 + 1;
      } while (local_250 < local_248);
      local_248 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,0x10)
      ;
      local_250 = (undefined *)0x0;
    } while (local_248 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  IVar3 = local_f8;
  (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_length_0269cca0);
  if ((IVar3 != 0) &&
     (puVar5 = local_158, (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_count_0269cfe0),
     puVar2 = local_158, puVar5 == (undefined *)0x0)) {
    puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_csrftoken___
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(puVar5);
  }
  IVar3 = local_f8;
  (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_length_0269cca0);
  if (IVar3 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_f0,PTR_s_setObject_forKeyedSubscript__0269d248,local_f8,&cf_csrf);
  }
  IVar3 = local_100;
  (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_length_0269cca0);
  if (IVar3 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_f0,PTR_s_setObject_forKeyedSubscript__0269d248,local_100,&cf_lsd);
  }
  puVar2 = local_158;
  (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_count_0269cfe0);
  if (puVar2 != (undefined *)0x0) {
    puVar2 = local_158;
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_componentsJoinedByString__0269d140,&cf__);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_f0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_cookie);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  puVar2 = local_f0;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_158);
  _objc_storeStrong(&local_150,0);
  _objc_storeStrong(&local_138,0);
  _objc_storeStrong(&local_100,0);
  _objc_storeStrong(&local_f8,0);
  _objc_storeStrong(&local_f0,0);
  _objc_storeStrong(&local_e8,0);
  _objc_storeStrong(&local_e0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar2;
}

