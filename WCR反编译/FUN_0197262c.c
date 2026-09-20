// FUN_0197262c @ 0197262c

void FUN_0197262c(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong local_4b0;
  uint local_494;
  uint local_454;
  uint local_414;
  ulong local_3f8;
  ulong local_3f0;
  ulong local_3b8;
  ulong local_368;
  ulong local_358;
  ulong local_340;
  ulong local_338;
  ulong local_330;
  long local_328;
  ulong local_320;
  ulong local_318;
  long local_310;
  long local_308;
  ulong local_300;
  ulong local_2f8;
  long local_2f0;
  ulong local_2e8;
  ushort local_2da;
  ulong local_2d8;
  long local_2d0;
  ulong local_2c8;
  byte local_2b9;
  ulong local_2b8;
  ulong local_2b0;
  long local_2a8;
  long local_2a0;
  undefined1 auStack_298 [8];
  long local_290;
  long *local_288;
  long local_258;
  byte local_249;
  ulong local_248;
  long local_240;
  ulong local_238;
  ushort local_22a;
  ulong local_228;
  ulong local_220 [3];
  void *local_208;
  undefined4 local_1fc;
  ulong local_1f8;
  undefined8 local_1f0;
  byte local_1e1;
  ulong local_1e0;
  ulong local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  ulong local_1c0;
  ulong local_1b8;
  undefined8 local_1b0;
  long local_1a8;
  ulong local_1a0;
  ulong local_198;
  long local_190;
  long local_188;
  ulong local_180;
  ulong local_178;
  long local_170;
  long local_168;
  ulong local_160;
  ulong local_158;
  long local_150;
  long local_148;
  ulong local_140;
  ulong local_138;
  long local_130;
  long local_128;
  ulong local_120;
  ulong local_118;
  long local_110;
  long local_108;
  ulong local_100;
  ulong local_f8;
  long local_f0;
  long local_e8;
  ulong local_e0;
  ulong local_d8;
  long local_d0;
  ulong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1d0 = 0;
  _objc_storeStrong(&local_1d0,param_1);
  local_1d8 = 0;
  _objc_storeStrong(&local_1d8,param_2);
  local_1e0 = 0;
  _objc_storeStrong(&local_1e0,param_3);
  local_1f0 = 0;
  local_1e1 = param_4;
  _objc_storeStrong(&local_1f0,param_5);
  uVar5 = local_1d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_length_0269cca0);
  local_1f8 = uVar5;
  if (uVar5 == 0) {
    local_1fc = 1;
  }
  else {
    local_208 = _malloc(uVar5 * 2);
    local_c0 = 0;
    local_c8 = local_1f8;
    local_b8 = 0;
    local_b0 = local_1f8;
    local_220[1] = 0;
    local_220[2] = local_1f8;
    uVar5 = local_1d8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1d8,PTR_s_getCharacters_range__026ba1b8,local_208,0,local_1f8);
    FUN_01974994();
    _objc_retainAutoreleasedReturnValue();
    local_228 = 0;
    local_220[0] = uVar5;
