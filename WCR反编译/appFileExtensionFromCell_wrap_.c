// appFileExtensionFromCell:wrap: @ 00f408f4

/* Function Stack Size: 0x20 bytes */

ID WCRefineEmoticonToolsHelper::appFileExtensionFromCell_wrap_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined *local_340;
  undefined *local_338;
  undefined *local_2e8;
  undefined *local_2e0;
  undefined *local_2c8;
  undefined *local_2b8;
  ID local_290;
  ID local_288;
  ID local_280;
  ID local_278;
  uint local_26c;
  ID local_268;
  undefined1 auStack_260 [8];
  long local_258;
  long *local_250;
  undefined8 local_220;
  byte local_211;
  undefined *local_210;
  byte local_201;
  undefined *local_200;
  undefined1 auStack_1f8 [8];
  long local_1f0;
  long *local_1e8;
  undefined *local_1b8;
  undefined *local_198;
  undefined *local_190;
  undefined8 local_188;
  SEL local_180;
  ID local_178;
  ID local_170;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  undefined1 auStack_138 [128];
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_188 = 0;
  local_180 = param_2;
  local_178 = param_1;
  _objc_storeStrong(&local_188,param_3);
  local_190 = (undefined *)0x0;
  _objc_storeStrong(&local_190,param_4);
  local_198 = (undefined *)0x0;
  puVar3 = local_190;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_190,PTR_s_valueForKey__0269d128,&cf_m_extendInfoWithMsgType);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = local_198;
  local_198 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  _memset(auStack_1f8,0,0x40);
  local_201 = 0;
  bVar2 = local_190 == (undefined *)0x0;
  if (bVar2) {
    local_2b8 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    local_200 = local_2b8;
  }
  else {
    local_2b8 = local_190;
  }
  local_b8 = local_2b8;
  local_211 = 0;
  bVar1 = local_198 == (undefined *)0x0;
  local_201 = bVar2;
  if (bVar1) {
    local_2c8 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    local_210 = local_2c8;
  }
  else {
    local_2c8 = local_198;
  }
  local_b0 = local_2c8;
  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_211 = bVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_b8,2);
  _objc_retainAutoreleasedReturnValue();
  if ((local_211 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_210);
  }
  if ((local_201 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_200);
  }
  local_2e0 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,auStack_a8,0x10);
  if (local_2e0 != (undefined *)0x0) {
    lVar8 = *local_1e8;
    local_2e8 = (undefined *)0x0;
    do {
      do {
        if (*local_1e8 - lVar8 != 0) {
          _objc_enumerationMutation(*local_1e8 - lVar8,puVar4);
        }
        puVar9 = *(undefined **)(local_1f0 + (long)local_2e8 * 8);
        puVar3 = PTR__OBJC_CLASS___NSNull_026ce0e8;
        local_1b8 = puVar9;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        if (puVar9 != puVar3) {
          _memset(auStack_260,0,0x40);
          local_150 = &cf_m_nsAppFileExt;
          local_148 = &cf_m_nsFileExt;
          local_140 = &cf_fileExt;
          puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_150,3);
          _objc_retainAutoreleasedReturnValue();
          local_338 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_338 != (undefined *)0x0) {
            lVar10 = *local_250;
            local_340 = (undefined *)0x0;
            do {
              do {
                if (*local_250 - lVar10 != 0) {
                  _objc_enumerationMutation(*local_250 - lVar10,puVar3);
                }
                local_220 = *(undefined8 *)(local_258 + (long)local_340 * 8);
                IVar5 = local_178;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_178,PTR_s_stringValueFromObject_key__026abfe0,local_1b8,local_220);
                _objc_retainAutoreleasedReturnValue();
                IVar6 = IVar5;
                (*(code *)PTR__objc_msgSend_02578628)();
                _objc_retainAutoreleasedReturnValue();
                local_268 = IVar6;
                (*(code *)PTR__objc_release_02578630)(IVar5);
                IVar6 = local_268;
                (*(code *)PTR__objc_msgSend_02578628)(local_268,PTR_s_length_0269cca0);
                IVar5 = local_268;
                bVar2 = IVar6 != 0;
                if (bVar2) {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_170 = IVar5;
                }
                local_26c = (uint)bVar2;
                _objc_storeStrong(bVar2,&local_268,0);
                if (local_26c != 0) goto LAB_00f40e74;
                local_340 = local_340 + 1;
              } while (local_340 < local_338);
              local_338 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_260,
                         auStack_138,0x10);
              local_340 = (undefined *)0x0;
            } while (local_338 != (undefined *)0x0);
          }
          local_26c = 0;
