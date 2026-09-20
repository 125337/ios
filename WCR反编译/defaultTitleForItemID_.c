// defaultTitleForItemID: @ 010f9b28

/* Function Stack Size: 0x18 bytes */

ID WCRefinePluginIconCatalog::defaultTitleForItemID_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  long lVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  cfstringStruct *local_e0;
  int local_d4;
  cfstringStruct *local_d0;
  undefined8 local_c8;
  SEL local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_c8,param_3);
  pcVar1 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_defaultEntryForItemID__026aed38,local_c8);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar2;
  FUN_010f4f48();
  _objc_retainAutoreleasedReturnValue();
  local_d0 = pcVar4;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar2 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
  pcVar1 = local_d0;
  if (pcVar2 == (cfstringStruct *)0x0) {
    _memset(auStack_120,0,0x40);
    pcVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_allNativeAndDiscoveredLongPressE_026aed40);
    _objc_retainAutoreleasedReturnValue();
    local_158 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_158 != (cfstringStruct *)0x0) {
      lVar3 = *local_110;
      local_160 = (cfstringStruct *)0x0;
      do {
        do {
          if (*local_110 - lVar3 != 0) {
            _objc_enumerationMutation(*local_110 - lVar3,pcVar1);
          }
          pcVar4 = *(cfstringStruct **)(local_118 + (long)local_160 * 8);
          local_e0 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar4,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          if (((ulong)pcVar2 & 1) != 0) {
            pcVar2 = local_e0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e0,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
            _objc_retainAutoreleasedReturnValue();
            pcVar4 = pcVar2;
            FUN_010f4f48();
            _objc_retainAutoreleasedReturnValue();
            local_b0 = pcVar4;
            (*(code *)PTR__objc_release_02578630)(pcVar2);
            local_d4 = 1;
            goto LAB_010f9e24;
          }
          local_160 = (cfstringStruct *)((long)&local_160->field0_0x0 + 1);
        } while (local_160 < local_158);
        local_158 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                   0x10);
        local_160 = (cfstringStruct *)0x0;
      } while (local_158 != (cfstringStruct *)0x0);
    }
    local_d4 = 0;
LAB_010f9e24:
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    if (local_d4 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = &::cf___;
      local_d4 = 1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = pcVar1;
    local_d4 = 1;
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

