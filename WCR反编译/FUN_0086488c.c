// FUN_0086488c @ 0086488c

void FUN_0086488c(void)

{
  undefined *puVar1;
  long lVar2;
  undefined *local_140;
  undefined *local_138;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  undefined8 local_d0;
  undefined4 local_b4;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___UIApplication_026ce010;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  local_b0 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_b4 = 1;
  }
  else {
    FUN_00871048();
    if (((ulong)puVar1 & 1) == 0) {
      local_b4 = 1;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSThread_026ce0a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
      if (((ulong)puVar1 & 1) == 0) {
        local_b4 = 1;
      }
      else {
        _memset(auStack_110,0,0x40);
        puVar1 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_windows_0269dde0);
        _objc_retainAutoreleasedReturnValue();
        local_138 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_138 != (undefined *)0x0) {
          lVar2 = *local_100;
          local_140 = (undefined *)0x0;
          do {
            do {
              if (*local_100 - lVar2 != 0) {
                _objc_enumerationMutation(*local_100 - lVar2,puVar1);
              }
              local_d0 = *(undefined8 *)(local_108 + (long)local_140 * 8);
              FUN_0087109c(local_d0);
              local_140 = local_140 + 1;
            } while (local_140 < local_138);
            local_138 = puVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8
                       ,0x10);
            local_140 = (undefined *)0x0;
          } while (local_138 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar1);
        local_b4 = 0;
      }
    }
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

