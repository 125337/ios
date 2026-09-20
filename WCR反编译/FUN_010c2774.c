// FUN_010c2774 @ 010c2774

void FUN_010c2774(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined *local_3a0;
  undefined *local_398;
  undefined *local_360;
  undefined *local_358;
  undefined *local_318;
  undefined *local_310;
  undefined8 local_2d8;
  undefined1 auStack_2d0 [8];
  long local_2c8;
  long *local_2c0;
  undefined8 local_290;
  undefined *local_288;
  byte local_279;
  undefined8 local_278;
  undefined1 auStack_270 [8];
  long local_268;
  long *local_260;
  ulong local_230;
  undefined *local_228;
  undefined4 local_220;
  byte local_219;
  undefined8 local_218;
  undefined1 auStack_210 [8];
  long local_208;
  long *local_200;
  undefined8 local_1d0;
  undefined *local_1c8;
  undefined *local_1c0;
  long local_1b8;
  long local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_1b8 = param_1;
  local_1b0 = param_1;
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  local_1c0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_cacheRootPath_026ae668);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_contentsOfDirectoryAtPath_error__0269e088,uVar2,0);
  _objc_retainAutoreleasedReturnValue();
  local_1c8 = puVar1;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  _memset(auStack_210,0,0x40);
  puVar1 = local_1c8;
  (*(code *)PTR__objc_retain_02578638)();
  local_310 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_210,auStack_a8,0x10);
  if (local_310 != (undefined *)0x0) {
    lVar6 = *local_200;
    local_318 = (undefined *)0x0;
    do {
      do {
        if (*local_200 - lVar6 != 0) {
          _objc_enumerationMutation(*local_200 - lVar6,puVar1);
        }
        local_1d0 = *(undefined8 *)(local_208 + (long)local_318 * 8);
        uVar3 = *(undefined8 *)(param_1 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_cacheRootPath_026ae668);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_218 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        local_219 = 0;
        puVar4 = local_1c0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1c0,PTR_s_fileExistsAtPath_isDirectory__026ca638,local_218,&local_219);
        if ((((ulong)puVar4 & 1) == 0) || ((local_219 & 1) == 0)) {
          local_220 = 3;
        }
        else {
          lVar8 = *(long *)(*(long *)(param_1 + 0x28) + 8);
          *(long *)(lVar8 + 0x18) = *(long *)(lVar8 + 0x18) + 1;
          puVar4 = local_1c0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1c0,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_218,0);
          _objc_retainAutoreleasedReturnValue();
          local_228 = puVar4;
          _memset(auStack_270,0,0x40);
          puVar4 = local_228;
          (*(code *)PTR__objc_retain_02578638)();
          local_358 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_270,auStack_128,
                     0x10);
          if (local_358 != (undefined *)0x0) {
            lVar8 = *local_260;
            local_360 = (undefined *)0x0;
            do {
              do {
                if (*local_260 - lVar8 != 0) {
                  _objc_enumerationMutation(*local_260 - lVar8,puVar4);
                }
                uVar7 = *(ulong *)(local_268 + (long)local_360 * 8);
                local_230 = uVar7;
                (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_hasSuffix__0269d018,&cf__dat);
                if ((uVar7 & 1) != 0) {
                  lVar9 = *(long *)(*(long *)(param_1 + 0x30) + 8);
                  *(long *)(lVar9 + 0x18) = *(long *)(lVar9 + 0x18) + 1;
                }
                local_360 = local_360 + 1;
              } while (local_360 < local_358);
              local_358 = puVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_270,
                         auStack_128,0x10);
              local_360 = (undefined *)0x0;
            } while (local_358 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar4);
          uVar2 = local_218;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_218,PTR_s_stringByAppendingPathComponent__026cab30,&cf_media);
          _objc_retainAutoreleasedReturnValue();
          local_279 = 0;
          puVar4 = local_1c0;
          local_278 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1c0,PTR_s_fileExistsAtPath_isDirectory__026ca638,uVar2,&local_279);
          if ((((ulong)puVar4 & 1) == 0) || ((local_279 & 1) == 0)) {
            local_220 = 3;
          }
          else {
            puVar4 = local_1c0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1c0,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_278,0);
            _objc_retainAutoreleasedReturnValue();
            local_288 = puVar4;
            _memset(auStack_2d0,0,0x40);
            puVar4 = local_288;
            (*(code *)PTR__objc_retain_02578638)();
            local_398 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2d0,
                       auStack_1a8,0x10);
            if (local_398 != (undefined *)0x0) {
              lVar8 = *local_2c0;
              local_3a0 = (undefined *)0x0;
              do {
                do {
                  if (*local_2c0 - lVar8 != 0) {
                    _objc_enumerationMutation(*local_2c0 - lVar8,puVar4);
                  }
                  uVar2 = local_278;
                  uVar3 = *(undefined8 *)(local_2c8 + (long)local_3a0 * 8);
                  local_290 = uVar3;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar3,PTR_s_stringByAppendingPathComponent__026cab30,&cf_manifest_json)
                  ;
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar2,PTR_s_stringByAppendingPathComponent__026cab30);
                  _objc_retainAutoreleasedReturnValue();
                  local_2d8 = uVar2;
                  (*(code *)PTR__objc_release_02578630)(uVar3);
                  puVar5 = local_1c0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1c0,PTR_s_fileExistsAtPath__026ca630,local_2d8);
                  if (((ulong)puVar5 & 1) != 0) {
                    lVar9 = *(long *)(*(long *)(param_1 + 0x38) + 8);
                    *(long *)(lVar9 + 0x18) = *(long *)(lVar9 + 0x18) + 1;
                  }
                  _objc_storeStrong(&local_2d8,0);
                  local_3a0 = local_3a0 + 1;
                } while (local_3a0 < local_398);
                local_398 = puVar4;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2d0,
                           auStack_1a8,0x10);
                local_3a0 = (undefined *)0x0;
              } while (local_398 != (undefined *)0x0);
            }
            (*(code *)PTR__objc_release_02578630)(puVar4);
            _objc_storeStrong(&local_288,0);
            local_220 = 0;
          }
          _objc_storeStrong(&local_278);
          _objc_storeStrong(&local_228,0);
        }
        _objc_storeStrong(&local_218,0);
        local_318 = local_318 + 1;
      } while (local_318 < local_310);
      local_310 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_210,auStack_a8,0x10)
      ;
      local_318 = (undefined *)0x0;
    } while (local_310 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_1c8);
  _objc_storeStrong(&local_1c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

