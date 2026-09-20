// normalizedHiddenIDsFromSavedIDs: @ 01cc518c

/* Function Stack Size: 0x18 bytes */

ID WCRefineProfileCardActionCatalog::normalizedHiddenIDsFromSavedIDs_
             (ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ID IVar6;
  long lVar7;
  ulong uVar8;
  uint local_2d4;
  undefined *local_2b8;
  undefined *local_2b0;
  uint local_28c;
  ulong local_258;
  ulong local_250;
  undefined1 auStack_220 [8];
  long local_218;
  long *local_210;
  undefined8 local_1e0;
  undefined *local_1d8;
  ulong local_1d0;
  undefined1 auStack_1c8 [8];
  long local_1c0;
  long *local_1b8;
  ulong local_188;
  ulong local_180;
  byte local_171;
  undefined *local_170;
  ID local_168;
  ulong local_160;
  SEL local_158;
  ID local_150;
  undefined1 auStack_148 [128];
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_160 = 0;
  local_158 = param_2;
  local_150 = param_1;
  _objc_storeStrong(&local_160,param_3);
  IVar2 = local_150;
  (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_entryMap_026aed30);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_168 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = local_160;
  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_170 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
  uVar1 = local_160;
  local_171 = (byte)uVar5;
  if ((uVar5 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_180 = uVar1;
    _memset(auStack_1c8,0,0x40);
    uVar5 = local_180;
    (*(code *)PTR__objc_retain_02578638)();
    local_250 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c8,auStack_a8,0x10);
    if (local_250 != 0) {
      lVar7 = *local_1b8;
      local_258 = 0;
      do {
        do {
          if (*local_1b8 - lVar7 != 0) {
            _objc_enumerationMutation(*local_1b8 - lVar7,uVar5);
          }
          uVar8 = *(ulong *)(local_1c0 + local_258 * 8);
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_188 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar3);
          uVar1 = local_188;
          if ((uVar8 & 1) != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_1d0 = uVar1;
            IVar2 = local_168;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_168,PTR_s_objectForKeyedSubscript__0269d098,uVar1);
            _objc_retainAutoreleasedReturnValue();
            if (IVar2 == 0) {
              IVar6 = local_150;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_150,PTR_s_isCustomPageActionID__026b0670,local_1d0);
              local_28c = 0;
              if ((IVar6 & 1) != 0) goto LAB_01cc5400;
            }
            else {
LAB_01cc5400:
              puVar3 = local_170;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_170,PTR_s_containsObject__0269cbb8,local_1d0);
              local_28c = (uint)puVar3 ^ 1;
            }
            (*(code *)PTR__objc_release_02578630)(IVar2);
            if ((local_28c & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_addObject__0269d180,local_1d0);
            }
            _objc_storeStrong(&local_1d0,0);
          }
          local_258 = local_258 + 1;
        } while (local_258 < local_250);
        local_250 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c8,auStack_a8,0x10
                  );
        local_258 = 0;
      } while (local_250 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar5);
    _objc_storeStrong(&local_180,0);
  }
  if ((local_171 & 1) == 0) {
    local_c8 = &cf_theme_delivery;
    local_c0 = &cf_avatar_url;
    local_b8 = &cf_custom_page_plugins_hub;
    local_b0 = &cf_custom_page_wcrefine_hub;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c8,4
              );
    _objc_retainAutoreleasedReturnValue();
    local_1d8 = puVar3;
    _memset(auStack_220,0,0x40);
    puVar3 = local_1d8;
    (*(code *)PTR__objc_retain_02578638)();
    local_2b0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,auStack_148,0x10);
    if (local_2b0 != (undefined *)0x0) {
      lVar7 = *local_210;
      local_2b8 = (undefined *)0x0;
      do {
        do {
          if (*local_210 - lVar7 != 0) {
            _objc_enumerationMutation(*local_210 - lVar7,puVar3);
          }
          local_1e0 = *(undefined8 *)(local_218 + (long)local_2b8 * 8);
          IVar2 = local_168;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_168,PTR_s_objectForKeyedSubscript__0269d098,local_1e0);
          _objc_retainAutoreleasedReturnValue();
          local_2d4 = 0;
          if (IVar2 != 0) {
            puVar4 = local_170;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_170,PTR_s_containsObject__0269cbb8,local_1e0);
            local_2d4 = (uint)puVar4 ^ 1;
          }
          (*(code *)PTR__objc_release_02578630)(IVar2);
          if ((local_2d4 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_addObject__0269d180,local_1e0);
          }
          IVar2 = local_150;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_150,PTR_s_isCustomPageActionID__026b0670,local_1e0);
          if (((IVar2 & 1) != 0) &&
             (puVar4 = local_170,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_170,PTR_s_containsObject__0269cbb8,local_1e0),
             ((ulong)puVar4 & 1) == 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_addObject__0269d180,local_1e0);
          }
          local_2b8 = local_2b8 + 1;
        } while (local_2b8 < local_2b0);
        local_2b0 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,auStack_148,
                   0x10);
        local_2b8 = (undefined *)0x0;
      } while (local_2b0 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_1d8,0);
  }
  puVar3 = local_170;
  (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_copy_0269d150);
  _objc_storeStrong(&local_170);
  _objc_storeStrong(&local_168,0);
  _objc_storeStrong(&local_160,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

