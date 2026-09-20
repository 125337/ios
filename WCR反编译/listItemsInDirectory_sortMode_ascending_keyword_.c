// listItemsInDirectory:sortMode:ascending:keyword: @ 015b7c80

/* Function Stack Size: 0x2c bytes */

ID WCRefineVoicePackStore::listItemsInDirectory_sortMode_ascending_keyword_
             (ID param_1,SEL param_2,ID param_3,long_long param_4,bool param_5,ID param_6)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  cfstringStruct *pcVar7;
  ulong uVar8;
  uint local_4f4;
  undefined *local_4d8;
  undefined *local_4d0;
  cfstringStruct *local_480;
  cfstringStruct *local_470;
  cfstringStruct *local_430;
  cfstringStruct *local_418;
  cfstringStruct *local_400;
  cfstringStruct *local_3e8;
  cfstringStruct *local_3c0;
  cfstringStruct *local_3b8;
  cfstringStruct *local_370;
  cfstringStruct *local_360;
  undefined *local_338;
  undefined4 local_330;
  undefined4 local_32c;
  code *local_328;
  undefined *local_320;
  undefined *local_318;
  byte local_310;
  byte local_30f;
  undefined *local_308;
  byte local_2f9;
  cfstringStruct *local_2f8;
  byte local_2e9;
  ulong local_2e8;
  byte local_2d9;
  cfstringStruct *local_2d8;
  undefined1 auStack_2d0 [8];
  long local_2c8;
  long *local_2c0;
  ulong local_290;
  undefined8 local_288;
  undefined *local_280;
  undefined8 local_278;
  byte local_269;
  cfstringStruct *local_268;
  bool local_259;
  cfstringStruct *local_258;
  cfstringStruct *local_250;
  byte local_241;
  cfstringStruct *local_240;
  undefined *local_238;
  cfstringStruct *local_230;
  cfstringStruct *local_228;
  int local_21c;
  cfstringStruct *local_218;
  undefined *local_210;
  cfstringStruct *local_208;
  undefined *local_200;
  cfstringStruct *local_1f8;
  cfstringStruct *local_1f0;
  undefined1 auStack_1e8 [8];
  long local_1e0;
  long *local_1d8;
  cfstringStruct *local_1a8;
  cfstringStruct *local_1a0;
  undefined *local_198;
  cfstringStruct *local_190;
  cfstringStruct *local_188;
  undefined *local_180;
  byte local_171;
  cfstringStruct *local_170;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  byte local_151;
  long_long local_150;
  cfstringStruct *local_148;
  SEL local_140;
  cfstringStruct *local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_148 = (cfstringStruct *)0x0;
  local_140 = param_2;
  local_138 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_148,param_3);
  local_151 = (byte)param_5;
  local_160 = (cfstringStruct *)0x0;
  local_150 = param_4;
  _objc_storeStrong(&local_160,param_6);
  (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_ensureRootDirectoryExists__026a3c70,0);
  pcVar2 = local_148;
  (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_length_0269cca0);
  local_171 = 0;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_360 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_rootAbsolutePath_026ae1f8);
    _objc_retainAutoreleasedReturnValue();
    local_170 = local_360;
  }
  else {
    local_360 = local_148;
  }
  local_171 = pcVar2 == (cfstringStruct *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_168 = local_360;
  if ((local_171 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_170);
  }
  puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_160;
  local_180 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_370 = &::cf___;
  }
  else {
    local_370 = local_160;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_188 = local_370;
  puVar4 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_370,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_370;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  pcVar7 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_190 = pcVar7;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(local_370);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_190;
  local_198 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_278 = 0;
    local_288 = 0;
    puVar4 = local_180;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_180,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_168,&local_288);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(&local_278,local_288);
    local_280 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      puVar4 = *(undefined **)PTR____NSArray0___02578280;
      (*(code *)PTR__objc_retain_02578638)();
      local_21c = 1;
      local_130 = puVar4;
    }
    else {
      _memset(auStack_2d0,0,0x40);
      puVar4 = local_280;
      (*(code *)PTR__objc_retain_02578638)();
      local_4d0 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2d0,auStack_128,0x10
                );
      if (local_4d0 != (undefined *)0x0) {
        lVar6 = *local_2c0;
        local_4d8 = (undefined *)0x0;
        do {
          do {
            if (*local_2c0 - lVar6 != 0) {
              _objc_enumerationMutation(*local_2c0 - lVar6,puVar4);
            }
            uVar8 = *(ulong *)(local_2c8 + (long)local_4d8 * 8);
            local_290 = uVar8;
            (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_hasPrefix__0269d320,&::cf__);
            if ((uVar8 & 1) == 0) {
              pcVar2 = local_168;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_168,PTR_s_stringByAppendingPathComponent__026cab30,local_290);
              _objc_retainAutoreleasedReturnValue();
              local_2d9 = 0;
              puVar5 = local_180;
              local_2d8 = pcVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_180,PTR_s_fileExistsAtPath_isDirectory__026ca638,pcVar2,&local_2d9);
              pcVar2 = local_138;
              if (((ulong)puVar5 & 1) == 0) {
                local_21c = 5;
              }
              else {
                local_2e9 = 0;
                local_4f4 = 0;
                if ((local_2d9 & 1) == 0) {
                  uVar8 = local_290;
                  (*(code *)PTR__objc_msgSend_02578628)(local_290,PTR_s_pathExtension_0269e090);
                  _objc_retainAutoreleasedReturnValue();
                  local_2e9 = 1;
                  local_2e8 = uVar8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (pcVar2,PTR_s_isSupportedAudioExtension__026a9d50);
                  local_4f4 = (uint)pcVar2 ^ 1;
                }
                if ((local_2e9 & 1) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_2e8);
                }
                if ((local_4f4 & 1) == 0) {
                  pcVar2 = local_138;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_138,PTR_s_wcr_itemAtAbsolutePath_isDirecto_026b0d18,local_2d8,
                             local_2d9 & 1);
                  _objc_retainAutoreleasedReturnValue();
                  local_2f8 = pcVar2;
                  if (pcVar2 != (cfstringStruct *)0x0) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_198,PTR_s_addObject__0269d180,pcVar2);
                  }
                  _objc_storeStrong(&local_2f8,0);
                  local_21c = 0;
                }
                else {
                  local_21c = 5;
                }
              }
              _objc_storeStrong(&local_2d8,0);
            }
            local_4d8 = local_4d8 + 1;
          } while (local_4d8 < local_4d0);
          local_4d0 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2d0,auStack_128,
                     0x10);
          local_4d8 = (undefined *)0x0;
        } while (local_4d0 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar4);
      local_21c = 0;
    }
    _objc_storeStrong(&local_280);
    _objc_storeStrong(&local_278,0);
    if (local_21c != 0) goto LAB_015b8ddc;
  }
  else {
    pcVar2 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_138,PTR_s_wcr_searchIndexForDirectory__026b0d10,local_168);
    _objc_retainAutoreleasedReturnValue();
    local_1a0 = pcVar2;
    _memset(auStack_1e8,0,0x40);
    pcVar2 = local_1a0;
    (*(code *)PTR__objc_retain_02578638)();
    local_3b8 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e8,auStack_a8,0x10);
    if (local_3b8 != (cfstringStruct *)0x0) {
      lVar6 = *local_1d8;
      local_3c0 = (cfstringStruct *)0x0;
      do {
        do {
          if (*local_1d8 - lVar6 != 0) {
            _objc_enumerationMutation(*local_1d8 - lVar6,pcVar2);
          }
          pcVar7 = *(cfstringStruct **)(local_1e0 + (long)local_3c0 * 8);
          local_1a8 = pcVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar7,PTR_s_objectForKeyedSubscript__0269d098,&cf_nameLower);
          _objc_retainAutoreleasedReturnValue();
          local_3e8 = pcVar7;
          if (pcVar7 == (cfstringStruct *)0x0) {
            local_3e8 = &::cf___;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_1f0 = local_3e8;
          (*(code *)PTR__objc_release_02578630)(pcVar7);
          pcVar7 = local_1a8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_relLower);
          _objc_retainAutoreleasedReturnValue();
          local_400 = pcVar7;
          if (pcVar7 == (cfstringStruct *)0x0) {
            local_400 = &::cf___;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_1f8 = local_400;
          (*(code *)PTR__objc_release_02578630)(pcVar7);
          pcVar7 = local_1f0;
          puVar4 = PTR_s_rangeOfString__0269d838;
          (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_rangeOfString__0269d838,local_190);
          local_208 = pcVar7;
          local_200 = puVar4;
          if ((pcVar7 == (cfstringStruct *)0x7fffffffffffffff) &&
             (pcVar7 = local_1f8, puVar4 = PTR_s_rangeOfString__0269d838,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_1f8,PTR_s_rangeOfString__0269d838,local_190), local_218 = pcVar7,
             local_210 = puVar4, pcVar7 == (cfstringStruct *)0x7fffffffffffffff)) {
            local_21c = 3;
          }
          else {
            pcVar7 = local_1a8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_rel);
            _objc_retainAutoreleasedReturnValue();
            local_418 = pcVar7;
            if (pcVar7 == (cfstringStruct *)0x0) {
              local_418 = &::cf___;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_228 = local_418;
            (*(code *)PTR__objc_release_02578630)(pcVar7);
            pcVar7 = local_168;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_168,PTR_s_stringByAppendingPathComponent__026cab30,local_228);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = PTR_WCRefineVoicePackItem_026cedd8;
            local_230 = pcVar7;
            _objc_alloc_init();
            pcVar7 = local_1a8;
            local_238 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
            _objc_retainAutoreleasedReturnValue();
            local_241 = 0;
            local_430 = pcVar7;
            if (pcVar7 == (cfstringStruct *)0x0) {
              local_430 = local_230;
              (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_lastPathComponent_026ca780);
              _objc_retainAutoreleasedReturnValue();
              local_240 = local_430;
            }
            local_241 = pcVar7 == (cfstringStruct *)0x0;
            (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_setName__0269e0c8,local_430);
            if ((local_241 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_240);
            }
            (*(code *)PTR__objc_release_02578630)(pcVar7);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_238,PTR_s_setAbsolutePath__026ae2c8,local_230);
            pcVar7 = local_138;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_138,PTR_s_relativePathFromAbsolute__026ae380,local_230);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_setRelativePath__026a7440);
            (*(code *)PTR__objc_release_02578630)(pcVar7);
            (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_setIsDirectory__026b0ce8,0);
            pcVar7 = local_1a8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_mtime);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_setModificationDate__026b0cf0);
            (*(code *)PTR__objc_release_02578630)(pcVar7);
            pcVar7 = local_1a8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_size);
            _objc_retainAutoreleasedReturnValue();
            pcVar3 = pcVar7;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_setFileSize__026ac4f0,pcVar3);
            (*(code *)PTR__objc_release_02578630)(pcVar7);
            pcVar7 = local_138;
            puVar4 = local_238;
            (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_relativePath_026ac370);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_bindingForRelativePath__026b0bb0);
            _objc_retainAutoreleasedReturnValue();
            local_250 = pcVar7;
            (*(code *)PTR__objc_release_02578630)(puVar4);
            if (local_250 != (cfstringStruct *)0x0) {
              pcVar7 = local_250;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_250,PTR_s_objectForKeyedSubscript__0269d098,&cf_repositoryCode);
              _objc_retainAutoreleasedReturnValue();
              puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              pcVar3 = pcVar7;
              (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_isKindOfClass__0269cd68,puVar4);
              local_259 = false;
              bVar1 = ((ulong)pcVar3 & 1) == 0;
              if (bVar1) {
                local_470 = (cfstringStruct *)0x0;
              }
              else {
                local_470 = local_250;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_250,PTR_s_objectForKeyedSubscript__0269d098,&cf_repositoryCode);
                _objc_retainAutoreleasedReturnValue();
                local_258 = local_470;
              }
              local_259 = !bVar1;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_238,PTR_s_setRepositoryCode__026b0cf8,local_470);
              if ((local_259 & 1U) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_258);
              }
              (*(code *)PTR__objc_release_02578630)(pcVar7);
              pcVar7 = local_250;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_250,PTR_s_objectForKeyedSubscript__0269d098,&cf_sendOrder);
              _objc_retainAutoreleasedReturnValue();
              pcVar3 = pcVar7;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_269 = 0;
              if (((ulong)pcVar3 & 1) == 0) {
                local_480 = (cfstringStruct *)0x0;
              }
              else {
                local_480 = local_250;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_250,PTR_s_objectForKeyedSubscript__0269d098,&cf_sendOrder);
                _objc_retainAutoreleasedReturnValue();
                local_269 = 1;
                local_268 = local_480;
                (*(code *)PTR__objc_msgSend_02578628)();
              }
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_238,PTR_s_setSendOrder__026b0bb8,local_480);
              if ((local_269 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_268);
              }
              (*(code *)PTR__objc_release_02578630)(pcVar7);
            }
            (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_addObject__0269d180,local_238);
            _objc_storeStrong(&local_250);
            _objc_storeStrong(&local_238,0);
            _objc_storeStrong(&local_230,0);
            _objc_storeStrong(&local_228,0);
            local_21c = 0;
          }
          _objc_storeStrong(&local_1f8);
          _objc_storeStrong(&local_1f0,0);
          local_3c0 = (cfstringStruct *)((long)&local_3c0->field0_0x0 + 1);
        } while (local_3c0 < local_3b8);
        local_3b8 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e8,auStack_a8,
                   0x10);
        local_3c0 = (cfstringStruct *)0x0;
      } while (local_3b8 != (cfstringStruct *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    _objc_storeStrong(&local_1a0,0);
  }
  puVar4 = PTR__OBJC_CLASS___NSSet_026ce150;
  local_2f9 = local_150 == 1 || local_150 == 2;
  pcVar2 = local_138;
  (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_pinnedRelativePaths_026b0cd0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setWithArray__0269d9a0);
  _objc_retainAutoreleasedReturnValue();
  local_308 = puVar4;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  puVar5 = local_198;
  puVar4 = local_308;
  local_338 = PTR___NSConcreteGlobalBlock_02578658;
  local_330 = 0xd0800000;
  local_32c = 0;
  local_328 = FUN_015b8e70;
  local_320 = &DAT_025870e8;
  (*(code *)PTR__objc_retain_02578638)();
  local_318 = puVar4;
  local_310 = local_2f9 & 1;
  local_30f = local_151 & 1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_sortUsingComparator__0269d168,&local_338);
  puVar4 = local_198;
  (*(code *)PTR__objc_retain_02578638)();
  local_130 = puVar4;
  local_21c = 1;
  _objc_storeStrong(&local_318);
  _objc_storeStrong(&local_308,0);
LAB_015b8ddc:
  _objc_storeStrong(&local_198);
  _objc_storeStrong(&local_190,0);
  _objc_storeStrong(&local_188,0);
  _objc_storeStrong(&local_180,0);
  _objc_storeStrong(&local_168,0);
  _objc_storeStrong(&local_160,0);
  _objc_storeStrong(&local_148,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_130;
}

