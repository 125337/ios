// FUN_008f437c @ 008f437c

byte FUN_008f437c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  char *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  char *local_2f8;
  char *local_2e8;
  uint local_2b8;
  char *local_280;
  ulong local_238;
  ulong local_230;
  char *local_1d8 [2];
  undefined8 local_1c8;
  undefined8 local_1c0;
  byte local_1b1;
  char *local_1b0;
  char *local_1a8;
  char *local_1a0;
  char *local_198;
  undefined8 local_190;
  char *local_188;
  char *local_180;
  char *local_178;
  char *local_170;
  undefined1 auStack_168 [8];
  long local_160;
  long *local_158;
  undefined8 local_128;
  undefined *local_120;
  undefined *local_118;
  int local_110;
  char *local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  ulong local_d8;
  byte local_c9;
  char *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  char *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = 0;
  _objc_storeStrong(&local_d8,param_1);
  local_e0 = 0;
  _objc_storeStrong(&local_e0,param_2);
  local_e8 = 0;
  _objc_storeStrong(&local_e8,param_3);
  pcVar1 = "MJSilkCodec";
  local_f8 = param_5;
  local_f0 = param_4;
  _objc_getClass();
  local_100 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    local_c9 = 0;
    local_110 = 1;
  }
  else {
    local_118 = PTR_s_decodeToAudioDataFromSilkData__026a9e78;
    local_120 = PTR_s_decodeToPCMFromSilkData__026a9e80;
    _memset(auStack_168,0,0x40);
    uVar2 = local_d8;
    FUN_008f6784();
    _objc_retainAutoreleasedReturnValue();
    local_230 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_230 != 0) {
      lVar7 = *local_158;
      local_238 = 0;
      do {
        do {
          if (*local_158 - lVar7 != 0) {
            _objc_enumerationMutation(*local_158 - lVar7,uVar2);
          }
          local_128 = *(undefined8 *)(local_160 + local_238 * 8);
          pcVar1 = local_100;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_100,PTR_s_respondsToSelector__026ca818,local_118);
          if (((ulong)pcVar1 & 1) != 0) {
            pcVar1 = local_100;
            (*(code *)PTR__objc_msgSend_02578628)(local_100,local_118,local_128);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSData_026ce1d0;
            local_170 = pcVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
            if (((ulong)pcVar1 & 1) == 0) {
              local_280 = (char *)0x0;
            }
            else {
              local_280 = local_170;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_178 = local_280;
            puVar3 = PTR__OBJC_CLASS___NSData_026ce1d0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(local_280,PTR_s_isKindOfClass__0269cd68,puVar3);
            if ((((ulong)local_280 & 1) == 0) ||
               (pcVar1 = local_178,
               (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_length_0269cca0),
               pcVar1 == (char *)0x0)) {
LAB_008f4ba0:
              local_110 = 0;
            }
            else {
              pcVar4 = local_178;
              FUN_008f6e04(pcVar1);
              _objc_retainAutoreleasedReturnValue();
              local_1b1 = 0;
              local_180 = pcVar4;
              (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isEqualToString__0269ccc8,&cf_m4a);
              local_2b8 = 0;
              if (((ulong)pcVar4 & 1) != 0) {
                pcVar1 = local_178;
                FUN_008f71d0(local_178,&cf_RIFF);
                local_2b8 = 0;
                if (((ulong)pcVar1 & 1) == 0) {
                  pcVar1 = local_178;
                  FUN_008f71d0(local_178,&cf_ID3);
                  local_2b8 = 0;
                  if (((ulong)pcVar1 & 1) == 0) {
                    pcVar1 = local_178;
                    FUN_008f7334(local_178,s__02410b54,2);
                    local_2b8 = 0;
                    if (((ulong)pcVar1 & 1) == 0) {
                      pcVar1 = local_178;
                      FUN_008f7334(local_178,s__02410b57,2);
                      local_2b8 = 0;
                      if (((ulong)pcVar1 & 1) == 0) {
                        pcVar1 = local_178;
                        (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_length_0269cca0);
                        local_2f8 = local_178;
                        if (pcVar1 < "") {
                          local_2f8 = (char *)0x0;
                        }
                        else {
                          local_198 = "\f";
                          pcVar1 = local_178;
                          (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_length_0269cca0);
                          local_1a0 = pcVar1 + -4;
                          local_2e8 = local_1a0;
                          if (local_198 < local_1a0) {
                            local_2e8 = local_198;
                          }
                          local_1a8 = local_2e8;
                          local_c0 = 4;
                          local_c8 = local_2e8;
                          local_b8 = 4;
                          local_b0 = local_2e8;
                          local_190 = 4;
                          local_188 = local_2e8;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_2f8,PTR_s_subdataWithRange__026a9e88,4,local_2e8);
                          _objc_retainAutoreleasedReturnValue();
                          local_1b1 = 1;
                          local_1b0 = local_2f8;
                        }
                        FUN_008f71d0(local_2f8,&cf_ftyp);
                        local_2b8 = (uint)local_2f8 ^ 1;
                      }
                    }
                  }
                }
              }
              if ((local_1b1 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_1b0);
              }
              if (((local_2b8 & 1) == 0) ||
                 (pcVar1 = local_178, FUN_008f74d0(local_178,local_e0,local_e8,local_f0,local_f8),
                 ((ulong)pcVar1 & 1) == 0)) {
                uVar5 = local_e0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_e0,PTR_s_stringByAppendingPathExtension__026a4580,local_180);
                _objc_retainAutoreleasedReturnValue();
                uVar6 = local_e8;
                local_1c0 = uVar5;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_e8,PTR_s_stringByAppendingPathComponent__026cab30,uVar5);
                _objc_retainAutoreleasedReturnValue();
                pcVar1 = local_178;
                local_1c8 = uVar6;
                FUN_008f798c(local_178,uVar6);
                uVar5 = local_1c8;
                if (((ulong)pcVar1 & 1) == 0) {
                  local_110 = 0;
                }
                else {
                  if (local_f0 != (undefined8 *)0x0) {
                    _objc_retainAutorelease();
                    *local_f0 = uVar5;
                  }
                  uVar5 = local_1c0;
                  if (local_f8 != (undefined8 *)0x0) {
                    _objc_retainAutorelease();
                    *local_f8 = uVar5;
                  }
                  local_c9 = 1;
                  local_110 = 1;
                }
                _objc_storeStrong(&local_1c8);
                _objc_storeStrong(&local_1c0,0);
              }
              else {
                local_c9 = 1;
                local_110 = 1;
              }
              _objc_storeStrong(&local_180,0);
              if (local_110 == 0) goto LAB_008f4ba0;
            }
            _objc_storeStrong(&local_178);
            _objc_storeStrong(&local_170,0);
            if (local_110 != 0) goto LAB_008f4e7c;
          }
          pcVar1 = local_100;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_100,PTR_s_respondsToSelector__026ca818,local_120);
          if (((ulong)pcVar1 & 1) != 0) {
            pcVar1 = local_100;
            (*(code *)PTR__objc_msgSend_02578628)(local_100,local_120,local_128);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSData_026ce1d0;
            local_1d8[0] = pcVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
            if (((((ulong)pcVar1 & 1) == 0) ||
                (pcVar1 = local_1d8[0],
                (*(code *)PTR__objc_msgSend_02578628)(local_1d8[0],PTR_s_length_0269cca0),
                pcVar1 == (char *)0x0)) ||
               (pcVar4 = local_1d8[0],
               FUN_008f74d0(pcVar1,local_1d8[0],local_e0,local_e8,local_f0,local_f8),
               ((ulong)pcVar4 & 1) == 0)) {
              local_110 = 0;
            }
            else {
              local_c9 = 1;
              local_110 = 1;
            }
            _objc_storeStrong(local_1d8,0);
            if (local_110 != 0) goto LAB_008f4e7c;
          }
          local_238 = local_238 + 1;
        } while (local_238 < local_230);
        local_230 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_168,auStack_a8,0x10
                  );
        local_238 = 0;
      } while (local_230 != 0);
    }
    local_110 = 0;
LAB_008f4e7c:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_110 == 0) {
      local_c9 = 0;
      local_110 = 1;
    }
  }
  _objc_storeStrong(&local_e8);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_c9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

