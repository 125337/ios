// FUN_01c96cac @ 01c96cac

void FUN_01c96cac(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *local_238;
  cfstringStruct *local_220;
  ulong local_1e8;
  ulong local_1e0;
  undefined *local_1b8;
  ulong local_1a0;
  cfstringStruct *local_178;
  bool local_169;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  bool local_151;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  cfstringStruct *local_f8;
  undefined *local_f0;
  byte local_e1;
  undefined *local_e0;
  undefined *local_d8;
  ulong local_d0;
  undefined4 local_c4;
  undefined *local_c0;
  ulong local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = (undefined *)0x0;
  _objc_storeStrong(&local_c0,param_2);
  if (local_b8 == 0) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_c4 = 1;
    local_b0 = puVar2;
  }
  else {
    uVar3 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_pluginFeatureCustomEntries_026a8400);
    _objc_retainAutoreleasedReturnValue();
    local_1a0 = uVar3;
    if (uVar3 == 0) {
      local_1a0 = *(ulong *)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_d0 = local_1a0;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    local_e1 = 0;
    bVar1 = local_c0 == (undefined *)0x0;
    if (bVar1) {
      local_1b8 = PTR__OBJC_CLASS___NSSet_026ce150;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_set_0269d510);
      _objc_retainAutoreleasedReturnValue();
      local_e0 = local_1b8;
    }
    else {
      local_1b8 = local_c0;
    }
    local_e1 = bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_d8 = local_1b8;
    if ((local_e1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_e0);
    }
    puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
    _objc_retainAutoreleasedReturnValue();
    local_f0 = puVar2;
    _memset(auStack_138,0,0x40);
    uVar3 = local_d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_1e0 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10);
    if (local_1e0 != 0) {
      lVar5 = *local_128;
      local_1e8 = 0;
      do {
        do {
          if (*local_128 - lVar5 != 0) {
            _objc_enumerationMutation(*local_128 - lVar5,uVar3);
          }
          pcVar6 = *(cfstringStruct **)(local_130 + local_1e8 * 8);
          puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_f8 = pcVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
          pcVar4 = local_f8;
          if (((ulong)pcVar6 & 1) != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_140 = pcVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar4,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            pcVar6 = pcVar4;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
            local_151 = false;
            bVar1 = ((ulong)pcVar6 & 1) == 0;
            if (bVar1) {
              local_220 = &cf___;
            }
            else {
              local_220 = local_140;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_140,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
              _objc_retainAutoreleasedReturnValue();
              local_150 = local_220;
            }
            local_151 = !bVar1;
            (*(code *)PTR__objc_retain_02578638)();
            local_148 = local_220;
            if ((local_151 & 1U) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_150);
            }
            (*(code *)PTR__objc_release_02578630)(pcVar4);
            pcVar4 = local_140;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_140,PTR_s_objectForKeyedSubscript__0269d098,&cf_controller);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            pcVar6 = pcVar4;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
            local_169 = false;
            bVar1 = ((ulong)pcVar6 & 1) == 0;
            if (bVar1) {
              local_238 = &cf___;
            }
            else {
              local_238 = local_140;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_140,PTR_s_objectForKeyedSubscript__0269d098,&cf_controller);
              _objc_retainAutoreleasedReturnValue();
              local_168 = local_238;
            }
            local_169 = !bVar1;
            (*(code *)PTR__objc_retain_02578638)();
            local_160 = local_238;
            if ((local_169 & 1U) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_168);
            }
            (*(code *)PTR__objc_release_02578630)(pcVar4);
            pcVar4 = local_148;
            FUN_01c8c5e8(local_148,local_160);
            _objc_retainAutoreleasedReturnValue();
            local_178 = pcVar4;
            FUN_01c9217c();
            if ((((ulong)pcVar4 & 1) == 0) ||
               (pcVar4 = local_160,
               (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_length_0269cca0),
               pcVar4 == (cfstringStruct *)0x0)) {
              local_c4 = 3;
            }
            else {
              puVar2 = local_d8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_d8,PTR_s_containsObject__0269cbb8,local_178);
              if (((ulong)puVar2 & 1) == 0) {
                pcVar4 = local_160;
                FUN_01c9abec();
                if (((ulong)pcVar4 & 1) == 0) {
                  local_c4 = 3;
                }
                else {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_f0,PTR_s_addObject__0269d180,local_160);
                  local_c4 = 0;
                }
              }
              else {
                local_c4 = 3;
              }
            }
            _objc_storeStrong(&local_178);
            _objc_storeStrong(&local_160,0);
            _objc_storeStrong(&local_148,0);
            _objc_storeStrong(&local_140,0);
          }
          local_1e8 = local_1e8 + 1;
        } while (local_1e8 < local_1e0);
        local_1e0 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10
                  );
        local_1e8 = 0;
      } while (local_1e0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    puVar2 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_c4 = 1;
    local_b0 = puVar2;
    _objc_storeStrong(&local_f0);
    _objc_storeStrong(&local_d8,0);
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

