// FUN_001d4d18 @ 001d4d18

void FUN_001d4d18(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  undefined *local_1c0;
  undefined *local_1b8;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  undefined8 local_100;
  byte local_f1;
  undefined *local_f0;
  undefined *local_e8;
  ulong local_e0;
  undefined *local_c8;
  int local_bc;
  long local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  if (local_b8 == 0) {
    local_b0 = (undefined *)0x0;
    local_bc = 1;
  }
  else {
    lVar3 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_arrayWithArray__0269eab8);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = puVar2;
    (*(code *)PTR__objc_release_02578630)(lVar3);
    local_e0 = 0;
    do {
      puVar2 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0);
      if (puVar2 == (undefined *)0x0 || 0x4f < local_e0) {
        local_b0 = (undefined *)0x0;
        local_bc = 1;
        break;
      }
      puVar2 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      local_e8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_removeObjectAtIndex__0269d530,0);
      local_e0 = local_e0 + 1;
      local_f1 = 0;
      puVar2 = local_e8;
      FUN_001d151c();
      bVar1 = true;
      if (((ulong)puVar2 & 1) == 0) {
        puVar2 = local_e8;
        FUN_001d1890();
        _objc_retainAutoreleasedReturnValue();
        local_f1 = 1;
        bVar1 = puVar2 != (undefined *)0x0;
        local_f0 = puVar2;
      }
      if ((local_f1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_f0);
      }
      puVar2 = local_e8;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = puVar2;
        local_bc = 1;
      }
      else {
        _memset(auStack_140,0,0x40);
        puVar2 = local_e8;
        (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        local_1b8 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_1b8 != (undefined *)0x0) {
          lVar3 = *local_130;
          local_1c0 = (undefined *)0x0;
          do {
            do {
              if (*local_130 - lVar3 != 0) {
                _objc_enumerationMutation(*local_130 - lVar3,puVar2);
              }
              local_100 = *(undefined8 *)(local_138 + (long)local_1c0 * 8);
              (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_addObject__0269d180,local_100);
              local_1c0 = local_1c0 + 1;
            } while (local_1c0 < local_1b8);
            local_1b8 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8
                       ,0x10);
            local_1c0 = (undefined *)0x0;
          } while (local_1b8 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        local_bc = 0;
      }
      _objc_storeStrong(&local_e8,0);
    } while (local_bc == 0);
    _objc_storeStrong(&local_c8,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

