// FUN_0157614c @ 0157614c

void FUN_0157614c(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined *local_3f8;
  undefined *local_3f0;
  undefined *local_3b8;
  undefined *local_3b0;
  ulong local_358;
  ulong local_350;
  ulong local_320;
  undefined1 auStack_318 [8];
  long local_310;
  long *local_308;
  undefined8 local_2d8;
  undefined1 auStack_2d0 [8];
  long local_2c8;
  long *local_2c0;
  undefined8 local_290;
  ulong local_288;
  ulong local_280;
  undefined1 auStack_278 [8];
  long local_270;
  long *local_268;
  undefined8 local_238;
  undefined *local_230;
  uint local_224;
  ulong local_220;
  ulong local_218;
  ulong local_210;
  cfstringStruct *local_208;
  cfstringStruct *local_200;
  cfstringStruct *local_1f8;
  cfstringStruct *local_1f0;
  cfstringStruct *local_1e8;
  cfstringStruct *local_1e0;
  cfstringStruct *local_1d8;
  cfstringStruct *local_1d0;
  undefined1 auStack_1c8 [128];
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  undefined1 auStack_128 [128];
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
    puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_230 = puVar3;
    _memset(auStack_278,0,0x40);
    uVar2 = local_220;
    (*(code *)PTR__objc_retain_02578638)();
    local_350 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_278,auStack_a8,0x10);
    if (local_350 != 0) {
      lVar8 = *local_268;
      local_358 = 0;
      do {
        do {
          if (*local_268 - lVar8 != 0) {
            _objc_enumerationMutation(*local_268 - lVar8,uVar2);
          }
          uVar4 = local_218;
          uVar9 = *(undefined8 *)(local_270 + local_358 * 8);
          local_238 = uVar9;
          _NSSelectorFromString(uVar9);
          FUN_01533df4(uVar4,uVar9);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_280 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
          if (((uVar4 & 1) == 0) ||
             (uVar5 = local_280,
             (*(code *)PTR__objc_msgSend_02578628)(local_280,PTR_s_length_0269cca0),
             uVar4 = local_280, uVar5 == 0)) {
            local_224 = 3;
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_288 = uVar4;
            puVar3 = local_230;
            (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_fileExistsAtPath__026ca630,uVar4);
            uVar4 = local_288;
            if (((ulong)puVar3 & 1) == 0) {
              _memset(auStack_2d0,0,0x40);
              local_148 = &cf__1_temp;
              local_140 = &cf__2_temp;
              local_138 = &cf__temp;
              local_130 = &cf___;
              puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                         &local_148,4);
              _objc_retainAutoreleasedReturnValue();
              local_3b0 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)();
              if (local_3b0 != (undefined *)0x0) {
                lVar10 = *local_2c0;
                local_3b8 = (undefined *)0x0;
                do {
                  do {
                    if (*local_2c0 - lVar10 != 0) {
                      _objc_enumerationMutation(*local_2c0 - lVar10,puVar3);
                    }
                    local_290 = *(undefined8 *)(local_2c8 + (long)local_3b8 * 8);
                    _memset(auStack_318,0,0x40);
                    local_208 = &cf___;
                    local_200 = &cf__mp4;
                    local_1f8 = &cf__mov;
                    local_1f0 = &cf__m4v;
                    local_1e8 = &cf__jpg;
                    local_1e0 = &cf__jpeg;
                    local_1d8 = &cf__png;
                    local_1d0 = &cf__heic;
                    puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSArray_026cdfe0,
                               PTR_s_arrayWithObjects_count__0269cc70,&local_208,8);
                    _objc_retainAutoreleasedReturnValue();
                    local_3f0 = puVar6;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    if (local_3f0 != (undefined *)0x0) {
                      lVar11 = *local_308;
                      local_3f8 = (undefined *)0x0;
                      do {
                        do {
                          if (*local_308 - lVar11 != 0) {
                            _objc_enumerationMutation(*local_308 - lVar11,puVar6);
                          }
                          local_2d8 = *(undefined8 *)(local_310 + (long)local_3f8 * 8);
                          uVar4 = local_288;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_288,PTR_s_stringByAppendingFormat__026a2088,&cf_____);
                          _objc_retainAutoreleasedReturnValue();
                          puVar7 = local_230;
                          local_320 = uVar4;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_230,PTR_s_fileExistsAtPath__026ca630,uVar4);
                          uVar4 = local_320;
                          bVar1 = ((ulong)puVar7 & 1) != 0;
                          if (bVar1) {
                            (*(code *)PTR__objc_retain_02578638)();
                            local_210 = uVar4;
                          }
                          local_224 = (uint)bVar1;
                          _objc_storeStrong(&local_320,0);
                          if (local_224 != 0) goto LAB_015766e8;
                          local_3f8 = local_3f8 + 1;
                        } while (local_3f8 < local_3f0);
                        local_3f0 = puVar6;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,
                                   auStack_318,auStack_1c8,0x10);
                        local_3f8 = (undefined *)0x0;
                      } while (local_3f0 != (undefined *)0x0);
                    }
                    local_224 = 0;
LAB_015766e8:
                    (*(code *)PTR__objc_release_02578630)(puVar6);
                    if (local_224 != 0) goto LAB_01576770;
                    local_3b8 = local_3b8 + 1;
                  } while (local_3b8 < local_3b0);
                  local_3b0 = puVar3;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2d0,
                             auStack_128,0x10);
                  local_3b8 = (undefined *)0x0;
                } while (local_3b0 != (undefined *)0x0);
              }
              local_224 = 0;
LAB_01576770:
              (*(code *)PTR__objc_release_02578630)(puVar3);
              if (local_224 == 0) {
                local_224 = 0;
              }
            }
            else {
              (*(code *)PTR__objc_retain_02578638)();
              local_210 = uVar4;
              local_224 = 1;
            }
            _objc_storeStrong(&local_288,0);
          }
          _objc_storeStrong(&local_280,0);
          if ((local_224 != 0) && (local_224 != 3)) goto LAB_0157683c;
          local_358 = local_358 + 1;
        } while (local_358 < local_350);
        local_350 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_278,auStack_a8,0x10
                  );
        local_358 = 0;
      } while (local_350 != 0);
    }
    local_224 = 0;
LAB_0157683c:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_224 == 0) {
      local_210 = 0;
      local_224 = 1;
    }
    _objc_storeStrong(&local_230,0);
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

