// FUN_01503d50 @ 01503d50

void FUN_01503d50(undefined8 param_1)

{
  undefined1 uVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined *local_598;
  cfstringStruct *local_578;
  uint local_4e8;
  uint local_4e4;
  ulong local_4b0;
  ulong local_4a8;
  uint local_37c;
  cfstringStruct *local_370;
  cfstringStruct *local_368;
  ulong local_360;
  ulong local_358;
  ulong local_350;
  byte local_341;
  ulong local_340;
  byte local_331;
  ulong local_330;
  byte local_321;
  ulong local_320;
  byte local_311;
  ulong local_310;
  byte local_301;
  ulong local_300;
  undefined1 local_2f1;
  long local_2f0;
  ulong local_2e8;
  ulong local_2e0;
  undefined1 auStack_2d8 [8];
  long local_2d0;
  long *local_2c8;
  ulong local_298;
  undefined *local_290;
  ulong local_288;
  ulong local_280;
  ulong local_278;
  byte local_269;
  ulong local_268;
  byte local_259;
  ulong local_258;
  byte local_249;
  ulong local_248;
  byte local_239;
  ulong local_238;
  byte local_229;
  ulong local_228;
  byte local_219;
  ulong local_218;
  long local_210;
  undefined1 local_201;
  ulong local_200;
  byte local_1f1;
  ulong local_1f0;
  ulong local_1e8;
  ulong local_1e0;
  byte local_1d1;
  ulong local_1d0;
  byte local_1c1;
  ulong local_1c0;
  ulong local_1b8;
  byte local_1a9;
  ulong local_1a8;
  byte local_199;
  ulong local_198;
  byte local_189;
  ulong local_188;
  byte local_179;
  ulong local_178;
  byte local_169;
  ulong local_168;
  byte local_159;
  ulong local_158;
  ulong local_150;
  ulong local_148;
  byte local_139;
  undefined *local_138;
  byte local_129;
  ulong local_128;
  byte local_119;
  ulong local_118;
  ulong local_110;
  int local_104;
  ulong local_100;
  undefined *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  ulong local_c8;
  ulong local_c0;
  undefined1 auStack_b8 [128];
  undefined8 local_38;
  undefined1 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_100 = 0;
  _objc_storeStrong(&local_100,param_1);
  uVar3 = local_100;
  (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_length_0269cca0);
  if (uVar3 != 0) {
    uVar3 = local_100;
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_length_0269cca0);
    if (uVar3 < 0x100000 || uVar3 - 0x100000 == 0) {
      uVar9 = local_100;
      FUN_0150c2ac(uVar3 - 0x100000,local_100,0x30);
      _objc_retainAutoreleasedReturnValue();
      local_38 = DAT_02332d48;
      local_30 = DAT_02332d50;
      local_110 = uVar9;
      (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_count_0269cfe0);
      local_119 = 0;
      local_129 = 0;
      local_139 = 0;
      local_37c = 1;
      if (uVar9 == 2) {
        uVar3 = local_110;
        (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_objectAtIndexedSubscript__0269cc78,0);
        _objc_retainAutoreleasedReturnValue();
        local_119 = 1;
        local_118 = uVar3;
        FUN_0150c520();
        _objc_retainAutoreleasedReturnValue();
        local_129 = 1;
        puVar4 = PTR__OBJC_CLASS___NSData_026ce1d0;
        local_128 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithBytes_length__026a1aa8,&local_38,
                   9);
        _objc_retainAutoreleasedReturnValue();
        local_139 = 1;
        local_138 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isEqualToData__026a0a18);
        local_37c = (uint)uVar3 ^ 1;
      }
      if ((local_139 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_138);
      }
      if ((local_129 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_128);
      }
      if ((local_119 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_118);
      }
      if ((local_37c & 1) == 0) {
        uVar3 = local_110;
        (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_objectAtIndexedSubscript__0269cc78,1);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar3;
        FUN_0150c2ac();
        _objc_retainAutoreleasedReturnValue();
        local_148 = uVar9;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar3 = local_148;
        (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_count_0269cfe0);
        if (uVar3 == 1) {
          uVar3 = local_148;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_148,PTR_s_objectAtIndexedSubscript__0269cc78,0);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar3;
          FUN_0150c2ac();
          _objc_retainAutoreleasedReturnValue();
          local_150 = uVar9;
          (*(code *)PTR__objc_release_02578630)(uVar3);
          uVar3 = local_150;
          (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_count_0269cfe0);
          local_159 = 0;
          local_169 = 0;
          local_179 = 0;
          local_189 = 0;
          local_199 = 0;
          local_1a9 = 0;
          bVar2 = true;
          if (4 < uVar3) {
            uVar3 = local_150;
            (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_count_0269cfe0);
            bVar2 = true;
            if (uVar3 < 7) {
              uVar3 = local_150;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_150,PTR_s_objectAtIndexedSubscript__0269cc78,0);
              _objc_retainAutoreleasedReturnValue();
              local_159 = 1;
              local_158 = uVar3;
              FUN_0150c520();
              _objc_retainAutoreleasedReturnValue();
              local_169 = 1;
              bVar2 = true;
              local_168 = uVar3;
              if (uVar3 != 0) {
                uVar3 = local_150;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_150,PTR_s_objectAtIndexedSubscript__0269cc78,1);
                _objc_retainAutoreleasedReturnValue();
                local_179 = 1;
                local_178 = uVar3;
                FUN_0150c520();
                _objc_retainAutoreleasedReturnValue();
                local_189 = 1;
                bVar2 = true;
                local_188 = uVar3;
                if (uVar3 != 0) {
                  uVar3 = local_150;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_150,PTR_s_objectAtIndexedSubscript__0269cc78,2);
                  _objc_retainAutoreleasedReturnValue();
                  local_199 = 1;
                  local_198 = uVar3;
                  FUN_0150c520();
                  _objc_retainAutoreleasedReturnValue();
                  local_1a9 = 1;
                  bVar2 = uVar3 == 0;
                  local_1a8 = uVar3;
                }
              }
            }
          }
          if ((local_1a9 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_1a8);
          }
          if ((local_199 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_198);
          }
          if ((local_189 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_188);
          }
          if ((local_179 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_178);
          }
          if ((local_169 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_168);
          }
          if ((local_159 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_158);
          }
          if (bVar2) {
            puVar4 = *(undefined **)PTR____NSDictionary0___02578288;
            (*(code *)PTR__objc_retain_02578638)();
            local_104 = 1;
            local_f8 = puVar4;
          }
          else {
            uVar3 = local_150;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_150,PTR_s_objectAtIndexedSubscript__0269cc78,3);
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar3;
            FUN_0150c2ac();
            _objc_retainAutoreleasedReturnValue();
            local_1b8 = uVar9;
            (*(code *)PTR__objc_release_02578630)(uVar3);
            uVar3 = local_1b8;
            (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_count_0269cfe0);
            local_1c1 = 0;
            local_1d1 = 0;
            bVar2 = true;
            if (uVar3 != 0) {
              uVar3 = local_150;
              (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_count_0269cfe0);
              bVar2 = false;
              if (uVar3 == 6) {
                uVar3 = local_150;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_150,PTR_s_objectAtIndexedSubscript__0269cc78,4);
                _objc_retainAutoreleasedReturnValue();
                local_1c1 = 1;
                local_1c0 = uVar3;
                FUN_0150c520();
                _objc_retainAutoreleasedReturnValue();
                local_1d1 = 1;
                bVar2 = uVar3 == 0;
                local_1d0 = uVar3;
              }
            }
            if ((local_1d1 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_1d0);
            }
            if ((local_1c1 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_1c0);
            }
            if (bVar2) {
              puVar4 = *(undefined **)PTR____NSDictionary0___02578288;
              (*(code *)PTR__objc_retain_02578638)();
              local_104 = 1;
              local_f8 = puVar4;
            }
            else {
              uVar3 = local_150;
              (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_lastObject_0269d200);
              _objc_retainAutoreleasedReturnValue();
              uVar9 = uVar3;
              FUN_0150c2ac();
              _objc_retainAutoreleasedReturnValue();
              local_1e0 = uVar9;
              (*(code *)PTR__objc_release_02578630)(uVar3);
              uVar3 = local_1e0;
              (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_count_0269cfe0);
              if (uVar3 == 1) {
                uVar3 = local_1e0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1e0,PTR_s_objectAtIndexedSubscript__0269cc78,0);
                _objc_retainAutoreleasedReturnValue();
                uVar9 = uVar3;
                FUN_0150c2ac();
                _objc_retainAutoreleasedReturnValue();
                local_1e8 = uVar9;
                (*(code *)PTR__objc_release_02578630)(uVar3);
                uVar3 = local_1e8;
                (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_count_0269cfe0);
                local_1f1 = 0;
                local_201 = 0;
                uVar1 = 4 < uVar3;
                bVar2 = true;
                if ((bool)uVar1) {
                  uVar3 = local_1e8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1e8,PTR_s_objectAtIndexedSubscript__0269cc78,0);
                  _objc_retainAutoreleasedReturnValue();
                  local_1f1 = 1;
                  local_1f0 = uVar3;
                  FUN_0150c520();
                  _objc_retainAutoreleasedReturnValue();
                  bVar2 = uVar3 == 0;
                  local_201 = uVar1;
                  local_200 = uVar3;
                  (*(code *)PTR__objc_release_02578630)(uVar3);
                  uVar1 = local_201;
                }
                local_201 = uVar1;
                if ((local_1f1 & 1) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_1f0);
                }
                if (bVar2) {
                  puVar4 = *(undefined **)PTR____NSDictionary0___02578288;
                  (*(code *)PTR__objc_retain_02578638)();
                  local_104 = 1;
                  local_f8 = puVar4;
                }
                else {
                  uVar3 = local_1e8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1e8,PTR_s_objectAtIndexedSubscript__0269cc78,2);
                  _objc_retainAutoreleasedReturnValue();
                  uVar9 = uVar3;
                  FUN_0150c520();
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_release_02578630)();
                  (*(code *)PTR__objc_release_02578630)(uVar3);
                  if (uVar9 == 0) {
                    puVar4 = *(undefined **)PTR____NSDictionary0___02578288;
                    (*(code *)PTR__objc_retain_02578638)();
                    local_104 = 1;
                    local_f8 = puVar4;
                  }
                  else {
                    local_210 = 3;
                    uVar3 = local_1e8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_1e8,PTR_s_objectAtIndexedSubscript__0269cc78,3);
                    _objc_retainAutoreleasedReturnValue();
                    uVar9 = uVar3;
                    FUN_0150c520();
                    _objc_retainAutoreleasedReturnValue();
                    (*(code *)PTR__objc_release_02578630)();
                    (*(code *)PTR__objc_release_02578630)(uVar3);
                    if (uVar9 != 0) {
                      local_210 = local_210 + 1;
                    }
                    uVar3 = local_1e8;
                    (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_count_0269cfe0);
                    local_219 = 0;
                    local_229 = 0;
                    local_239 = 0;
                    local_249 = 0;
                    bVar2 = true;
                    if (local_210 + 2U <= uVar3) {
                      uVar3 = local_1e8;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_1e8,PTR_s_objectAtIndexedSubscript__0269cc78,local_210);
                      _objc_retainAutoreleasedReturnValue();
                      local_219 = 1;
                      local_218 = uVar3;
                      FUN_0150c520();
                      _objc_retainAutoreleasedReturnValue();
                      local_229 = 1;
                      bVar2 = true;
                      local_228 = uVar3;
                      if (uVar3 != 0) {
                        uVar3 = local_1e8;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_1e8,PTR_s_objectAtIndexedSubscript__0269cc78,local_210 + 1)
                        ;
                        _objc_retainAutoreleasedReturnValue();
                        local_239 = 1;
                        local_238 = uVar3;
                        FUN_0150c520();
                        _objc_retainAutoreleasedReturnValue();
                        local_249 = 1;
                        local_248 = uVar3;
                        (*(code *)PTR__objc_msgSend_02578628)();
                        bVar2 = uVar3 == 0;
                      }
                    }
                    if ((local_249 & 1) != 0) {
                      (*(code *)PTR__objc_release_02578630)(local_248);
                    }
                    if ((local_239 & 1) != 0) {
                      (*(code *)PTR__objc_release_02578630)(local_238);
                    }
                    if ((local_229 & 1) != 0) {
                      (*(code *)PTR__objc_release_02578630)(local_228);
                    }
                    if ((local_219 & 1) != 0) {
                      (*(code *)PTR__objc_release_02578630)(local_218);
                    }
                    if (bVar2) {
                      puVar4 = *(undefined **)PTR____NSDictionary0___02578288;
                      (*(code *)PTR__objc_retain_02578638)();
                      local_104 = 1;
                      local_f8 = puVar4;
                    }
                    else {
                      uVar3 = local_1e8;
                      (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_count_0269cfe0);
                      local_259 = 0;
                      local_269 = 0;
                      bVar2 = false;
                      if (local_210 + 2U < uVar3) {
                        uVar3 = local_1e8;
                        (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_count_0269cfe0);
                        bVar2 = true;
                        if (uVar3 == local_210 + 3U) {
                          uVar3 = local_1e8;
                          (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_lastObject_0269d200)
                          ;
                          _objc_retainAutoreleasedReturnValue();
                          local_259 = 1;
                          local_258 = uVar3;
                          FUN_0150c520();
                          _objc_retainAutoreleasedReturnValue();
                          local_269 = 1;
                          bVar2 = uVar3 == 0;
                          local_268 = uVar3;
                        }
                      }
                      if ((local_269 & 1) != 0) {
                        (*(code *)PTR__objc_release_02578630)(local_268);
                      }
                      if ((local_259 & 1) != 0) {
                        (*(code *)PTR__objc_release_02578630)(local_258);
                      }
                      if (bVar2) {
                        puVar4 = *(undefined **)PTR____NSDictionary0___02578288;
                        (*(code *)PTR__objc_retain_02578638)();
                        local_104 = 1;
                        local_f8 = puVar4;
                      }
                      else {
                        uVar3 = local_1e8;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_1e8,PTR_s_objectAtIndexedSubscript__0269cc78,1);
                        _objc_retainAutoreleasedReturnValue();
                        local_278 = uVar3;
                        FUN_0150c2ac(uVar3,0x30);
                        _objc_retainAutoreleasedReturnValue();
                        uVar9 = local_278;
                        local_280 = uVar3;
                        FUN_0150c520(local_278,0x80);
                        _objc_retainAutoreleasedReturnValue();
                        uVar3 = local_280;
                        local_288 = uVar9;
                        (*(code *)PTR__objc_msgSend_02578628)(local_280,PTR_s_count_0269cfe0);
                        if ((uVar3 == 2) ||
                           (uVar3 = local_288,
                           (*(code *)PTR__objc_msgSend_02578628)(local_288,PTR_s_length_0269cca0),
                           uVar3 != 0)) {
                          local_290 = (undefined *)0x0;
                          _memset(auStack_2d8,0,0x40);
                          uVar3 = local_1b8;
                          (*(code *)PTR__objc_retain_02578638)();
                          local_4a8 = uVar3;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,
                                     auStack_2d8,auStack_b8,0x10);
                          if (local_4a8 != 0) {
                            lVar8 = *local_2c8;
                            local_4b0 = 0;
                            do {
                              do {
                                if (*local_2c8 - lVar8 != 0) {
                                  _objc_enumerationMutation(*local_2c8 - lVar8,uVar3);
                                }
                                uVar9 = *(ulong *)(local_2d0 + local_4b0 * 8);
                                local_298 = uVar9;
                                FUN_0150c2ac(uVar9,0x30);
                                _objc_retainAutoreleasedReturnValue();
                                local_2e0 = uVar9;
                                (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_count_0269cfe0);
                                if (uVar9 == 3) {
                                  uVar9 = local_2e0;
                                  (*(code *)PTR__objc_msgSend_02578628)
                                            (local_2e0,PTR_s_objectAtIndexedSubscript__0269cc78,0);
                                  _objc_retainAutoreleasedReturnValue();
                                  uVar5 = uVar9;
                                  FUN_0150c2ac();
                                  _objc_retainAutoreleasedReturnValue();
                                  local_2e8 = uVar5;
                                  (*(code *)PTR__objc_release_02578630)(uVar9);
                                  uVar9 = local_2e8;
                                  (*(code *)PTR__objc_msgSend_02578628)
                                            (local_2e8,PTR_s_count_0269cfe0);
                                  if (uVar9 < 6) {
                                    local_104 = 3;
                                  }
                                  else {
                                    uVar9 = local_2e8;
                                    (*(code *)PTR__objc_msgSend_02578628)
                                              (local_2e8,PTR_s_objectAtIndexedSubscript__0269cc78,0)
                                    ;
                                    _objc_retainAutoreleasedReturnValue();
                                    uVar5 = uVar9;
                                    FUN_0150c520();
                                    _objc_retainAutoreleasedReturnValue();
                                    (*(code *)PTR__objc_release_02578630)();
                                    (*(code *)PTR__objc_release_02578630)(uVar9);
                                    uVar9 = local_2e8;
                                    local_2f0 = (long)(int)(uint)(uVar5 != 0);
                                    (*(code *)PTR__objc_msgSend_02578628)
                                              (local_2e8,PTR_s_count_0269cfe0);
                                    if (uVar9 < local_2f0 + 6U) {
                                      local_104 = 3;
                                    }
                                    else {
                                      uVar9 = local_288;
                                      (*(code *)PTR__objc_msgSend_02578628)
                                                (local_288,PTR_s_length_0269cca0);
                                      local_301 = 0;
                                      local_311 = 0;
                                      local_321 = 0;
                                      local_331 = 0;
                                      local_341 = 0;
                                      if (uVar9 == 0) {
                                        uVar9 = local_2e8;
                                        (*(code *)PTR__objc_msgSend_02578628)
                                                  (local_2e8,
                                                   PTR_s_objectAtIndexedSubscript__0269cc78,
                                                   local_2f0 + 2);
                                        _objc_retainAutoreleasedReturnValue();
                                        local_311 = 1;
                                        uVar5 = local_280;
                                        local_310 = uVar9;
                                        (*(code *)PTR__objc_msgSend_02578628)
                                                  (local_280,
                                                   PTR_s_objectAtIndexedSubscript__0269cc78,0);
                                        _objc_retainAutoreleasedReturnValue();
                                        local_321 = 1;
                                        local_320 = uVar5;
                                        (*(code *)PTR__objc_msgSend_02578628)
                                                  (uVar9,PTR_s_isEqualToData__026a0a18);
                                        local_4e8 = 0;
                                        if ((uVar9 & 1) != 0) {
                                          uVar9 = local_2e8;
                                          (*(code *)PTR__objc_msgSend_02578628)
                                                    (local_2e8,
                                                     PTR_s_objectAtIndexedSubscript__0269cc78,
                                                     local_2f0);
                                          _objc_retainAutoreleasedReturnValue();
                                          local_331 = 1;
                                          uVar5 = local_280;
                                          local_330 = uVar9;
                                          (*(code *)PTR__objc_msgSend_02578628)
                                                    (local_280,
                                                     PTR_s_objectAtIndexedSubscript__0269cc78,1);
                                          _objc_retainAutoreleasedReturnValue();
                                          local_341 = 1;
                                          local_340 = uVar5;
                                          (*(code *)PTR__objc_msgSend_02578628)
                                                    (uVar9,PTR_s_isEqualToData__026a0a18);
                                          local_4e8 = (uint)uVar9;
                                        }
                                        local_4e4 = local_4e8 & 1;
                                      }
                                      else {
                                        uVar9 = local_2e8;
                                        FUN_0150c684();
                                        _objc_retainAutoreleasedReturnValue();
                                        local_301 = 1;
                                        local_300 = uVar9;
                                        (*(code *)PTR__objc_msgSend_02578628)();
                                        local_4e4 = (uint)uVar9;
                                      }
                                      bVar2 = local_4e4 != 0;
                                      if ((local_341 & 1) != 0) {
                                        (*(code *)PTR__objc_release_02578630)(local_340);
                                      }
                                      if ((local_331 & 1) != 0) {
                                        (*(code *)PTR__objc_release_02578630)(local_330);
                                      }
                                      if ((local_321 & 1) != 0) {
                                        (*(code *)PTR__objc_release_02578630)(local_320);
                                      }
                                      if ((local_311 & 1) != 0) {
                                        (*(code *)PTR__objc_release_02578630)(local_310);
                                      }
                                      if ((local_301 & 1) != 0) {
                                        (*(code *)PTR__objc_release_02578630)(local_300);
                                      }
                                      local_2f1 = bVar2;
                                      if (bVar2) {
                                        if (local_290 == (undefined *)0x0) {
                                          uVar9 = local_2e8;
                                          (*(code *)PTR__objc_msgSend_02578628)
                                                    (local_2e8,
                                                     PTR_s_objectAtIndexedSubscript__0269cc78,
                                                     local_2f0 + 3);
                                          _objc_retainAutoreleasedReturnValue();
                                          uVar5 = uVar9;
                                          FUN_0150c2ac();
                                          _objc_retainAutoreleasedReturnValue();
                                          local_350 = uVar5;
                                          (*(code *)PTR__objc_release_02578630)(uVar9);
                                          uVar9 = local_350;
                                          (*(code *)PTR__objc_msgSend_02578628)
                                                    (local_350,PTR_s_count_0269cfe0);
                                          if (uVar9 == 2) {
                                            uVar9 = local_350;
                                            (*(code *)PTR__objc_msgSend_02578628)
                                                      (local_350,
                                                       PTR_s_objectAtIndexedSubscript__0269cc78,0);
                                            _objc_retainAutoreleasedReturnValue();
                                            uVar5 = uVar9;
                                            FUN_0150cc6c();
                                            _objc_retainAutoreleasedReturnValue();
                                            local_358 = uVar5;
                                            (*(code *)PTR__objc_release_02578630)(uVar9);
                                            uVar9 = local_350;
                                            (*(code *)PTR__objc_msgSend_02578628)
                                                      (local_350,
                                                       PTR_s_objectAtIndexedSubscript__0269cc78,1);
                                            _objc_retainAutoreleasedReturnValue();
                                            uVar5 = uVar9;
                                            FUN_0150cc6c();
                                            _objc_retainAutoreleasedReturnValue();
                                            local_360 = uVar5;
                                            (*(code *)PTR__objc_release_02578630)(uVar9);
                                            if ((local_358 == 0) || (local_360 == 0)) {
LAB_0150546c:
                                              puVar4 = *(undefined **)
                                                        PTR____NSDictionary0___02578288;
                                              (*(code *)PTR__objc_retain_02578638)();
                                              local_104 = 1;
                                              local_f8 = puVar4;
                                            }
                                            else {
                                              uVar9 = local_360;
                                              (*(code *)PTR__objc_msgSend_02578628)
                                                        (local_360,PTR_s_compare__0269cd10,local_358
                                                        );
                                              if (uVar9 + 1 == 0) goto LAB_0150546c;
                                              pcVar6 = (cfstringStruct *)0x0;
                                              _SecCertificateCreateWithData(uVar9 + 1,0,local_298);
                                              local_368 = pcVar6;
                                              if (pcVar6 == (cfstringStruct *)0x0) {
                                                puVar4 = *(undefined **)
                                                          PTR____NSDictionary0___02578288;
                                                (*(code *)PTR__objc_retain_02578638)();
                                                local_104 = 1;
                                                local_f8 = puVar4;
                                              }
                                              else {
                                                _SecCertificateCopySubjectSummary();
                                                local_f0 = pcVar6;
                                                _objc_autoreleaseReturnValue();
                                                _objc_retainAutoreleasedReturnValue();
                                                local_370 = pcVar6;
                                                _CFRelease(local_368);
                                                local_e8 = &cf_Name;
                                                if (local_370 == (cfstringStruct *)0x0) {
                                                  local_578 = &cf__gw__T;
                                                }
                                                else {
                                                  local_578 = local_370;
                                                }
                                                local_d0 = local_578;
                                                local_e0 = &cf_CreationDate;
                                                local_c8 = local_358;
                                                local_d8 = &cf_ExpirationDate;
                                                local_c0 = local_360;
                                                puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                                                (*(code *)PTR__objc_msgSend_02578628)
                                                          (PTR__OBJC_CLASS___NSDictionary_026ce090,
                                                                                                                      
                                                  PTR_s_dictionaryWithObjects_forKeys_co_0269d528,
                                                  &local_d0,&local_e8,3);
                                                _objc_retainAutoreleasedReturnValue();
                                                puVar4 = local_290;
                                                local_290 = puVar7;
                                                (*(code *)PTR__objc_release_02578630)(puVar4);
                                                _objc_storeStrong(&local_370,0);
                                                local_104 = 0;
                                              }
                                            }
                                            _objc_storeStrong(&local_360);
                                            _objc_storeStrong(&local_358,0);
                                          }
                                          else {
                                            puVar4 = *(undefined **)PTR____NSDictionary0___02578288;
                                            (*(code *)PTR__objc_retain_02578638)();
                                            local_104 = 1;
                                            local_f8 = puVar4;
                                          }
                                          _objc_storeStrong(&local_350,0);
                                        }
                                        else {
                                          puVar4 = *(undefined **)PTR____NSDictionary0___02578288;
                                          (*(code *)PTR__objc_retain_02578638)();
                                          local_104 = 1;
                                          local_f8 = puVar4;
                                        }
                                      }
                                      else {
                                        local_104 = 3;
                                      }
                                    }
                                  }
                                  _objc_storeStrong(&local_2e8,0);
                                }
                                else {
                                  local_104 = 3;
                                }
                                _objc_storeStrong(&local_2e0,0);
                                if ((local_104 != 0) && (local_104 != 3)) goto LAB_015056b0;
                                local_4b0 = local_4b0 + 1;
                              } while (local_4b0 < local_4a8);
                              local_4a8 = uVar3;
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,
                                         auStack_2d8,auStack_b8,0x10);
                              local_4b0 = 0;
                            } while (local_4a8 != 0);
                          }
                          local_104 = 0;
