// FUN_007ef8a0 @ 007ef8a0

void FUN_007ef8a0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong local_278;
  ulong local_270;
  ulong local_220;
  ulong local_218;
  undefined1 auStack_1f0 [8];
  long local_1e8;
  long *local_1e0;
  ulong local_1b0;
  undefined *local_1a8;
  undefined4 local_19c;
  ulong local_198 [3];
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
  _memset(auStack_180,0,0x40);
  uVar1 = DAT_028cce88;
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028cce88,PTR_s_allKeys_0269ef58);
  _objc_retainAutoreleasedReturnValue();
  local_218 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_218 != 0) {
    lVar5 = *local_170;
    local_220 = 0;
    do {
      do {
        if (*local_170 - lVar5 != 0) {
          _objc_enumerationMutation(*local_170 - lVar5,uVar1);
        }
        local_140 = *(undefined8 *)(local_178 + local_220 * 8);
        uVar2 = DAT_028cce88;
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_028cce88,PTR_s_objectForKeyedSubscript__0269d098,local_140);
        _objc_retainAutoreleasedReturnValue();
        local_198[0] = uVar2;
        if ((uVar2 == 0) ||
           ((*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_count_0269cfe0), uVar2 == 0)) {
          local_19c = 3;
        }
        else {
          puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          local_1a8 = puVar3;
          _memset(auStack_1f0,0,0x40);
          uVar2 = local_198[0];
          (*(code *)PTR__objc_retain_02578638)();
          local_270 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,auStack_128,
                     0x10);
          if (local_270 != 0) {
            lVar6 = *local_1e0;
            local_278 = 0;
            do {
              do {
                if (*local_1e0 - lVar6 != 0) {
                  _objc_enumerationMutation(*local_1e0 - lVar6,uVar2);
                }
                uVar7 = *(ulong *)(local_1e8 + local_278 * 8);
                local_1b0 = uVar7;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar7,PTR_s_objectForKeyedSubscript__0269d098,&cf_messageId);
                _objc_retainAutoreleasedReturnValue();
                uVar4 = uVar7;
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(uVar7);
                if ((uVar4 & 1) != 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1a8,PTR_s_addObject__0269d180,local_1b0);
                }
                local_278 = local_278 + 1;
              } while (local_278 < local_270);
              local_270 = uVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,
                         auStack_128,0x10);
              local_278 = 0;
            } while (local_270 != 0);
          }
          (*(code *)PTR__objc_release_02578630)(uVar2);
          puVar3 = local_1a8;
          (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_count_0269cfe0);
          if (puVar3 != (undefined *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_198[0],PTR_s_removeObjectsInArray__026a8500,local_1a8);
          }
          _objc_storeStrong(&local_1a8,0);
          local_19c = 0;
        }
        _objc_storeStrong(local_198,0);
        local_220 = local_220 + 1;
      } while (local_220 < local_218);
      local_218 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_a8,0x10);
      local_220 = 0;
    } while (local_218 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if (DAT_028cce98 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028cce98,PTR_s_removeObjectForKey__0269d700,*(undefined8 *)(param_1 + 0x20));
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

