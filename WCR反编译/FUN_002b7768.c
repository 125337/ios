// FUN_002b7768 @ 002b7768

void FUN_002b7768(undefined8 param_1,byte param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *local_1a8;
  undefined *local_1a0;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  long local_f0;
  undefined *local_d8;
  long local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  byte local_b1;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_c0 = 0;
  local_b1 = param_2;
  _objc_storeStrong(&local_c0,param_3);
  if (local_b0 == 0) {
    local_c4 = 1;
  }
  else {
    local_d0 = 0;
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_b0;
    local_d8 = puVar1;
    FUN_002ae960(local_b0,&cf_MMTabBarItemView);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObjectsFromArray__0269d540);
    (*(code *)PTR__objc_release_02578630)(lVar2);
    puVar1 = local_d8;
    lVar2 = local_b0;
    FUN_002ae960(local_b0,&cf_UITabBarButton);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObjectsFromArray__0269d540);
    (*(code *)PTR__objc_release_02578630)(lVar2);
    _memset(auStack_130,0,0x40);
    puVar1 = local_d8;
    (*(code *)PTR__objc_retain_02578638)();
    local_1a0 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10);
    if (local_1a0 != (undefined *)0x0) {
      lVar2 = *local_120;
      local_1a8 = (undefined *)0x0;
      do {
        do {
          if (*local_120 - lVar2 != 0) {
            _objc_enumerationMutation(*local_120 - lVar2,puVar1);
          }
          local_f0 = *(long *)(local_128 + (long)local_1a8 * 8);
          if (local_f0 != 0) {
            uVar3 = 0;
            if ((local_b1 & 1) == 0) {
              uVar3 = 0x3ff0000000000000;
            }
            (*(code *)PTR__objc_msgSend_02578628)(uVar3,local_f0,PTR_s_setAlpha__026ca860);
            (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_setHidden__026ca970,0);
            local_d0 = local_d0 + 1;
          }
          local_1a8 = local_1a8 + 1;
        } while (local_1a8 < local_1a0);
        local_1a0 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,
                   0x10);
        local_1a8 = (undefined *)0x0;
      } while (local_1a0 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _objc_storeStrong(local_d0,&local_d8,0);
    local_c4 = 0;
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

