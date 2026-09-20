// tikTokCleanVideoURL: @ 01058944

/* Function Stack Size: 0x18 bytes */

ID WCRefineLinkParser::tikTokCleanVideoURL_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined *local_1b8;
  undefined *local_180;
  undefined *local_178;
  undefined *local_160;
  ulong local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  ulong local_f0;
  undefined *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined4 local_cc;
  ulong local_c8;
  SEL local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = (undefined *)param_1;
  _objc_storeStrong(&local_c8,param_3);
  uVar2 = local_c8;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_c8, (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    local_b0 = (undefined *)0x0;
    local_cc = 1;
  }
  else {
    puVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_unescapeJSONString__026adcb8,local_c8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_d8 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar3 = PTR__OBJC_CLASS___NSURLComponents_026ce130;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURLComponents_026ce130,PTR_s_componentsWithString__0269d818,
               local_d8);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_d8;
    local_e0 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = puVar1;
      local_cc = 1;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_e8 = puVar1;
      _memset(auStack_130,0,0x40);
      puVar1 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_queryItems_0269d820);
      _objc_retainAutoreleasedReturnValue();
      local_160 = puVar1;
      if (puVar1 == (undefined *)0x0) {
        local_160 = *(undefined **)PTR____NSArray0___02578280;
      }
      (*(code *)PTR__objc_retain_02578638)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      local_178 = local_160;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_160,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,
                 0x10);
      if (local_178 != (undefined *)0x0) {
        lVar4 = *local_120;
        local_180 = (undefined *)0x0;
        do {
          do {
            if (*local_120 - lVar4 != 0) {
              _objc_enumerationMutation(*local_120 - lVar4,local_160);
            }
            uVar5 = *(ulong *)(local_128 + (long)local_180 * 8);
            local_f0 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_name_0269d828);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            local_138 = uVar2;
            (*(code *)PTR__objc_release_02578630)(uVar5);
            uVar2 = local_138;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_138,PTR_s_isEqualToString__0269ccc8,&cf_watermark);
            if (((uVar2 & 1) == 0) &&
               (uVar2 = local_138,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_138,PTR_s_isEqualToString__0269ccc8,&cf_logo_name), (uVar2 & 1) == 0
               )) {
              (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_addObject__0269d180,local_f0);
              local_cc = 0;
            }
            else {
              local_cc = 3;
            }
            _objc_storeStrong(&local_138,0);
            local_180 = local_180 + 1;
          } while (local_180 < local_178);
          local_178 = local_160;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_160,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,
                     auStack_a8,0x10);
          local_180 = (undefined *)0x0;
        } while (local_178 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(local_160);
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setQueryItems__026aaf28,local_e8);
      puVar1 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_URL_026a1c90);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_1b8 = puVar3;
      if (puVar3 == (undefined *)0x0) {
        local_1b8 = local_d8;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = local_1b8;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      local_cc = 1;
      _objc_storeStrong(&local_e8,0);
    }
    _objc_storeStrong(&local_e0);
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_b0;
}

