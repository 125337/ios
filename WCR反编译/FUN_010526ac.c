// FUN_010526ac @ 010526ac

void FUN_010526ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  cfstringStruct *pcVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong local_560;
  undefined *local_500;
  undefined *local_4f8;
  undefined *local_4e0;
  cfstringStruct *local_458;
  cfstringStruct *local_408;
  undefined *local_3e0;
  undefined *local_3d8;
  undefined *local_3b0;
  undefined *local_398;
  undefined *local_380;
  undefined *local_368;
  undefined *local_348;
  undefined4 local_340;
  undefined4 local_33c;
  code *local_338;
  undefined *local_330;
  undefined8 local_328;
  undefined8 local_320;
  byte local_311;
  ulong local_310;
  byte local_301;
  ulong local_300;
  ulong local_2f8;
  byte local_2e9;
  ulong local_2e8;
  byte local_2d9;
  long local_2d8;
  bool local_2c9;
  undefined *local_2c8;
  undefined1 auStack_2c0 [8];
  long local_2b8;
  long *local_2b0;
  long local_280;
  ulong local_278;
  cfstringStruct *local_270;
  cfstringStruct *local_268;
  byte local_259;
  cfstringStruct *local_258;
  byte local_249;
  cfstringStruct *local_248;
  cfstringStruct *local_240;
  cfstringStruct *local_238;
  int local_230;
  bool local_229;
  cfstringStruct *local_228;
  cfstringStruct *local_220;
  undefined1 auStack_218 [8];
  long local_210;
  long *local_208;
  cfstringStruct *local_1d8;
  undefined *local_1d0;
  undefined *local_1c8;
  bool local_1b9;
  undefined *local_1b8;
  undefined *local_1b0;
  bool local_1a1;
  undefined *local_1a0;
  undefined *local_198;
  bool local_189;
  undefined *local_188;
  undefined *local_180;
  bool local_171;
  undefined *local_170;
  undefined *local_168;
  long local_160;
  undefined8 local_158;
  undefined8 local_150;
  long local_148;
  long local_140;
  undefined *local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_148 = 0;
  local_140 = param_1;
  _objc_storeStrong(&local_148);
  local_150 = 0;
  _objc_storeStrong(&local_150,param_3);
  local_158 = 0;
  _objc_storeStrong(&local_158,param_4);
  lVar9 = local_148;
  local_160 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_length_0269cca0);
  local_171 = false;
  if (lVar9 == 0) {
    local_368 = (undefined *)0x0;
  }
  else {
    local_368 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
               PTR_s_JSONObjectWithData_options_error_026ca480,local_148,0,0);
    _objc_retainAutoreleasedReturnValue();
    local_170 = local_368;
  }
  local_171 = lVar9 != 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_168 = local_368;
  if ((local_171 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_170);
  }
  puVar2 = local_168;
  (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_objectForKeyedSubscript__0269d098,&cf_data);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  puVar4 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_189 = false;
  bVar1 = ((ulong)puVar4 & 1) == 0;
  if (bVar1) {
    local_380 = (undefined *)0x0;
  }
  else {
    local_380 = local_168;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_168,PTR_s_objectForKeyedSubscript__0269d098,&cf_data);
    _objc_retainAutoreleasedReturnValue();
    local_188 = local_380;
  }
  local_189 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_180 = local_380;
  if ((local_189 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_188);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_180;
  (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_objectForKeyedSubscript__0269d098,&cf_dash);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  puVar4 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_1a1 = false;
  bVar1 = ((ulong)puVar4 & 1) == 0;
  if (bVar1) {
    local_398 = (undefined *)0x0;
  }
  else {
    local_398 = local_180;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_180,PTR_s_objectForKeyedSubscript__0269d098,&cf_dash);
    _objc_retainAutoreleasedReturnValue();
    local_1a0 = local_398;
  }
  local_1a1 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_198 = local_398;
  if ((local_1a1 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_1a0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_198;
  (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_objectForKeyedSubscript__0269d098,&cf_video)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  puVar4 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_1b9 = false;
  bVar1 = ((ulong)puVar4 & 1) == 0;
  if (bVar1) {
    local_3b0 = *(undefined **)PTR____NSArray0___02578280;
  }
  else {
    local_3b0 = local_198;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_198,PTR_s_objectForKeyedSubscript__0269d098,&cf_video);
    _objc_retainAutoreleasedReturnValue();
    local_1b8 = local_3b0;
  }
  local_1b9 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_1b0 = local_3b0;
  if ((local_1b9 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_1b8);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  local_1c8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  local_1d0 = puVar3;
  _memset(auStack_218,0,0x40);
  puVar2 = local_1b0;
  (*(code *)PTR__objc_retain_02578638)();
  local_3d8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_218,auStack_a8,0x10);
  if (local_3d8 != (undefined *)0x0) {
    lVar9 = *local_208;
    local_3e0 = (undefined *)0x0;
    do {
      do {
        if (*local_208 - lVar9 != 0) {
          _objc_enumerationMutation(*local_208 - lVar9,puVar2);
        }
        pcVar10 = *(cfstringStruct **)(local_210 + (long)local_3e0 * 8);
        local_1d8 = pcVar10;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar10,PTR_s_objectForKeyedSubscript__0269d098,&cf_codecs);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        pcVar5 = pcVar10;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar10,PTR_s_isKindOfClass__0269cd68,puVar3);
        local_229 = false;
        bVar1 = ((ulong)pcVar5 & 1) == 0;
        if (bVar1) {
          local_408 = &cf___;
        }
        else {
          local_408 = local_1d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1d8,PTR_s_objectForKeyedSubscript__0269d098,&cf_codecs);
          _objc_retainAutoreleasedReturnValue();
          local_228 = local_408;
        }
        local_229 = !bVar1;
        (*(code *)PTR__objc_retain_02578638)();
        local_220 = local_408;
        if ((local_229 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_228);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar10);
        pcVar5 = local_220;
        (*(code *)PTR__objc_msgSend_02578628)(local_220,PTR_s_lowercaseString_0269d9c0);
        _objc_retainAutoreleasedReturnValue();
        pcVar10 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar5);
        if (((ulong)pcVar10 & 1) == 0) {
          local_230 = 3;
        }
        else {
          pcVar5 = local_1d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1d8,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
          _objc_retainAutoreleasedReturnValue();
          pcVar10 = pcVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(pcVar5);
          puVar3 = local_1d0;
          puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_238 = pcVar10;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,pcVar10);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_containsObject__0269cbb8);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          if (((ulong)puVar3 & 1) == 0) {
            pcVar5 = local_1d8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1d8,PTR_s_objectForKeyedSubscript__0269d098,&cf_baseUrl);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            pcVar10 = pcVar5;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
            local_249 = 0;
            local_259 = 0;
            local_458 = local_1d8;
            if (((ulong)pcVar10 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1d8,PTR_s_objectForKeyedSubscript__0269d098,&cf_base_url);
              _objc_retainAutoreleasedReturnValue();
              local_259 = 1;
              local_258 = local_458;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1d8,PTR_s_objectForKeyedSubscript__0269d098,&cf_baseUrl);
              _objc_retainAutoreleasedReturnValue();
              local_249 = 1;
              local_248 = local_458;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_240 = local_458;
            if ((local_259 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_258);
            }
            if ((local_249 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_248);
            }
            (*(code *)PTR__objc_release_02578630)(pcVar5);
            pcVar5 = local_240;
            (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_length_0269cca0);
            if (pcVar5 == (cfstringStruct *)0x0) {
              local_230 = 3;
            }
            else {
              pcVar5 = local_1d8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1d8,PTR_s_objectForKeyedSubscript__0269d098,&cf_width);
              _objc_retainAutoreleasedReturnValue();
              pcVar10 = pcVar5;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(pcVar5);
              pcVar5 = local_1d8;
              local_268 = pcVar10;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1d8,PTR_s_objectForKeyedSubscript__0269d098,&cf_height);
              _objc_retainAutoreleasedReturnValue();
              pcVar10 = pcVar5;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(pcVar5);
              puVar3 = local_1d0;
              puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
              local_270 = pcVar10;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,
                         local_238);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
              (*(code *)PTR__objc_release_02578630)(puVar4);
              pcVar5 = local_240;
              uVar14 = *(undefined8 *)(param_1 + 0x40);
              uVar13 = *(undefined8 *)(param_1 + 0x40);
              uVar12 = *(undefined8 *)(param_1 + 0x40);
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar12,PTR_s_bilibiliQualityLabel__026ae070,local_238);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar13,PTR_s_variantWithURL_label_width_heigh_026addc8,pcVar5,uVar12,
                         local_268,local_270,0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar14,PTR_s_appendUniqueVariant_to__026addd0,uVar13,local_1c8);
              (*(code *)PTR__objc_release_02578630)(uVar13);
              (*(code *)PTR__objc_release_02578630)(uVar12);
              local_230 = 0;
            }
            _objc_storeStrong(&local_240,0);
          }
          else {
            local_230 = 3;
          }
        }
        _objc_storeStrong(&local_220,0);
        local_3e0 = local_3e0 + 1;
      } while (local_3e0 < local_3d8);
      local_3d8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_218,auStack_a8,0x10)
      ;
      local_3e0 = (undefined *)0x0;
    } while (local_3d8 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_278 = 0;
  _memset(auStack_2c0,0,0x40);
  puVar2 = local_198;
  (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_objectForKeyedSubscript__0269d098,&cf_audio)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  puVar4 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_2c9 = false;
  bVar1 = ((ulong)puVar4 & 1) == 0;
  if (bVar1) {
    local_4e0 = *(undefined **)PTR____NSArray0___02578280;
  }
  else {
    local_4e0 = local_198;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_198,PTR_s_objectForKeyedSubscript__0269d098,&cf_audio);
    _objc_retainAutoreleasedReturnValue();
    local_2c8 = local_4e0;
  }
  local_2c9 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  if ((local_2c9 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_2c8);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_4f8 = local_4e0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_4e0,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c0,auStack_128,0x10)
  ;
  if (local_4f8 != (undefined *)0x0) {
    lVar9 = *local_2b0;
    local_500 = (undefined *)0x0;
    do {
      do {
        if (*local_2b0 - lVar9 != 0) {
          _objc_enumerationMutation(*local_2b0 - lVar9,local_4e0);
        }
        lVar11 = *(long *)(local_2b8 + (long)local_500 * 8);
        local_2d9 = 0;
        local_2e9 = 0;
        bVar1 = true;
        local_280 = lVar11;
        if (local_278 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(lVar11,PTR_s_objectForKeyedSubscript__0269d098);
          _objc_retainAutoreleasedReturnValue();
          local_2d9 = 1;
          local_2d8 = lVar11;
          (*(code *)PTR__objc_msgSend_02578628)();
          uVar6 = local_278;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_278,PTR_s_objectForKeyedSubscript__0269d098,&cf_bandwidth);
          _objc_retainAutoreleasedReturnValue();
          local_2e9 = 1;
          local_2e8 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          bVar1 = (long)uVar6 < lVar11;
        }
        if ((local_2e9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_2e8);
        }
        if ((local_2d9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_2d8);
        }
        if (bVar1) {
          _objc_storeStrong(&local_278,local_280);
        }
        local_500 = local_500 + 1;
      } while (local_500 < local_4f8);
      local_4f8 = local_4e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_4e0,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c0,auStack_128,
                 0x10);
      local_500 = (undefined *)0x0;
    } while (local_4f8 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(local_4e0);
  uVar6 = local_278;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_278,PTR_s_objectForKeyedSubscript__0269d098,&cf_baseUrl);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  uVar7 = uVar6;
  (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_301 = 0;
  local_311 = 0;
  local_560 = local_278;
  if ((uVar7 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_278,PTR_s_objectForKeyedSubscript__0269d098,&cf_base_url);
    _objc_retainAutoreleasedReturnValue();
    local_311 = 1;
    local_310 = local_560;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_278,PTR_s_objectForKeyedSubscript__0269d098,&cf_baseUrl);
    _objc_retainAutoreleasedReturnValue();
    local_301 = 1;
    local_300 = local_560;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_2f8 = local_560;
  if ((local_311 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_310);
  }
  if ((local_301 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_300);
  }
  (*(code *)PTR__objc_release_02578630)(uVar6);
  puVar2 = local_1c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_count_0269cfe0);
  if ((puVar2 == (undefined *)0x0) ||
     (uVar6 = local_2f8, (*(code *)PTR__objc_msgSend_02578628)(local_2f8,PTR_s_length_0269cca0),
     uVar6 == 0)) {
    uVar12 = *(undefined8 *)(param_1 + 0x40);
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0x50);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_138 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0x10);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_130 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_138,
               2);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_1 + 0x20);
    uVar15 = *(undefined8 *)(param_1 + 0x28);
    uVar13 = *(undefined8 *)(param_1 + 0x30);
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar12,PTR_s_fetchBilibiliMP4Qualities_index__026ae078,puVar4,0,uVar14,uVar15,uVar13,
               puVar8,*(undefined8 *)(param_1 + 0x38));
    (*(code *)PTR__objc_release_02578630)(puVar8);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_230 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1c8,PTR_s_sortUsingComparator__0269d168,&PTR___NSConcreteGlobalBlock_02584940);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x30),PTR_s_setVideoVariants__026add50,local_1c8);
    puVar2 = local_1c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_firstObject_0269d1f8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x30),PTR_s_setVideoURL__026adbb0);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x30),PTR_s_setAudioURL__026addb0,local_2f8);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x30),PTR_s_setVideoNeedsAudioMux__026adeb8,1);
    puVar2 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_348 = PTR___NSConcreteStackBlock_02578660;
    local_340 = 0xc2000000;
    local_33c = 0;
    local_338 = FUN_01053db8;
    local_330 = &DAT_0257ca68;
    uVar12 = *(undefined8 *)(param_1 + 0x38);
    (*(code *)PTR__objc_retain_02578638)();
    uVar13 = *(undefined8 *)(param_1 + 0x30);
    local_320 = uVar12;
    (*(code *)PTR__objc_retain_02578638)();
    local_328 = uVar13;
    _dispatch_async(puVar2,&local_348);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_328);
    _objc_storeStrong(&local_320,0);
    local_230 = 0;
  }
  _objc_storeStrong(&local_2f8);
  _objc_storeStrong(&local_278,0);
  _objc_storeStrong(&local_1d0,0);
  _objc_storeStrong(&local_1c8,0);
  _objc_storeStrong(&local_1b0,0);
  _objc_storeStrong(&local_198,0);
  _objc_storeStrong(&local_180,0);
  _objc_storeStrong(&local_168,0);
  if (local_230 == 0) {
    local_230 = 0;
  }
  _objc_storeStrong(&local_158);
  _objc_storeStrong(&local_150,0);
  _objc_storeStrong(&local_148,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

