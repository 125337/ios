// FUN_0058cee8 @ 0058cee8

void FUN_0058cee8(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *local_3d0;
  undefined *local_3c8;
  undefined *local_378;
  undefined *local_360;
  ulong local_320;
  ulong local_318;
  ulong local_2e8;
  undefined *local_2a8;
  undefined *local_2a0;
  undefined *local_298;
  undefined1 auStack_290 [8];
  long local_288;
  long *local_280;
  undefined *local_250;
  undefined *local_240 [3];
  byte local_221;
  undefined *local_220;
  byte local_211;
  undefined *local_210;
  undefined *local_1f8;
  undefined *local_1f0;
  undefined1 auStack_1e8 [8];
  long local_1e0;
  long *local_1d8;
  undefined *local_1a8;
  undefined *local_1a0;
  byte local_191;
  ulong local_190;
  ulong local_178;
  undefined4 local_16c;
  ulong local_168;
  undefined *local_160;
  undefined1 auStack_158 [128];
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_168 = 0;
  _objc_storeStrong(&local_168,param_1);
  if (local_168 == 0) {
    local_160 = (undefined *)0x0;
    local_16c = 1;
  }
  else {
    local_191 = 0;
    uVar3 = local_168;
    (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_imageArray_026a54a8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    uVar5 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    if ((uVar5 & 1) == 0) {
      local_2e8 = 0;
    }
    else {
      local_2e8 = local_168;
      (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_imageArray_026a54a8);
      _objc_retainAutoreleasedReturnValue();
      local_191 = 1;
      local_190 = local_2e8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_178 = local_2e8;
    if ((local_191 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_190);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_1a0 = puVar4;
    _memset(auStack_1e8,0,0x40);
    uVar3 = local_178;
    (*(code *)PTR__objc_retain_02578638)();
    local_318 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e8,auStack_a8,0x10);
    if (local_318 != 0) {
      lVar7 = *local_1d8;
      local_320 = 0;
      do {
        do {
          if (*local_1d8 - lVar7 != 0) {
            _objc_enumerationMutation(*local_1d8 - lVar7,uVar3);
          }
          puVar8 = *(undefined **)(local_1e0 + local_320 * 8);
          local_1f0 = (undefined *)0x0;
          local_1f8 = (undefined *)0x0;
          local_1a8 = puVar8;
          (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_valueForKey__0269d128,&cf_m_asset);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = local_1f0;
          local_1f0 = puVar8;
          (*(code *)PTR__objc_release_02578630)(puVar4);
          puVar8 = local_1a8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1a8,PTR_s_valueForKey__0269d128,&cf_m_imageData);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = local_1f8;
          local_1f8 = puVar8;
          (*(code *)PTR__objc_release_02578630)(puVar4);
          puVar4 = local_1a0;
          local_d8 = &cf_image;
          local_c0 = local_1a8;
          local_d0 = &cf_asset;
          local_211 = 0;
          bVar1 = local_1f0 == (undefined *)0x0;
          if (bVar1) {
            local_360 = PTR__OBJC_CLASS___NSNull_026ce0e8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
            _objc_retainAutoreleasedReturnValue();
            local_210 = local_360;
          }
          else {
            local_360 = local_1f0;
          }
          local_b8 = local_360;
          local_c8 = &cf_data;
          local_221 = 0;
          bVar2 = local_1f8 == (undefined *)0x0;
          local_211 = bVar1;
          if (bVar2) {
            local_378 = PTR__OBJC_CLASS___NSNull_026ce0e8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
            _objc_retainAutoreleasedReturnValue();
            local_220 = local_378;
          }
          else {
            local_378 = local_1f8;
          }
          local_b0 = local_378;
          puVar8 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_221 = bVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_c0,&local_d8,3);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar8);
          if ((local_221 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_220);
          }
          if ((local_211 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_210);
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1a8,PTR_s_setValue_forKey__0269d300,0,&cf_m_asset);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1a8,PTR_s_setValue_forKey__0269d300,0,&cf_m_imageData);
          _objc_storeStrong(&local_1f8);
          _objc_storeStrong(&local_1f0,0);
          local_320 = local_320 + 1;
        } while (local_320 < local_318);
        local_318 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e8,auStack_a8,0x10
                  );
        local_320 = 0;
      } while (local_318 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    local_240[0] = (undefined *)0x0;
    puVar8 = PTR__OBJC_CLASS___NSKeyedArchiver_026ce750;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSKeyedArchiver_026ce750,PTR_s_archivedDataWithRootObject__026a4fa0
               ,local_168);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_240[0];
    local_240[0] = puVar8;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _memset(auStack_290,0,0x40);
    puVar4 = local_1a0;
    (*(code *)PTR__objc_retain_02578638)();
    local_3c8 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_290,auStack_158,0x10);
    if (local_3c8 != (undefined *)0x0) {
      lVar7 = *local_280;
      local_3d0 = (undefined *)0x0;
      do {
        do {
          if (*local_280 - lVar7 != 0) {
            _objc_enumerationMutation(*local_280 - lVar7,puVar4);
          }
          puVar9 = *(undefined **)(local_288 + (long)local_3d0 * 8);
          local_250 = puVar9;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar9,PTR_s_objectForKeyedSubscript__0269d098,&cf_image);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = local_250;
          local_298 = puVar9;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_250,PTR_s_objectForKeyedSubscript__0269d098,&cf_asset);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = local_250;
          local_2a0 = puVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_250,PTR_s_objectForKeyedSubscript__0269d098,&cf_data);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = local_2a0;
          puVar6 = PTR__OBJC_CLASS___NSNull_026ce0e8;
          local_2a8 = puVar9;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)();
          if (puVar8 != puVar6) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_298,PTR_s_setValue_forKey__0269d300,local_2a0,&cf_m_asset);
          }
          puVar8 = local_2a8;
          puVar9 = PTR__OBJC_CLASS___NSNull_026ce0e8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)();
          if (puVar8 != puVar9) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_298,PTR_s_setValue_forKey__0269d300,local_2a8,&cf_m_imageData);
          }
          _objc_storeStrong(&local_2a8);
          _objc_storeStrong(&local_2a0,0);
          _objc_storeStrong(&local_298,0);
          local_3d0 = local_3d0 + 1;
        } while (local_3d0 < local_3c8);
        local_3c8 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_290,auStack_158,
                   0x10);
        local_3d0 = (undefined *)0x0;
      } while (local_3c8 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = local_240[0];
    (*(code *)PTR__objc_retain_02578638)();
    local_160 = puVar4;
    local_16c = 1;
    _objc_storeStrong(local_240);
    _objc_storeStrong(&local_1a0,0);
    _objc_storeStrong(&local_178,0);
  }
  _objc_storeStrong(&local_168,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_160);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

