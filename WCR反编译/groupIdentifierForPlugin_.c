// groupIdentifierForPlugin: @ 01775a20

/* Function Stack Size: 0x18 bytes */

ID WCRefinePluginHubManager::groupIdentifierForPlugin_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  cfstringStruct *local_190;
  cfstringStruct *local_188;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  int local_dc;
  cfstringStruct *local_d8;
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
  pcVar2 = local_b8;
  uVar1 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_identifier_026a4a88);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_overrideForPluginIdentifier__026b43b8);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  pcVar2 = local_b8;
  pcVar3 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_groupID);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_resolvedGroupIdentifierFromStore_026b4468);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar4 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
  pcVar3 = local_b8;
  pcVar2 = local_d8;
  if (pcVar4 == (cfstringStruct *)0x0) {
    pcVar4 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_group);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_resolvedGroupIdentifierFromStore_026b4468);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_d8;
    local_d8 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    pcVar3 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
    pcVar2 = local_d8;
    if (pcVar3 == (cfstringStruct *)0x0) {
      _memset(auStack_128,0,0x40);
      pcVar2 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_groupDefinitions_026b4430);
      _objc_retainAutoreleasedReturnValue();
      local_188 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_188 != (cfstringStruct *)0x0) {
        lVar6 = *local_118;
        local_190 = (cfstringStruct *)0x0;
        do {
          do {
            if (*local_118 - lVar6 != 0) {
              _objc_enumerationMutation(*local_118 - lVar6,pcVar2);
            }
            uVar7 = *(ulong *)(local_120 + (long)local_190 * 8);
            local_e8 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar7,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar7);
            if ((uVar5 & 1) != 0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_b0 = &cf_functions;
              local_dc = 1;
              goto LAB_01775e0c;
            }
            local_190 = (cfstringStruct *)((long)&local_190->field0_0x0 + 1);
          } while (local_190 < local_188);
          local_188 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                     0x10);
          local_190 = (cfstringStruct *)0x0;
        } while (local_188 != (cfstringStruct *)0x0);
      }
      local_dc = 0;
LAB_01775e0c:
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      if (local_dc == 0) {
        pcVar2 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_groupDefinitions_026b4430);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_b0 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        local_dc = 1;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = pcVar2;
      local_dc = 1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = pcVar2;
    local_dc = 1;
  }
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

