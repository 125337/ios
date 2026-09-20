// FUN_004c6d80 @ 004c6d80

byte FUN_004c6d80(ulong param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong local_140;
  ulong local_138;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  undefined8 local_c8;
  undefined8 local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = param_2;
  local_b8 = param_1;
  _memset(auStack_108,0,0x40);
  uVar2 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
  _objc_retainAutoreleasedReturnValue();
  local_138 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_138 != 0) {
    lVar4 = *local_f8;
    local_140 = 0;
    do {
      do {
        if (*local_f8 - lVar4 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar4,uVar2);
        }
        local_c8 = *(undefined8 *)(local_100 + local_140 * 8);
        uVar3 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b8,PTR_s_findViewOfClass_inView__026a4010,&cf_NewMainFrameRightTopMenuBtn,
                   local_c8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        if (uVar3 != 0) {
          local_a9 = 1;
          bVar1 = true;
          goto LAB_004c6f80;
        }
        local_140 = local_140 + 1;
      } while (local_140 < local_138);
      local_138 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
      local_140 = 0;
    } while (local_138 != 0);
  }
  bVar1 = false;
LAB_004c6f80:
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if (!bVar1) {
    local_a9 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

