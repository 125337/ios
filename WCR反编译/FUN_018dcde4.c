// FUN_018dcde4 @ 018dcde4

void FUN_018dcde4(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  cfstringStruct *pcVar6;
  ulong local_2d8;
  ulong local_2d0;
  cfstringStruct *local_280;
  ulong local_260;
  ulong local_258;
  ulong local_230;
  undefined1 auStack_218 [8];
  long local_210;
  long *local_208;
  ulong local_1d8;
  undefined *local_1d0;
  cfstringStruct *local_1c8;
  bool local_1b9;
  cfstringStruct *local_1b8;
  cfstringStruct *local_1b0;
  undefined4 local_1a4;
  cfstringStruct *local_1a0;
  undefined1 auStack_198 [8];
  long local_190;
  long *local_188;
  cfstringStruct *local_158;
  undefined *local_150;
  undefined *local_148;
  ulong local_140;
  undefined *local_138;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_130 = 0;
  _objc_storeStrong(&local_130,param_1);
  if (local_130 == 0) {
    local_230 = *(ulong *)PTR____NSArray0___02578280;
  }
  else {
    local_230 = local_130;
  }
  puVar1 = PTR__OBJC_CLASS___NSSet_026ce150;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_setWithArray__0269d9a0,local_230);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0;
  local_138 = puVar1;
  _WCRChatToolbarRefreshActions();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_140 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  local_148 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  local_150 = puVar4;
  _memset(auStack_198,0,0x40);
  uVar3 = local_140;
  (*(code *)PTR__objc_retain_02578638)();
  local_258 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,0x10);
  if (local_258 != 0) {
    lVar5 = *local_188;
    local_260 = 0;
    do {
      do {
        if (*local_188 - lVar5 != 0) {
          _objc_enumerationMutation(*local_188 - lVar5,uVar3);
        }
        pcVar6 = *(cfstringStruct **)(local_190 + local_260 * 8);
        local_158 = pcVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar6,PTR_s_objectForKeyedSubscript__0269d098,_WCRChatToolbarActionKey);
        _objc_retainAutoreleasedReturnValue();
        local_1a0 = pcVar6;
        FUN_018db148();
        if (((ulong)pcVar6 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_addObject__0269d180,local_158);
          local_1a4 = 3;
        }
        else {
          pcVar6 = local_1a0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_length_0269cca0);
          local_1b9 = false;
          if (pcVar6 < (cfstringStruct *)0x6) {
            local_280 = &cf___;
          }
          else {
            local_280 = local_1a0;
            (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_substringFromIndex__0269d120,5);
            _objc_retainAutoreleasedReturnValue();
            local_1b8 = local_280;
          }
          local_1b9 = pcVar6 >= (cfstringStruct *)0x6;
          (*(code *)PTR__objc_retain_02578638)();
          local_1b0 = local_280;
          if ((local_1b9 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_1b8);
          }
          pcVar6 = local_1b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_length_0269cca0);
          if ((pcVar6 == (cfstringStruct *)0x0) ||
             (puVar1 = local_138,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_138,PTR_s_containsObject__0269cbb8,local_1b0),
             ((ulong)puVar1 & 1) == 0)) {
            local_1a4 = 3;
          }
          else {
            pcVar6 = local_158;
            (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_mutableCopy_0269d8a0);
            puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
            local_1c8 = pcVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1c8,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,
                       _WCRChatToolbarEnabledKey);
            (*(code *)PTR__objc_release_02578630)(puVar1);
            (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_addObject__0269d180,local_1c8);
            (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_addObject__0269d180,local_1b0);
            _objc_storeStrong(&local_1c8,0);
            local_1a4 = 0;
          }
          _objc_storeStrong(&local_1b0,0);
        }
        _objc_storeStrong(&local_1a0,0);
        local_260 = local_260 + 1;
      } while (local_260 < local_258);
      local_258 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,0x10);
      local_260 = 0;
    } while (local_258 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar3);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_1d0 = puVar1;
  _memset(auStack_218,0,0x40);
  uVar3 = local_130;
  (*(code *)PTR__objc_retain_02578638)();
  local_2d0 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_218,auStack_128,0x10);
  if (local_2d0 != 0) {
    lVar5 = *local_208;
    local_2d8 = 0;
    do {
      do {
        if (*local_208 - lVar5 != 0) {
          _objc_enumerationMutation(*local_208 - lVar5,uVar3);
        }
        uVar2 = *(ulong *)(local_210 + local_2d8 * 8);
        puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_1d8 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
        if ((((uVar2 & 1) != 0) &&
            (uVar2 = local_1d8,
            (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_length_0269cca0), uVar2 != 0)) &&
           (puVar1 = local_150,
           (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_containsObject__0269cbb8,local_1d8)
           , ((ulong)puVar1 & 1) == 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_addObject__0269d180,local_1d8);
        }
        local_2d8 = local_2d8 + 1;
      } while (local_2d8 < local_2d0);
      local_2d0 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_218,auStack_128,0x10)
      ;
      local_2d8 = 0;
    } while (local_2d0 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar3);
  puVar1 = local_1d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_count_0269cfe0);
  if (puVar1 == (undefined *)0x0) {
    FUN_018ca37c(0);
  }
  else {
    FUN_018e03f0(local_1d0);
  }
  _objc_storeStrong(&local_1d0);
  _objc_storeStrong(&local_150,0);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_140,0);
  _objc_storeStrong(&local_138,0);
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

