// FUN_00222894 @ 00222894

void FUN_00222894(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined *local_278;
  undefined *local_270;
  ulong local_218;
  ulong local_210;
  undefined1 auStack_1d8 [8];
  long local_1d0;
  long *local_1c8;
  undefined8 local_198;
  undefined1 auStack_190 [8];
  long local_188;
  long *local_180;
  ulong local_150;
  undefined *local_138;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_130 = 0;
  _objc_storeStrong(&local_130,param_1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_138 = puVar1;
  _memset(auStack_190,0,0x40);
  uVar2 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(uVar2);
  local_210 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8,0x10);
  if (local_210 != 0) {
    lVar4 = *local_180;
    local_218 = 0;
    do {
      do {
        if (*local_180 - lVar4 != 0) {
          _objc_enumerationMutation(*local_180 - lVar4,uVar3);
        }
        uVar5 = *(ulong *)(local_188 + local_218 * 8);
        local_150 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_name_0269d828);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar5);
        if ((uVar2 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_addObject__0269d180,local_150);
        }
        local_218 = local_218 + 1;
      } while (local_218 < local_210);
      local_210 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8,0x10);
      local_218 = 0;
    } while (local_210 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar3);
  _memset(auStack_1d8,0,0x40);
  puVar1 = local_138;
  (*(code *)PTR__objc_retain_02578638)();
  local_270 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,auStack_128,0x10);
  if (local_270 != (undefined *)0x0) {
    lVar4 = *local_1c8;
    local_278 = (undefined *)0x0;
    do {
      do {
        if (*local_1c8 - lVar4 != 0) {
          _objc_enumerationMutation(*local_1c8 - lVar4,puVar1);
        }
        local_198 = *(undefined8 *)(local_1d0 + (long)local_278 * 8);
        (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_removeFromSuperlayer_026ca7f8);
        local_278 = local_278 + 1;
      } while (local_278 < local_270);
      local_270 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,auStack_128,0x10
                );
      local_278 = (undefined *)0x0;
    } while (local_270 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_138);
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

