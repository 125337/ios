// wcr_keyWindowForPreview @ 0183218c

/* Function Stack Size: 0x10 bytes */

ID WCRefineAvatarFrameLibraryViewController::wcr_keyWindowForPreview(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *local_4b0;
  undefined *local_4a8;
  uint local_46c;
  ulong local_440;
  ulong local_438;
  ulong local_3f0;
  ulong local_3e8;
  undefined *local_3b0;
  undefined *local_3a8;
  undefined1 auStack_380 [8];
  long local_378;
  long *local_370;
  ulong local_340;
  byte local_331;
  undefined *local_330;
  undefined *local_328;
  undefined1 auStack_320 [8];
  long local_318;
  long *local_310;
  ulong local_2e0;
  undefined4 local_2d4;
  undefined1 auStack_2d0 [8];
  long local_2c8;
  long *local_2c0;
  ulong local_290;
  undefined1 auStack_288 [8];
  long local_280;
  long *local_278;
  ulong local_248;
  ID local_240;
  SEL local_238;
  ID local_230;
  undefined1 auStack_228 [128];
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_240 = 0;
  local_238 = param_2;
  local_230 = param_1;
  _memset(auStack_288,0,0x40);
  puVar1 = PTR__OBJC_CLASS___UIApplication_026ce010;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_3a8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_288,auStack_a8,0x10);
  if (local_3a8 != (undefined *)0x0) {
    lVar4 = *local_278;
    local_3b0 = (undefined *)0x0;
    do {
      do {
        if (*local_278 - lVar4 != 0) {
          _objc_enumerationMutation(*local_278 - lVar4,puVar2);
        }
        uVar5 = *(ulong *)(local_280 + (long)local_3b0 * 8);
        local_248 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_activationState_026ca490);
        if (uVar5 == 0) {
          _memset(auStack_2d0,0,0x40);
          uVar5 = local_248;
          (*(code *)PTR__objc_msgSend_02578628)(local_248,PTR_s_windows_0269dde0);
          _objc_retainAutoreleasedReturnValue();
          local_3e8 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_3e8 != 0) {
            lVar6 = *local_2c0;
            local_3f0 = 0;
            do {
              do {
                if (*local_2c0 - lVar6 != 0) {
                  _objc_enumerationMutation(*local_2c0 - lVar6,uVar5);
                }
                uVar7 = *(ulong *)(local_2c8 + local_3f0 * 8);
                local_290 = uVar7;
                (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_class_0269cd60);
                _NSStringFromClass();
                _objc_retainAutoreleasedReturnValue();
                uVar8 = uVar7;
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(uVar7);
                if (((uVar8 & 1) == 0) &&
                   (uVar8 = local_290,
                   (*(code *)PTR__objc_msgSend_02578628)(local_290,PTR_s_isKeyWindow_0269cd70),
                   (uVar8 & 1) != 0)) {
                  _objc_storeStrong(&local_240,local_290);
                  local_2d4 = 4;
                  goto LAB_018324c0;
                }
                local_3f0 = local_3f0 + 1;
              } while (local_3f0 < local_3e8);
              local_3e8 = uVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2d0,
                         auStack_128,0x10);
              local_3f0 = 0;
            } while (local_3e8 != 0);
          }
          local_2d4 = 0;
LAB_018324c0:
          (*(code *)PTR__objc_release_02578630)(uVar5);
          if (local_240 != 0) {
            local_2d4 = 2;
            goto LAB_01832738;
          }
          _memset(auStack_320,0,0x40);
          uVar5 = local_248;
          (*(code *)PTR__objc_msgSend_02578628)(local_248,PTR_s_windows_0269dde0);
          _objc_retainAutoreleasedReturnValue();
          local_438 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_438 != 0) {
            lVar6 = *local_310;
            local_440 = 0;
            do {
              do {
                if (*local_310 - lVar6 != 0) {
                  _objc_enumerationMutation(*local_310 - lVar6,uVar5);
                }
                uVar7 = *(ulong *)(local_318 + local_440 * 8);
                local_2e0 = uVar7;
                (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_class_0269cd60);
                _NSStringFromClass();
                _objc_retainAutoreleasedReturnValue();
                uVar8 = uVar7;
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(uVar7);
                if ((uVar8 & 1) == 0) {
                  _objc_storeStrong(&local_240,local_2e0);
                  local_2d4 = 6;
                  goto LAB_018326ac;
                }
                local_440 = local_440 + 1;
              } while (local_440 < local_438);
              local_438 = uVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_320,
                         auStack_1a8,0x10);
              local_440 = 0;
            } while (local_438 != 0);
          }
          local_2d4 = 0;
LAB_018326ac:
          (*(code *)PTR__objc_release_02578630)(uVar5);
        }
        local_3b0 = local_3b0 + 1;
      } while (local_3b0 < local_3a8);
      local_3a8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_288,auStack_a8,0x10)
      ;
      local_3b0 = (undefined *)0x0;
    } while (local_3a8 != (undefined *)0x0);
  }
  local_2d4 = 0;
LAB_01832738:
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (local_240 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_328 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_331 = 0;
    local_46c = 0;
    if (local_328 != (undefined *)0x0) {
      puVar1 = local_328;
      (*(code *)PTR__objc_msgSend_02578628)(local_328,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      local_331 = 1;
      local_330 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_46c = (uint)puVar1 ^ 1;
    }
    if ((local_331 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_330);
    }
    if ((local_46c & 1) != 0) {
      _objc_storeStrong(&local_240,local_328);
    }
    _objc_storeStrong(&local_328,0);
  }
  if (local_240 == 0) {
    _memset(auStack_380,0,0x40);
    puVar1 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_4a8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_380,auStack_228,0x10);
    if (local_4a8 != (undefined *)0x0) {
      lVar4 = *local_370;
      local_4b0 = (undefined *)0x0;
      do {
        do {
          if (*local_370 - lVar4 != 0) {
            _objc_enumerationMutation(*local_370 - lVar4,puVar2);
          }
          uVar8 = *(ulong *)(local_378 + (long)local_4b0 * 8);
          local_340 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_class_0269cd60);
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar8);
          if ((uVar5 & 1) == 0) {
            _objc_storeStrong(&local_240,local_340);
            local_2d4 = 8;
            goto LAB_01832aa4;
          }
          local_4b0 = local_4b0 + 1;
        } while (local_4b0 < local_4a8);
        local_4a8 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_380,auStack_228,
                   0x10);
        local_4b0 = (undefined *)0x0;
      } while (local_4a8 != (undefined *)0x0);
    }
    local_2d4 = 0;
LAB_01832aa4:
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  IVar3 = local_240;
  (*(code *)PTR__objc_retain_02578638)();
  local_2d4 = 1;
  _objc_storeStrong(&local_240,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return IVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

