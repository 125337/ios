// FUN_002df960 @ 002df960

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002df960(undefined8 param_1)

{
  undefined8 uVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  uint local_37c;
  cfstringStruct *local_318;
  cfstringStruct *local_2c0;
  cfstringStruct *local_2b8;
  uint local_25c;
  undefined *local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  code *local_1d0;
  undefined *local_1c8;
  undefined1 *local_1c0;
  undefined1 *local_1b8;
  undefined *local_1b0;
  cfstringStruct *local_1a8;
  undefined8 local_1a0;
  undefined1 *local_198;
  double local_190;
  double local_188;
  byte local_180;
  byte local_17f;
  byte local_17e;
  byte local_17d;
  undefined1 local_179;
  cfstringStruct *local_178;
  cfstringStruct *local_170;
  long local_168;
  undefined1 auStack_160 [8];
  long local_158;
  long *local_150;
  long local_120;
  byte local_111;
  undefined *local_110;
  cfstringStruct *local_108;
  undefined *local_100;
  undefined1 *local_f8;
  undefined1 *local_f0;
  double local_e8;
  double local_e0;
  undefined1 *local_d8;
  undefined8 local_d0;
  byte local_c7;
  byte local_c6;
  byte local_c5;
  byte local_b1;
  undefined1 *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  _objc_autoreleasePoolPush();
  puVar7 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_b0 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_fontBeautifyEnabled_026a1cb8);
  local_b1 = (byte)puVar7;
  puVar5 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_fontBeautifyBoldEnhanced_026a1d00);
  local_c5 = (byte)puVar5;
  puVar5 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_fontBeautifyApplyWebViewEnabled_026a1d08);
  local_c6 = (byte)puVar5;
  puVar5 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_fontBeautifyApplyMiniProgramEnab_026a1d10);
  local_c7 = (byte)puVar5;
  dVar10 = 1.0;
  local_d0 = 0x3ff0000000000000;
  puVar5 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_fontBeautifyWeightDelta_026a1d18);
  local_d8 = puVar5;
  if ((long)puVar5 < -3) {
    local_d8 = (undefined1 *)0xfffffffffffffffd;
  }
  if (3 < (long)local_d8) {
    local_d8 = (undefined1 *)((long)&MACH_HEADER.magic + 3);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_fontBeautifyLetterSpacing_026a1d20);
  local_e0 = dVar10;
  if (dVar10 < -2.0) {
    local_e0 = -2.0;
  }
  if (8.0 < local_e0) {
    local_e0 = 8.0;
  }
  dVar10 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_fontBeautifyLineSpacing_026a1d28);
  local_e8 = dVar10;
  if (dVar10 < 0.0) {
    local_e8 = 0.0;
  }
  if (12.0 < local_e8) {
    local_e8 = 12.0;
  }
  puVar5 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_fontBeautifyFontPath_026a1d30);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  FUN_002e3b44();
  _objc_retainAutoreleasedReturnValue();
  local_f0 = puVar6;
  (*(code *)PTR__objc_release_02578630)(puVar5);
  puVar5 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_fontBeautifyPostScriptName_026a1d38);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  FUN_002e3b44();
  _objc_retainAutoreleasedReturnValue();
  local_f8 = puVar6;
  (*(code *)PTR__objc_release_02578630)(puVar5);
  puVar7 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = *(cfstringStruct **)PTR____NSArray0___02578280;
  local_100 = puVar7;
  (*(code *)PTR__objc_retain_02578638)();
  local_111 = 0;
  local_25c = 0;
  local_108 = pcVar2;
  if ((local_b1 & 1) != 0) {
    puVar5 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_length_0269cca0);
    local_25c = 0;
    if (puVar5 != (undefined1 *)0x0) {
      puVar7 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      local_111 = 1;
      local_110 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_25c = (uint)puVar7;
    }
  }
  if ((local_111 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_110);
  }
  if ((local_25c & 1) != 0) {
    pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_f0);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    FUN_002e3ce0();
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_108;
    local_108 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    _memset(auStack_160,0,0x40);
    pcVar2 = local_108;
    (*(code *)PTR__objc_retain_02578638)();
    local_2b8 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_160,auStack_a8,0x10);
    if (local_2b8 != (cfstringStruct *)0x0) {
      lVar8 = *local_150;
      local_2c0 = (cfstringStruct *)0x0;
      do {
        do {
          if (*local_150 - lVar8 != 0) {
            _objc_enumerationMutation(*local_150 - lVar8,pcVar2);
          }
          lVar9 = *(long *)(local_158 + (long)local_2c0 * 8);
          local_120 = lVar9;
          (*(code *)PTR__objc_msgSend_02578628)
                    (lVar9,PTR_s_objectForKey__0269e048,
                     *(undefined8 *)PTR__kCTFontNameAttribute_02578310);
          _objc_retainAutoreleasedReturnValue();
          local_168 = lVar9;
          (*(code *)PTR__objc_msgSend_02578628)(lVar9,PTR_s_length_0269cca0);
          if (lVar9 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_addObject__0269d180,local_168);
          }
          _objc_storeStrong(&local_168,0);
          local_2c0 = (cfstringStruct *)((long)&local_2c0->field0_0x0 + 1);
        } while (local_2c0 < local_2b8);
        local_2b8 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_160,auStack_a8,
                   0x10);
        local_2c0 = (cfstringStruct *)0x0;
      } while (local_2b8 != (cfstringStruct *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    puVar5 = local_f8;
    (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_length_0269cca0);
    if (puVar5 == (undefined1 *)0x0) {
      pcVar2 = local_108;
      (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      local_170 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_objectForKey__0269e048,
                 *(undefined8 *)PTR__kCTFontNameAttribute_02578310);
      _objc_retainAutoreleasedReturnValue();
      local_318 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_318 = &cf___;
      }
      _objc_storeStrong(&local_f8,local_318);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      _objc_storeStrong(&local_170,0);
    }
  }
  puVar5 = local_f8;
  (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_length_0269cca0);
  if (puVar5 != (undefined1 *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_addObject__0269d180,local_f8);
  }
  pcVar2 = local_108;
  (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_copy_0269d150);
  uVar1 = DAT_028c9870;
  local_179 = 0;
  _DAT_028c9950 = 0;
  local_1e0 = PTR___NSConcreteGlobalBlock_02578658;
  local_1d8 = 0xd0800000;
  local_1d4 = 0;
  local_1d0 = FUN_002e4254;
  local_1c8 = &DAT_0257bb88;
  local_180 = local_b1 & 1;
  local_17f = local_c5 & 1;
  local_17e = local_c6 & 1;
  local_17d = local_c7 & 1;
  local_1a0 = local_d0;
  local_198 = local_d8;
  local_190 = local_e0;
  local_188 = local_e8;
  puVar5 = local_f0;
  local_178 = pcVar2;
  (*(code *)PTR__objc_retain_02578638)();
  puVar6 = local_f8;
  local_1c0 = puVar5;
  (*(code *)PTR__objc_retain_02578638)();
  puVar7 = local_100;
  local_1b8 = puVar6;
  (*(code *)PTR__objc_retain_02578638)();
  pcVar2 = local_178;
  local_1b0 = puVar7;
  (*(code *)PTR__objc_retain_02578638)();
  local_1a8 = pcVar2;
  _dispatch_sync(uVar1,&local_1e0);
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028c9878,PTR_s_removeAllObjects_0269d508);
  local_37c = 0;
  if ((local_b1 & 1) != 0) {
    puVar5 = local_f8;
    (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_length_0269cca0);
    local_37c = (uint)(puVar5 != (undefined1 *)0x0);
  }
  _DAT_028c9950 = local_37c;
  _objc_storeStrong(&local_1a8);
  _objc_storeStrong(&local_1b0,0);
  _objc_storeStrong(&local_1b8,0);
  _objc_storeStrong(&local_1c0,0);
  _objc_storeStrong(&local_178,0);
  _objc_storeStrong(&local_108,0);
  _objc_storeStrong(&local_100,0);
  _objc_storeStrong(&local_f8,0);
  _objc_storeStrong(&local_f0,0);
  _objc_storeStrong(&local_b0,0);
  _objc_autoreleasePoolPop(param_1);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

