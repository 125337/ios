// matchedPluginClassesForKeywordFromIndex: @ 014c9abc

/* Function Stack Size: 0x18 bytes */

ID WCRefineSearchManager::matchedPluginClassesForKeywordFromIndex_
             (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong local_2c0;
  ulong local_2b8;
  ulong local_268;
  ulong local_260;
  ulong local_218;
  undefined1 auStack_210 [8];
  long local_208;
  long *local_200;
  ulong local_1d0;
  byte local_1c1;
  ulong local_1c0;
  ulong local_1b8;
  undefined1 auStack_1b0 [8];
  long local_1a8;
  long *local_1a0;
  ulong local_170;
  undefined *local_168;
  ID local_160;
  long local_158;
  int local_14c;
  long local_148;
  SEL local_140;
  ID local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_148 = 0;
  local_140 = param_2;
  local_138 = param_1;
  _objc_storeStrong(&local_148,param_3);
  if (*(long *)(local_138 + 0x58) != 0) {
    lVar1 = *(long *)(local_138 + 0x58);
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_count_0269cfe0);
    if (lVar1 != 0) {
      lVar1 = local_148;
      FUN_014bdccc();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_158 = lVar7;
      (*(code *)PTR__objc_release_02578630)(lVar1);
      lVar1 = local_158;
      (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_length_0269cca0);
      if (lVar1 == 0) {
        puVar2 = *(undefined **)PTR____NSArray0___02578280;
        (*(code *)PTR__objc_retain_02578638)();
        local_14c = 1;
        local_130 = puVar2;
      }
      else {
        IVar3 = local_138;
        (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_getSortedPluginVCList_026af578);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        local_160 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_168 = puVar2;
        _memset(auStack_1b0,0,0x40);
        IVar3 = local_160;
        (*(code *)PTR__objc_retain_02578638)();
        local_260 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b0,auStack_a8,0x10
                  );
        if (local_260 != 0) {
          lVar1 = *local_1a0;
          local_268 = 0;
          do {
            do {
              if (*local_1a0 - lVar1 != 0) {
                _objc_enumerationMutation(*local_1a0 - lVar1,IVar3);
              }
              uVar6 = *(ulong *)(local_1a8 + local_268 * 8);
              puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
              local_170 = uVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
              uVar5 = local_170;
              if ((uVar6 & 1) != 0) {
                (*(code *)PTR__objc_retain_02578638)();
                local_1b8 = uVar5;
                IVar4 = local_138;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_138,PTR_s_isPluginEnabledForSearchByClassN_026af5a8,uVar5);
                if ((IVar4 & 1) == 0) {
                  local_14c = 3;
                }
                else {
                  uVar5 = *(ulong *)(local_138 + 0x58);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar5,PTR_s_objectForKeyedSubscript__0269d098,local_1b8);
                  _objc_retainAutoreleasedReturnValue();
                  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                  local_1c0 = uVar5;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
                  (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
                  if (((uVar5 & 1) == 0) ||
                     (uVar5 = local_1c0,
                     (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_count_0269cfe0),
                     uVar5 == 0)) {
                    local_14c = 3;
                  }
                  else {
                    local_1c1 = 0;
                    _memset(auStack_210,0,0x40);
                    uVar5 = local_1c0;
                    (*(code *)PTR__objc_retain_02578638)();
                    local_2b8 = uVar5;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_210,
                               auStack_128,0x10);
                    if (local_2b8 != 0) {
                      lVar7 = *local_200;
                      local_2c0 = 0;
                      do {
                        do {
                          if (*local_200 - lVar7 != 0) {
                            _objc_enumerationMutation(*local_200 - lVar7,uVar5);
                          }
                          uVar8 = *(ulong *)(local_208 + local_2c0 * 8);
                          puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
                          local_1d0 = uVar8;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (uVar8,PTR_s_isKindOfClass__0269cd68,puVar2);
                          uVar6 = local_1d0;
                          if ((uVar8 & 1) != 0) {
                            (*(code *)PTR__objc_retain_02578638)();
                            local_218 = uVar6;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (uVar6,PTR_s_rangeOfString_options__0269d118,local_158,1);
                            if (uVar6 == 0x7fffffffffffffff) {
                              local_14c = 0;
                              uVar9 = 0;
                            }
                            else {
                              local_1c1 = 1;
                              uVar9 = 4;
                              local_14c = 4;
                            }
                            _objc_storeStrong(uVar9,&local_218,0);
                            if (local_14c != 0) goto LAB_014ca034;
                          }
                          local_2c0 = local_2c0 + 1;
                        } while (local_2c0 < local_2b8);
                        local_2b8 = uVar5;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_210
                                   ,auStack_128,0x10);
                        local_2c0 = 0;
                      } while (local_2b8 != 0);
                    }
                    local_14c = 0;
LAB_014ca034:
                    (*(code *)PTR__objc_release_02578630)(uVar5);
                    if ((local_1c1 & 1) != 0) {
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_168,PTR_s_addObject__0269d180,local_1b8);
                    }
                    local_14c = 0;
                  }
                  _objc_storeStrong(&local_1c0,0);
                }
                _objc_storeStrong(&local_1b8,0);
              }
              local_268 = local_268 + 1;
            } while (local_268 < local_260);
            local_260 = IVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b0,auStack_a8,
                       0x10);
            local_268 = 0;
          } while (local_260 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(IVar3);
        puVar2 = local_168;
        (*(code *)PTR__objc_retain_02578638)();
        local_130 = puVar2;
        local_14c = 1;
        _objc_storeStrong(&local_168);
        _objc_storeStrong(&local_160,0);
      }
      _objc_storeStrong(&local_158,0);
      goto LAB_014ca188;
    }
  }
  puVar2 = *(undefined **)PTR____NSArray0___02578280;
  (*(code *)PTR__objc_retain_02578638)();
  local_14c = 1;
  local_130 = puVar2;
LAB_014ca188:
  _objc_storeStrong(&local_148,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_130;
}

