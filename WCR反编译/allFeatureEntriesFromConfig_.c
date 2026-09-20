// allFeatureEntriesFromConfig: @ 01c8c848

/* Function Stack Size: 0x18 bytes */

ID WCRefinePluginFeatureManagementViewController::allFeatureEntriesFromConfig_
             (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *local_1d0;
  undefined *local_1c8;
  long local_168;
  ulong local_160;
  long local_158;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  long local_110;
  undefined *local_108;
  byte local_f9;
  ulong local_f8;
  ulong local_f0;
  ulong local_e8;
  undefined4 local_dc;
  ulong local_d8;
  undefined *local_d0;
  ulong local_c8;
  SEL local_c0;
  ID local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  IVar2 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_defaultFeatureEntries_026c2a58);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_arrayWithArray__0269eab8);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = puVar3;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar3 = local_d0;
  IVar2 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b8,PTR_s_normalizedCustomFeatureEntriesFr_026c2a60,local_c8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObjectsFromArray__0269d540);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  uVar4 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_pluginFeatureCustomTitles_026c2a68);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_d8 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  if (((uVar4 & 1) == 0) ||
     (uVar4 = local_d8, (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0),
     uVar4 == 0)) {
    puVar3 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_copy_0269d150);
    local_dc = 1;
    local_b0 = puVar3;
  }
  else {
    uVar4 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_mutableCopy_0269d8a0);
    local_e8 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar4,PTR_s_objectForKeyedSubscript__0269d098,&cf_red_envelop);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_f0 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
    local_f9 = 0;
    bVar1 = false;
    if ((uVar4 & 1) != 0) {
      uVar4 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_length_0269cca0);
      bVar1 = false;
      if (uVar4 != 0) {
        uVar4 = local_e8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_auto_function);
        _objc_retainAutoreleasedReturnValue();
        local_f9 = 1;
        bVar1 = uVar4 == 0;
        local_f8 = uVar4;
      }
    }
    if ((local_f9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_f8);
    }
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e8,PTR_s_setObject_forKeyedSubscript__0269d248,local_f0,&cf_auto_function);
    }
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_108 = puVar3;
    _memset(auStack_150,0,0x40);
    puVar3 = local_d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_1c8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,0x10);
    if (local_1c8 != (undefined *)0x0) {
      lVar6 = *local_140;
      local_1d0 = (undefined *)0x0;
      do {
        do {
          if (*local_140 - lVar6 != 0) {
            _objc_enumerationMutation(*local_140 - lVar6,puVar3);
          }
          lVar7 = *(long *)(local_148 + (long)local_1d0 * 8);
          local_110 = lVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (lVar7,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = local_e8;
          local_158 = lVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e8,PTR_s_objectForKeyedSubscript__0269d098,lVar7);
          _objc_retainAutoreleasedReturnValue();
          lVar7 = local_158;
          local_160 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_length_0269cca0);
          uVar4 = local_160;
          if (lVar7 == 0) {
LAB_01c8cdf4:
            (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_addObject__0269d180,local_110);
          }
          else {
            puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
            if (((uVar4 & 1) == 0) ||
               (uVar4 = local_160,
               (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_length_0269cca0), uVar4 == 0))
            goto LAB_01c8cdf4;
            lVar7 = local_110;
            (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_mutableCopy_0269d8a0);
            local_168 = lVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (lVar7,PTR_s_setObject_forKeyedSubscript__0269d248,local_160,&cf_title);
            puVar5 = local_108;
            lVar7 = local_168;
            (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_copy_0269d150);
            (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addObject__0269d180);
            (*(code *)PTR__objc_release_02578630)(lVar7);
            _objc_storeStrong(&local_168,0);
          }
          _objc_storeStrong(&local_160);
          _objc_storeStrong(&local_158,0);
          local_1d0 = local_1d0 + 1;
        } while (local_1d0 < local_1c8);
        local_1c8 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,
                   0x10);
        local_1d0 = (undefined *)0x0;
      } while (local_1c8 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_108;
    (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_copy_0269d150);
    local_dc = 1;
    local_b0 = puVar3;
    _objc_storeStrong(&local_108);
    _objc_storeStrong(&local_f0,0);
    _objc_storeStrong(&local_e8,0);
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

