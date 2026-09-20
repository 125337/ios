// wcr_effectiveFrameTemplateRelativePath @ 00705870

/* Function Stack Size: 0x10 bytes */

ID WCRefineScreenRecordingFrameProcessor::wcr_effectiveFrameTemplateRelativePath
             (ID param_1,SEL param_2)

{
  u_int32_t uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined *local_3b0;
  undefined *local_3a8;
  undefined1 *local_320;
  undefined1 *local_318;
  undefined1 *local_2c0;
  undefined1 *local_2a0;
  undefined *local_270;
  byte local_261;
  undefined8 local_260;
  undefined1 auStack_258 [8];
  long local_250;
  long *local_248;
  undefined8 local_218;
  undefined1 *local_210;
  undefined *local_208;
  undefined4 local_1fc;
  undefined1 auStack_1f8 [8];
  long local_1f0;
  long *local_1e8;
  undefined8 local_1b8;
  undefined1 *local_1b0;
  undefined *local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined1 *local_190;
  byte local_181;
  undefined1 *local_180;
  byte local_171;
  undefined1 *local_170;
  undefined1 *local_168 [3];
  undefined1 *local_150;
  undefined1 *local_148;
  SEL local_140;
  ID local_138;
  undefined1 *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_140 = param_2;
  local_138 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_148 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_screenRecordingFrameRandomMode_026a7488);
  local_171 = 0;
  local_181 = 0;
  puVar3 = local_148;
  local_150 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_screenRecordingFrameTemplate_026a7490);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_2a0 = local_148;
  if (puVar4 == (undefined1 *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_screenshotFrameTemplate_026a7498);
    _objc_retainAutoreleasedReturnValue();
    local_181 = 1;
    local_180 = local_2a0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_screenRecordingFrameTemplate_026a7490);
    _objc_retainAutoreleasedReturnValue();
    local_171 = 1;
    local_170 = local_2a0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_168[0] = local_2a0;
  if ((local_181 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_180);
  }
  if ((local_171 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_170);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  IVar5 = local_138;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_138,PTR_s_wcr_isSingleFrameTemplateAtRelat_026a74a0,local_168[0]);
  if ((IVar5 & 1) == 0) {
    local_2c0 = (undefined1 *)0x0;
  }
  else {
    local_2c0 = local_168[0];
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_190 = local_2c0;
  uVar6 = 9;
  _NSSearchPathForDirectoriesInDomains(9,1,1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_198 = uVar7;
  (*(code *)PTR__objc_release_02578630)(uVar6);
  uVar7 = local_198;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_198,PTR_s_stringByAppendingPathComponent__026cab30,&::cf_W);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_1a0 = uVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_130 = local_190;
  local_1a8 = puVar2;
  if (local_150 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_1b0 = puVar2;
    _memset(auStack_1f8,0,0x40);
    puVar3 = local_148;
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_screenshotFrameToppedList_026a74a8);
    _objc_retainAutoreleasedReturnValue();
    local_318 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_318 != (undefined1 *)0x0) {
      lVar9 = *local_1e8;
      local_320 = (undefined1 *)0x0;
      do {
        do {
          if (*local_1e8 - lVar9 != 0) {
            _objc_enumerationMutation(*local_1e8 - lVar9,puVar3);
          }
          local_1b8 = *(undefined8 *)(local_1f0 + (long)local_320 * 8);
          IVar5 = local_138;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_138,PTR_s_wcr_isSingleFrameTemplateAtRelat_026a74a0,local_1b8);
          if ((IVar5 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_addObject__0269d180,local_1b8);
          }
          local_320 = local_320 + 1;
        } while (local_320 < local_318);
        local_318 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,auStack_a8,
                   0x10);
        local_320 = (undefined1 *)0x0;
      } while (local_318 != (undefined1 *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar4 = local_1b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_count_0269cfe0);
    local_130 = local_190;
    puVar3 = local_1b0;
    if (puVar4 == (undefined1 *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
    }
    else {
      puVar4 = local_1b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_count_0269cfe0);
      uVar1 = _arc4random_uniform((u_int32_t)puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_objectAtIndexedSubscript__0269cc78,uVar1);
      _objc_retainAutoreleasedReturnValue();
      local_130 = puVar3;
    }
    local_1fc = 1;
    _objc_storeStrong(&local_1b0,0);
  }
  else if (local_150 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_1a0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_208 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_210 = puVar8;
    _memset(auStack_258,0,0x40);
    puVar2 = local_208;
    (*(code *)PTR__objc_retain_02578638)();
    local_3a8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_258,auStack_128,0x10);
    if (local_3a8 != (undefined *)0x0) {
      lVar9 = *local_248;
      local_3b0 = (undefined *)0x0;
      do {
        do {
          if (*local_248 - lVar9 != 0) {
            _objc_enumerationMutation(*local_248 - lVar9,puVar2);
          }
          local_218 = *(undefined8 *)(local_250 + (long)local_3b0 * 8);
          uVar7 = local_1a0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1a0,PTR_s_stringByAppendingPathComponent__026cab30,local_218);
          _objc_retainAutoreleasedReturnValue();
          local_261 = 0;
          puVar8 = local_1a8;
          local_260 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1a8,PTR_s_fileExistsAtPath_isDirectory__026ca638,uVar7,&local_261);
          if ((((ulong)puVar8 & 1) != 0) && ((local_261 & 1) != 0)) {
            puVar8 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf_W)
            ;
            _objc_retainAutoreleasedReturnValue();
            IVar5 = local_138;
            local_270 = puVar8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_138,PTR_s_wcr_isSingleFrameTemplateAtRelat_026a74a0,puVar8);
            if ((IVar5 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_addObject__0269d180,local_270);
            }
            _objc_storeStrong(&local_270,0);
          }
          _objc_storeStrong(&local_260,0);
          local_3b0 = local_3b0 + 1;
        } while (local_3b0 < local_3a8);
        local_3a8 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_258,auStack_128,
                   0x10);
        local_3b0 = (undefined *)0x0;
      } while (local_3a8 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar4 = local_210;
    (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_count_0269cfe0);
    local_130 = local_190;
    puVar3 = local_210;
    if (puVar4 == (undefined1 *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
    }
    else {
      puVar4 = local_210;
      (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_count_0269cfe0);
      uVar1 = _arc4random_uniform((u_int32_t)puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_objectAtIndexedSubscript__0269cc78,uVar1);
      _objc_retainAutoreleasedReturnValue();
      local_130 = puVar3;
    }
    local_1fc = 1;
    _objc_storeStrong(&local_210);
    _objc_storeStrong(&local_208,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_1fc = 1;
  }
  _objc_storeStrong(&local_1a8);
  _objc_storeStrong(&local_1a0,0);
  _objc_storeStrong(&local_198,0);
  _objc_storeStrong(&local_190,0);
  _objc_storeStrong(local_168,0);
  _objc_storeStrong(&local_148,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_130;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

