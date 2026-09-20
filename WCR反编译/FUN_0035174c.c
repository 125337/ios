// FUN_0035174c @ 0035174c

void FUN_0035174c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *local_428;
  undefined *local_420;
  undefined *local_3d0;
  undefined *local_3c8;
  undefined *local_3a0;
  undefined *local_368;
  undefined *local_360;
  undefined *local_338;
  undefined *local_310;
  undefined *local_308;
  undefined1 auStack_300 [8];
  long local_2f8;
  long *local_2f0;
  undefined8 local_2c0;
  byte local_2b1;
  undefined *local_2b0;
  undefined *local_2a8;
  ulong local_2a0;
  undefined1 auStack_298 [8];
  long local_290;
  long *local_288;
  ulong local_258;
  byte local_249;
  undefined *local_248;
  undefined8 local_240;
  ulong local_238;
  undefined1 auStack_230 [8];
  long local_228;
  long *local_220;
  ulong local_1f0;
  undefined *local_1e8;
  byte local_1d9;
  ulong local_1d8;
  int local_1cc;
  ulong local_1c8;
  undefined *local_1c0;
  long local_1b8;
  long local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  lVar1 = *(long *)(param_1 + 0x20);
  local_1b8 = param_1;
  local_1b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_1c0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_createDirectoryAtPath_withInterm_0269e230,
               *(undefined8 *)(param_1 + 0x20),1,0);
    uVar3 = 5;
    _NSSearchPathForDirectoriesInDomains(5,1,1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_1c8 = uVar7;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar7 = local_1c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_length_0269cca0);
    if (uVar7 == 0) {
      local_1cc = 1;
    }
    else {
      uVar7 = local_1c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1c8,PTR_s_stringByAppendingPathComponent__026cab30,
                 &cf_WCRefine_HomeAvatarStrip);
      _objc_retainAutoreleasedReturnValue();
      local_1d8 = uVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar7,PTR_s_isEqualToString__0269ccc8,*(undefined8 *)(param_1 + 0x20));
      if ((uVar7 & 1) == 0) {
        local_1d9 = 0;
        puVar2 = local_1c0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1c0,PTR_s_fileExistsAtPath_isDirectory__026ca638,local_1d8,&local_1d9);
        if ((((ulong)puVar2 & 1) != 0) && ((local_1d9 & 1) != 0)) {
          puVar2 = local_1c0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1c0,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_1d8,0);
          _objc_retainAutoreleasedReturnValue();
          local_338 = puVar2;
          if (puVar2 == (undefined *)0x0) {
            local_338 = *(undefined **)PTR____NSArray0___02578280;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_1e8 = local_338;
          (*(code *)PTR__objc_release_02578630)(puVar2);
          _memset(auStack_230,0,0x40);
          puVar2 = local_1e8;
          (*(code *)PTR__objc_retain_02578638)();
          local_360 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_230,auStack_a8,
                     0x10);
          if (local_360 != (undefined *)0x0) {
            lVar1 = *local_220;
            local_368 = (undefined *)0x0;
            do {
              do {
                if (*local_220 - lVar1 != 0) {
                  _objc_enumerationMutation(*local_220 - lVar1,puVar2);
                }
                uVar7 = *(ulong *)(local_228 + (long)local_368 * 8);
                local_1f0 = uVar7;
                (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_hasPrefix__0269d320,&cf__);
                if ((uVar7 & 1) == 0) {
                  uVar7 = local_1d8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1d8,PTR_s_stringByAppendingPathComponent__026cab30,local_1f0);
                  _objc_retainAutoreleasedReturnValue();
                  uVar4 = *(undefined8 *)(param_1 + 0x20);
                  local_238 = uVar7;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar4,PTR_s_stringByAppendingPathComponent__026cab30,local_1f0);
                  _objc_retainAutoreleasedReturnValue();
                  puVar5 = local_1c0;
                  local_240 = uVar4;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1c0,PTR_s_fileExistsAtPath__026ca630,uVar4);
                  if (((ulong)puVar5 & 1) == 0) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_1c0,PTR_s_moveItemAtPath_toPath_error__0269f940,local_238,
                               local_240,0);
                    local_1cc = 0;
                  }
                  else {
                    local_1cc = 3;
                  }
                  _objc_storeStrong(&local_240);
                  _objc_storeStrong(&local_238,0);
                }
                local_368 = local_368 + 1;
              } while (local_368 < local_360);
              local_360 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_230,
                         auStack_a8,0x10);
              local_368 = (undefined *)0x0;
            } while (local_360 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar2);
          puVar2 = local_1c0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1c0,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_1d8,0);
          _objc_retainAutoreleasedReturnValue();
          local_3a0 = puVar2;
          if (puVar2 == (undefined *)0x0) {
            local_3a0 = *(undefined **)PTR____NSArray0___02578280;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_248 = local_3a0;
          (*(code *)PTR__objc_release_02578630)(puVar2);
          local_249 = 1;
          _memset(auStack_298,0,0x40);
          puVar2 = local_248;
          (*(code *)PTR__objc_retain_02578638)();
          local_3c8 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_298,auStack_128,
                     0x10);
          if (local_3c8 != (undefined *)0x0) {
            lVar1 = *local_288;
            local_3d0 = (undefined *)0x0;
            do {
              do {
                if (*local_288 - lVar1 != 0) {
                  _objc_enumerationMutation(*local_288 - lVar1,puVar2);
                }
                uVar7 = *(ulong *)(local_290 + (long)local_3d0 * 8);
                local_258 = uVar7;
                (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_hasPrefix__0269d320,&cf__);
                if ((uVar7 & 1) == 0) {
                  local_249 = 0;
                  local_1cc = 4;
                  goto LAB_00351db8;
                }
                local_3d0 = local_3d0 + 1;
              } while (local_3d0 < local_3c8);
              local_3c8 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_298,
                         auStack_128,0x10);
              local_3d0 = (undefined *)0x0;
            } while (local_3c8 != (undefined *)0x0);
          }
          local_1cc = 0;