LAB_015056b0:
                          (*(code *)PTR__objc_release_02578630)(uVar3);
                          if (local_104 == 0) {
                            if (local_290 == (undefined *)0x0) {
                              local_598 = *(undefined **)PTR____NSDictionary0___02578288;
                            }
                            else {
                              local_598 = local_290;
                            }
                            (*(code *)PTR__objc_retain_02578638)();
                            local_f8 = local_598;
                            local_104 = 1;
                          }
                          _objc_storeStrong(&local_290,0);
                        }
                        else {
                          puVar4 = *(undefined **)PTR____NSDictionary0___02578288;
                          (*(code *)PTR__objc_retain_02578638)();
                          local_104 = 1;
                          local_f8 = puVar4;
                        }
                        _objc_storeStrong(&local_288);
                        _objc_storeStrong(&local_280,0);
                        _objc_storeStrong(&local_278,0);
                      }
                    }
                  }
                }
                _objc_storeStrong(&local_1e8,0);
              }
              else {
                puVar4 = *(undefined **)PTR____NSDictionary0___02578288;
                (*(code *)PTR__objc_retain_02578638)();
                local_104 = 1;
                local_f8 = puVar4;
              }
              _objc_storeStrong(&local_1e0,0);
            }
            _objc_storeStrong(&local_1b8,0);
          }
          _objc_storeStrong(&local_150,0);
        }
        else {
          puVar4 = *(undefined **)PTR____NSDictionary0___02578288;
          (*(code *)PTR__objc_retain_02578638)();
          local_104 = 1;
          local_f8 = puVar4;
        }
        _objc_storeStrong(&local_148,0);
      }
      else {
        puVar4 = *(undefined **)PTR____NSDictionary0___02578288;
        (*(code *)PTR__objc_retain_02578638)();
        local_104 = 1;
        local_f8 = puVar4;
      }
      _objc_storeStrong(&local_110,0);
      goto LAB_015057c4;
    }
  }
  puVar4 = *(undefined **)PTR____NSDictionary0___02578288;
  (*(code *)PTR__objc_retain_02578638)();
  local_104 = 1;
  local_f8 = puVar4;
LAB_015057c4:
  _objc_storeStrong(&local_100,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_f8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

