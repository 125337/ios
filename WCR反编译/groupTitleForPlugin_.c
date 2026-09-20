// groupTitleForPlugin: @ 01775f2c

/* Function Stack Size: 0x18 bytes */

ID WCRefinePluginHubManager::groupTitleForPlugin_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  ulong local_148;
  ulong local_140;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  cfstringStruct *local_d8;
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
  IVar2 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_groupIdentifierForPlugin__026b4470,local_c8);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = IVar2;
  _memset(auStack_118,0,0x40);
  IVar2 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_groupDefinitions_026b4430);
  _objc_retainAutoreleasedReturnValue();
  local_140 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_140 != 0) {
    lVar4 = *local_108;
    local_148 = 0;
    do {
      do {
        if (*local_108 - lVar4 != 0) {
          _objc_enumerationMutation(*local_108 - lVar4,IVar2);
        }
        pcVar5 = *(cfstringStruct **)(local_110 + local_148 * 8);
        local_d8 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_objectForKeyedSubscript__0269d098,&cf_id)
        ;
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar5);
        if (((ulong)pcVar3 & 1) != 0) {
          pcVar3 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d8,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
          _objc_retainAutoreleasedReturnValue();
          bVar1 = true;
          local_b0 = pcVar3;
          goto LAB_01776160;
        }
        local_148 = local_148 + 1;
      } while (local_148 < local_140);
      local_140 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
      local_148 = 0;
    } while (local_140 != 0);
  }
  bVar1 = false;
LAB_01776160:
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (!bVar1) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = &::cf_R;
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

