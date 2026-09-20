// xhsPickStreamURLFromItem: @ 0104cf10

/* Function Stack Size: 0x18 bytes */

ID WCRefineLinkParser::xhsPickStreamURLFromItem_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ID IVar3;
  long lVar4;
  ulong uVar5;
  ulong local_198;
  ulong local_190;
  ulong local_158;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  ulong local_100;
  ulong local_f8;
  byte local_e9;
  ulong local_e8;
  ulong local_e0;
  undefined *local_d8;
  undefined4 local_cc;
  ulong local_c8;
  SEL local_c0;
  ID local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  uVar2 = local_c8;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_b0 = 0;
    local_cc = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_c8;
    local_d8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c8,PTR_s_objectForKeyedSubscript__0269d098,&cf_masterUrl);
    _objc_retainAutoreleasedReturnValue();
    local_e9 = 0;
    local_158 = uVar2;
    if (uVar2 == 0) {
      local_158 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c8,PTR_s_objectForKeyedSubscript__0269d098,&cf_backupUrl);
      _objc_retainAutoreleasedReturnValue();
      local_e8 = local_158;
    }
    local_e9 = uVar2 == 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_e0 = local_158;
    if ((local_e9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_e8);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_e0;
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_e0);
    }
    uVar2 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c8,PTR_s_objectForKeyedSubscript__0269d098,&cf_backupUrls);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_f8 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 & 1) != 0) {
      _memset(auStack_140,0,0x40);
      uVar2 = local_f8;
      (*(code *)PTR__objc_retain_02578638)();
      local_190 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10);
      if (local_190 != 0) {
        lVar4 = *local_130;
        local_198 = 0;
        do {
          do {
            if (*local_130 - lVar4 != 0) {
              _objc_enumerationMutation(*local_130 - lVar4,uVar2);
            }
            uVar5 = *(ulong *)(local_138 + local_198 * 8);
            puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_100 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar1);
            if ((uVar5 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_100);
            }
            local_198 = local_198 + 1;
          } while (local_198 < local_190);
          local_190 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,
                     0x10);
          local_198 = 0;
        } while (local_190 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    IVar3 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_bestCleanURLFromList__026adf50,local_d8);
    _objc_retainAutoreleasedReturnValue();
    local_cc = 1;
    local_b0 = IVar3;
    _objc_storeStrong(&local_f8);
    _objc_storeStrong(&local_e0,0);
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

