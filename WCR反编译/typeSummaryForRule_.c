// typeSummaryForRule: @ 010ad7e4

/* Function Stack Size: 0x18 bytes */

ID WCRefineMessageSyncRule::typeSummaryForRule_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  long lVar4;
  ulong local_158;
  ulong local_150;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined8 local_e8;
  cfstringStruct *local_e0;
  undefined4 local_d4;
  ID local_d0;
  undefined8 local_c8;
  SEL local_c0;
  ID local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  IVar1 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b8,PTR_s_stringArrayInRule_forKey__026a44e8,local_c8,&cf_types);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_count_0269cfe0);
  if (IVar1 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = &cf_hQ__W;
    local_d4 = 1;
  }
  else {
    pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = pcVar2;
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
          pcVar2 = local_e0;
          local_e8 = *(undefined8 *)(local_120 + local_158 * 8);
          IVar3 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_titleForTypeKey__026a41e8,local_e8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(IVar3);
          local_158 = local_158 + 1;
        } while (local_158 < local_150);
        local_150 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10
                  );
        local_158 = 0;
      } while (local_150 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar1);
    pcVar2 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_count_0269cfe0);
    local_b0 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    if ((cfstringStruct *)((long)&MACH_HEADER.magic + 3) < pcVar2) {
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_stringWithFormat__0269cca8,&::cf__);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      pcVar2 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_componentsJoinedByString__0269d140,&cf__)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_b0 = pcVar2;
    }
    local_d4 = 1;
    _objc_storeStrong(&local_e0,0);
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

