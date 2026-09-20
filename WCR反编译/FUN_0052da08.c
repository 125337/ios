// FUN_0052da08 @ 0052da08

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0052da08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  ulong local_2d8;
  ulong local_2d0;
  uint local_290;
  ulong local_270;
  ulong local_268;
  long local_218;
  undefined1 auStack_210 [8];
  long local_208;
  long *local_200;
  long local_1d0;
  long local_1c8;
  byte local_1b9;
  uint local_1b8;
  uint local_1b4;
  uint local_1b0;
  uint local_1ac;
  undefined1 auStack_1a8 [8];
  long local_1a0;
  long *local_198;
  undefined8 local_168;
  uint local_160;
  long local_150;
  undefined8 local_148;
  ulong local_140;
  undefined8 local_138;
  long local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = 0;
  local_130 = param_1;
  _objc_storeStrong(&local_138);
  local_140 = 0;
  _objc_storeStrong(&local_140,param_3);
  local_150 = param_1;
  local_148 = param_4;
  FUN_0052e290(local_140);
  local_160 = 0;
  _memset(auStack_1a8,0,0x40);
  uVar2 = local_140;
  (*(code *)PTR__objc_retain_02578638)();
  local_268 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,0x10);
  if (local_268 != 0) {
    lVar8 = *local_198;
    local_270 = 0;
    do {
      do {
        if (*local_198 - lVar8 != 0) {
          _objc_enumerationMutation(*local_198 - lVar8,uVar2);
        }
        local_168 = *(undefined8 *)(local_1a0 + local_270 * 8);
        local_1ac = local_160;
        uVar3 = (uint)local_168;
        FUN_0052e30c();
        local_1b0 = uVar3;
        local_290 = local_1b0;
        if (local_1b0 <= local_1ac) {
          local_290 = local_1ac;
        }
        local_1b4 = local_290;
        local_160 = local_290;
        local_270 = local_270 + 1;
      } while (local_270 < local_268);
      local_268 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,0x10);
      local_270 = 0;
    } while (local_268 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_objectForKeyedSubscript__0269d098,local_138);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar4);
  local_1b9 = (uint)uVar5 != 0;
  local_1c8 = 0;
  local_1b8 = (uint)uVar5;
  _memset(auStack_210,0,0x40);
  uVar2 = local_140;
  (*(code *)PTR__objc_retain_02578638)();
  local_2d0 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_210,auStack_128,0x10);
  if (local_2d0 != 0) {
    lVar8 = *local_200;
    local_2d8 = 0;
    do {
      do {
        if (*local_200 - lVar8 != 0) {
          _objc_enumerationMutation(*local_200 - lVar8,uVar2);
        }
        lVar9 = *(long *)(local_208 + local_2d8 * 8);
        local_1d0 = lVar9;
        FUN_0052e538();
        _objc_retainAutoreleasedReturnValue();
        local_218 = lVar9;
        (*(code *)PTR__objc_msgSend_02578628)(lVar9,PTR_s_length_0269cca0);
        if (lVar9 != 0) {
          uVar6 = *(ulong *)(param_1 + 0x28);
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_containsObject__0269cbb8,local_218);
          if ((uVar6 & 1) == 0) {
            lVar9 = local_1d0;
            FUN_0052e30c();
            if ((local_1b9 & 1) == 0) {
              bVar1 = local_1c8 < *(long *)(param_1 + 0x40);
            }
            else {
              bVar1 = (uint)lVar9 == 0 || local_1b8 < (uint)lVar9;
            }
            if (bVar1) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (*(undefined8 *)(param_1 + 0x28),PTR_s_addObject__0269d180,local_218);
              (*(code *)PTR__objc_msgSend_02578628)
                        (*(undefined8 *)(param_1 + 0x30),PTR_s_addObject__0269d180,local_1d0);
              if ((local_1b9 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (*(undefined8 *)(param_1 + 0x38),PTR_s_addObject__0269d180,local_1d0);
              }
              local_1c8 = local_1c8 + 1;
            }
          }
        }
        _objc_storeStrong(&local_218,0);
        local_2d8 = local_2d8 + 1;
      } while (local_2d8 < local_2d0);
      local_2d0 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_210,auStack_128,0x10)
      ;
      local_2d8 = 0;
    } while (local_2d0 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if (local_1b8 < local_160) {
    puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800,local_160);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setObject_forKeyedSubscript__0269d248,puVar7,
               local_138);
    (*(code *)PTR__objc_release_02578630)(puVar7);
  }
  else if (((local_1b9 & 1) == 0) && (local_160 != 0)) {
    puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800,local_160);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setObject_forKeyedSubscript__0269d248,puVar7,
               local_138);
    (*(code *)PTR__objc_release_02578630)(puVar7);
  }
  _objc_storeStrong(&local_140);
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

