// FUN_0082552c @ 0082552c

void FUN_0082552c(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong local_180;
  ulong local_178;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  long local_e0;
  undefined *local_c8;
  undefined4 local_bc;
  undefined *local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = (undefined *)0x0;
  _objc_storeStrong(&local_b8,param_2);
  if ((local_b0 == 0) || (local_b8 == (undefined *)0x0)) {
    local_bc = 1;
  }
  else {
    puVar2 = local_b8;
    _objc_getAssociatedObject(local_b8,&DAT_028cd1d3);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSMapTable_026ce9c0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMapTable_026ce9c0,
                 PTR_s_mapTableWithKeyOptions_valueOpti_026a8c58,5,0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_c8;
      local_c8 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _objc_setAssociatedObject(local_b8,&DAT_028cd1d3,local_c8,1);
    }
    local_e0 = 0;
    _memset(auStack_128,0,0x40);
    uVar6 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar6);
    local_178 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
    if (local_178 != 0) {
      lVar5 = *local_118;
      local_180 = 0;
      do {
        do {
          if (*local_118 - lVar5 != 0) {
            _objc_enumerationMutation(*local_118 - lVar5,uVar4);
          }
          uVar6 = *(ulong *)(local_120 + local_180 * 8);
          local_e8 = uVar6;
          FUN_0082f11c(uVar6,local_b0,local_b8);
          if ((uVar6 & 1) != 0) {
            uVar6 = local_e8;
            FUN_0082f63c();
            FUN_00827dfc(local_e8,local_c8);
            if ((uVar6 & 1) != 0) {
              local_e0 = local_e0 + 1;
            }
          }
          local_180 = local_180 + 1;
        } while (local_180 < local_178);
        local_178 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10
                  );
        local_180 = 0;
      } while (local_178 != 0);
    }
    (*(code *)PTR__objc_release_02578630)();
    uVar1 = (uint)uVar4;
    if ((local_e0 != 0) && (FUN_0082d7bc(), (uVar1 & 1) != 0)) {
      uVar6 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      _NSLog(&cf__wcr__page_bg_event_table_backdrop_cleartable___changed__lu);
      (*(code *)PTR__objc_release_02578630)(uVar6);
    }
    _objc_storeStrong(&local_c8,0);
    local_bc = 0;
  }
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

