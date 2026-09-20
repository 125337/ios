// FUN_014fc694 @ 014fc694

void FUN_014fc694(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong local_2b0;
  ulong local_2a8;
  ulong local_248;
  ulong local_240;
  undefined1 auStack_1f8 [8];
  long local_1f0;
  long *local_1e8;
  ulong local_1b8;
  ulong local_1b0;
  undefined1 auStack_1a8 [8];
  long local_1a0;
  long *local_198;
  ulong local_168;
  undefined *local_160;
  undefined4 local_154;
  undefined8 local_150;
  undefined8 local_148;
  ulong local_140;
  ulong local_138;
  undefined8 local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = 0;
  local_130 = param_1;
  _objc_storeStrong(&local_138);
  local_140 = 0;
  _objc_storeStrong(&local_140,param_3);
  uVar2 = local_138;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_150 = param_1;
  local_148 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_154 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_140;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_160 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    uVar5 = local_140;
    if ((uVar2 & 1) == 0) {
      puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar1);
      if ((uVar5 & 1) != 0) {
        uVar2 = local_140;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_140,PTR_s_objectForKeyedSubscript__0269d098,&cf_ts);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_1b0 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
        if ((uVar2 & 1) != 0) {
          _memset(auStack_1f8,0,0x40);
          uVar2 = local_1b0;
          (*(code *)PTR__objc_retain_02578638)();
          local_2a8 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,auStack_128,
                     0x10);
          if (local_2a8 != 0) {
            lVar4 = *local_1e8;
            local_2b0 = 0;
            do {
              do {
                if (*local_1e8 - lVar4 != 0) {
                  _objc_enumerationMutation(*local_1e8 - lVar4,uVar2);
                }
                uVar5 = *(ulong *)(local_1f0 + local_2b0 * 8);
                local_1b8 = uVar5;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar5,PTR_s_respondsToSelector__026ca818,PTR_s_unsignedIntValue_0269db10)
                ;
                puVar3 = local_160;
                puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
                if ((uVar5 & 1) != 0) {
                  uVar5 = local_1b8;
                  (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_unsignedIntValue_0269db10);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar1,PTR_s_numberWithUnsignedInt__0269d800,uVar5);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
                  (*(code *)PTR__objc_release_02578630)(puVar1);
                }
                local_2b0 = local_2b0 + 1;
              } while (local_2b0 < local_2a8);
              local_2a8 = uVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,
                         auStack_128,0x10);
              local_2b0 = 0;
            } while (local_2a8 != 0);
          }
          (*(code *)PTR__objc_release_02578630)(uVar2);
        }
        _objc_storeStrong(&local_1b0,0);
      }
    }
    else {
      _memset(auStack_1a8,0,0x40);
      uVar2 = local_140;
      (*(code *)PTR__objc_retain_02578638)();
      local_240 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,0x10);
      if (local_240 != 0) {
        lVar4 = *local_198;
        local_248 = 0;
        do {
          do {
            if (*local_198 - lVar4 != 0) {
              _objc_enumerationMutation(*local_198 - lVar4,uVar2);
            }
            uVar5 = *(ulong *)(local_1a0 + local_248 * 8);
            local_168 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar5,PTR_s_respondsToSelector__026ca818,PTR_s_unsignedIntValue_0269db10);
            puVar3 = local_160;
            puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
            if ((uVar5 & 1) != 0) {
              uVar5 = local_168;
              (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_unsignedIntValue_0269db10);
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar1,PTR_s_numberWithUnsignedInt__0269d800,uVar5);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
              (*(code *)PTR__objc_release_02578630)(puVar1);
            }
            local_248 = local_248 + 1;
          } while (local_248 < local_240);
          local_240 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,
                     0x10);
          local_248 = 0;
        } while (local_240 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    puVar1 = local_160;
    (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_count_0269cfe0);
    if (puVar1 != (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028e3750,PTR_s_setObject_forKeyedSubscript__0269d248,local_160,local_138);
    }
    _objc_storeStrong(&local_160,0);
    local_154 = 0;
  }
  _objc_storeStrong(&local_140);
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

