// reorderEnabledLongPressEntries: @ 011014d4

/* Function Stack Size: 0x18 bytes */

void WCRefinePluginIconCatalog::reorderEnabledLongPressEntries_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ID IVar4;
  long lVar5;
  ulong uVar6;
  ulong local_268;
  ulong local_260;
  ulong local_218;
  ulong local_210;
  undefined1 auStack_1f0 [8];
  long local_1e8;
  long *local_1e0;
  undefined8 local_1b0;
  undefined *local_1a8;
  undefined4 local_19c;
  ulong local_198;
  undefined1 auStack_190 [8];
  long local_188;
  long *local_180;
  ulong local_150;
  undefined *local_148;
  ulong local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_140 = 0;
  local_138 = param_2;
  local_130 = param_1;
  _objc_storeStrong(&local_140,param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_148 = puVar2;
  _memset(auStack_190,0,0x40);
  uVar1 = local_140;
  (*(code *)PTR__objc_retain_02578638)();
  local_210 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8,0x10);
  if (local_210 != 0) {
    lVar5 = *local_180;
    local_218 = 0;
    do {
      do {
        if (*local_180 - lVar5 != 0) {
          _objc_enumerationMutation(*local_180 - lVar5,uVar1);
        }
        uVar6 = *(ulong *)(local_188 + local_218 * 8);
        puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_150 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
        if ((uVar6 & 1) != 0) {
          uVar6 = local_150;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_150,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar6;
          FUN_010f4f48();
          _objc_retainAutoreleasedReturnValue();
          local_198 = uVar3;
          (*(code *)PTR__objc_release_02578630)(uVar6);
          uVar6 = local_198;
          (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_length_0269cca0);
          if ((uVar6 == 0) ||
             (puVar2 = local_148,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_148,PTR_s_containsObject__0269cbb8,local_198),
             ((ulong)puVar2 & 1) != 0)) {
            local_19c = 3;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_addObject__0269d180,local_198);
            local_19c = 0;
          }
          _objc_storeStrong(&local_198,0);
        }
        local_218 = local_218 + 1;
      } while (local_218 < local_210);
      local_210 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8,0x10);
      local_218 = 0;
    } while (local_210 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSSet_026ce150;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_setWithArray__0269d9a0,local_148);
  _objc_retainAutoreleasedReturnValue();
  local_1a8 = puVar2;
  _memset(auStack_1f0,0,0x40);
  IVar4 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_resolvedLongPressOrder_026aed60);
  _objc_retainAutoreleasedReturnValue();
  local_260 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_260 != 0) {
    lVar5 = *local_1e0;
    local_268 = 0;
    do {
      do {
        if (*local_1e0 - lVar5 != 0) {
          _objc_enumerationMutation(*local_1e0 - lVar5,IVar4);
        }
        local_1b0 = *(undefined8 *)(local_1e8 + local_268 * 8);
        puVar2 = local_1a8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_containsObject__0269cbb8,local_1b0);
        if (((ulong)puVar2 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_addObject__0269d180,local_1b0);
        }
        local_268 = local_268 + 1;
      } while (local_268 < local_260);
      local_260 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,auStack_128,0x10)
      ;
      local_268 = 0;
    } while (local_260 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setLongPressOrder__026aee18,local_148);
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_notifyLongPressMenuChanged_026aedf0);
  _objc_storeStrong(&local_1a8);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

