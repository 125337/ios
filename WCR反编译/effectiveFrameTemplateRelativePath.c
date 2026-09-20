// effectiveFrameTemplateRelativePath @ 0071561c

/* Function Stack Size: 0x10 bytes */

ID WCRefineScreenshotFrameProcessor::effectiveFrameTemplateRelativePath(ID param_1,SEL param_2)

{
  u_int32_t uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 *local_2d0;
  undefined1 *local_2b0;
  undefined *local_238;
  undefined *local_230;
  undefined1 *local_1f8;
  byte local_179;
  undefined8 local_178;
  undefined1 auStack_170 [8];
  long local_168;
  long *local_160;
  undefined8 local_130;
  undefined1 *local_128;
  undefined *local_120;
  undefined4 local_114;
  ulong local_110;
  undefined1 *local_108;
  undefined *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 *local_e8 [3];
  undefined1 *local_d0;
  undefined1 *local_c8;
  SEL local_c0;
  ID local_b8;
  undefined1 *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_c0 = param_2;
  local_b8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_screenshotFrameRandomMode_026a7768);
  puVar3 = local_c8;
  local_d0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_screenshotFrameTemplate_026a7498);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 9;
  local_e8[0] = puVar3;
  _NSSearchPathForDirectoriesInDomains(9,1,1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_f0 = uVar5;
  (*(code *)PTR__objc_release_02578630)(uVar4);
  uVar5 = local_f0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_f0,PTR_s_stringByAppendingPathComponent__026cab30,&::cf_W);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_f8 = uVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_100 = puVar2;
  if (local_d0 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
    puVar3 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_screenshotFrameToppedList_026a74a8);
    _objc_retainAutoreleasedReturnValue();
    local_108 = puVar3;
    if ((puVar3 == (undefined1 *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_count_0269cfe0),
       puVar3 == (undefined1 *)0x0)) {
      if ((local_e8[0] == (undefined1 *)0x0) ||
         (puVar3 = local_e8[0],
         (*(code *)PTR__objc_msgSend_02578628)(local_e8[0],PTR_s_length_0269cca0),
         puVar3 == (undefined1 *)0x0)) {
        local_1f8 = (undefined1 *)0x0;
      }
      else {
        local_1f8 = local_e8[0];
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = local_1f8;
    }
    else {
      puVar3 = local_108;
      (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_count_0269cfe0);
      uVar1 = _arc4random_uniform((u_int32_t)puVar3);
      local_110 = (ulong)uVar1;
      puVar3 = local_108;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_108,PTR_s_objectAtIndexedSubscript__0269cc78,local_110);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = puVar3;
    }
    local_114 = 1;
    _objc_storeStrong(&local_108,0);
  }
  else if (local_d0 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_f8,0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_120 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_128 = puVar6;
    _memset(auStack_170,0,0x40);
    puVar2 = local_120;
    (*(code *)PTR__objc_retain_02578638)();
    local_230 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_170,auStack_a8,0x10);
    if (local_230 != (undefined *)0x0) {
      lVar7 = *local_160;
      local_238 = (undefined *)0x0;
      do {
        do {
          if (*local_160 - lVar7 != 0) {
            _objc_enumerationMutation(*local_160 - lVar7,puVar2);
          }
          local_130 = *(undefined8 *)(local_168 + (long)local_238 * 8);
          uVar5 = local_f8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_f8,PTR_s_stringByAppendingPathComponent__026cab30,local_130);
          _objc_retainAutoreleasedReturnValue();
          local_179 = 0;
          puVar6 = local_100;
          local_178 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_100,PTR_s_fileExistsAtPath_isDirectory__026ca638,uVar5,&local_179);
          puVar3 = local_128;
          if ((((ulong)puVar6 & 1) != 0) && ((local_179 & 1) != 0)) {
            puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf_W)
            ;
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
            (*(code *)PTR__objc_release_02578630)(puVar6);
          }
          _objc_storeStrong(&local_178,0);
          local_238 = local_238 + 1;
        } while (local_238 < local_230);
        local_230 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_170,auStack_a8,
                   0x10);
        local_238 = (undefined *)0x0;
      } while (local_230 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar3 = local_128;
    (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_count_0269cfe0);
    if (puVar3 == (undefined1 *)0x0) {
      if ((local_e8[0] == (undefined1 *)0x0) ||
         (puVar3 = local_e8[0],
         (*(code *)PTR__objc_msgSend_02578628)(local_e8[0],PTR_s_length_0269cca0),
         puVar3 == (undefined1 *)0x0)) {
        local_2b0 = (undefined1 *)0x0;
      }
      else {
        local_2b0 = local_e8[0];
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = local_2b0;
    }
    else {
      puVar3 = local_128;
      (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_count_0269cfe0);
      uVar1 = _arc4random_uniform((u_int32_t)puVar3);
      puVar3 = local_128;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_128,PTR_s_objectAtIndexedSubscript__0269cc78,uVar1);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = puVar3;
    }
    local_114 = 1;
    _objc_storeStrong(&local_128);
    _objc_storeStrong(&local_120,0);
  }
  else {
    if ((local_e8[0] == (undefined1 *)0x0) ||
       (puVar3 = local_e8[0],
       (*(code *)PTR__objc_msgSend_02578628)(local_e8[0],PTR_s_length_0269cca0),
       puVar3 == (undefined1 *)0x0)) {
      local_2d0 = (undefined1 *)0x0;
    }
    else {
      local_2d0 = local_e8[0];
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = local_2d0;
    local_114 = 1;
  }
  _objc_storeStrong(&local_100);
  _objc_storeStrong(&local_f8,0);
  _objc_storeStrong(&local_f0,0);
  _objc_storeStrong(local_e8,0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

