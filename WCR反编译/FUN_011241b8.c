// FUN_011241b8 @ 011241b8

void FUN_011241b8(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  uint uVar4;
  long lVar5;
  undefined *local_568;
  undefined *local_560;
  undefined *local_518;
  undefined *local_510;
  undefined *local_4d0;
  undefined *local_4c8;
  undefined *local_480;
  undefined *local_478;
  cfstringStruct *local_430;
  cfstringStruct *local_428;
  undefined1 auStack_420 [8];
  long local_418;
  long *local_410;
  undefined8 local_3e0;
  cfstringStruct *local_3d8;
  undefined1 auStack_3d0 [8];
  long local_3c8;
  long *local_3c0;
  undefined8 local_390;
  cfstringStruct *local_388;
  cfstringStruct *local_380;
  undefined1 auStack_378 [8];
  long local_370;
  long *local_368;
  undefined8 local_338;
  cfstringStruct *local_330;
  undefined1 auStack_328 [8];
  long local_320;
  long *local_318;
  undefined8 local_2e8;
  uint local_2dc;
  ulong local_2d8;
  cfstringStruct *local_2d0;
  cfstringStruct *local_2c8;
  cfstringStruct *local_2c0;
  cfstringStruct *local_2b8;
  cfstringStruct *local_2b0;
  undefined1 auStack_2a8 [128];
  cfstringStruct *local_228;
  cfstringStruct *local_220;
  cfstringStruct *local_218;
  undefined1 auStack_210 [128];
  cfstringStruct *local_190;
  cfstringStruct *local_188;
  cfstringStruct *local_180;
  cfstringStruct *local_178;
  cfstringStruct *local_170;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  undefined1 auStack_150 [128];
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_2d0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_2d0,param_1);
  pcVar2 = local_2d0;
  local_2d8 = param_2;
  if (param_2 < 5) {
    if (local_2d0 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_2c8 = &cf___;
      local_2dc = 1;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
      if (((ulong)pcVar2 & 1) == 0) {
        _memset(auStack_328,0,0x40);
        local_d0 = &cf_m_nsUsrName;
        local_c8 = &cf_m_nsUserName;
        local_c0 = &cf_username;
        local_b8 = &cf_userName;
        local_b0 = &cf_nsUserName;
        puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_d0,5);
        _objc_retainAutoreleasedReturnValue();
        local_478 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_478 != (undefined *)0x0) {
          lVar5 = *local_318;
          local_480 = (undefined *)0x0;
          do {
            do {
              if (*local_318 - lVar5 != 0) {
                _objc_enumerationMutation(*local_318 - lVar5,puVar1);
              }
              local_2e8 = *(undefined8 *)(local_320 + (long)local_480 * 8);
              pcVar2 = local_2d0;
              FUN_0111b06c(local_2d0,local_2e8);
              _objc_retainAutoreleasedReturnValue();
              pcVar3 = pcVar2;
              FUN_0110d24c();
              _objc_retainAutoreleasedReturnValue();
              local_330 = pcVar3;
              (*(code *)PTR__objc_release_02578630)(pcVar2);
              pcVar3 = local_330;
              (*(code *)PTR__objc_msgSend_02578628)(local_330,PTR_s_length_0269cca0);
              pcVar2 = local_330;
              if (pcVar3 != (cfstringStruct *)0x0) {
                (*(code *)PTR__objc_retain_02578638)();
                local_2c8 = pcVar2;
              }
              local_2dc = (uint)(pcVar3 != (cfstringStruct *)0x0);
              _objc_storeStrong(&local_330,0);
              if (local_2dc != 0) goto LAB_011244f4;
              local_480 = local_480 + 1;
            } while (local_480 < local_478);
            local_478 = puVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_328,auStack_a8
                       ,0x10);
            local_480 = (undefined *)0x0;
          } while (local_478 != (undefined *)0x0);
        }
        local_2dc = 0;
LAB_011244f4:
        (*(code *)PTR__objc_release_02578630)(puVar1);
        if (local_2dc == 0) {
          _memset(auStack_378,0,0x40);
          local_190 = &cf_model;
          local_188 = &cf_contact;
          local_180 = &cf_m_contact;
          local_178 = &cf_sessionInfo;
          local_170 = &cf_m_sessionInfo;
          local_168 = &cf_info;
          local_160 = &cf_dataItem;
          local_158 = &cf_user;
          puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_190,8);
          _objc_retainAutoreleasedReturnValue();
          local_4c8 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_4c8 != (undefined *)0x0) {
            lVar5 = *local_368;
            local_4d0 = (undefined *)0x0;
            do {
              do {
                if (*local_368 - lVar5 != 0) {
                  _objc_enumerationMutation(*local_368 - lVar5,puVar1);
                }
                local_338 = *(undefined8 *)(local_370 + (long)local_4d0 * 8);
                pcVar2 = local_2d0;
                FUN_0111b06c(local_2d0,local_338);
                _objc_retainAutoreleasedReturnValue();
                local_380 = pcVar2;
                uVar4 = 0;
                if ((pcVar2 == (cfstringStruct *)0x0) || (uVar4 = 0, pcVar2 == local_2d0)) {
LAB_01124708:
                  local_2dc = 0;
                }
                else {
                  FUN_011241b8(pcVar2,local_2d8 + 1);
                  _objc_retainAutoreleasedReturnValue();
                  local_388 = pcVar2;
                  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
                  pcVar3 = local_388;
                  if (pcVar2 != (cfstringStruct *)0x0) {
                    (*(code *)PTR__objc_retain_02578638)();
                    local_2c8 = pcVar3;
                  }
                  local_2dc = (uint)(pcVar2 != (cfstringStruct *)0x0);
                  _objc_storeStrong(&local_388,0);
                  uVar4 = local_2dc;
                  if (local_2dc == 0) goto LAB_01124708;
                }
                _objc_storeStrong(uVar4,&local_380,0);
                if (local_2dc != 0) goto LAB_01124790;
                local_4d0 = local_4d0 + 1;
              } while (local_4d0 < local_4c8);
              local_4c8 = puVar1;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_378,
                         auStack_150,0x10);
              local_4d0 = (undefined *)0x0;
            } while (local_4c8 != (undefined *)0x0);
          }
          local_2dc = 0;
