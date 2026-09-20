// wcr_mergeCloudCatalogGitHub:server: @ 0159b55c

/* Function Stack Size: 0x20 bytes */

ID WCRefineVoiceCloneHelper::wcr_mergeCloudCatalogGitHub_server_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  long lVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *local_350;
  ulong local_320;
  ulong local_318;
  cfstringStruct *local_2c8;
  cfstringStruct *local_2b0;
  ulong local_280;
  ulong local_278;
  cfstringStruct *local_250;
  bool local_241;
  cfstringStruct *local_240;
  cfstringStruct *local_238;
  undefined1 auStack_230 [8];
  long local_228;
  long *local_220;
  cfstringStruct *local_1f0;
  bool local_1e1;
  cfstringStruct *local_1e0;
  byte local_1d1;
  cfstringStruct *local_1d0;
  cfstringStruct *local_1c8;
  cfstringStruct *local_1c0;
  undefined4 local_1b8;
  bool local_1b1;
  cfstringStruct *local_1b0;
  cfstringStruct *local_1a8;
  undefined1 auStack_1a0 [8];
  long local_198;
  long *local_190;
  cfstringStruct *local_160;
  undefined *local_158;
  undefined *local_150;
  ulong local_148;
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
  local_148 = 0;
  _objc_storeStrong(&local_148,param_4);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  local_150 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  local_158 = puVar4;
  _memset(auStack_1a0,0,0x40);
  uVar2 = local_148;
  (*(code *)PTR__objc_retain_02578638)();
  local_278 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,0x10);
  if (local_278 != 0) {
    lVar6 = *local_190;
    local_280 = 0;
    do {
      do {
        if (*local_190 - lVar6 != 0) {
          _objc_enumerationMutation(*local_190 - lVar6,uVar2);
        }
        pcVar7 = *(cfstringStruct **)(local_198 + local_280 * 8);
        puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_160 = pcVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
        if (((ulong)pcVar7 & 1) != 0) {
          pcVar7 = local_160;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_160,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          pcVar5 = pcVar7;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
          local_1b1 = false;
          bVar1 = ((ulong)pcVar5 & 1) == 0;
          if (bVar1) {
            local_2b0 = &::cf___;
          }
          else {
            local_2b0 = local_160;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_160,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
            _objc_retainAutoreleasedReturnValue();
            local_1b0 = local_2b0;
          }
          local_1b1 = !bVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_1a8 = local_2b0;
          if ((local_1b1 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_1b0);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar7);
          pcVar7 = local_1a8;
          (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_length_0269cca0);
          if ((pcVar7 == (cfstringStruct *)0x0) ||
             (puVar3 = local_158,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_158,PTR_s_containsObject__0269cbb8,local_1a8),
             ((ulong)puVar3 & 1) != 0)) {
            local_1b8 = 3;
          }
          else {
            pcVar7 = local_160;
            (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_mutableCopy_0269d8a0);
            local_1c0 = pcVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar7,PTR_s_objectForKeyedSubscript__0269d098,&cf_visibility);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            pcVar5 = pcVar7;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
            local_1d1 = 0;
            local_1e1 = false;
            bVar1 = ((ulong)pcVar5 & 1) == 0;
            if (bVar1) {
              local_2c8 = &cf_public;
            }
            else {
              local_2c8 = local_1c0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1c0,PTR_s_objectForKeyedSubscript__0269d098,&cf_visibility);
              _objc_retainAutoreleasedReturnValue();
              local_1d1 = 1;
              local_1d0 = local_2c8;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              local_1e0 = local_2c8;
            }
            local_1e1 = !bVar1;
            (*(code *)PTR__objc_retain_02578638)();
            local_1c8 = local_2c8;
            if ((local_1e1 & 1U) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_1e0);
            }
            if ((local_1d1 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_1d0);
            }
            (*(code *)PTR__objc_release_02578630)(pcVar7);
            pcVar5 = local_1c8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1c8,PTR_s_isEqualToString__0269ccc8,&cf_private);
            pcVar7 = &cf_server;
            if (((ulong)pcVar5 & 1) == 0) {
              pcVar7 = &cf_cloud;
            }
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1c0,PTR_s_setObject_forKeyedSubscript__0269d248,pcVar7,
                       &cf_catalogSource);
            (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_addObject__0269d180,local_1c0);
            (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_addObject__0269d180,local_1a8);
            _objc_storeStrong(&local_1c8);
            _objc_storeStrong(&local_1c0,0);
            local_1b8 = 0;
          }
          _objc_storeStrong(&local_1a8,0);
        }
        local_280 = local_280 + 1;
      } while (local_280 < local_278);
      local_278 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,0x10);
      local_280 = 0;
    } while (local_278 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  _memset(auStack_230,0,0x40);
  uVar2 = local_140;
  (*(code *)PTR__objc_retain_02578638)();
  local_318 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_230,auStack_128,0x10);
  if (local_318 != 0) {
    lVar6 = *local_220;
    local_320 = 0;
    do {
      do {
        if (*local_220 - lVar6 != 0) {
          _objc_enumerationMutation(*local_220 - lVar6,uVar2);
        }
        pcVar7 = *(cfstringStruct **)(local_228 + local_320 * 8);
        puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_1f0 = pcVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
        if (((ulong)pcVar7 & 1) != 0) {
          pcVar7 = local_1f0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1f0,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          pcVar5 = pcVar7;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
          local_241 = false;
          bVar1 = ((ulong)pcVar5 & 1) == 0;
          if (bVar1) {
            local_350 = &::cf___;
          }
          else {
            local_350 = local_1f0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1f0,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
            _objc_retainAutoreleasedReturnValue();
            local_240 = local_350;
          }
          local_241 = !bVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_238 = local_350;
          if ((local_241 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_240);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar7);
          pcVar7 = local_238;
          (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_length_0269cca0);
          if ((pcVar7 == (cfstringStruct *)0x0) ||
             (puVar3 = local_158,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_158,PTR_s_containsObject__0269cbb8,local_238),
             ((ulong)puVar3 & 1) != 0)) {
            local_1b8 = 5;
          }
          else {
            pcVar7 = local_1f0;
            (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_mutableCopy_0269d8a0);
            local_250 = pcVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar7,PTR_s_setObject_forKeyedSubscript__0269d248,&cf_cloud,
                       &cf_catalogSource);
            (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_addObject__0269d180,local_250);
            (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_addObject__0269d180,local_238);
            _objc_storeStrong(&local_250,0);
            local_1b8 = 0;
          }
          _objc_storeStrong(&local_238,0);
        }
        local_320 = local_320 + 1;
      } while (local_320 < local_318);
      local_318 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_230,auStack_128,0x10)
      ;
      local_320 = 0;
    } while (local_318 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  puVar3 = local_150;
  (*(code *)PTR__objc_retain_02578638)();
  local_1b8 = 1;
  _objc_storeStrong(&local_158);
  _objc_storeStrong(&local_150,0);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

