// FUN_01c5deb8 @ 01c5deb8

void FUN_01c5deb8(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong local_170;
  ulong local_168;
  undefined *local_140;
  undefined4 local_138;
  undefined4 local_134;
  code *local_130;
  undefined *local_128;
  undefined1 auStack_120 [12];
  int local_114;
  undefined8 local_110;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  undefined8 local_c8;
  byte local_b9;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b9 = 0;
  local_b8 = param_1;
  local_b0 = param_1;
  _memset(auStack_108,0,0x40);
  uVar1 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  local_168 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
  if (local_168 != 0) {
    lVar4 = *local_f8;
    local_170 = 0;
    do {
      do {
        if (*local_f8 - lVar4 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar4,uVar1);
        }
        local_c8 = *(undefined8 *)(local_100 + local_170 * 8);
        uVar5 = *(undefined8 *)(param_1 + 0x28);
        puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf______);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_stringByAppendingPathComponent__026cab30);
        _objc_retainAutoreleasedReturnValue();
        local_110 = uVar5;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        uVar3 = *(ulong *)(param_1 + 0x38);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_fileExistsAtPath__026ca630,local_110);
        if ((uVar3 & 1) == 0) {
          local_114 = 0;
        }
        else {
          local_b9 = 1;
          local_114 = 2;
        }
        _objc_storeStrong(&local_110,0);
        if (local_114 != 0) goto LAB_01c5e0fc;
        local_170 = local_170 + 1;
      } while (local_170 < local_168);
      local_168 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
      local_170 = 0;
    } while (local_168 != 0);
  }
  local_114 = 0;
LAB_01c5e0fc:
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar2 = PTR___dispatch_main_q_02578680;
  if ((local_b9 & 1) != 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_140 = PTR___NSConcreteStackBlock_02578660;
    local_138 = 0xc2000000;
    local_134 = 0;
    local_130 = FUN_01c5e1f0;
    local_128 = &DAT_0257be28;
    _objc_copyWeak(auStack_120,param_1 + 0x40);
    _dispatch_async(puVar2,&local_140);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_destroyWeak(auStack_120);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

