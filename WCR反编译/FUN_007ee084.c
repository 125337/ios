// FUN_007ee084 @ 007ee084

void FUN_007ee084(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long local_368;
  ulong local_2b0;
  ulong local_2a8;
  ulong local_268;
  ulong local_260;
  undefined *local_220;
  long local_218;
  undefined8 local_210;
  undefined1 local_201;
  long local_200;
  undefined1 auStack_1f8 [8];
  long local_1f0;
  long *local_1e8;
  ulong local_1b8;
  ulong local_1b0;
  undefined1 auStack_1a8 [8];
  long local_1a0;
  long *local_198;
  undefined8 local_168;
  long local_160;
  long local_148;
  long local_140;
  long local_138;
  long local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  lVar7 = DAT_028cce98;
  local_138 = param_1;
  local_130 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_028cce98,PTR_s_objectForKeyedSubscript__0269d098,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  local_140 = lVar7;
  if (lVar7 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar7,PTR_s_objectForKeyedSubscript__0269d098,&cf_processedCount);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar7);
    local_160 = 0;
    local_148 = lVar8;
    _memset(auStack_1a8,0,0x40);
    uVar1 = DAT_028cce88;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028cce88,PTR_s_allKeys_0269ef58);
    _objc_retainAutoreleasedReturnValue();
    local_260 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_260 != 0) {
      lVar7 = *local_198;
      local_268 = 0;
      do {
        do {
          if (*local_198 - lVar7 != 0) {
            _objc_enumerationMutation(*local_198 - lVar7,uVar1);
          }
          local_168 = *(undefined8 *)(local_1a0 + local_268 * 8);
          uVar3 = DAT_028cce88;
          (*(code *)PTR__objc_msgSend_02578628)
                    (DAT_028cce88,PTR_s_objectForKeyedSubscript__0269d098,local_168);
          _objc_retainAutoreleasedReturnValue();
          local_1b0 = uVar3;
          _memset(auStack_1f8,0,0x40);
          uVar3 = local_1b0;
          (*(code *)PTR__objc_retain_02578638)();
          local_2a8 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,auStack_128,
                     0x10);
          if (local_2a8 != 0) {
            lVar8 = *local_1e8;
            local_2b0 = 0;
            do {
              do {
                if (*local_1e8 - lVar8 != 0) {
                  _objc_enumerationMutation(*local_1e8 - lVar8,uVar3);
                }
                uVar9 = *(ulong *)(local_1f0 + local_2b0 * 8);
                local_1b8 = uVar9;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar9,PTR_s_objectForKeyedSubscript__0269d098,&cf_messageId);
                _objc_retainAutoreleasedReturnValue();
                uVar2 = uVar9;
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(uVar9);
                if ((uVar2 & 1) != 0) {
                  local_160 = local_160 + 1;
                }
                local_2b0 = local_2b0 + 1;
              } while (local_2b0 < local_2a8);
              local_2a8 = uVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,
                         auStack_128,0x10);
              local_2b0 = 0;
            } while (local_2a8 != 0);
          }
          (*(code *)PTR__objc_release_02578630)(uVar3);
          _objc_storeStrong(&local_1b0,0);
          local_268 = local_268 + 1;
        } while (local_268 < local_260);
        local_260 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,0x10
                  );
        local_268 = 0;
      } while (local_260 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (local_160 == 0) {
      lVar7 = local_140;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_140,PTR_s_objectForKeyedSubscript__0269d098,&cf_totalCount);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar7);
      local_200 = lVar8;
      if (lVar8 <= local_148) {
        uVar3 = *(ulong *)(param_1 + 0x28);
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_objectForKeyedSubscript__0269d098,&cf_completionNotificationSent);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar3);
        local_201 = (undefined1)uVar1;
        if ((uVar1 & 1) == 0) {
          puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (*(undefined8 *)(param_1 + 0x28),PTR_s_setObject_forKeyedSubscript__0269d248,
                     puVar4,&cf_completionNotificationSent);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          (*(code *)PTR__objc_msgSend_02578628)
                    (DAT_028cce98,PTR_s_removeObjectForKey__0269d700,*(undefined8 *)(param_1 + 0x20)
                    );
          uVar5 = *(undefined8 *)(param_1 + 0x28);
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar5,PTR_s_objectForKeyedSubscript__0269d098,&cf_successCount);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar5);
          lVar7 = *(long *)(param_1 + 0x28);
          local_210 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (lVar7,PTR_s_objectForKeyedSubscript__0269d098,&cf_totalDetectedCount);
          _objc_retainAutoreleasedReturnValue();
          local_368 = lVar7;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_368 == 0) {
            local_368 = 1;
          }
          (*(code *)PTR__objc_release_02578630)(lVar7);
          local_218 = local_368;
          puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_QQbc_k
                    );
          _objc_retainAutoreleasedReturnValue();
          local_220 = puVar4;
          FUN_007e7270(puVar4);
          _objc_storeStrong(&local_220,0);
        }
      }
    }
  }
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