LAB_00f40e74:
          (*(code *)PTR__objc_release_02578630)(puVar3);
          if (local_26c != 0) goto LAB_00f40efc;
        }
        local_2e8 = local_2e8 + 1;
      } while (local_2e8 < local_2e0);
      local_2e0 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,auStack_a8,0x10)
      ;
      local_2e8 = (undefined *)0x0;
    } while (local_2e0 != (undefined *)0x0);
  }
  local_26c = 0;
LAB_00f40efc:
  (*(code *)PTR__objc_release_02578630)(puVar4);
  IVar5 = local_178;
  if (local_26c == 0) {
    IVar6 = local_178;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_178,PTR_s_stringValueFromObject_key__026abfe0,local_190,&cf_m_nsContent);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar5,PTR_s_xmlTagValueFromContent_tag__026ac1e8,IVar6,&cf_fileext);
    _objc_retainAutoreleasedReturnValue();
    local_278 = IVar5;
    (*(code *)PTR__objc_release_02578630)(IVar6);
    IVar5 = local_278;
    (*(code *)PTR__objc_msgSend_02578628)(local_278,PTR_s_length_0269cca0);
    if (IVar5 == 0) {
      IVar5 = local_178;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_178,PTR_s_appFileDisplayNameFromCell_wrap__026ac1f8,local_188,local_190);
      _objc_retainAutoreleasedReturnValue();
      local_280 = IVar5;
      (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_pathExtension_0269e090);
      _objc_retainAutoreleasedReturnValue();
      IVar6 = IVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_288 = IVar6;
      (*(code *)PTR__objc_release_02578630)(IVar5);
      IVar7 = local_288;
      (*(code *)PTR__objc_msgSend_02578628)(local_288,PTR_s_length_0269cca0);
      IVar6 = local_178;
      puVar4 = local_190;
      IVar5 = local_288;
      if (IVar7 == 0) {
        local_168 = &cf_GetAppAttachmentPath;
        local_160 = &cf_getFilePath;
        local_158 = &cf_m_nsFilePath;
        puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_168,3);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar6,PTR_s_existingBytesPathFromObject_sele_026ac200,puVar4);
        _objc_retainAutoreleasedReturnValue();
        local_290 = IVar6;
        (*(code *)PTR__objc_release_02578630)(puVar3);
        IVar5 = local_290;
        (*(code *)PTR__objc_msgSend_02578628)(local_290,PTR_s_pathExtension_0269e090);
        _objc_retainAutoreleasedReturnValue();
        IVar6 = IVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_170 = IVar6;
        (*(code *)PTR__objc_release_02578630)(IVar5);
        local_26c = 1;
        _objc_storeStrong(&local_290,0);
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_170 = IVar5;
        local_26c = 1;
      }
      _objc_storeStrong(&local_288);
      _objc_storeStrong(&local_280,0);
    }
    else {
      IVar5 = local_278;
      (*(code *)PTR__objc_msgSend_02578628)(local_278,PTR_s_lowercaseString_0269d9c0);
      _objc_retainAutoreleasedReturnValue();
      local_26c = 1;
      local_170 = IVar5;
    }
    _objc_storeStrong(&local_278,0);
  }
  _objc_storeStrong(&local_198);
  _objc_storeStrong(&local_190,0);
  _objc_storeStrong(&local_188,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_170;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