LAB_00351db8:
          (*(code *)PTR__objc_release_02578630)(puVar2);
          if ((local_249 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1c0,PTR_s_removeItemAtPath_error__0269f910,local_1d8,0);
          }
          uVar7 = local_1c8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1c8,PTR_s_stringByAppendingPathComponent__026cab30,&cf_WCRefine);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = local_1c0;
          local_2a0 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1c0,PTR_s_contentsOfDirectoryAtPath_error__0269e088,uVar7,0);
          _objc_retainAutoreleasedReturnValue();
          local_2a8 = puVar2;
          if ((puVar2 != (undefined *)0x0) &&
             ((*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_count_0269cfe0),
             puVar2 == (undefined *)0x0)) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1c0,PTR_s_removeItemAtPath_error__0269f910,local_2a0,0);
          }
          _objc_storeStrong(&local_2a8);
          _objc_storeStrong(&local_2a0,0);
          _objc_storeStrong(&local_248,0);
          _objc_storeStrong(&local_1e8,0);
        }
        puVar2 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_2b0 = puVar5;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_2b0;
        puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar5);
        if ((((ulong)puVar2 & 1) == 0) ||
           (puVar2 = local_2b0,
           (*(code *)PTR__objc_msgSend_02578628)(local_2b0,PTR_s_count_0269cfe0),
           puVar2 == (undefined *)0x0)) {
          local_1cc = 1;
        }
        else {
          local_2b1 = 0;
          _memset(auStack_300,0,0x40);
          puVar2 = local_2b0;
          (*(code *)PTR__objc_retain_02578638)();
          local_420 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_300,auStack_1a8,
                     0x10);
          if (local_420 != (undefined *)0x0) {
            lVar1 = *local_2f0;
            local_428 = (undefined *)0x0;
            do {
              do {
                if (*local_2f0 - lVar1 != 0) {
                  _objc_enumerationMutation(*local_2f0 - lVar1,puVar2);
                }
                local_2c0 = *(undefined8 *)(local_2f8 + (long)local_428 * 8);
                puVar5 = local_2b0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_2b0,PTR_s_objectForKeyedSubscript__0269d098,local_2c0);
                _objc_retainAutoreleasedReturnValue();
                puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                local_308 = puVar5;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_isKindOfClass__0269cd68,puVar6);
                if (((ulong)puVar5 & 1) == 0) {
                  local_1cc = 7;
                }
                else {
                  puVar5 = local_308;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_308,PTR_s_objectForKeyedSubscript__0269d098,&cf_customAvatarPath)
                  ;
                  _objc_retainAutoreleasedReturnValue();
                  puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
                  local_310 = puVar5;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_isKindOfClass__0269cd68,puVar6)
                  ;
                  if ((((ulong)puVar5 & 1) == 0) ||
                     (puVar5 = local_310,
                     (*(code *)PTR__objc_msgSend_02578628)
                               (local_310,PTR_s_hasPrefix__0269d320,&cf__), ((ulong)puVar5 & 1) == 0
                     )) {
                    local_1cc = 0;
                  }
                  else {
                    local_2b1 = 1;
                    local_1cc = 6;
                  }
                  _objc_storeStrong(&local_310,0);
                }
                _objc_storeStrong(&local_308,0);
                if ((local_1cc != 0) && (local_1cc != 7)) goto LAB_00352254;
                local_428 = local_428 + 1;
              } while (local_428 < local_420);
              local_420 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_300,
                         auStack_1a8,0x10);
              local_428 = (undefined *)0x0;
            } while (local_420 != (undefined *)0x0);
          }
          local_1cc = 0;
LAB_00352254:
          (*(code *)PTR__objc_release_02578630)(puVar2);
          if ((local_2b1 & 1) != 0) {
            puVar2 = PTR_WCRefineConfig_026cdf58;
            (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0)
            ;
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar2);
          }
          local_1cc = 0;
        }
        _objc_storeStrong(&local_2b0,0);
      }
      else {
        local_1cc = 1;
      }
      _objc_storeStrong(&local_1d8,0);
    }
    _objc_storeStrong(&local_1c8);
    _objc_storeStrong(&local_1c0,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

