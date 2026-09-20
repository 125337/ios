// FUN_00526894 @ 00526894

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00526894(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  uint uVar2;
  undefined *puVar4;
  long lVar5;
  ulong local_208;
  ulong local_1f0;
  ulong local_1a0;
  ulong local_198;
  uint local_14c;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  undefined8 local_f0;
  byte local_e2;
  byte local_e1;
  ulong local_e0;
  ulong local_c8;
  ulong local_c0;
  undefined8 local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  ulong uVar3;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*DAT_028cb1a8)(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  local_c0 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = (uint)uVar3;
  local_e1 = 0;
  local_c8 = param_1;
  FUN_0052b2cc();
  local_14c = 0;
  if ((uVar2 & 1) != 0) {
    uVar2 = (uint)local_b0;
    FUN_00532324();
    local_14c = 0;
    if ((uVar2 & 1) == 0) {
      uVar3 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_username_026a2238);
      _objc_retainAutoreleasedReturnValue();
      local_e1 = 1;
      local_e0 = uVar3;
      FUN_0052b6cc();
      local_14c = (uint)uVar3;
    }
  }
  if ((local_e1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_e0);
  }
  uVar3 = local_c0;
  if ((local_14c & 1) != 0) {
    local_e2 = 0;
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    if ((uVar3 & 1) != 0) {
      _memset(auStack_130,0,0x40);
      uVar3 = local_c0;
      (*(code *)PTR__objc_retain_02578638)();
      local_198 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10);
      if (local_198 != 0) {
        lVar5 = *local_120;
        local_1a0 = 0;
        do {
          do {
            if (*local_120 - lVar5 != 0) {
              _objc_enumerationMutation(*local_120 - lVar5,uVar3);
            }
            local_f0 = *(undefined8 *)(local_128 + local_1a0 * 8);
            puVar4 = PTR_WCRefineMomentsMonitor_026ce718;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineMomentsMonitor_026ce718,PTR_s_isDataItemFromCache__026a4718,
                       local_f0);
            if (((ulong)puVar4 & 1) != 0) {
              local_e2 = 1;
              goto LAB_00526c34;
            }
            local_1a0 = local_1a0 + 1;
          } while (local_1a0 < local_198);
          local_198 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,
                     0x10);
          local_1a0 = 0;
        } while (local_198 != 0);
      }
LAB_00526c34:
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    uVar1 = local_b0;
    uVar3 = local_c0;
    if ((local_e2 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
      if ((uVar3 & 1) == 0) {
        local_1f0 = 0;
      }
      else {
        local_1f0 = local_c0;
      }
      FUN_00532550(uVar1,local_1f0,0,0);
      uVar3 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_m_cache_026a4bd8);
      _objc_retainAutoreleasedReturnValue();
      local_208 = uVar3;
      if (uVar3 == 0) {
        local_208 = local_c0;
      }
      _objc_storeStrong(&local_c8,local_208);
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
  }
  uVar3 = local_c8;
  FUN_00533ab8();
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,uVar3);
  return;
}

