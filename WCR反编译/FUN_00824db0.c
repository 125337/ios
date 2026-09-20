// FUN_00824db0 @ 00824db0

void FUN_00824db0(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong local_150;
  ulong local_148;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  undefined8 local_d0;
  undefined4 local_c8;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  uVar1 = local_b0;
  _objc_getAssociatedObject(local_b0,&DAT_028cd1d3);
  _objc_retainAutoreleasedReturnValue();
  local_b8 = uVar1;
  if (uVar1 == 0) {
    local_c8 = 1;
  }
  else {
    _memset(auStack_110,0,0x40);
    uVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_keyEnumerator_026a8c50);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    local_148 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
    if (local_148 != 0) {
      lVar3 = *local_100;
      local_150 = 0;
      do {
        do {
          if (*local_100 - lVar3 != 0) {
            _objc_enumerationMutation(*local_100 - lVar3,uVar2);
          }
          uVar4 = *(undefined8 *)(local_108 + local_150 * 8);
          uVar1 = local_b8;
          local_d0 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_objectForKey__0269e048,uVar4);
          _objc_retainAutoreleasedReturnValue();
          FUN_0082eba0(uVar4);
          (*(code *)PTR__objc_release_02578630)(uVar1);
          local_150 = local_150 + 1;
        } while (local_150 < local_148);
        local_148 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10
                  );
        local_150 = 0;
      } while (local_148 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_removeAllObjects_0269d508);
    _objc_setAssociatedObject(local_b0,&DAT_028cd1d3,0,1);
    local_c8 = 0;
  }
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

