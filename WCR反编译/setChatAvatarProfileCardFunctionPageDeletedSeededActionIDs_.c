// setChatAvatarProfileCardFunctionPageDeletedSeededActionIDs: @ 0200b5fc

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setChatAvatarProfileCardFunctionPageDeletedSeededActionIDs_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ID IVar5;
  SEL SVar6;
  long lVar7;
  ulong uVar8;
  ulong local_150;
  ulong local_148;
  ID local_120;
  ulong local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  ulong local_d0;
  undefined *local_c8;
  ulong local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_c0;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_c8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) != 0) {
    _memset(auStack_110,0,0x40);
    uVar3 = local_c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_148 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
    if (local_148 != 0) {
      lVar7 = *local_100;
      local_150 = 0;
      do {
        do {
          if (*local_100 - lVar7 != 0) {
            _objc_enumerationMutation(*local_100 - lVar7,uVar3);
          }
          uVar8 = *(ulong *)(local_108 + local_150 * 8);
          puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_d0 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar1);
          uVar4 = local_d0;
          if ((uVar8 & 1) != 0) {
            puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                       PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar4,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
            _objc_retainAutoreleasedReturnValue();
            local_118 = uVar4;
            (*(code *)PTR__objc_release_02578630)(puVar1);
            puVar1 = PTR_WCRefineProfileCardActionCatalog_026ced78;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineProfileCardActionCatalog_026ced78,
                       PTR_s_isSeededCustomPageActionID__026c3670,local_118);
            if ((((ulong)puVar1 & 1) != 0) &&
               (puVar1 = local_c8,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_c8,PTR_s_containsObject__0269cbb8,local_118),
               ((ulong)puVar1 & 1) == 0)) {
              (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_addObject__0269d180,local_118);
            }
            _objc_storeStrong(&local_118,0);
          }
          local_150 = local_150 + 1;
        } while (local_150 < local_148);
        local_148 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10
                  );
        local_150 = 0;
      } while (local_148 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  IVar5 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_c8;
  local_120 = IVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_copy_0269d150);
  SVar6 = local_b8;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_setObject_forKey__026ca9e8,puVar1);
  (*(code *)PTR__objc_release_02578630)(SVar6);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_120);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

