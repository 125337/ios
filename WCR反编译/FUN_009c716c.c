// FUN_009c716c @ 009c716c

void FUN_009c716c(undefined8 param_1,byte param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined *local_210;
  undefined *local_208;
  undefined *local_1c0;
  undefined *local_1a0;
  undefined *local_188;
  undefined1 auStack_160 [8];
  long local_158;
  long *local_150;
  ulong local_120;
  undefined *local_118;
  undefined *local_110;
  byte local_101;
  undefined *local_100;
  undefined *local_f8;
  bool local_e9;
  undefined *local_e8;
  undefined *local_e0;
  bool local_d1;
  undefined *local_d0;
  undefined *local_c8;
  undefined4 local_c0;
  byte local_b9;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (undefined *)0x0;
  _objc_storeStrong(&local_b8,param_1);
  puVar4 = local_b8;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_b9 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  if (((ulong)puVar4 & 1) == 0) {
    local_b0 = (undefined *)0x0;
    local_c0 = 1;
  }
  else {
    puVar4 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_choices);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
    local_d1 = false;
    bVar1 = ((ulong)puVar5 & 1) == 0;
    if (bVar1) {
      local_188 = (undefined *)0x0;
    }
    else {
      local_188 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_choices);
      _objc_retainAutoreleasedReturnValue();
      local_d0 = local_188;
    }
    local_d1 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_c8 = local_188;
    if ((local_d1 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_d0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_firstObject_0269d1f8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
    local_e9 = false;
    bVar1 = ((ulong)puVar5 & 1) == 0;
    if (bVar1) {
      local_1a0 = (undefined *)0x0;
    }
    else {
      local_1a0 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      local_e8 = local_1a0;
    }
    local_e9 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_e0 = local_1a0;
    if ((local_e9 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_e8);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    pcVar2 = &cf_delta;
    if ((local_b9 & 1) == 0) {
      pcVar2 = &cf_message;
    }
    puVar4 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_objectForKeyedSubscript__0269d098,pcVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
    local_101 = 0;
    if (((ulong)puVar5 & 1) == 0) {
      local_1c0 = (undefined *)0x0;
    }
    else {
      pcVar2 = &cf_delta;
      if ((local_b9 & 1) == 0) {
        pcVar2 = &cf_message;
      }
      local_1c0 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_objectForKeyedSubscript__0269d098,pcVar2)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_101 = 1;
      local_100 = local_1c0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_f8 = local_1c0;
    if ((local_101 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_100);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar3 = local_f8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_content);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_110 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    puVar4 = local_110;
    if (((ulong)puVar3 & 1) == 0) {
      puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
      if (((ulong)puVar4 & 1) == 0) {
        local_b0 = (undefined *)0x0;
        local_c0 = 1;
      }
      else {
        puVar4 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
        _objc_retainAutoreleasedReturnValue();
        local_118 = puVar4;
        _memset(auStack_160,0,0x40);
        puVar4 = local_110;
        (*(code *)PTR__objc_retain_02578638)();
        local_208 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_160,auStack_a8,
                   0x10);
        if (local_208 != (undefined *)0x0) {
          lVar7 = *local_150;
          local_210 = (undefined *)0x0;
          do {
            do {
              if (*local_150 - lVar7 != 0) {
                _objc_enumerationMutation(*local_150 - lVar7,puVar4);
              }
              uVar8 = *(ulong *)(local_158 + (long)local_210 * 8);
              local_120 = uVar8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar8,PTR_s_objectForKeyedSubscript__0269d098,&cf_text);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              uVar6 = uVar8;
              (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar3);
              (*(code *)PTR__objc_release_02578630)(uVar8);
              puVar3 = local_118;
              if ((uVar6 & 1) != 0) {
                uVar6 = local_120;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_120,PTR_s_objectForKeyedSubscript__0269d098,&cf_text);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_appendString__0269ccb0);
                (*(code *)PTR__objc_release_02578630)(uVar6);
              }
              local_210 = local_210 + 1;
            } while (local_210 < local_208);
            local_208 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_160,auStack_a8
                       ,0x10);
            local_210 = (undefined *)0x0;
          } while (local_208 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar4);
        puVar4 = local_118;
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = puVar4;
        local_c0 = 1;
        _objc_storeStrong(&local_118,0);
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = puVar4;
      local_c0 = 1;
    }
    _objc_storeStrong(&local_110);
    _objc_storeStrong(&local_f8,0);
    _objc_storeStrong(&local_e0,0);
    _objc_storeStrong(&local_c8,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

