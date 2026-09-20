// FUN_00599978 @ 00599978

void FUN_00599978(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined *local_478;
  undefined *local_470;
  undefined *local_438;
  undefined *local_430;
  ulong local_380;
  ulong local_378;
  ulong local_348;
  undefined1 auStack_340 [8];
  long local_338;
  long *local_330;
  undefined8 local_300;
  undefined1 auStack_2f8 [8];
  long local_2f0;
  long *local_2e8;
  undefined8 local_2b8;
  undefined *local_2b0;
  undefined *local_2a8;
  ulong local_2a0 [2];
  ulong local_290;
  undefined8 local_288;
  undefined1 auStack_270 [8];
  long local_268;
  long *local_260;
  undefined8 local_230;
  uint local_224;
  ulong local_220;
  ulong local_218;
  ulong local_210;
  undefined1 auStack_208 [128];
  undefined1 auStack_188 [128];
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_218 = 0;
  _objc_storeStrong(&local_218,param_1);
  local_220 = 0;
  _objc_storeStrong(&local_220,param_2);
  if (local_218 == 0) {
    local_210 = 0;
    local_224 = 1;
  }
  else {
    _memset(auStack_270,0,0x40);
    uVar2 = local_220;
    (*(code *)PTR__objc_retain_02578638)();
    local_378 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_270,auStack_a8,0x10);
    if (local_378 != 0) {
      lVar7 = *local_260;
      local_380 = 0;
      do {
        do {
          if (*local_260 - lVar7 != 0) {
            _objc_enumerationMutation(*local_260 - lVar7,uVar2);
          }
          uVar8 = *(undefined8 *)(local_268 + local_380 * 8);
          local_230 = uVar8;
          _NSSelectorFromString();
          uVar3 = local_218;
          local_288 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_respondsToSelector__026ca818,uVar8);
          if ((uVar3 & 1) != 0) {
            local_290 = 0;
            uVar4 = local_218;
            (*(code *)PTR__objc_msgSend_02578628)(local_218,local_288);
            _objc_retainAutoreleasedReturnValue();
            uVar3 = local_290;
            local_290 = uVar4;
            (*(code *)PTR__objc_release_02578630)(uVar3);
            uVar3 = local_290;
            puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
            if (((uVar3 & 1) == 0) ||
               (uVar4 = local_290,
               (*(code *)PTR__objc_msgSend_02578628)(local_290,PTR_s_length_0269cca0),
               uVar3 = local_290, uVar4 == 0)) {
              local_224 = 3;
            }
            else {
              (*(code *)PTR__objc_retain_02578638)();
              local_2a0[0] = uVar3;
              FUN_005c7a7c();
              uVar4 = local_2a0[0];
              if ((uVar3 & 1) == 0) {
                local_c8 = &cf__1_temp;
                local_c0 = &cf__2_temp;
                local_b8 = &cf__temp;
                local_b0 = &cf___;
                puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70
                           ,&local_c8,4);
                _objc_retainAutoreleasedReturnValue();
                local_108 = &cf___;
                local_100 = &cf__mp4;
                local_f8 = &cf__mov;
                local_f0 = &cf__m4v;
                local_e8 = &cf__jpg;
                local_e0 = &cf__jpeg;
                local_d8 = &cf__png;
                local_d0 = &cf__heic;
                puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                local_2a8 = puVar5;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70
                           ,&local_108,8);
                _objc_retainAutoreleasedReturnValue();
                local_2b0 = puVar6;
                _memset(auStack_2f8,0,0x40);
                puVar5 = local_2a8;
                (*(code *)PTR__objc_retain_02578638)();
                local_430 = puVar5;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2f8,
                           auStack_188,0x10);
                if (local_430 != (undefined *)0x0) {
                  lVar9 = *local_2e8;
                  local_438 = (undefined *)0x0;
                  do {
                    do {
                      if (*local_2e8 - lVar9 != 0) {
                        _objc_enumerationMutation(*local_2e8 - lVar9,puVar5);
                      }
                      local_2b8 = *(undefined8 *)(local_2f0 + (long)local_438 * 8);
                      _memset(auStack_340,0,0x40);
                      puVar6 = local_2b0;
                      (*(code *)PTR__objc_retain_02578638)();
                      local_470 = puVar6;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_340,
                                 auStack_208,0x10);
                      if (local_470 != (undefined *)0x0) {
                        lVar10 = *local_330;
                        local_478 = (undefined *)0x0;
                        do {
                          do {
                            if (*local_330 - lVar10 != 0) {
                              _objc_enumerationMutation(*local_330 - lVar10,puVar6);
                            }
                            local_300 = *(undefined8 *)(local_338 + (long)local_478 * 8);
                            uVar4 = local_2a0[0];
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_2a0[0],PTR_s_stringByAppendingFormat__026a2088,&cf_____
                                      );
                            _objc_retainAutoreleasedReturnValue();
                            local_348 = uVar4;
                            FUN_005c7a7c();
                            uVar3 = local_348;
                            bVar1 = (uVar4 & 1) != 0;
                            if (bVar1) {
                              (*(code *)PTR__objc_retain_02578638)();
                              local_210 = uVar3;
                            }
                            local_224 = (uint)bVar1;
                            _objc_storeStrong(&local_348,0);
                            if (local_224 != 0) goto LAB_0059a0d4;
                            local_478 = local_478 + 1;
                          } while (local_478 < local_470);
                          local_470 = puVar6;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,
                                     auStack_340,auStack_208,0x10);
                          local_478 = (undefined *)0x0;
                        } while (local_470 != (undefined *)0x0);
                      }
                      local_224 = 0;
LAB_0059a0d4:
                      (*(code *)PTR__objc_release_02578630)(puVar6);
                      if (local_224 != 0) goto LAB_0059a168;
                      local_438 = local_438 + 1;
                    } while (local_438 < local_430);
                    local_430 = puVar5;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2f8,
                               auStack_188,0x10);
                    local_438 = (undefined *)0x0;
                  } while (local_430 != (undefined *)0x0);
                }
                local_224 = 0;
LAB_0059a168:
                (*(code *)PTR__objc_release_02578630)(puVar5);
                if (local_224 == 0) {
                  local_224 = 0;
                }
                _objc_storeStrong(&local_2b0);
                _objc_storeStrong(&local_2a8,0);
              }
              else {
                (*(code *)PTR__objc_retain_02578638)();
                local_210 = uVar4;
                local_224 = 1;
              }
              _objc_storeStrong(local_2a0,0);
            }
            _objc_storeStrong(&local_290,0);
            if ((local_224 != 0) && (local_224 != 3)) goto LAB_0059a260;
          }
          local_380 = local_380 + 1;
        } while (local_380 < local_378);
        local_378 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_270,auStack_a8,0x10
                  );
        local_380 = 0;
      } while (local_378 != 0);
    }
    local_224 = 0;
LAB_0059a260:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_224 == 0) {
      local_210 = 0;
      local_224 = 1;
    }
  }
  _objc_storeStrong(&local_220);
  _objc_storeStrong(&local_218,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_210);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

