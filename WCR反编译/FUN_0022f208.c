// FUN_0022f208 @ 0022f208

void FUN_0022f208(long param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  void *local_170;
  void *local_168;
  undefined *local_140;
  undefined4 local_138;
  undefined4 local_134;
  code *local_130;
  undefined *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined1 auStack_100 [8];
  long local_f8;
  long *local_f0;
  undefined8 local_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_1;
  local_b0 = param_1;
  pvVar1 = _memset(auStack_100,0,0x40);
  FUN_0022f480();
  _objc_retainAutoreleasedReturnValue();
  local_168 = pvVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_168 != (void *)0x0) {
    lVar3 = *local_f0;
    local_170 = (void *)0x0;
    do {
      do {
        if (*local_f0 - lVar3 != 0) {
          _objc_enumerationMutation(*local_f0 - lVar3,pvVar1);
        }
        uVar4 = *(undefined8 *)(local_f8 + (long)local_170 * 8);
        local_140 = PTR___NSConcreteStackBlock_02578660;
        local_138 = 0xc2000000;
        local_134 = 0;
        local_130 = FUN_0022fe54;
        local_128 = &DAT_0257af28;
        local_118 = *(undefined8 *)(param_1 + 0x28);
        uVar2 = *(undefined8 *)(param_1 + 0x20);
        local_c0 = uVar4;
        (*(code *)PTR__objc_retain_02578638)();
        local_120 = uVar2;
        FUN_0022fbb4(uVar4,&local_140);
        _objc_storeStrong(&local_120,0);
        local_170 = (void *)((long)local_170 + 1);
      } while (local_170 < local_168);
      local_168 = pvVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (pvVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10)
      ;
      local_170 = (void *)0x0;
    } while (local_168 != (void *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(pvVar1);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

