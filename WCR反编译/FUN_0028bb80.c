// FUN_0028bb80 @ 0028bb80

void FUN_0028bb80(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  uint local_374;
  undefined *local_330;
  undefined *local_328;
  ulong local_2d0;
  ulong local_2c8;
  ulong local_298;
  byte local_289;
  undefined *local_288;
  undefined *local_280;
  undefined4 local_278;
  undefined4 local_274;
  code *local_270;
  undefined *local_268;
  undefined8 *local_260;
  undefined8 *local_258;
  undefined8 local_250;
  undefined **local_248 [2];
  ulong local_238;
  undefined1 auStack_230 [8];
  long local_228;
  long *local_220;
  ulong local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 *local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 *local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined *local_1a8;
  undefined4 local_19c;
  undefined1 auStack_198 [8];
  long local_190;
  long *local_188;
  ulong local_158;
  undefined *local_150 [3];
  ulong local_138;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_130 = 0;
  _objc_storeStrong(&local_130,param_1);
  uVar6 = local_130;
  FUN_0027b798();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_138 = uVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_150[0] = puVar1;
  _memset(auStack_198,0,0x40);
  uVar6 = local_138;
  (*(code *)PTR__objc_retain_02578638)();
  local_2c8 = uVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,0x10);
  if (local_2c8 != 0) {
    lVar4 = *local_188;
    local_2d0 = 0;
    do {
      do {
        if (*local_188 - lVar4 != 0) {
          _objc_enumerationMutation(*local_188 - lVar4,uVar6);
        }
        uVar5 = *(ulong *)(local_190 + local_2d0 * 8);
        local_158 = uVar5;
        FUN_00286a38();
        if (((uVar5 & 1) != 0) && (uVar5 = local_158, FUN_0027bc38(), (uVar5 & 1) == 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_150[0],PTR_s_addObject__0269d180,local_158);
        }
        local_2d0 = local_2d0 + 1;
      } while (local_2d0 < local_2c8);
      local_2c8 = uVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,0x10);
      local_2d0 = 0;
    } while (local_2c8 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar6);
  puVar1 = local_150[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_150[0],PTR_s_count_0269cfe0);
  if (puVar1 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MRQ_eSN_VGr);
    local_19c = 1;
  }
  else {
    FUN_00276920();
    local_1b8 = &local_1c0;
    local_1c0 = 0;
    local_1b0 = 0x20000000;
    local_1ac = 0x20;
    puVar1 = local_150[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_150[0],PTR_s_count_0269cfe0);
    local_1d8 = &local_1e0;
    local_1e0 = 0;
    local_1d0 = 0x20000000;
    local_1cc = 0x20;
    local_1c8 = 0;
    local_1e8 = local_1b8[3];
    local_1a8 = puVar1;
    _memset(auStack_230,0,0x40);
    puVar1 = local_150[0];
    (*(code *)PTR__objc_retain_02578638)();
    local_328 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_230,auStack_128,0x10);
    if (local_328 != (undefined *)0x0) {
      lVar4 = *local_220;
      local_330 = (undefined *)0x0;
      do {
        do {
          if (*local_220 - lVar4 != 0) {
            _objc_enumerationMutation(*local_220 - lVar4,puVar1);
          }
          uVar6 = *(ulong *)(local_228 + (long)local_330 * 8);
          local_238 = 0;
          local_1f0 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar6,PTR_s_respondsToSelector__026ca818,PTR_s_mediaPath_026a1650);
          if ((uVar6 & 1) != 0) {
            uVar5 = local_1f0;
            (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_mediaPath_026a1650);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = local_238;
            local_238 = uVar5;
            (*(code *)PTR__objc_release_02578630)(uVar6);
          }
          ppuVar2 = &local_280;
          local_280 = PTR___NSConcreteStackBlock_02578660;
          local_278 = 0xc2000000;
          local_274 = 0;
          local_270 = FUN_002977f4;
          local_268 = &DAT_0257b878;
          local_260 = &local_1e0;
          local_258 = &local_1c0;
          local_250 = local_1e8;
          _objc_retainBlock();
          uVar6 = local_238;
          local_289 = 0;
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_248[0] = ppuVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar3);
          local_374 = 0;
          if ((uVar6 & 1) != 0) {
            puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
            _objc_retainAutoreleasedReturnValue();
            local_289 = 1;
            local_288 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_374 = (uint)puVar3;
          }
          if ((local_289 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_288);
          }
          if ((local_374 & 1) == 0) {
            uVar6 = local_1f0;
            FUN_0027cf88();
            _objc_retainAutoreleasedReturnValue();
            local_298 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_length_0269cca0);
            if (uVar6 == 0) {
              uVar5 = local_1f0;
              FUN_0028717c();
              _objc_retainAutoreleasedReturnValue();
              uVar6 = local_298;
              local_298 = uVar5;
              (*(code *)PTR__objc_release_02578630)(uVar6);
            }
            FUN_0027ebd0(local_298,&cf_jpg,local_248[0]);
            _objc_storeStrong(&local_298,0);
          }
          else {
            (*(code *)local_248[0][2])(local_248[0],local_238,0);
          }
          _objc_storeStrong(local_248);
          _objc_storeStrong(&local_238,0);
          local_330 = local_330 + 1;
        } while (local_330 < local_328);
        local_328 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_230,auStack_128,
                   0x10);
        local_330 = (undefined *)0x0;
      } while (local_328 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    __Block_object_dispose(&local_1e0,8);
    __Block_object_dispose(&local_1c0,8);
    local_19c = 0;
  }
  _objc_storeStrong(local_150);
  _objc_storeStrong(&local_138,0);
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