LAB_01124790:
          (*(code *)PTR__objc_release_02578630)(puVar1);
          if (local_2dc == 0) {
            _memset(auStack_3d0,0,0x40);
            local_228 = &cf_m_nsFromUsr;
            local_220 = &cf_m_nsToUsr;
            local_218 = &cf_m_nsRealChatUsr;
            puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                       &local_228,3);
            _objc_retainAutoreleasedReturnValue();
            local_510 = puVar1;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (local_510 != (undefined *)0x0) {
              lVar5 = *local_3c0;
              local_518 = (undefined *)0x0;
              do {
                do {
                  if (*local_3c0 - lVar5 != 0) {
                    _objc_enumerationMutation(*local_3c0 - lVar5,puVar1);
                  }
                  local_390 = *(undefined8 *)(local_3c8 + (long)local_518 * 8);
                  pcVar2 = local_2d0;
                  FUN_0111b06c(local_2d0,local_390);
                  _objc_retainAutoreleasedReturnValue();
                  pcVar3 = pcVar2;
                  FUN_0110d24c();
                  _objc_retainAutoreleasedReturnValue();
                  local_3d8 = pcVar3;
                  (*(code *)PTR__objc_release_02578630)(pcVar2);
                  pcVar3 = local_3d8;
                  (*(code *)PTR__objc_msgSend_02578628)(local_3d8,PTR_s_length_0269cca0);
                  pcVar2 = local_3d8;
                  if (pcVar3 != (cfstringStruct *)0x0) {
                    (*(code *)PTR__objc_retain_02578638)();
                    local_2c8 = pcVar2;
                  }
                  local_2dc = (uint)(pcVar3 != (cfstringStruct *)0x0);
                  _objc_storeStrong(&local_3d8,0);
                  if (local_2dc != 0) goto LAB_011249b4;
                  local_518 = local_518 + 1;
                } while (local_518 < local_510);
                local_510 = puVar1;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3d0,
                           auStack_210,0x10);
                local_518 = (undefined *)0x0;
              } while (local_510 != (undefined *)0x0);
            }
            local_2dc = 0;
LAB_011249b4:
            (*(code *)PTR__objc_release_02578630)(puVar1);
            if (local_2dc == 0) {
              _memset(auStack_420,0,0x40);
              local_2c0 = &cf_monoMsg;
              local_2b8 = &cf_msgWrap;
              local_2b0 = &cf_m_msgWrap;
              puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                         &local_2c0,3);
              _objc_retainAutoreleasedReturnValue();
              local_560 = puVar1;
              (*(code *)PTR__objc_msgSend_02578628)();
              if (local_560 != (undefined *)0x0) {
                lVar5 = *local_410;
                local_568 = (undefined *)0x0;
                do {
                  do {
                    if (*local_410 - lVar5 != 0) {
                      _objc_enumerationMutation(*local_410 - lVar5,puVar1);
                    }
                    local_3e0 = *(undefined8 *)(local_418 + (long)local_568 * 8);
                    pcVar2 = local_2d0;
                    FUN_0111b06c(local_2d0,local_3e0);
                    _objc_retainAutoreleasedReturnValue();
                    local_428 = pcVar2;
                    uVar4 = 0;
                    if ((pcVar2 == (cfstringStruct *)0x0) || (uVar4 = 0, pcVar2 == local_2d0)) {
LAB_01124b8c:
                      local_2dc = 0;
                    }
                    else {
                      FUN_011241b8(pcVar2,local_2d8 + 1);
                      _objc_retainAutoreleasedReturnValue();
                      local_430 = pcVar2;
                      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
                      pcVar3 = local_430;
                      if (pcVar2 != (cfstringStruct *)0x0) {
                        (*(code *)PTR__objc_retain_02578638)();
                        local_2c8 = pcVar3;
                      }
                      local_2dc = (uint)(pcVar2 != (cfstringStruct *)0x0);
                      _objc_storeStrong(&local_430,0);
                      uVar4 = local_2dc;
                      if (local_2dc == 0) goto LAB_01124b8c;
                    }
                    _objc_storeStrong(uVar4,&local_428,0);
                    if (local_2dc != 0) goto LAB_01124c14;
                    local_568 = local_568 + 1;
                  } while (local_568 < local_560);
                  local_560 = puVar1;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_420,
                             auStack_2a8,0x10);
                  local_568 = (undefined *)0x0;
                } while (local_560 != (undefined *)0x0);
              }
              local_2dc = 0;
LAB_01124c14:
              (*(code *)PTR__objc_release_02578630)(puVar1);
              if (local_2dc == 0) {
                (*(code *)PTR__objc_retain_02578638)();
                local_2c8 = &cf___;
                local_2dc = 1;
              }
            }
          }
        }
      }
      else {
        pcVar2 = local_2d0;
        FUN_0110d24c();
        _objc_retainAutoreleasedReturnValue();
        local_2dc = 1;
        local_2c8 = pcVar2;
      }
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_2c8 = &cf___;
    local_2dc = 1;
  }
  _objc_storeStrong(&local_2d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_2c8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

