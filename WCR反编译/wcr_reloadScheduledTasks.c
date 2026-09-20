// wcr_reloadScheduledTasks @ 01becb90

/* Function Stack Size: 0x10 bytes */

void WCRefineMomentsDraftListViewController::wcr_reloadScheduledTasks(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_1a8;
  ulong local_170;
  ulong local_168;
  ID local_140;
  bool local_129;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  cfstringStruct *local_d0;
  undefined *local_c8;
  ID local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  _WCRMomentsScheduledTaskSnapshots();
  _objc_retainAutoreleasedReturnValue();
  local_140 = param_1;
  if (param_1 == 0) {
    local_140 = *(ID *)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_c0 = local_140;
  (*(code *)PTR__objc_release_02578630)(param_1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar2;
  _memset(auStack_110,0,0x40);
  IVar1 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_168 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
  if (local_168 != 0) {
    lVar4 = *local_100;
    local_170 = 0;
    do {
      do {
        if (*local_100 - lVar4 != 0) {
          _objc_enumerationMutation(*local_100 - lVar4,IVar1);
        }
        pcVar5 = *(cfstringStruct **)(local_108 + local_170 * 8);
        puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_d0 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
        pcVar3 = local_d0;
        if (((ulong)pcVar5 & 1) != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_118 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar3,PTR_s_objectForKeyedSubscript__0269d098,&cf_state);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          pcVar5 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
          local_129 = ((ulong)pcVar5 & 1) == 0;
          if (local_129) {
            local_1a8 = &::cf___;
          }
          else {
            local_1a8 = local_118;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_118,PTR_s_objectForKeyedSubscript__0269d098,&cf_state);
            _objc_retainAutoreleasedReturnValue();
            local_128 = local_1a8;
          }
          local_129 = !local_129;
          (*(code *)PTR__objc_retain_02578638)();
          local_120 = local_1a8;
          if (local_129) {
            (*(code *)PTR__objc_release_02578630)(local_128);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          pcVar3 = local_120;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_120,PTR_s_isEqualToString__0269ccc8,&cf_triggered);
          if (((ulong)pcVar3 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_addObject__0269d180,local_118);
          }
          _objc_storeStrong(&local_120);
          _objc_storeStrong(&local_118,0);
        }
        local_170 = local_170 + 1;
      } while (local_170 < local_168);
      local_168 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
      local_170 = 0;
    } while (local_168 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setScheduledTasks__026af470,local_c8);
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

