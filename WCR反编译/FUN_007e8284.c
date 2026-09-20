// FUN_007e8284 @ 007e8284

void FUN_007e8284(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong local_268;
  ulong local_260;
  ulong local_218;
  ulong local_210;
  undefined *local_1e8;
  undefined1 auStack_1e0 [8];
  long local_1d8;
  long *local_1d0;
  undefined8 local_1a0;
  undefined *local_198 [3];
  undefined1 auStack_180 [8];
  long local_178;
  long *local_170;
  undefined8 local_140;
  long local_138;
  long local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = param_1;
  local_130 = param_1;
  if (DAT_028cce98 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = DAT_028cce98;
    DAT_028cce98 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_028cce98,PTR_s_setObject_forKeyedSubscript__0269d248,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  _memset(auStack_180,0,0x40);
  uVar2 = *(ulong *)(param_1 + 0x30);
  (*(code *)PTR__objc_retain_02578638)();
  local_210 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_a8,0x10);
  if (local_210 != 0) {
    lVar5 = *local_170;
    local_218 = 0;
    do {
      do {
        if (*local_170 - lVar5 != 0) {
          _objc_enumerationMutation(*local_170 - lVar5,uVar2);
        }
        local_140 = *(undefined8 *)(local_178 + local_218 * 8);
        puVar3 = DAT_028cce88;
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_028cce88,PTR_s_objectForKeyedSubscript__0269d098,local_140);
        _objc_retainAutoreleasedReturnValue();
        local_198[0] = puVar3;
        if (puVar3 == (undefined *)0x0) {
          puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = local_198[0];
          local_198[0] = puVar1;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          (*(code *)PTR__objc_msgSend_02578628)
                    (DAT_028cce88,PTR_s_setObject_forKeyedSubscript__0269d248,local_198[0],local_140
                    );
        }
        _memset(auStack_1e0,0,0x40);
        uVar4 = *(ulong *)(param_1 + 0x38);
        (*(code *)PTR__objc_retain_02578638)();
        local_260 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e0,auStack_128,
                   0x10);
        if (local_260 != 0) {
          lVar6 = *local_1d0;
          local_268 = 0;
          do {
            do {
              if (*local_1d0 - lVar6 != 0) {
                _objc_enumerationMutation(*local_1d0 - lVar6,uVar4);
              }
              local_1a0 = *(undefined8 *)(local_1d8 + local_268 * 8);
              puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
              _objc_retainAutoreleasedReturnValue();
              local_1e8 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar3,PTR_s_setObject_forKeyedSubscript__0269d248,local_1a0,&cf_code);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1e8,PTR_s_setObject_forKeyedSubscript__0269d248,
                         *(undefined8 *)(param_1 + 0x20),&cf_messageId);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_198[0],PTR_s_addObject__0269d180,local_1e8);
              **(long **)(param_1 + 0x40) = **(long **)(param_1 + 0x40) + 1;
              _objc_storeStrong(&local_1e8,0);
              local_268 = local_268 + 1;
            } while (local_268 < local_260);
            local_260 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e0,auStack_128
                       ,0x10);
            local_268 = 0;
          } while (local_260 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar4);
        _objc_storeStrong(local_198,0);
        local_218 = local_218 + 1;
      } while (local_218 < local_210);
      local_210 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_a8,0x10);
      local_218 = 0;
    } while (local_210 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

