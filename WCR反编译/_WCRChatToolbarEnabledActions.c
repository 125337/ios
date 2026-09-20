// _WCRChatToolbarEnabledActions @ 00ef247c

void _WCRChatToolbarEnabledActions(undefined8 param_1)

{
  undefined *puVar1;
  void *pvVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  void *local_138;
  void *local_130;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  ulong local_d0;
  undefined *local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  if (DAT_028e2ae0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = puVar1;
    pvVar2 = _memset(auStack_110,0,0x40);
    _WCRChatToolbarSnapshotActions();
    _objc_retainAutoreleasedReturnValue();
    local_130 = pvVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_130 != (void *)0x0) {
      lVar5 = *local_100;
      local_138 = (void *)0x0;
      do {
        do {
          if (*local_100 - lVar5 != 0) {
            _objc_enumerationMutation(*local_100 - lVar5,pvVar2);
          }
          uVar6 = *(ulong *)(local_108 + (long)local_138 * 8);
          local_d0 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar6,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrEnabled);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar6);
          if ((uVar3 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_addObject__0269d180,local_d0);
          }
          local_138 = (void *)((long)local_138 + 1);
        } while (local_138 < local_130);
        local_130 = pvVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pvVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,
                   0x10);
        local_138 = (void *)0x0;
      } while (local_130 != (void *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(pvVar2);
    puVar4 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_copy_0269d150);
    puVar1 = DAT_028e2ae0;
    DAT_028e2ae0 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = DAT_028e2ae0;
    FUN_00ef276c();
    _objc_retainAutoreleasedReturnValue();
    local_bc = 1;
    local_b0 = puVar1;
    _objc_storeStrong(&local_c8,0);
  }
  else {
    puVar1 = DAT_028e2ae0;
    FUN_00ef276c();
    _objc_retainAutoreleasedReturnValue();
    local_bc = 1;
    local_b0 = puVar1;
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

