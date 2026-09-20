// wcr_effectiveVideoWatermarkPathForIndex:isNight: @ 00707d90

/* Function Stack Size: 0x1c bytes */

ID WCRefineScreenRecordingFrameProcessor::wcr_effectiveVideoWatermarkPathForIndex_isNight_
             (ID param_1,SEL param_2,long_long param_3,bool param_4)

{
  u_int32_t uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined *local_270;
  undefined *local_268;
  ulong local_180;
  undefined1 auStack_178 [8];
  long local_170;
  long *local_168;
  ulong local_138;
  undefined1 *local_130;
  undefined *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined1 *local_110;
  undefined4 local_104;
  undefined *local_100;
  undefined *local_f8 [3];
  undefined1 *local_e0;
  undefined1 *local_d8;
  byte local_c9;
  long_long local_c8;
  SEL local_c0;
  ID local_b8;
  undefined1 *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c9 = (byte)param_4;
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_c8 = param_3;
  local_c0 = param_2;
  local_b8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_videoWatermarkRandomMode_026a7580);
  local_f8[0] = (undefined1 *)0x0;
  local_100 = (undefined1 *)0x0;
  local_e0 = puVar2;
  if (local_c8 == 1) {
    puVar3 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_videoWatermark1ImagePath_026a74b8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_f8[0];
    local_f8[0] = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar3 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_videoWatermark1NightImagePath_026a7588);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_100;
    local_100 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  else if (local_c8 == 2) {
    puVar3 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_videoWatermark2ImagePath_026a74f0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_f8[0];
    local_f8[0] = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar3 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_videoWatermark2NightImagePath_026a7590);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_100;
    local_100 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  else if (local_c8 == 3) {
    puVar3 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_videoWatermark3ImagePath_026a7528);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_f8[0];
    local_f8[0] = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar3 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_videoWatermark3NightImagePath_026a7598);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_100;
    local_100 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  puVar2 = local_f8[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_f8[0],PTR_s_length_0269cca0);
  if (puVar2 == (undefined1 *)0x0) {
    local_b0 = (undefined1 *)0x0;
    local_104 = 1;
  }
  else if (((local_c9 & 1) == 0) ||
          (puVar2 = local_100,
          (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_length_0269cca0),
          local_b0 = local_100, puVar2 == (undefined1 *)0x0)) {
    puVar2 = local_f8[0];
    if (local_e0 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
      puVar8 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_videoWatermarkToppedList_026a75a0);
      _objc_retainAutoreleasedReturnValue();
      local_110 = puVar8;
      (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_count_0269cfe0);
      local_b0 = local_f8[0];
      puVar3 = local_110;
      if (puVar8 == (undefined1 *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
      }
      else {
        puVar8 = local_110;
        (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_count_0269cfe0);
        uVar1 = _arc4random_uniform((u_int32_t)puVar8);
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_objectAtIndexedSubscript__0269cc78,uVar1)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_b0 = puVar3;
      }
      local_104 = 1;
      _objc_storeStrong(&local_110,0);
    }
    else if (local_e0 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
      uVar4 = 9;
      _NSSearchPathForDirectoriesInDomains(9,1,1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_118 = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar4);
      uVar5 = local_118;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_118,PTR_s_stringByAppendingPathComponent__026cab30,&::cf_W);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      local_120 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_128 = puVar6;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_130 = puVar2;
      _memset(auStack_178,0,0x40);
      puVar2 = local_128;
      (*(code *)PTR__objc_retain_02578638)();
      local_268 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,auStack_a8,0x10)
      ;
      if (local_268 != (undefined *)0x0) {
        lVar9 = *local_168;
        local_270 = (undefined *)0x0;
        do {
          do {
            if (*local_168 - lVar9 != 0) {
              _objc_enumerationMutation(*local_168 - lVar9,puVar2);
            }
            uVar10 = *(ulong *)(local_170 + (long)local_270 * 8);
            local_138 = uVar10;
            (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_pathExtension_0269e090);
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar10;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            local_180 = uVar7;
            (*(code *)PTR__objc_release_02578630)(uVar10);
            uVar7 = local_180;
            (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_isEqualToString__0269ccc8,&cf_png)
            ;
            if (((((uVar7 & 1) != 0) ||
                 (uVar7 = local_180,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_180,PTR_s_isEqualToString__0269ccc8,&cf_jpg), (uVar7 & 1) != 0))
                || (uVar7 = local_180,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_180,PTR_s_isEqualToString__0269ccc8,&cf_jpeg), (uVar7 & 1) != 0)
                ) || ((uVar7 = local_180,
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_180,PTR_s_isEqualToString__0269ccc8,&cf_gif),
                      (uVar7 & 1) != 0 ||
                      (uVar7 = local_180,
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_180,PTR_s_isEqualToString__0269ccc8,&cf_webp),
                      (uVar7 & 1) != 0)))) {
              puVar3 = local_130;
              puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                         &::cf_W);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
              (*(code *)PTR__objc_release_02578630)(puVar6);
            }
            _objc_storeStrong(&local_180,0);
            local_270 = local_270 + 1;
          } while (local_270 < local_268);
          local_268 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,auStack_a8,
                     0x10);
          local_270 = (undefined *)0x0;
        } while (local_268 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar8 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_count_0269cfe0);
      local_b0 = local_f8[0];
      puVar3 = local_130;
      if (puVar8 == (undefined1 *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
      }
      else {
        puVar8 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_count_0269cfe0);
        uVar1 = _arc4random_uniform((u_int32_t)puVar8);
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_objectAtIndexedSubscript__0269cc78,uVar1)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_b0 = puVar3;
      }
      local_104 = 1;
      _objc_storeStrong(&local_130);
      _objc_storeStrong(&local_128,0);
      _objc_storeStrong(&local_120,0);
      _objc_storeStrong(&local_118,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = puVar2;
      local_104 = 1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_104 = 1;
  }
  _objc_storeStrong(&local_100);
  _objc_storeStrong(local_f8,0);
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

