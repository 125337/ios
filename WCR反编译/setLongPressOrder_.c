// setLongPressOrder: @ 010fe28c

/* Function Stack Size: 0x18 bytes */

void WCRefinePluginIconCatalog::setLongPressOrder_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong local_260;
  ulong local_258;
  ulong local_218;
  ulong local_210;
  undefined1 auStack_1e0 [8];
  long local_1d8;
  long *local_1d0;
  undefined8 local_1a0;
  undefined1 auStack_198 [8];
  long local_190;
  long *local_188;
  ulong local_158;
  undefined *local_150;
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
  puVar3 = PTR__OBJC_CLASS___NSSet_026ce150;
  IVar2 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_allControllableLongPressIDs_026aedc8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setWithArray__0269d9a0);
  _objc_retainAutoreleasedReturnValue();
  local_148 = puVar3;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar3 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
  _objc_retainAutoreleasedReturnValue();
  local_150 = puVar3;
  _memset(auStack_198,0,0x40);
  uVar1 = local_140;
  (*(code *)PTR__objc_retain_02578638)();
  local_210 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,0x10);
  if (local_210 != 0) {
    lVar5 = *local_188;
    local_218 = 0;
    do {
      do {
        if (*local_188 - lVar5 != 0) {
          _objc_enumerationMutation(*local_188 - lVar5,uVar1);
        }
        uVar6 = *(ulong *)(local_190 + local_218 * 8);
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_158 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar3);
        if (((uVar6 & 1) != 0) &&
           (puVar3 = local_148,
           (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_containsObject__0269cbb8,local_158)
           , ((ulong)puVar3 & 1) != 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_addObject__0269d180,local_158);
        }
        local_218 = local_218 + 1;
      } while (local_218 < local_210);
      local_210 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,0x10);
      local_218 = 0;
    } while (local_210 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _memset(auStack_1e0,0,0x40);
  IVar2 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_resolvedLongPressOrder_026aed60);
  _objc_retainAutoreleasedReturnValue();
  local_258 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_258 != 0) {
    lVar5 = *local_1d0;
    local_260 = 0;
    do {
      do {
        if (*local_1d0 - lVar5 != 0) {
          _objc_enumerationMutation(*local_1d0 - lVar5,IVar2);
        }
        local_1a0 = *(undefined8 *)(local_1d8 + local_260 * 8);
        puVar3 = local_150;
        (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_containsObject__0269cbb8,local_1a0);
        if ((((ulong)puVar3 & 1) == 0) &&
           (puVar3 = local_148,
           (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_containsObject__0269cbb8,local_1a0)
           , ((ulong)puVar3 & 1) != 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_addObject__0269d180,local_1a0);
        }
        local_260 = local_260 + 1;
      } while (local_260 < local_258);
      local_258 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e0,auStack_128,0x10)
      ;
      local_260 = 0;
    } while (local_258 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar3 = local_150;
  (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_150);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

