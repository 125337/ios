// appFileDisplayNameFromCell:wrap: @ 00f40130

/* Function Stack Size: 0x20 bytes */

ID WCRefineEmoticonToolsHelper::appFileDisplayNameFromCell_wrap_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  ID IVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined *local_328;
  undefined *local_320;
  undefined *local_2d0;
  undefined *local_2c8;
  undefined *local_2b0;
  undefined *local_2a0;
  ID local_278;
  ID local_270;
  uint local_264;
  ID local_260;
  undefined1 auStack_258 [8];
  long local_250;
  long *local_248;
  undefined8 local_218;
  byte local_209;
  undefined *local_208;
  byte local_1f9;
  undefined *local_1f8;
  undefined1 auStack_1f0 [8];
  long local_1e8;
  long *local_1e0;
  undefined *local_1b0;
  undefined *local_190;
  undefined *local_188;
  undefined *local_180;
  SEL local_178;
  ID local_170;
  ID local_168;
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
  local_180 = (undefined *)0x0;
  local_178 = param_2;
  local_170 = param_1;
  _objc_storeStrong(&local_180,param_3);
  local_188 = (undefined *)0x0;
  _objc_storeStrong(&local_188,param_4);
  local_190 = (undefined *)0x0;
  puVar3 = local_180;
  (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_valueForKey__0269d128,&cf_viewModel);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = local_190;
  local_190 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  _memset(auStack_1f0,0,0x40);
  local_1f9 = 0;
  bVar2 = local_190 == (undefined *)0x0;
  if (bVar2) {
    local_2a0 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    local_1f8 = local_2a0;
  }
  else {
    local_2a0 = local_190;
  }
  local_b8 = local_2a0;
  local_209 = 0;
  bVar1 = local_188 == (undefined *)0x0;
  local_1f9 = bVar2;
  if (bVar1) {
    local_2b0 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    local_208 = local_2b0;
  }
  else {
    local_2b0 = local_188;
  }
  local_b0 = local_2b0;
  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_209 = bVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_b8,2);
  _objc_retainAutoreleasedReturnValue();
  if ((local_209 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_208);
  }
  if ((local_1f9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_1f8);
  }
  local_2c8 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,auStack_a8,0x10);
  if (local_2c8 != (undefined *)0x0) {
    lVar7 = *local_1e0;
    local_2d0 = (undefined *)0x0;
    do {
      do {
        if (*local_1e0 - lVar7 != 0) {
          _objc_enumerationMutation(*local_1e0 - lVar7,puVar4);
        }
        puVar8 = *(undefined **)(local_1e8 + (long)local_2d0 * 8);
        puVar3 = PTR__OBJC_CLASS___NSNull_026ce0e8;
        local_1b0 = puVar8;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        if (puVar8 != puVar3) {
          _memset(auStack_258,0,0x40);
          local_160 = &cf_titleText;
          local_158 = &cf_fileName;
          local_150 = &cf_m_nsAppFileName;
          local_148 = &cf_m_nsTitle;
          local_140 = &cf_m_nsFileName;
          puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_160,5);
          _objc_retainAutoreleasedReturnValue();
          local_320 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_320 != (undefined *)0x0) {
            lVar9 = *local_248;
            local_328 = (undefined *)0x0;
            do {
              do {
                if (*local_248 - lVar9 != 0) {
                  _objc_enumerationMutation(*local_248 - lVar9,puVar3);
                }
                local_218 = *(undefined8 *)(local_250 + (long)local_328 * 8);
                IVar5 = local_170;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_170,PTR_s_stringValueFromObject_key__026abfe0,local_1b0,local_218);
                _objc_retainAutoreleasedReturnValue();
                local_260 = IVar5;
                (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_length_0269cca0);
                IVar6 = local_260;
                bVar2 = IVar5 != 0;
                if (bVar2) {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_168 = IVar6;
                }
                local_264 = (uint)bVar2;
                _objc_storeStrong(bVar2,&local_260,0);
                if (local_264 != 0) goto LAB_00f40694;
                local_328 = local_328 + 1;
              } while (local_328 < local_320);
              local_320 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_258,
                         auStack_138,0x10);
              local_328 = (undefined *)0x0;
            } while (local_320 != (undefined *)0x0);
          }
          local_264 = 0;
LAB_00f40694:
          (*(code *)PTR__objc_release_02578630)(puVar3);
          if (local_264 != 0) goto LAB_00f4071c;
        }
        local_2d0 = local_2d0 + 1;
      } while (local_2d0 < local_2c8);
      local_2c8 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,auStack_a8,0x10)
      ;
      local_2d0 = (undefined *)0x0;
    } while (local_2c8 != (undefined *)0x0);
  }
  local_264 = 0;
LAB_00f4071c:
  (*(code *)PTR__objc_release_02578630)(puVar4);
  IVar6 = local_170;
  if (local_264 == 0) {
    IVar5 = local_170;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_170,PTR_s_stringValueFromObject_key__026abfe0,local_188,&cf_m_nsContent);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar6,PTR_s_xmlTagValueFromContent_tag__026ac1e8,IVar5,&cf_title);
    _objc_retainAutoreleasedReturnValue();
    local_270 = IVar6;
    (*(code *)PTR__objc_release_02578630)(IVar5);
    IVar5 = local_270;
    (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_length_0269cca0);
    IVar6 = local_270;
    if (IVar5 == 0) {
      IVar6 = local_170;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_170,PTR_s_appFilePathFromMessageWrap_cell__026ac1f0,local_188,local_180);
      _objc_retainAutoreleasedReturnValue();
      local_278 = IVar6;
      (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_lastPathComponent_026ca780);
      _objc_retainAutoreleasedReturnValue();
      local_264 = 1;
      local_168 = IVar6;
      _objc_storeStrong(&local_278,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_168 = IVar6;
      local_264 = 1;
    }
    _objc_storeStrong(&local_270,0);
  }
  _objc_storeStrong(&local_190);
  _objc_storeStrong(&local_188,0);
  _objc_storeStrong(&local_180,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_168;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

