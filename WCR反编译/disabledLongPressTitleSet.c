// disabledLongPressTitleSet @ 010fec0c

/* Function Stack Size: 0x10 bytes */

ID WCRefinePluginIconCatalog::disabledLongPressTitleSet(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  long lVar5;
  ulong local_168;
  ulong local_160;
  ID local_140;
  ID local_138;
  ID local_130;
  ID local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
  undefined *local_d8;
  undefined4 local_cc;
  ID local_c8;
  SEL local_c0;
  ID local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = param_2;
  local_b8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_disabledLongPressItemIDSet_026aedd8);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_count_0269cfe0);
  if (param_1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSSet_026ce150;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    local_cc = 1;
    local_b0 = puVar2;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = puVar2;
    _memset(auStack_120,0,0x40);
    IVar1 = local_c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_160 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
    if (local_160 != 0) {
      lVar5 = *local_110;
      local_168 = 0;
      do {
        do {
          if (*local_110 - lVar5 != 0) {
            _objc_enumerationMutation(*local_110 - lVar5,IVar1);
          }
          local_e0 = *(undefined8 *)(local_118 + local_168 * 8);
          IVar3 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b8,PTR_s_resolvedTitleForItemID__026aecd0,local_e0);
          _objc_retainAutoreleasedReturnValue();
          IVar4 = IVar3;
          FUN_010f4f48();
          _objc_retainAutoreleasedReturnValue();
          local_128 = IVar4;
          (*(code *)PTR__objc_release_02578630)(IVar3);
          IVar3 = local_128;
          (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_length_0269cca0);
          if (IVar3 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_128);
          }
          IVar3 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b8,PTR_s_defaultTitleForItemID__026aece8,local_e0);
          _objc_retainAutoreleasedReturnValue();
          IVar4 = IVar3;
          FUN_010f4f48();
          _objc_retainAutoreleasedReturnValue();
          local_130 = IVar4;
          (*(code *)PTR__objc_release_02578630)(IVar3);
          IVar3 = local_130;
          (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_length_0269cca0);
          if (IVar3 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_130);
          }
          IVar3 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b8,PTR_s_displayEntryForLongPressItemID__026aede0,local_e0);
          _objc_retainAutoreleasedReturnValue();
          local_138 = IVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar3,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
          _objc_retainAutoreleasedReturnValue();
          IVar4 = IVar3;
          FUN_010f4f48();
          _objc_retainAutoreleasedReturnValue();
          local_140 = IVar4;
          (*(code *)PTR__objc_release_02578630)(IVar3);
          IVar3 = local_140;
          (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0);
          if (IVar3 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_140);
          }
          _objc_storeStrong(&local_140);
          _objc_storeStrong(&local_138,0);
          _objc_storeStrong(&local_130,0);
          _objc_storeStrong(&local_128,0);
          local_168 = local_168 + 1;
        } while (local_168 < local_160);
        local_160 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_168 = 0;
      } while (local_160 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar1);
    puVar2 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_containsObject__0269cbb8,&cf__R);
    if (((ulong)puVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,&cf_c);
    }
    puVar2 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_containsObject__0269cbb8,&cf_c);
    if (((ulong)puVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,&cf__R);
    }
    puVar2 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_copy_0269d150);
    local_cc = 1;
    local_b0 = puVar2;
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

