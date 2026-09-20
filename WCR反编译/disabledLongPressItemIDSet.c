// disabledLongPressItemIDSet @ 010fe7a0

/* Function Stack Size: 0x10 bytes */

ID WCRefinePluginIconCatalog::disabledLongPressItemIDSet(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  long lVar4;
  ulong uVar5;
  undefined *local_170;
  undefined *local_168;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined4 local_cc;
  undefined *local_c8;
  SEL local_c0;
  ID local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_c0 = param_2;
  local_b8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_c8;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((((ulong)puVar1 & 1) == 0) ||
     (puVar2 = local_c8, (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0),
     puVar1 = PTR__OBJC_CLASS___NSSet_026ce150, puVar2 == (undefined *)0x0)) {
    puVar1 = PTR__OBJC_CLASS___NSSet_026ce150;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    local_cc = 1;
    local_b0 = puVar1;
  }
  else {
    IVar3 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_allControllableLongPressIDs_026aedc8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setWithArray__0269d9a0);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = puVar1;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    puVar1 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = puVar1;
    _memset(auStack_128,0,0x40);
    puVar1 = local_c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_168 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
    if (local_168 != (undefined *)0x0) {
      lVar4 = *local_118;
      local_170 = (undefined *)0x0;
      do {
        do {
          if (*local_118 - lVar4 != 0) {
            _objc_enumerationMutation(*local_118 - lVar4,puVar1);
          }
          uVar5 = *(ulong *)(local_120 + (long)local_170 * 8);
          puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_e8 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
          if (((uVar5 & 1) != 0) &&
             ((((puVar2 = local_d8,
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_d8,PTR_s_containsObject__0269cbb8,local_e8),
                ((ulong)puVar2 & 1) != 0 ||
                (uVar5 = local_e8, _WCRLongPressMenuItemIsNative(), (uVar5 & 1) != 0)) ||
               (uVar5 = local_e8,
               (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_hasPrefix__0269d320,&cf_lp_),
               (uVar5 & 1) != 0)) ||
              (uVar5 = local_e8,
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_e8,PTR_s_hasPrefix__0269d320,&cf_plugin_title_), (uVar5 & 1) != 0))))
          {
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addObject__0269d180,local_e8);
          }
          local_170 = local_170 + 1;
        } while (local_170 < local_168);
        local_168 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                   0x10);
        local_170 = (undefined *)0x0;
      } while (local_168 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_copy_0269d150);
    local_cc = 1;
    local_b0 = puVar1;
    _objc_storeStrong(&local_e0);
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

