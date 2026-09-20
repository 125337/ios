// _WCRSuperFloatEnabledActions @ 01627488

void _WCRSuperFloatEnabledActions(void)

{
  uint uVar1;
  undefined *puVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  uint local_14c;
  void *local_120;
  void *local_118;
  undefined1 auStack_f8 [8];
  long local_f0;
  long *local_e8;
  ulong local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_b0 = puVar2;
  pvVar3 = _memset(auStack_f8,0,0x40);
  _WCRSuperFloatRefreshActions();
  _objc_retainAutoreleasedReturnValue();
  local_118 = pvVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_118 != (void *)0x0) {
    lVar6 = *local_e8;
    local_120 = (void *)0x0;
    do {
      do {
        if (*local_e8 - lVar6 != 0) {
          _objc_enumerationMutation(*local_e8 - lVar6,pvVar3);
        }
        uVar7 = *(ulong *)(local_f0 + (long)local_120 * 8);
        local_b8 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar7,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrEnabled);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar7);
        if ((uVar4 & 1) != 0) {
          uVar4 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_action);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar4;
          FUN_01618794();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_14c = 0;
          uVar1 = (uint)uVar5;
          if ((uVar5 & 1) != 0) {
            _WCRThemeLifeMallEntriesVisible();
            local_14c = uVar1 ^ 1;
          }
          (*(code *)PTR__objc_release_02578630)(uVar7);
          (*(code *)PTR__objc_release_02578630)(uVar4);
          if ((local_14c & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_addObject__0269d180,local_b8);
          }
        }
        local_120 = (void *)((long)local_120 + 1);
      } while (local_120 < local_118);
      local_118 = pvVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (pvVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_f8,auStack_a8,0x10);
      local_120 = (void *)0x0;
    } while (local_118 != (void *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(pvVar3);
  puVar2 = local_b0;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