LAB_0197275c:
    uVar1 = local_1d0;
    if (local_228 < local_1f8) {
      local_22a = *(ushort *)((long)local_208 + local_228 * 2);
      if (((((local_1e1 & 1) == 0) || (local_22a != 0x2f)) || (local_1f8 <= local_228 + 1)) ||
         (*(short *)((long)local_208 + (local_228 + 1) * 2) != 0x2a)) {
        local_249 = 0;
        _memset(auStack_298,0,0x40);
        uVar5 = local_1e0;
        (*(code *)PTR__objc_retain_02578638)();
        local_3f0 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_298,auStack_a8,0x10
                  );
        if (local_3f0 != 0) {
          lVar6 = *local_288;
          local_3f8 = 0;
LAB_019729ec:
          while( true ) {
            if (*local_288 - lVar6 != 0) {
              _objc_enumerationMutation(*local_288 - lVar6,uVar5);
            }
            lVar7 = *(long *)(local_290 + local_3f8 * 8);
            local_258 = lVar7;
            (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_length_0269cca0);
            local_2b9 = 0;
            local_414 = 0;
            local_2a0 = lVar7;
            if ((lVar7 != 0) && (local_414 = 0, local_228 + lVar7 <= local_1f8)) {
              local_100 = local_228;
              local_f8 = local_228;
              local_2b0 = local_228;
              uVar4 = local_1d8;
              local_2a8 = lVar7;
              local_108 = lVar7;
              local_f0 = lVar7;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1d8,PTR_s_substringWithRange__0269d138,local_228,lVar7);
              _objc_retainAutoreleasedReturnValue();
              local_2b9 = 1;
              local_2b8 = uVar4;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_414 = (uint)uVar4;
            }
            if ((local_2b9 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_2b8);
            }
            uVar1 = local_1d0;
            if ((local_414 & 1) != 0) break;
            local_3f8 = local_3f8 + 1;
            if (local_3f0 <= local_3f8) goto LAB_01972cb4;
          }
          local_2c8 = local_228;
          while( true ) {
            bVar2 = false;
            if (local_2c8 < local_1f8) {
              bVar2 = *(short *)((long)local_208 + local_2c8 * 2) != 10;
            }
            if (!bVar2) break;
            local_2c8 = local_2c8 + 1;
          }
          local_2d0 = local_2c8 - local_228;
          local_120 = local_228;
          local_118 = local_228;
          local_2d8 = local_228;
          uVar4 = local_1d8;
          local_128 = local_2d0;
          local_110 = local_2d0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1d8,PTR_s_substringWithRange__0269d138,local_228,local_2d0);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar4;
          FUN_01973ca4();
          _objc_retainAutoreleasedReturnValue();
          FUN_019735ac(uVar1,uVar4,uVar3,local_1f0,1);
          (*(code *)PTR__objc_release_02578630)(uVar3);
          (*(code *)PTR__objc_release_02578630)(uVar4);
          local_228 = local_2c8;
          local_249 = 1;
          local_1fc = 6;
          goto LAB_01972cf8;
        }
LAB_01972cf0:
        local_1fc = 0;
