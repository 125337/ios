// FUN_0056dec0 @ 0056dec0

byte FUN_0056dec0(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  ulong *puVar6;
  ulong local_158;
  ulong local_150;
  ulong *local_128;
  ulong *local_120;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  ulong *local_c8;
  ulong *local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar6 = &local_b8;
  local_b8 = 0;
  _objc_storeStrong(puVar6,param_1);
  FUN_00566204();
  local_c0 = puVar6;
  _memset(auStack_108,0,0x40);
  uVar3 = local_b8;
  (*(code *)PTR__objc_retain_02578638)();
  local_150 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
  if (local_150 != 0) {
    lVar5 = *local_f8;
    local_158 = 0;
    do {
      do {
        if (*local_f8 - lVar5 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar5,uVar3);
        }
        puVar6 = *(ulong **)(local_100 + local_158 * 8);
        local_120 = (ulong *)0x0;
        local_128 = (ulong *)0x0;
        local_c8 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar6,PTR_s_respondsToSelector__026ca818,PTR_s_action_026a4358);
        if (((ulong)puVar6 & 1) != 0) {
          puVar6 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_action_026a4358);
          local_120 = puVar6;
        }
        puVar6 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c8,PTR_s_respondsToSelector__026ca818,PTR_s_title_0269d250);
        if (((ulong)puVar6 & 1) != 0) {
          puVar4 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_title_0269d250);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = local_128;
          local_128 = puVar4;
          (*(code *)PTR__objc_release_02578630)(puVar6);
        }
        if ((local_120 == local_c0) ||
           (puVar6 = local_128,
           (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_isEqualToString__0269ccc8,&cf_Y),
           ((ulong)puVar6 & 1) != 0)) {
          local_a9 = 1;
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        _objc_storeStrong(&local_128,0);
        bVar2 = true;
        if (bVar1) goto LAB_0056e1c4;
        local_158 = local_158 + 1;
      } while (local_158 < local_150);
      local_150 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
      local_158 = 0;
    } while (local_150 != 0);
  }
  bVar2 = false;
LAB_0056e1c4:
  (*(code *)PTR__objc_release_02578630)(uVar3);
  if (!bVar2) {
    local_a9 = 0;
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

