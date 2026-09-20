// rawLongPressCustomItems @ 010fbd20

/* Function Stack Size: 0x10 bytes */

ID WCRefinePluginIconCatalog::rawLongPressCustomItems(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined *local_210;
  undefined *local_208;
  ulong local_1d0;
  ulong local_1c8;
  ulong local_1c0;
  ulong local_1b8;
  ulong local_1b0;
  undefined1 auStack_1a8 [8];
  long local_1a0;
  long *local_198;
  ulong local_168;
  undefined *local_160;
  undefined *local_158;
  undefined4 local_14c;
  undefined *local_148;
  SEL local_140;
  ID local_138;
  undefined *local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  ulong local_e8;
  ulong local_e0;
  ulong local_d8;
  ulong local_d0;
  ulong local_c8;
  undefined *local_c0;
  undefined *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_140 = param_2;
  local_138 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_148 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_148;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_14c = 1;
    local_130 = puVar2;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    local_158 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    local_160 = puVar1;
    _memset(auStack_1a8,0,0x40);
    puVar2 = local_148;
    (*(code *)PTR__objc_retain_02578638)();
    local_208 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,0x10);
    if (local_208 != (undefined *)0x0) {
      lVar7 = *local_198;
      local_210 = (undefined *)0x0;
      do {
        do {
          if (*local_198 - lVar7 != 0) {
            _objc_enumerationMutation(*local_198 - lVar7,puVar2);
          }
          uVar8 = *(ulong *)(local_1a0 + (long)local_210 * 8);
          puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_168 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar1);
          if ((uVar8 & 1) != 0) {
            uVar8 = local_168;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_168,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar8;
            FUN_010f4f48();
            _objc_retainAutoreleasedReturnValue();
            local_1b0 = uVar3;
            (*(code *)PTR__objc_release_02578630)(uVar8);
            uVar8 = local_168;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_168,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar8;
            FUN_010f4f48();
            _objc_retainAutoreleasedReturnValue();
            local_1b8 = uVar3;
            (*(code *)PTR__objc_release_02578630)(uVar8);
            uVar8 = local_168;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_168,PTR_s_objectForKeyedSubscript__0269d098,&cf_customKind);
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar8;
            FUN_010f4f48();
            _objc_retainAutoreleasedReturnValue();
            local_1c0 = uVar3;
            (*(code *)PTR__objc_release_02578630)(uVar8);
            uVar8 = local_168;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_168,PTR_s_objectForKeyedSubscript__0269d098,&cf_customPayload);
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar8;
            FUN_010f4f48();
            _objc_retainAutoreleasedReturnValue();
            local_1c8 = uVar3;
            (*(code *)PTR__objc_release_02578630)(uVar8);
            uVar8 = local_1b0;
            _WCRLongPressMenuItemIsCustom();
            if (((((uVar8 & 1) == 0) ||
                 (uVar8 = local_1b8,
                 (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_length_0269cca0), uVar8 == 0)
                 ) || (uVar8 = local_1c0,
                      (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_length_0269cca0),
                      uVar8 == 0)) ||
               (uVar8 = local_1c8,
               (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_length_0269cca0), uVar8 == 0))
            {
              local_14c = 3;
            }
            else {
              puVar1 = local_160;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_160,PTR_s_containsObject__0269cbb8,local_1b0);
              if (((ulong)puVar1 & 1) == 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_addObject__0269d180,local_1b0)
                ;
                uVar8 = local_168;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_168,PTR_s_objectForKeyedSubscript__0269d098,&cf_icon);
                _objc_retainAutoreleasedReturnValue();
                uVar3 = uVar8;
                FUN_010f4f48();
                _objc_retainAutoreleasedReturnValue();
                local_1d0 = uVar3;
                (*(code *)PTR__objc_release_02578630)(uVar8);
                uVar8 = local_1d0;
                (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_length_0269cca0);
                if (uVar8 == 0) {
                  _objc_storeStrong(&local_1d0,&cf_icons_outlined_more_circle);
                }
                puVar1 = local_158;
                local_128 = &cf_id;
                local_e8 = local_1b0;
                local_120 = &cf_title;
                local_e0 = local_1b8;
                local_118 = &cf_icon;
                local_d8 = local_1d0;
                local_110 = &cf_customKind;
                local_d0 = local_1c0;
                local_108 = &cf_customPayload;
                local_c8 = local_1c8;
                local_100 = &cf_category;
                puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,0);
                _objc_retainAutoreleasedReturnValue();
                local_f8 = &cf_supports_sort;
                puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
                local_c0 = puVar4;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
                _objc_retainAutoreleasedReturnValue();
                local_f0 = &cf_kind;
                local_b0 = &cf_custom;
                puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                local_b8 = puVar5;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSDictionary_026ce090,
                           PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_e8,&local_128,8);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
                (*(code *)PTR__objc_release_02578630)(puVar6);
                (*(code *)PTR__objc_release_02578630)(puVar5);
                (*(code *)PTR__objc_release_02578630)(puVar4);
                _objc_storeStrong(&local_1d0,0);
                local_14c = 0;
              }
              else {
                local_14c = 3;
              }
            }
            _objc_storeStrong(&local_1c8);
            _objc_storeStrong(&local_1c0,0);
            _objc_storeStrong(&local_1b8,0);
            _objc_storeStrong(&local_1b0,0);
          }
          local_210 = local_210 + 1;
        } while (local_210 < local_208);
        local_208 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,
                   0x10);
        local_210 = (undefined *)0x0;
      } while (local_208 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_158;
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_copy_0269d150);
    local_14c = 1;
    local_130 = puVar2;
    _objc_storeStrong(&local_160);
    _objc_storeStrong(&local_158,0);
  }
  _objc_storeStrong(&local_148,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_130;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

