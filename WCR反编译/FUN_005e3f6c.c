// FUN_005e3f6c @ 005e3f6c

void FUN_005e3f6c(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong local_158;
  ulong local_150;
  long local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  undefined8 local_d8;
  ulong local_c0;
  ulong local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar3 = local_b8;
  FUN_005e4ff8();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = uVar3;
  _memset(auStack_118,0,0x40);
  uVar3 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_150 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
  if (local_150 != 0) {
    lVar6 = *local_108;
    local_158 = 0;
    do {
      do {
        if (*local_108 - lVar6 != 0) {
          _objc_enumerationMutation(*local_108 - lVar6,uVar3);
        }
        local_d8 = *(undefined8 *)(local_110 + local_158 * 8);
        lVar4 = DAT_028cb7f8;
        (*(code *)PTR__objc_msgSend_02578628)(DAT_028cb7f8,PTR_s_objectForKey__0269e048,local_d8);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        FUN_005e5adc();
        _objc_retainAutoreleasedReturnValue();
        local_120 = lVar5;
        (*(code *)PTR__objc_release_02578630)(lVar4);
        lVar5 = local_120;
        (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_length_0269cca0);
        lVar4 = local_120;
        bVar2 = lVar5 != 0;
        if (bVar2) {
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = lVar4;
        }
        _objc_storeStrong(bVar2,&local_120,0);
        bVar1 = true;
        if (bVar2) goto LAB_005e4238;
        local_158 = local_158 + 1;
      } while (local_158 < local_150);
      local_150 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
      local_158 = 0;
    } while (local_150 != 0);
  }
  bVar1 = false;
LAB_005e4238:
  (*(code *)PTR__objc_release_02578630)(uVar3);
  if (!bVar1) {
    local_b0 = 0;
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

