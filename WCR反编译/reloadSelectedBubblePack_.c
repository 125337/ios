// reloadSelectedBubblePack: @ 015ca414

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x14 bytes */

void __thiscall
WCRefineWechatThemeStore::reloadSelectedBubblePack_
          (WCRefineWechatThemeStore *this,ID param_1,SEL param_2,bool param_3)

{
  bool bVar1;
  byte bVar2;
  cfstringStruct *pcVar3;
  ID IVar4;
  undefined *puVar5;
  ID IVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined8 in_d0;
  uint local_480;
  uint local_47c;
  undefined *local_460;
  undefined *local_458;
  undefined *local_410;
  ulong local_408;
  undefined *local_3b8;
  undefined *local_3b0;
  ID local_348;
  uint local_32c;
  ID local_310;
  cfstringStruct *local_2f8;
  ulong local_2e0;
  undefined *local_2d8;
  undefined1 auStack_2d0 [8];
  long local_2c8;
  long *local_2c0;
  long local_290;
  undefined *local_288;
  ulong local_280;
  ulong local_278;
  ulong local_270;
  ulong local_268;
  ID local_260;
  ulong local_258;
  undefined1 auStack_250 [8];
  long local_248;
  long *local_240;
  ulong local_210;
  undefined8 local_208;
  undefined *local_200;
  undefined *local_1f8;
  undefined *local_1f0;
  undefined *local_1e8;
  undefined *local_1e0;
  undefined4 local_1d8;
  byte local_1d1;
  ID local_1d0;
  byte local_1c1;
  undefined *local_1c0;
  byte local_1b3;
  byte local_1b2;
  bool local_1b1;
  ID local_1b0;
  byte local_1a1;
  ID local_1a0;
  ID local_198;
  bool local_189;
  cfstringStruct *local_188;
  byte local_179;
  cfstringStruct *local_178;
  cfstringStruct *local_170;
  undefined1 local_161;
  SEL local_160;
  ID local_158;
  ulong local_150;
  ulong local_148;
  undefined1 auStack_140 [128];
  undefined1 auStack_c0 [128];
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_161 = (undefined1)param_3;
  local_179 = 0;
  local_189 = false;
  bVar1 = (param_3 & 1) == 0;
  local_160 = param_2;
  local_158 = param_1;
  if (bVar1) {
    local_2f8 = &::cf___;
  }
  else {
    local_2f8 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_179 = 1;
    local_178 = local_2f8;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_188 = local_2f8;
  }
  local_189 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_170 = local_2f8;
  if ((local_189 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_188);
  }
  if ((local_179 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_178);
  }
  pcVar3 = local_170;
  (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_length_0269cca0);
  local_1a1 = 0;
  local_1b1 = false;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_310 = 0;
  }
  else {
    local_310 = local_158;
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_repositoryPath_026aeb48);
    _objc_retainAutoreleasedReturnValue();
    local_1a1 = 1;
    local_1a0 = local_310;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_1b0 = local_310;
  }
  local_1b1 = pcVar3 != (cfstringStruct *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_198 = local_310;
  if ((local_1b1 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_1b0);
  }
  if ((local_1a1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_1a0);
  }
  local_1b2 = 0;
  IVar4 = local_198;
  (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_length_0269cca0);
  local_1c1 = 0;
  bVar2 = 0;
  if (IVar4 != 0) {
    puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_1c1 = 1;
    local_1c0 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar2 = 0;
    if (((ulong)puVar5 & 1) != 0) {
      bVar2 = local_1b2;
    }
  }
  if ((local_1c1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_1c0);
  }
  IVar4 = local_198;
  local_1b3 = bVar2 & 1;
  local_1d1 = 0;
  local_32c = 0;
  if ((bVar2 & 1) != 0) {
    IVar6 = local_158;
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_selectedThemePath_026aeb50);
    _objc_retainAutoreleasedReturnValue();
    local_1d1 = 1;
    local_1d0 = IVar6;
    (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_isEqualToString__0269ccc8);
    local_32c = (uint)IVar4;
  }
  if ((local_1d1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_1d0);
  }
  if ((local_32c & 1) != 0) {
    local_1b3 = 0;
  }
  if ((local_1b3 & 1) == 0) {
    local_348 = 0;
  }
  else {
    local_348 = local_198;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_setSelectedBubblePath__026b0ee0,local_348);
  puVar7 = PTR__OBJC_CLASS___NSSet_026ce150;
  puVar5 = PTR____NSDictionary0___02578288;
  if ((local_1b3 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_158,PTR_s_setBubblePngPaths__026b0ee8,
               *(undefined8 *)PTR____NSDictionary0___02578288);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_158,PTR_s_setBubbleSvgPaths__026b0ef0,*(undefined8 *)puVar5);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_158,PTR_s_setBubbleCarCatalogs__026b0ef8,
               *(undefined8 *)PTR____NSArray0___02578280);
    local_1d8 = 1;
  }
  else {
    local_40 = &cf_png;
    local_38 = &cf_svg;
    local_30 = &cf_car;
    puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,3
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_setWithArray__0269d9a0);
    _objc_retainAutoreleasedReturnValue();
    local_1e0 = puVar7;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath_isDirectory__026a8f30,
               local_198,1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_enumeratorAtURL_includingPropert_026b0eb8,puVar7,0,4);
    _objc_retainAutoreleasedReturnValue();
    local_1e8 = puVar8;
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    local_1f0 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_1f8 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___UIScreen_026cdf70;
    local_200 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar7);
    local_208 = in_d0;
    _memset(auStack_250,0,0x40);
    puVar5 = local_1e8;
    (*(code *)PTR__objc_retain_02578638)();
    local_3b0 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_250,auStack_c0,0x10);
    if (local_3b0 != (undefined *)0x0) {
      lVar11 = *local_240;
      local_3b8 = (undefined *)0x0;
      do {
        do {
          if (*local_240 - lVar11 != 0) {
            _objc_enumerationMutation(*local_240 - lVar11,puVar5);
          }
          uVar14 = *(ulong *)(local_248 + (long)local_3b8 * 8);
          local_210 = uVar14;
          (*(code *)PTR__objc_msgSend_02578628)(uVar14,PTR_s_hasDirectoryPath_026b0ec0);
          if ((uVar14 & 1) == 0) {
            uVar14 = local_210;
            (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_pathExtension_0269e090);
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar14;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            local_258 = uVar9;
            (*(code *)PTR__objc_release_02578630)(uVar14);
            puVar7 = local_1e0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1e0,PTR_s_containsObject__0269cbb8,local_258);
            if (((ulong)puVar7 & 1) == 0) {
              local_1d8 = 3;
            }
            else {
              uVar14 = local_258;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_258,PTR_s_isEqualToString__0269ccc8,&cf_car);
              if ((uVar14 & 1) == 0) {
                uVar14 = local_210;
                (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_path_0269d4d8);
                _objc_retainAutoreleasedReturnValue();
                IVar4 = local_198;
                (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_length_0269cca0);
                local_270 = IVar4 + 1;
                uVar9 = local_210;
                (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_path_0269d4d8);
                _objc_retainAutoreleasedReturnValue();
                uVar10 = uVar9;
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(uVar9);
                local_408 = uVar10;
                if (local_270 < uVar10) {
                  local_408 = local_270;
                }
                local_280 = local_408;
                uVar9 = uVar14;
                local_278 = uVar10;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar14,PTR_s_substringFromIndex__0269d120,local_408);
                _objc_retainAutoreleasedReturnValue();
                local_268 = uVar9;
                (*(code *)PTR__objc_release_02578630)(uVar14);
                uVar14 = local_258;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_258,PTR_s_isEqualToString__0269ccc8,&cf_png);
                if ((uVar14 & 1) == 0) {
                  local_410 = local_1f8;
                }
                else {
                  local_410 = local_1f0;
                }
                (*(code *)PTR__objc_retain_02578638)();
                local_288 = local_410;
                _memset(auStack_2d0,0,0x40);
                uVar14 = local_210;
                (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_lastPathComponent_026ca780);
                _objc_retainAutoreleasedReturnValue();
                uVar9 = uVar14;
                FUN_015ca2a4();
                _objc_retainAutoreleasedReturnValue();
                uVar10 = local_268;
                local_150 = uVar9;
                FUN_015ca2a4();
                _objc_retainAutoreleasedReturnValue();
                puVar7 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                local_148 = uVar10;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70
                           ,&local_150,2);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_release_02578630)(uVar10);
                (*(code *)PTR__objc_release_02578630)(uVar9);
                (*(code *)PTR__objc_release_02578630)(uVar14);
                local_458 = puVar7;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2d0,
                           auStack_140,0x10);
                if (local_458 != (undefined *)0x0) {
                  lVar12 = *local_2c0;
                  local_460 = (undefined *)0x0;
                  do {
                    do {
                      if (*local_2c0 - lVar12 != 0) {
                        _objc_enumerationMutation(*local_2c0 - lVar12,puVar7);
                      }
                      lVar13 = *(long *)(local_2c8 + (long)local_460 * 8);
                      local_290 = lVar13;
                      (*(code *)PTR__objc_msgSend_02578628)(lVar13,PTR_s_length_0269cca0);
                      if (lVar13 != 0) {
                        puVar8 = local_288;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_288,PTR_s_objectForKeyedSubscript__0269d098,local_290);
                        _objc_retainAutoreleasedReturnValue();
                        bVar1 = false;
                        local_47c = 1;
                        local_2d8 = puVar8;
                        if (puVar8 != (undefined *)0x0) {
                          uVar14 = local_258;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_258,PTR_s_isEqualToString__0269ccc8,&cf_png);
                          IVar4 = local_158;
                          local_480 = 0;
                          bVar1 = (uVar14 & 1) != 0;
                          if (bVar1) {
                            local_2e0 = local_210;
                            (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_path_0269d4d8);
                            _objc_retainAutoreleasedReturnValue();
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_208,IVar4,PTR_s_pngPath_isBetterThan_forScale__026b0ed0
                                       ,local_2e0,local_2d8);
                            local_480 = (uint)IVar4;
                          }
                          local_47c = local_480;
                        }
                        if (bVar1) {
                          (*(code *)PTR__objc_release_02578630)(local_2e0);
                        }
                        if ((local_47c & 1) != 0) {
                          uVar14 = local_210;
                          (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_path_0269d4d8);
                          _objc_retainAutoreleasedReturnValue();
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_288,PTR_s_setObject_forKeyedSubscript__0269d248,uVar14,
                                     local_290);
                          (*(code *)PTR__objc_release_02578630)(uVar14);
                        }
                        _objc_storeStrong(&local_2d8,0);
                      }
                      local_460 = local_460 + 1;
                    } while (local_460 < local_458);
                    local_458 = puVar7;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2d0,
                               auStack_140,0x10);
                    local_460 = (undefined *)0x0;
                  } while (local_458 != (undefined *)0x0);
                }
                (*(code *)PTR__objc_release_02578630)(puVar7);
                _objc_storeStrong(&local_288);
                _objc_storeStrong(&local_268,0);
                local_1d8 = 0;
              }
              else {
                IVar4 = local_158;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_158,PTR_s_catalogAtURL__026b0ec8,local_210);
                _objc_retainAutoreleasedReturnValue();
                local_260 = IVar4;
                if (IVar4 != 0) {
                  (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_addObject__0269d180,IVar4);
                }
                local_1d8 = 3;
                _objc_storeStrong(&local_260,0);
              }
            }
            _objc_storeStrong(&local_258,0);
          }
          local_3b8 = local_3b8 + 1;
        } while (local_3b8 < local_3b0);
        local_3b0 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_250,auStack_c0,
                   0x10);
        local_3b8 = (undefined *)0x0;
      } while (local_3b0 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_setBubblePngPaths__026b0ee8,local_1f0);
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_setBubbleSvgPaths__026b0ef0,local_1f8);
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_setBubbleCarCatalogs__026b0ef8,local_200);
    _objc_storeStrong(&local_200);
    _objc_storeStrong(&local_1f8,0);
    _objc_storeStrong(&local_1f0,0);
    _objc_storeStrong(&local_1e8,0);
    _objc_storeStrong(&local_1e0,0);
    local_1d8 = 0;
  }
  _objc_storeStrong(&local_198);
  _objc_storeStrong(&local_170,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