LAB_01972cf8:
        (*(code *)PTR__objc_release_02578630)(uVar5);
        uVar1 = local_1d0;
        if ((local_249 & 1) == 0) {
          if (((local_22a != 0x22) && (local_22a != 0x27)) && (local_22a != 0x60)) {
            if ((local_22a == 0x23) && (local_228 + 1 < local_1f8)) {
              uVar4 = (ulong)*(ushort *)((long)local_208 + (local_228 + 1) * 2);
              FUN_01974a08();
              uVar5 = local_228;
              if ((uVar4 & 1) != 0) {
                do {
                  local_300 = uVar5 + 1;
                  local_454 = 0;
                  if (local_300 < local_1f8) {
                    local_454 = (uint)*(ushort *)((long)local_208 + local_300 * 2);
                    FUN_01974a08();
                  }
                  uVar1 = local_1d0;
                  uVar5 = local_300;
                } while ((local_454 & 1) != 0);
                local_308 = local_300 - (local_228 + 1);
                if ((((local_308 == 3) || (local_308 == 4)) || (local_308 == 6)) || (local_308 == 8)
                   ) {
                  local_310 = local_300 - local_228;
                  local_160 = local_228;
                  local_158 = local_228;
                  local_318 = local_228;
                  uVar5 = local_1d8;
                  local_168 = local_310;
                  local_150 = local_310;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1d8,PTR_s_substringWithRange__0269d138,local_228,local_310);
                  _objc_retainAutoreleasedReturnValue();
                  uVar4 = uVar5;
                  FUN_01963e8c();
                  _objc_retainAutoreleasedReturnValue();
                  FUN_019735ac(uVar1,uVar5,uVar4,local_1f0,0);
                  (*(code *)PTR__objc_release_02578630)(uVar4);
                  (*(code *)PTR__objc_release_02578630)(uVar5);
                  local_228 = local_300;
                  goto LAB_0197275c;
                }
              }
            }
            uVar5 = (ulong)local_22a;
            FUN_01974aa8();
            if ((uVar5 & 1) == 0) {
              if ((local_22a == 0x2e) && (local_228 + 1 < local_1f8)) {
                uVar5 = (ulong)*(ushort *)((long)local_208 + (local_228 + 1) * 2);
                FUN_01974aa8();
                if ((uVar5 & 1) != 0) goto LAB_019730e4;
              }
              uVar5 = (ulong)local_22a;
              FUN_01974b10();
              uVar1 = local_1d0;
              if ((uVar5 & 1) == 0) {
                local_1c0 = local_228;
                local_1c8 = 1;
                local_1b8 = local_228;
                local_1b0 = 1;
                uVar5 = local_1d8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1d8,PTR_s_substringWithRange__0269d138,local_228,1);
                _objc_retainAutoreleasedReturnValue();
                uVar4 = uVar5;
                FUN_01963e8c();
                _objc_retainAutoreleasedReturnValue();
                FUN_019735ac(uVar1,uVar5,uVar4,local_1f0,0);
                (*(code *)PTR__objc_release_02578630)(uVar4);
                (*(code *)PTR__objc_release_02578630)(uVar5);
                local_228 = local_228 + 1;
              }
              else {
                local_338 = local_228;
                while( true ) {
                  local_494 = 0;
                  if (local_338 < local_1f8) {
                    local_494 = (uint)*(ushort *)((long)local_208 + local_338 * 2);
                    FUN_01974bbc();
                  }
                  if ((local_494 & 1) == 0) break;
                  local_338 = local_338 + 1;
                }
                local_1a8 = local_338 - local_228;
                local_1a0 = local_228;
                local_198 = local_228;
                uVar5 = local_1d8;
                local_190 = local_1a8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1d8,PTR_s_substringWithRange__0269d138,local_228,local_1a8);
                _objc_retainAutoreleasedReturnValue();
                uVar1 = local_1d0;
                local_4b0 = local_220[0];
                local_340 = uVar5;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_220[0],PTR_s_containsObject__0269cbb8,uVar5);
                bVar2 = (local_4b0 & 1) == 0;
                if (bVar2) {
                  FUN_01963e8c();
                  _objc_retainAutoreleasedReturnValue();
                  local_368 = local_4b0;
                }
                else {
                  FUN_01974c78();
                  _objc_retainAutoreleasedReturnValue();
                  local_358 = local_4b0;
                }
                FUN_019735ac(uVar1,uVar5,local_4b0,local_1f0,0);
                if (bVar2) {
                  (*(code *)PTR__objc_release_02578630)(local_368);
                }
                else {
                  (*(code *)PTR__objc_release_02578630)(local_358);
                }
                local_228 = local_338;
                local_1fc = 2;
                _objc_storeStrong(&local_340,0);
              }
            }
            else {
LAB_019730e4:
              local_320 = local_228;
              while( true ) {
                bVar2 = false;
                if (local_320 < local_1f8) {
                  uVar5 = (ulong)*(ushort *)((long)local_208 + local_320 * 2);
                  FUN_01974a08();
                  bVar2 = true;
                  if ((((uVar5 & 1) == 0) &&
                      (bVar2 = true, *(short *)((long)local_208 + local_320 * 2) != 0x78)) &&
                     (bVar2 = true, *(short *)((long)local_208 + local_320 * 2) != 0x58)) {
                    bVar2 = *(short *)((long)local_208 + local_320 * 2) == 0x2e;
                  }
                }
                uVar1 = local_1d0;
                if (!bVar2) break;
                local_320 = local_320 + 1;
              }
              local_328 = local_320 - local_228;
              local_180 = local_228;
              local_178 = local_228;
              local_330 = local_228;
              uVar5 = local_1d8;
              local_188 = local_328;
              local_170 = local_328;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1d8,PTR_s_substringWithRange__0269d138,local_228,local_328);
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar5;
              FUN_01974aec();
              _objc_retainAutoreleasedReturnValue();
              FUN_019735ac(uVar1,uVar5,uVar4,local_1f0,0);
              (*(code *)PTR__objc_release_02578630)(uVar4);
              (*(code *)PTR__objc_release_02578630)(uVar5);
              local_228 = local_320;
            }
            goto LAB_0197275c;
          }
          local_2da = local_22a;
          local_2e8 = local_228 + 1;
          while (local_2e8 < local_1f8) {
            if (*(short *)((long)local_208 + local_2e8 * 2) == 0x5c) {
              local_2e8 = local_2e8 + 2;
            }
            else {
              if (*(ushort *)((long)local_208 + local_2e8 * 2) == local_22a) {
                local_2e8 = local_2e8 + 1;
                break;
              }
              local_2e8 = local_2e8 + 1;
            }
          }
          if (local_1f8 < local_2e8) {
            local_2e8 = local_1f8;
          }
          local_2f0 = local_2e8 - local_228;
          local_140 = local_228;
          local_138 = local_228;
          local_2f8 = local_228;
          uVar5 = local_1d8;
          local_148 = local_2f0;
          local_130 = local_2f0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1d8,PTR_s_substringWithRange__0269d138,local_228,local_2f0);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar5;
          FUN_0197481c();
          _objc_retainAutoreleasedReturnValue();
          FUN_019735ac(uVar1,uVar5,uVar4,local_1f0,0);
          (*(code *)PTR__objc_release_02578630)(uVar4);
          (*(code *)PTR__objc_release_02578630)(uVar5);
          local_228 = local_2e8;
        }
      }
      else {
        local_238 = local_228 + 2;
        while( true ) {
          bVar2 = false;
          if (local_238 + 1 < local_1f8) {
            bVar2 = false;
            if (*(short *)((long)local_208 + local_238 * 2) == 0x2a) {
              bVar2 = *(short *)((long)local_208 + (local_238 + 1) * 2) == 0x2f;
            }
            bVar2 = (bool)(bVar2 ^ 1);
          }
          if (!bVar2) break;
          local_238 = local_238 + 1;
        }
        if (local_238 + 1 < local_1f8) {
          local_3b8 = local_238 + 2;
        }
        else {
          local_3b8 = local_1f8;
        }
        local_238 = local_3b8;
        local_240 = local_3b8 - local_228;
        local_e0 = local_228;
        local_d8 = local_228;
        local_248 = local_228;
        uVar5 = local_1d8;
        local_e8 = local_240;
        local_d0 = local_240;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1d8,PTR_s_substringWithRange__0269d138,local_228,local_240);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar5;
        FUN_01973ca4();
        _objc_retainAutoreleasedReturnValue();
        FUN_019735ac(uVar1,uVar5,uVar4,local_1f0,1);
        (*(code *)PTR__objc_release_02578630)(uVar4);
        (*(code *)PTR__objc_release_02578630)(uVar5);
        local_228 = local_238;
      }
      goto LAB_0197275c;
    }
    _free(local_228 - local_1f8,local_208);
    _objc_storeStrong(local_220,0);
    local_1fc = 0;
  }
  _objc_storeStrong(&local_1f0);
  _objc_storeStrong(&local_1e0,0);
  _objc_storeStrong(&local_1d8,0);
  _objc_storeStrong(&local_1d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
LAB_01972cb4:
  local_3f0 = uVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_298,auStack_a8,0x10);
  local_3f8 = 0;
  if (local_3f0 == 0) goto LAB_01972cf0;
  goto LAB_019729ec;
}

