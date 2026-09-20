// visibleFeatureEntriesFromConfig: @ 01c8fb04

/* Function Stack Size: 0x18 bytes */

ID WCRefinePluginFeatureManagementViewController::visibleFeatureEntriesFromConfig_
             (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  long lVar4;
  ulong local_158;
  ulong local_150;
  ID local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined8 local_e8;
  undefined *local_e0;
  ID local_d8;
  ID local_d0;
  ID local_c8;
  undefined8 local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  IVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_featureEntryMapFromConfig__026c2a78,local_c0)
  ;
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_b0;
  local_c8 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b0,PTR_s_normalizedFeatureOrderFromConfig_026c2ab8,local_c0);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_b0;
  local_d0 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b0,PTR_s_effectiveHiddenFeatureIDsFromCon_026c2ac0,local_c0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_d8 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_e0 = puVar3;
  _memset(auStack_128,0,0x40);
  IVar1 = local_d0;
  (*(code *)PTR__objc_retain_02578638)();
  local_150 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
  if (local_150 != 0) {
    lVar4 = *local_118;
    local_158 = 0;
    do {
      do {
        if (*local_118 - lVar4 != 0) {
          _objc_enumerationMutation(*local_118 - lVar4,IVar1);
        }
        local_e8 = *(undefined8 *)(local_120 + local_158 * 8);
        IVar2 = local_d8;
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_containsObject__0269cbb8,local_e8);
        if ((IVar2 & 1) == 0) {
          IVar2 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c8,PTR_s_objectForKeyedSubscript__0269d098,local_e8);
          _objc_retainAutoreleasedReturnValue();
          local_130 = IVar2;
          if (IVar2 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addObject__0269d180,IVar2);
          }
          _objc_storeStrong(&local_130,0);
        }
        local_158 = local_158 + 1;
      } while (local_158 < local_150);
      local_150 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
      local_158 = 0;
    } while (local_150 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar1);
  puVar3 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_copy_0269d150);
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

