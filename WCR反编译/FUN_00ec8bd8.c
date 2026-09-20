// FUN_00ec8bd8 @ 00ec8bd8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00ec8bd8(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong local_270;
  ulong local_268;
  ulong local_230;
  ulong local_228;
  undefined1 auStack_1e0 [8];
  long local_1d8;
  long *local_1d0;
  ulong local_1a0;
  undefined4 local_194;
  ulong local_190;
  undefined1 auStack_188 [8];
  long local_180;
  long *local_178;
  ulong local_148;
  undefined *local_140;
  undefined8 local_138;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_130 = 0;
  _objc_storeStrong(&local_130,param_1);
  local_138 = 0;
  _objc_storeStrong(&local_138,param_2);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  local_140 = puVar3;
  _memset(auStack_188,0,0x40);
  uVar1 = local_130;
  (*(code *)PTR__objc_retain_02578638)();
  local_228 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_a8,0x10);
  if (local_228 != 0) {
    lVar4 = *local_178;
    local_230 = 0;
    do {
      do {
        if (*local_178 - lVar4 != 0) {
          _objc_enumerationMutation(*local_178 - lVar4,uVar1);
        }
        uVar7 = *(ulong *)(local_180 + local_230 * 8);
        local_148 = uVar7;
        FUN_00ec5d9c(uVar7,local_138);
        _objc_retainAutoreleasedReturnValue();
        local_190 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_length_0269cca0);
        if ((uVar7 == 0) || (uVar7 = local_190, FUN_00ec61c8(), (uVar7 & 1) != 0)) {
          local_194 = 3;
        }
        else {
          _memset(auStack_1e0,0,0x40);
          uVar7 = local_148;
          FUN_00eca880();
          _objc_retainAutoreleasedReturnValue();
          local_268 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_268 != 0) {
            lVar5 = *local_1d0;
            local_270 = 0;
            do {
              do {
                if (*local_1d0 - lVar5 != 0) {
                  _objc_enumerationMutation(*local_1d0 - lVar5,uVar7);
                }
                uVar6 = *(ulong *)(local_1d8 + local_270 * 8);
                local_1a0 = uVar6;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar6,PTR_s_isEqualToString__0269ccc8,local_190);
                bVar2 = true;
                if ((uVar6 & 1) == 0) {
                  puVar3 = local_140;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_140,PTR_s_objectForKeyedSubscript__0269d098,local_1a0);
                  _objc_retainAutoreleasedReturnValue();
                  bVar2 = puVar3 != (undefined *)0x0;
                  (*(code *)PTR__objc_release_02578630)(puVar3);
                }
                if (!bVar2) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_140,PTR_s_setObject_forKeyedSubscript__0269d248,local_190,
                             local_1a0);
                }
                local_270 = local_270 + 1;
              } while (local_270 < local_268);
              local_268 = uVar7;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e0,
                         auStack_128,0x10);
              local_270 = 0;
            } while (local_268 != 0);
          }
          (*(code *)PTR__objc_release_02578630)(uVar7);
          local_194 = 0;
        }
        _objc_storeStrong(&local_190,0);
        local_230 = local_230 + 1;
      } while (local_230 < local_228);
      local_228 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_a8,0x10);
      local_230 = 0;
    } while (local_228 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar3 = local_140;
  (*(code *)PTR__objc_retain_02578638)();
  local_194 = 1;
  _objc_storeStrong(&local_140);
  _objc_storeStrong(&local_138,0);
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,puVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

