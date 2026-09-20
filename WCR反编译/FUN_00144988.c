// FUN_00144988 @ 00144988

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00144988(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *local_1f0;
  ulong local_1a8;
  ulong local_1a0;
  undefined *local_138;
  undefined *local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined *local_e8;
  byte local_d9;
  ulong local_d8 [3];
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  local_c0 = 0;
  uVar2 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b8,PTR_s_respondsToSelector__026ca818,PTR_s_traitCollection_026caba8);
  if ((uVar2 & 1) != 0) {
    uVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_traitCollection_026caba8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_c0 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  uVar2 = local_c0;
  FUN_001466a0();
  _objc_retainAutoreleasedReturnValue();
  local_d8[0] = uVar2;
  FUN_001469ec();
  local_d9 = (byte)uVar2;
  _memset(auStack_128,0,0x40);
  uVar2 = local_b0;
  (*(code *)PTR__objc_retain_02578638)();
  local_1a0 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
  if (local_1a0 != 0) {
    lVar5 = *local_118;
    local_1a8 = 0;
    do {
      do {
        if (*local_118 - lVar5 != 0) {
          _objc_enumerationMutation(*local_118 - lVar5,uVar2);
        }
        puVar6 = *(undefined **)(local_120 + local_1a8 * 8);
        local_e8 = puVar6;
        if (puVar6 != (undefined *)0x0) {
          _objc_getAssociatedObject(puVar6,DAT_026df8f0);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = local_e8;
          uVar1 = DAT_026df8f0;
          local_130 = puVar6;
          if (puVar6 == (undefined *)0x0) {
            puVar6 = local_e8;
            (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_backgroundColor_026ca518);
            _objc_retainAutoreleasedReturnValue();
            local_1f0 = puVar6;
            if (puVar6 == (undefined *)0x0) {
              local_138 = PTR__OBJC_CLASS___NSNull_026ce0e8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
              _objc_retainAutoreleasedReturnValue();
              local_1f0 = local_138;
            }
            _objc_setAssociatedObject(puVar4,uVar1,local_1f0,1);
            if (puVar6 == (undefined *)0x0) {
              (*(code *)PTR__objc_release_02578630)(local_138);
            }
            (*(code *)PTR__objc_release_02578630)(puVar6);
            puVar4 = local_e8;
            _objc_getAssociatedObject(local_e8,DAT_026df8f0);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = local_130;
            local_130 = puVar4;
            (*(code *)PTR__objc_release_02578630)(puVar6);
          }
          puVar6 = local_130;
          if ((local_d9 & 1) == 0) {
            puVar4 = PTR__OBJC_CLASS___NSNull_026ce0e8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_release_02578630)();
            if (puVar6 == puVar4) {
              (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setBackgroundColor__026ca888,0);
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_e8,PTR_s_setBackgroundColor__026ca888,local_130);
            }
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e8,PTR_s_setBackgroundColor__026ca888,local_d8[0]);
          }
          _objc_storeStrong(&local_130,0);
        }
        local_1a8 = local_1a8 + 1;
      } while (local_1a8 < local_1a0);
      local_1a0 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
      local_1a8 = 0;
    } while (local_1a0 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  _objc_storeStrong(local_d8);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

