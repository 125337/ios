// getEnabledPlugins @ 01ca8a44

/* Function Stack Size: 0x10 bytes */

ID WCRefinePluginSortViewController::getEnabledPlugins(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  ID IVar3;
  long lVar4;
  ulong local_138;
  ulong local_130;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  undefined8 local_d0;
  undefined *local_c8;
  ID local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_c0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar2;
  _memset(auStack_110,0,0x40);
  IVar1 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_130 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
  if (local_130 != 0) {
    lVar4 = *local_100;
    local_138 = 0;
    do {
      do {
        if (*local_100 - lVar4 != 0) {
          _objc_enumerationMutation(*local_100 - lVar4,IVar1);
        }
        local_d0 = *(undefined8 *)(local_108 + local_138 * 8);
        IVar3 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b0,PTR_s_isPluginEnabledInSearch__026c2ea8,local_d0);
        if ((IVar3 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_addObject__0269d180,local_d0);
        }
        local_138 = local_138 + 1;
      } while (local_138 < local_130);
      local_130 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
      local_138 = 0;
    } while (local_130 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar1);
  puVar2 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_copy_0269d150);
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

