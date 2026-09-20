// FUN_015db530 @ 015db530

void FUN_015db530(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *local_270;
  undefined *local_268;
  ulong local_228;
  ulong local_220;
  undefined1 auStack_1f0 [8];
  long local_1e8;
  long *local_1e0;
  undefined8 local_1b0;
  ulong local_1a8;
  undefined1 auStack_1a0 [8];
  long local_198;
  long *local_190;
  undefined8 local_160;
  ulong local_158;
  long local_150;
  ulong local_148;
  long local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_148 = 0;
  local_140 = param_1;
  _objc_storeStrong(&local_148);
  uVar1 = local_148;
  local_150 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_148,PTR_s_objectForKeyedSubscript__0269d098,&cf_scenes);
  _objc_retainAutoreleasedReturnValue();
  local_158 = uVar1;
  _memset(auStack_1a0,0,0x40);
  uVar1 = local_158;
  (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_allKeys_0269ef58);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  local_220 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,0x10);
  if (local_220 != 0) {
    lVar5 = *local_190;
    local_228 = 0;
    do {
      do {
        if (*local_190 - lVar5 != 0) {
          _objc_enumerationMutation(*local_190 - lVar5,uVar2);
        }
        local_160 = *(undefined8 *)(local_198 + local_228 * 8);
        uVar1 = local_158;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_158,PTR_s_objectForKeyedSubscript__0269d098,local_160);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_1a8 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar1);
        _memset(auStack_1f0,0,0x40);
        local_138 = &cf_day;
        local_130 = &cf_night;
        puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_138,2);
        _objc_retainAutoreleasedReturnValue();
        local_268 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_268 != (undefined *)0x0) {
          lVar6 = *local_1e0;
          local_270 = (undefined *)0x0;
          do {
            do {
              if (*local_1e0 - lVar6 != 0) {
                _objc_enumerationMutation(*local_1e0 - lVar6,puVar4);
              }
              local_1b0 = *(undefined8 *)(local_1e8 + (long)local_270 * 8);
              uVar1 = local_1a8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1a8,PTR_s_objectForKeyedSubscript__0269d098,local_1b0);
              _objc_retainAutoreleasedReturnValue();
              uVar3 = uVar1;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(uVar1);
              if ((uVar3 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1a8,PTR_s_setObject_forKeyedSubscript__0269d248,
                           *(undefined8 *)(param_1 + 0x28),local_1b0);
              }
              local_270 = local_270 + 1;
            } while (local_270 < local_268);
            local_268 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,
                       auStack_128,0x10);
            local_270 = (undefined *)0x0;
          } while (local_268 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_158,PTR_s_setObject_forKeyedSubscript__0269d248,local_1a8,local_160);
        _objc_storeStrong(&local_1a8,0);
        local_228 = local_228 + 1;
      } while (local_228 < local_220);
      local_220 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,0x10);
      local_228 = 0;
    } while (local_220 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  _objc_storeStrong(&local_158);
  _objc_storeStrong(&local_148,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

