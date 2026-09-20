// FUN_009c14c0 @ 009c14c0

void FUN_009c14c0(undefined8 param_1)

{
  bool bVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  void *local_130;
  void *local_128;
  undefined1 auStack_100 [8];
  long local_f8;
  long *local_f0;
  ulong local_c0;
  undefined8 local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  pvVar2 = _memset(auStack_100,0,0x40);
  FUN_009b37b8();
  _objc_retainAutoreleasedReturnValue();
  local_128 = pvVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_128 != (void *)0x0) {
    lVar4 = *local_f0;
    local_130 = (void *)0x0;
    do {
      do {
        if (*local_f0 - lVar4 != 0) {
          _objc_enumerationMutation(*local_f0 - lVar4,pvVar2);
        }
        uVar5 = *(ulong *)(local_f8 + (long)local_130 * 8);
        local_c0 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar5,PTR_s_objectForKeyedSubscript__0269d098,&cf_providerID);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar5);
        uVar5 = local_c0;
        if ((uVar3 & 1) != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = uVar5;
          bVar1 = true;
          goto LAB_009c169c;
        }
        local_130 = (void *)((long)local_130 + 1);
      } while (local_130 < local_128);
      local_128 = pvVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pvVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10)
      ;
      local_130 = (void *)0x0;
    } while (local_128 != (void *)0x0);
  }
  bVar1 = false;
LAB_009c169c:
  (*(code *)PTR__objc_release_02578630)(pvVar2);
  if (!bVar1) {
    local_b0 = 0;
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

