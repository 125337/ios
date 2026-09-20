// parseXHSResolvedURL:sourceURL:completion: @ 01049a34

/* Function Stack Size: 0x28 bytes */

void WCRefineLinkParser::parseXHSResolvedURL_sourceURL_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *local_248;
  undefined *local_240;
  cfstringStruct *local_1a0;
  cfstringStruct *local_178;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  long local_110;
  undefined *local_108;
  undefined *local_100;
  cfstringStruct *local_f8;
  undefined *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  long local_c0;
  SEL local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_c0,param_3);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_4);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_5);
  pcVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_xhsNoteIDFromURL__026ae028,local_c0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_b0;
  local_d8 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b0,PTR_s_queryValueForKey_inURLString__026ade88,&cf_xsec_token,local_c0);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_b0;
  local_e0 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b0,PTR_s_queryValueForKey_inURLString__026ade88,&cf_xsec_source,local_c0);
  _objc_retainAutoreleasedReturnValue();
  local_178 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_178 = &cf_app_share;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_e8 = local_178;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = local_c0;
  local_f0 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
  if (lVar5 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_addObject__0269d180,local_c0);
  }
  pcVar1 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
  if ((pcVar1 == (cfstringStruct *)0x0) ||
     (pcVar2 = local_e0, (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0),
     pcVar1 = local_e0, pcVar2 == (cfstringStruct *)0x0)) {
    pcVar1 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
    puVar3 = local_f0;
    if (pcVar1 != (cfstringStruct *)0x0) {
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf_https___www_xiaohongshu_com_explore___);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar3 = local_f0;
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf_https___www_xiaohongshu_com_discovery_item___);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_URLQueryAllowedCharacterSet_0269d8f8)
    ;
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_stringByAddingPercentEncodingWit_0269d900);
    _objc_retainAutoreleasedReturnValue();
    local_1a0 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_1a0 = local_e0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_f8 = local_1a0;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_f0;
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
               &cf_https___www_xiaohongshu_com_explore____xsec_token____xsec_source___);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar3 = local_f0;
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
               &cf_https___www_xiaohongshu_com_discovery_item____xsec_token____xsec_source___);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_f8,0);
  }
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  local_100 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  local_108 = puVar4;
  _memset(auStack_150,0,0x40);
  puVar3 = local_f0;
  (*(code *)PTR__objc_retain_02578638)();
  local_240 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,0x10);
  if (local_240 != (undefined *)0x0) {
    lVar5 = *local_140;
    local_248 = (undefined *)0x0;
    do {
      do {
        if (*local_140 - lVar5 != 0) {
          _objc_enumerationMutation(*local_140 - lVar5,puVar3);
        }
        lVar6 = *(long *)(local_148 + (long)local_248 * 8);
        local_110 = lVar6;
        (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_length_0269cca0);
        if ((lVar6 != 0) &&
           (puVar4 = local_108,
           (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_containsObject__0269cbb8,local_110)
           , ((ulong)puVar4 & 1) == 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_addObject__0269d180,local_110);
          (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_addObject__0269d180,local_110);
        }
        local_248 = local_248 + 1;
      } while (local_248 < local_240);
      local_240 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,0x10)
      ;
      local_248 = (undefined *)0x0;
    } while (local_240 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_f0,local_100);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b0,PTR_s_tryXHSCandidates_index_noteID_to_026ae030,local_f0,0,local_d8,local_e0,
             local_e8,local_c0,local_c8,local_d0);
  _objc_storeStrong(&local_108);
  _objc_storeStrong(&local_100,0);
  _objc_storeStrong(&local_f0,0);
  _objc_storeStrong(&local_e8,0);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

