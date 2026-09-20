// effectiveWatermark1RelativePathForNight: @ 00723ae0

/* Function Stack Size: 0x14 bytes */

ID WCRefineScreenshotWatermarkProcessor::effectiveWatermark1RelativePathForNight_
             (ID param_1,SEL param_2,bool param_3)

{
  u_int32_t uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined1 *local_310;
  undefined1 *local_2f0;
  undefined *local_258;
  undefined *local_250;
  undefined1 *local_218;
  ulong local_188;
  undefined1 auStack_180 [8];
  long local_178;
  long *local_170;
  ulong local_140;
  undefined1 *local_138;
  undefined *local_130;
  ulong local_128;
  undefined1 *local_120;
  undefined4 local_114;
  undefined *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined1 *local_f8;
  undefined1 *local_f0 [3];
  undefined1 *local_d8;
  undefined1 *local_d0;
  byte local_c1;
  SEL local_c0;
  ID local_b8;
  undefined1 *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c1 = (byte)param_3;
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_c0 = param_2;
  local_b8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_screenshotWatermarkRandomMode_026a78a0);
  puVar3 = local_d0;
  local_d8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_screenshotWatermark1ImagePath_026a78a8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = local_d0;
  local_f0[0] = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_screenshotWatermark1NightImagePa_026a78b0);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 9;
  local_f8 = puVar4;
  _NSSearchPathForDirectoriesInDomains(9,1,1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_100 = uVar6;
  (*(code *)PTR__objc_release_02578630)(uVar5);
  uVar6 = local_100;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_100,PTR_s_stringByAppendingPathComponent__026cab30,&::cf_W);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_108 = uVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_110 = puVar2;
  if ((((local_c1 & 1) == 0) || (local_f8 == (undefined1 *)0x0)) ||
     (puVar3 = local_f8, (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_length_0269cca0),
     local_b0 = local_f8, puVar3 == (undefined1 *)0x0)) {
    if (local_d8 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
      puVar3 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_screenshotWatermarkToppedList_026a78b8);
      _objc_retainAutoreleasedReturnValue();
      local_120 = puVar3;
      if ((puVar3 == (undefined1 *)0x0) ||
         ((*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_count_0269cfe0),
         puVar3 == (undefined1 *)0x0)) {
        if ((local_f0[0] == (undefined1 *)0x0) ||
           (puVar3 = local_f0[0],
           (*(code *)PTR__objc_msgSend_02578628)(local_f0[0],PTR_s_length_0269cca0),
           puVar3 == (undefined1 *)0x0)) {
          local_218 = (undefined1 *)0x0;
        }
        else {
          local_218 = local_f0[0];
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = local_218;
      }
      else {
        puVar3 = local_120;
        (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_count_0269cfe0);
        uVar1 = _arc4random_uniform((u_int32_t)puVar3);
        local_128 = (ulong)uVar1;
        puVar3 = local_120;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_120,PTR_s_objectAtIndexedSubscript__0269cc78,local_128);
        _objc_retainAutoreleasedReturnValue();
        local_b0 = puVar3;
      }
      local_114 = 1;
      _objc_storeStrong(&local_120,0);
    }
    else if (local_d8 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
      puVar2 = local_110;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_110,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_108,0);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      local_130 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_138 = puVar7;
      _memset(auStack_180,0,0x40);
      puVar2 = local_130;
      (*(code *)PTR__objc_retain_02578638)();
      local_250 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_a8,0x10)
      ;
      if (local_250 != (undefined *)0x0) {
        lVar9 = *local_170;
        local_258 = (undefined *)0x0;
        do {
          do {
            if (*local_170 - lVar9 != 0) {
              _objc_enumerationMutation(*local_170 - lVar9,puVar2);
            }
            uVar10 = *(ulong *)(local_178 + (long)local_258 * 8);
            local_140 = uVar10;
            (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_pathExtension_0269e090);
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar10;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            local_188 = uVar8;
            (*(code *)PTR__objc_release_02578630)(uVar10);
            uVar8 = local_188;
            (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_isEqualToString__0269ccc8,&cf_png)
            ;
            if ((((uVar8 & 1) != 0) ||
                (uVar8 = local_188,
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_188,PTR_s_isEqualToString__0269ccc8,&cf_jpg), (uVar8 & 1) != 0)) ||
               ((uVar8 = local_188,
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_188,PTR_s_isEqualToString__0269ccc8,&cf_jpeg), (uVar8 & 1) != 0 ||
                ((uVar8 = local_188,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_188,PTR_s_isEqualToString__0269ccc8,&cf_gif), (uVar8 & 1) != 0 ||
                 (uVar8 = local_188,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_188,PTR_s_isEqualToString__0269ccc8,&cf_webp), (uVar8 & 1) != 0)))
                ))) {
              puVar3 = local_138;
              puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                         &::cf_W);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
              (*(code *)PTR__objc_release_02578630)(puVar7);
            }
            _objc_storeStrong(&local_188,0);
            local_258 = local_258 + 1;
          } while (local_258 < local_250);
          local_250 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_a8,
                     0x10);
          local_258 = (undefined *)0x0;
        } while (local_250 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar3 = local_138;
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_count_0269cfe0);
      if (puVar3 == (undefined1 *)0x0) {
        if ((local_f0[0] == (undefined1 *)0x0) ||
           (puVar3 = local_f0[0],
           (*(code *)PTR__objc_msgSend_02578628)(local_f0[0],PTR_s_length_0269cca0),
           puVar3 == (undefined1 *)0x0)) {
          local_2f0 = (undefined1 *)0x0;
        }
        else {
          local_2f0 = local_f0[0];
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = local_2f0;
      }
      else {
        puVar3 = local_138;
        (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_count_0269cfe0);
        uVar1 = _arc4random_uniform((u_int32_t)puVar3);
        puVar3 = local_138;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_138,PTR_s_objectAtIndexedSubscript__0269cc78,uVar1);
        _objc_retainAutoreleasedReturnValue();
        local_b0 = puVar3;
      }
      local_114 = 1;
      _objc_storeStrong(&local_138);
      _objc_storeStrong(&local_130,0);
    }
    else {
      if ((local_f0[0] == (undefined1 *)0x0) ||
         (puVar3 = local_f0[0],
         (*(code *)PTR__objc_msgSend_02578628)(local_f0[0],PTR_s_length_0269cca0),
         puVar3 == (undefined1 *)0x0)) {
        local_310 = (undefined1 *)0x0;
      }
      else {
        local_310 = local_f0[0];
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = local_310;
      local_114 = 1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_114 = 1;
  }
  _objc_storeStrong(&local_110);
  _objc_storeStrong(&local_108,0);
  _objc_storeStrong(&local_100,0);
  _objc_storeStrong(&local_f8,0);
  _objc_storeStrong(local_f0,0);
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

