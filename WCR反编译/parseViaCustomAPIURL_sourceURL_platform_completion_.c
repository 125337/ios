// parseViaCustomAPIURL:sourceURL:platform:completion: @ 0102925c

/* Function Stack Size: 0x30 bytes */

void WCRefineLinkParser::parseViaCustomAPIURL_sourceURL_platform_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,long_long param_5,ID param_6,
               undefined4 param_7)

{
  undefined8 uVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  ID IVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  cfstringStruct *local_2b8;
  cfstringStruct *local_248;
  cfstringStruct *local_240;
  cfstringStruct *local_228;
  cfstringStruct *local_200;
  undefined *local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  code *local_1c0;
  undefined *local_1b8;
  cfstringStruct *local_1b0;
  undefined8 local_1a8;
  ID local_1a0;
  long_long local_198;
  undefined *local_190;
  undefined4 local_184;
  undefined *local_180;
  undefined4 local_178;
  undefined4 local_174;
  code *local_170;
  undefined *local_168;
  undefined8 local_160;
  undefined *local_158;
  undefined *local_150;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  ulong local_108;
  undefined *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  undefined *local_e8;
  cfstringStruct *local_e0;
  undefined8 local_d8;
  long_long local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = (cfstringStruct *)0x0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  local_c8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_c8,param_4);
  local_d8 = 0;
  local_d0 = param_5;
  _objc_storeStrong(&local_d8,param_6);
  local_e0 = (cfstringStruct *)0x0;
  pcVar2 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_containsString__0269d0b0,&cf__url_);
  if (((ulong)pcVar2 & 1) == 0) {
    pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSURLComponents_026ce130;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURLComponents_026ce130,PTR_s_componentsWithString__0269d818,
               local_c0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_f8 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_100 = puVar3;
    _memset(auStack_148,0,0x40);
    pcVar2 = local_f8;
    (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_queryItems_0269d820);
    _objc_retainAutoreleasedReturnValue();
    local_228 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_228 = *(cfstringStruct **)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    local_240 = local_228;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_228,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10
              );
    if (local_240 != (cfstringStruct *)0x0) {
      lVar10 = *local_138;
      local_248 = (cfstringStruct *)0x0;
      do {
        do {
          if (*local_138 - lVar10 != 0) {
            _objc_enumerationMutation(*local_138 - lVar10,local_228);
          }
          uVar11 = *(ulong *)(local_140 + (long)local_248 * 8);
          local_108 = uVar11;
          (*(code *)PTR__objc_msgSend_02578628)(uVar11,PTR_s_name_0269d828);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar11;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar11);
          if ((uVar4 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_addObject__0269d180,local_108);
          }
          local_248 = (cfstringStruct *)((long)&local_248->field0_0x0 + 1);
        } while (local_248 < local_240);
        local_240 = local_228;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_228,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,
                   0x10);
        local_248 = (cfstringStruct *)0x0;
      } while (local_240 != (cfstringStruct *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(local_228);
    puVar3 = local_100;
    puVar5 = PTR__OBJC_CLASS___NSURLQueryItem_026ceaf0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURLQueryItem_026ceaf0,PTR_s_queryItemWithName_value__026aaf20,
               &cf_url,local_c8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_setQueryItems__026aaf28,local_100);
    pcVar6 = local_f8;
    (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_URL_026a1c90);
    _objc_retainAutoreleasedReturnValue();
    pcVar7 = pcVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_e0;
    local_e0 = pcVar7;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar6);
    _objc_storeStrong(&local_100);
    _objc_storeStrong(&local_f8,0);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_URLQueryAllowedCharacterSet_0269d8f8)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_e8 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e8,PTR_s_removeCharactersInString__0269ef98,&cf______);
    pcVar2 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c8,PTR_s_stringByAddingPercentEncodingWit_0269d900,local_e8);
    _objc_retainAutoreleasedReturnValue();
    local_200 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_200 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_f0 = local_200;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar6 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c0,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__url_,local_f0);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_e0;
    local_e0 = pcVar6;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    _objc_storeStrong(&local_f0);
    _objc_storeStrong(&local_e8,0);
  }
  if (local_e0 == (cfstringStruct *)0x0) {
    local_2b8 = &::cf___;
  }
  else {
    local_2b8 = local_e0;
  }
  puVar3 = PTR__OBJC_CLASS___NSURL_026ce328;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,local_2b8);
  _objc_retainAutoreleasedReturnValue();
  local_150 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_scheme_026a1dd8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_158 = puVar5;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if ((local_150 == (undefined *)0x0) ||
     ((puVar3 = local_158,
      (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_isEqualToString__0269ccc8,&cf_http),
      ((ulong)puVar3 & 1) == 0 &&
      (puVar3 = local_158,
      (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_isEqualToString__0269ccc8,&cf_https),
      ((ulong)puVar3 & 1) == 0)))) {
    puVar3 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_d8;
    local_180 = PTR___NSConcreteStackBlock_02578660;
    local_178 = 0xc2000000;
    local_174 = 0;
    local_170 = FUN_01029c70;
    local_168 = &DAT_025814c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_160 = uVar1;
    _dispatch_async(puVar3,&local_180);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_184 = 1;
    _objc_storeStrong(&local_160,0);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableURLRequest_026ce480;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableURLRequest_026ce480,PTR_s_requestWithURL__026a16e0,
               local_150);
    _objc_retainAutoreleasedReturnValue();
    local_190 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setHTTPMethod__026a64b0,&cf_GET);
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4046800000000000,local_190,PTR_s_setTimeoutInterval__0269cae8);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_190,PTR_s_setValue_forHTTPHeaderField__026a16e8,&cf_application_json,&cf_Accept
              );
    puVar3 = local_190;
    IVar8 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_mobileUA_026adc18);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_setValue_forHTTPHeaderField__026a16e8,IVar8,&cf_User_Agent);
    (*(code *)PTR__objc_release_02578630)(IVar8);
    puVar5 = PTR__OBJC_CLASS___NSURLSession_026ce498;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURLSession_026ce498,PTR_s_sharedSession_026a64c0);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_d8;
    puVar3 = local_190;
    local_1d0 = PTR___NSConcreteStackBlock_02578660;
    local_1c8 = 0xc2000000;
    local_1c4 = 0;
    local_1c0 = FUN_01029dac;
    local_1b8 = &DAT_025846b0;
    local_1a0 = local_b0;
    (*(code *)PTR__objc_retain_02578638)();
    pcVar2 = local_c8;
    local_1a8 = uVar1;
    local_198 = local_d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_1b0 = pcVar2;
    puVar9 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_dataTaskWithRequest_completionHa_026a5f60,puVar3,&local_1d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar9);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _objc_storeStrong(&local_1b0);
    _objc_storeStrong(&local_1a8,0);
    _objc_storeStrong(&local_190,0);
    local_184 = 0;
  }
  _objc_storeStrong(&local_158);
  _objc_storeStrong(&local_150,0);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

