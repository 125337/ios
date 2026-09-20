// FUN_01e98dc8 @ 01e98dc8

/* WARNING: Type propagation algorithm not settling */

void FUN_01e98dc8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  cfstringStruct *pcVar9;
  long lVar10;
  ulong uVar11;
  undefined1 *puVar12;
  cfstringStruct *local_5c0;
  cfstringStruct *local_598;
  uint local_564;
  cfstringStruct *local_548;
  cfstringStruct *local_540;
  cfstringStruct *local_518;
  cfstringStruct *local_508;
  cfstringStruct *local_4f0;
  cfstringStruct *local_4d8;
  cfstringStruct *local_4c8;
  cfstringStruct *local_4b0;
  cfstringStruct *local_490;
  ulong local_458;
  ulong local_450;
  ulong local_438;
  undefined *local_420;
  undefined *local_400;
  undefined *local_3c8;
  undefined4 local_3c0;
  undefined4 local_3bc;
  code *local_3b8;
  undefined *local_3b0;
  undefined1 *local_3a8;
  undefined8 local_3a0;
  bool local_391;
  cfstringStruct *local_390;
  cfstringStruct *local_388;
  byte local_379;
  ulong local_378;
  undefined1 auStack_370 [8];
  long local_368;
  long *local_360;
  ulong local_330;
  cfstringStruct *local_328;
  byte local_319;
  cfstringStruct *local_318;
  byte local_309;
  cfstringStruct *local_308;
  byte local_2f9;
  cfstringStruct *local_2f8;
  cfstringStruct *local_2f0;
  bool local_2e1;
  cfstringStruct *local_2e0;
  cfstringStruct *local_2d8;
  byte local_2c9;
  cfstringStruct *local_2c8;
  byte local_2b9;
  cfstringStruct *local_2b8;
  byte local_2a9;
  cfstringStruct *local_2a8;
  cfstringStruct *local_2a0;
  bool local_291;
  cfstringStruct *local_290;
  cfstringStruct *local_288;
  int local_280;
  bool local_279;
  cfstringStruct *local_278;
  byte local_269;
  cfstringStruct *local_268;
  cfstringStruct *local_260;
  cfstringStruct *local_258;
  undefined1 auStack_250 [8];
  long local_248;
  long *local_240;
  cfstringStruct *local_210;
  bool local_201;
  undefined *local_200;
  byte local_1f1;
  undefined *local_1f0;
  byte local_1e1;
  undefined *local_1e0;
  undefined *local_1d8;
  undefined *local_1d0;
  ulong local_1c8;
  undefined *local_1c0;
  undefined1 *local_1b8;
  long local_1b0;
  long local_1a8 [4];
  cfstringStruct *local_188;
  cfstringStruct *local_180;
  cfstringStruct *local_178;
  cfstringStruct *local_170;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  undefined *local_138;
  cfstringStruct *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1a8[2] = 0;
  local_1a8[3] = param_1;
  _objc_storeStrong(local_1a8 + 2);
  local_1a8[1] = 0;
  _objc_storeStrong(local_1a8 + 1,param_3);
  local_1a8[0] = 0;
  _objc_storeStrong(local_1a8,param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_1b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = local_1a8[2];
  local_1b8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_1a8[2],PTR_s_length_0269cca0);
  if ((lVar8 != 0) && (local_1a8[0] == 0)) {
    puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
               PTR_s_JSONObjectWithData_options_error_026ca480,local_1a8[2],0,0);
    _objc_retainAutoreleasedReturnValue();
    local_1c8 = 0;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_1c0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    puVar2 = local_1c0;
    if (((ulong)puVar3 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_1d0 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_objectForKeyedSubscript__0269d098,&cf_result);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      puVar4 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      local_1e1 = 0;
      local_1f1 = 0;
      local_400 = local_1d0;
      if (((ulong)puVar4 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_playlist);
        _objc_retainAutoreleasedReturnValue();
        local_1f1 = 1;
        local_1f0 = local_400;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_result);
        _objc_retainAutoreleasedReturnValue();
        local_1e1 = 1;
        local_1e0 = local_400;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_1d8 = local_400;
      if ((local_1f1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_1f0);
      }
      if ((local_1e1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_1e0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_1d8;
      puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      if (((ulong)puVar2 & 1) != 0) {
        puVar2 = local_1d8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1d8,PTR_s_objectForKeyedSubscript__0269d098,&cf_tracks);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
        puVar4 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
        local_201 = false;
        bVar1 = ((ulong)puVar4 & 1) == 0;
        if (bVar1) {
          local_420 = *(undefined **)PTR____NSArray0___02578280;
        }
        else {
          local_420 = local_1d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1d8,PTR_s_objectForKeyedSubscript__0269d098,&cf_tracks);
          _objc_retainAutoreleasedReturnValue();
          local_200 = local_420;
        }
        local_201 = !bVar1;
        _objc_storeStrong(&local_1c8,local_420);
        if ((local_201 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_200);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      _objc_storeStrong(&local_1d8);
      _objc_storeStrong(&local_1d0,0);
    }
    _memset(auStack_250,0,0x40);
    if (local_1c8 == 0) {
      local_438 = *(ulong *)PTR____NSArray0___02578280;
    }
    else {
      local_438 = local_1c8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_450 = local_438;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_438,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_250,auStack_a8,0x10
              );
    if (local_450 != 0) {
      lVar8 = *local_240;
      local_458 = 0;
      do {
        do {
          if (*local_240 - lVar8 != 0) {
            _objc_enumerationMutation(*local_240 - lVar8,local_438);
          }
          pcVar9 = *(cfstringStruct **)(local_248 + local_458 * 8);
          puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_210 = pcVar9;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar9,PTR_s_isKindOfClass__0269cd68,puVar2);
          pcVar5 = local_210;
          if (((ulong)pcVar9 & 1) != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_258 = pcVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar5,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
            _objc_retainAutoreleasedReturnValue();
            pcVar9 = pcVar5;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_269 = 0;
            local_279 = false;
            bVar1 = ((ulong)pcVar9 & 1) == 0;
            if (bVar1) {
              local_490 = &cf___;
            }
            else {
              local_490 = local_258;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_258,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
              _objc_retainAutoreleasedReturnValue();
              local_269 = 1;
              local_268 = local_490;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              local_278 = local_490;
            }
            local_279 = !bVar1;
            (*(code *)PTR__objc_retain_02578638)();
            local_260 = local_490;
            if ((local_279 & 1U) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_278);
            }
            if ((local_269 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_268);
            }
            (*(code *)PTR__objc_release_02578630)(pcVar5);
            pcVar9 = local_260;
            FUN_01e71a2c();
            _objc_retainAutoreleasedReturnValue();
            pcVar5 = local_260;
            local_260 = pcVar9;
            (*(code *)PTR__objc_release_02578630)(pcVar5);
            pcVar5 = local_260;
            (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_length_0269cca0);
            if (pcVar5 == (cfstringStruct *)0x0) {
              local_280 = 3;
            }
            else {
              pcVar5 = local_258;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_258,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
              _objc_retainAutoreleasedReturnValue();
              puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              pcVar9 = pcVar5;
              (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
              local_291 = false;
              bVar1 = ((ulong)pcVar9 & 1) == 0;
              if (bVar1) {
                local_4b0 = &cf__gwLkf;
              }
              else {
                local_4b0 = local_258;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_258,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
                _objc_retainAutoreleasedReturnValue();
                local_290 = local_4b0;
              }
              local_291 = !bVar1;
              (*(code *)PTR__objc_retain_02578638)();
              local_288 = local_4b0;
              if ((local_291 & 1U) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_290);
              }
              (*(code *)PTR__objc_release_02578630)(pcVar5);
              pcVar5 = local_258;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_258,PTR_s_objectForKeyedSubscript__0269d098,&cf_album);
              _objc_retainAutoreleasedReturnValue();
              puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
              pcVar9 = pcVar5;
              (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
              local_2a9 = 0;
              local_2b9 = 0;
              local_2c9 = 0;
              if (((ulong)pcVar9 & 1) == 0) {
                pcVar9 = local_258;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_258,PTR_s_objectForKeyedSubscript__0269d098,&cf_al);
                _objc_retainAutoreleasedReturnValue();
                local_2b9 = 1;
                puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                local_2b8 = pcVar9;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(pcVar9,PTR_s_isKindOfClass__0269cd68,puVar2);
                if (((ulong)pcVar9 & 1) == 0) {
                  local_4d8 = (cfstringStruct *)0x0;
                }
                else {
                  local_4d8 = local_258;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_258,PTR_s_objectForKeyedSubscript__0269d098,&cf_al);
                  _objc_retainAutoreleasedReturnValue();
                  local_2c9 = 1;
                  local_2c8 = local_4d8;
                }
                local_4c8 = local_4d8;
              }
              else {
                local_4c8 = local_258;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_258,PTR_s_objectForKeyedSubscript__0269d098,&cf_album);
                _objc_retainAutoreleasedReturnValue();
                local_2a9 = 1;
                local_2a8 = local_4c8;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_2a0 = local_4c8;
              if ((local_2c9 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_2c8);
              }
              if ((local_2b9 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_2b8);
              }
              if ((local_2a9 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_2a8);
              }
              (*(code *)PTR__objc_release_02578630)(pcVar5);
              pcVar5 = local_2a0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_2a0,PTR_s_objectForKeyedSubscript__0269d098,&cf_picUrl);
              _objc_retainAutoreleasedReturnValue();
              puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              pcVar9 = pcVar5;
              (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
              local_2e1 = false;
              bVar1 = ((ulong)pcVar9 & 1) == 0;
              if (bVar1) {
                local_4f0 = &cf___;
              }
              else {
                local_4f0 = local_2a0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_2a0,PTR_s_objectForKeyedSubscript__0269d098,&cf_picUrl);
                _objc_retainAutoreleasedReturnValue();
                local_2e0 = local_4f0;
              }
              local_2e1 = !bVar1;
              (*(code *)PTR__objc_retain_02578638)();
              local_2d8 = local_4f0;
              if ((local_2e1 & 1U) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_2e0);
              }
              (*(code *)PTR__objc_release_02578630)(pcVar5);
              pcVar5 = local_258;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_258,PTR_s_objectForKeyedSubscript__0269d098,&cf_artists);
              _objc_retainAutoreleasedReturnValue();
              puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
              pcVar9 = pcVar5;
              (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
              local_2f9 = 0;
              local_309 = 0;
              local_319 = 0;
              if (((ulong)pcVar9 & 1) == 0) {
                pcVar9 = local_258;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_258,PTR_s_objectForKeyedSubscript__0269d098,&cf_ar);
                _objc_retainAutoreleasedReturnValue();
                local_309 = 1;
                puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                local_308 = pcVar9;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(pcVar9,PTR_s_isKindOfClass__0269cd68,puVar2);
                if (((ulong)pcVar9 & 1) == 0) {
                  local_518 = *(cfstringStruct **)PTR____NSArray0___02578280;
                }
                else {
                  local_518 = local_258;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_258,PTR_s_objectForKeyedSubscript__0269d098,&cf_ar);
                  _objc_retainAutoreleasedReturnValue();
                  local_319 = 1;
                  local_318 = local_518;
                }
                local_508 = local_518;
              }
              else {
                local_508 = local_258;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_258,PTR_s_objectForKeyedSubscript__0269d098,&cf_artists);
                _objc_retainAutoreleasedReturnValue();
                local_2f9 = 1;
                local_2f8 = local_508;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_2f0 = local_508;
              if ((local_319 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_318);
              }
              if ((local_309 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_308);
              }
              if ((local_2f9 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_2f8);
              }
              (*(code *)PTR__objc_release_02578630)(pcVar5);
              pcVar5 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
              _objc_retainAutoreleasedReturnValue();
              local_328 = pcVar5;
              _memset(auStack_370,0,0x40);
              pcVar5 = local_2f0;
              (*(code *)PTR__objc_retain_02578638)();
              local_540 = pcVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_370,
                         auStack_128,0x10);
              if (local_540 != (cfstringStruct *)0x0) {
                lVar10 = *local_360;
                local_548 = (cfstringStruct *)0x0;
                do {
                  do {
                    if (*local_360 - lVar10 != 0) {
                      _objc_enumerationMutation(*local_360 - lVar10,pcVar5);
                    }
                    uVar11 = *(ulong *)(local_368 + (long)local_548 * 8);
                    puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                    local_330 = uVar11;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (uVar11,PTR_s_isKindOfClass__0269cd68,puVar2);
                    local_379 = 0;
                    local_564 = 0;
                    if ((uVar11 & 1) != 0) {
                      uVar11 = local_330;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_330,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
                      _objc_retainAutoreleasedReturnValue();
                      local_379 = 1;
                      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
                      local_378 = uVar11;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (uVar11,PTR_s_isKindOfClass__0269cd68,puVar2);
                      local_564 = (uint)uVar11;
                    }
                    if ((local_379 & 1) != 0) {
                      (*(code *)PTR__objc_release_02578630)(local_378);
                    }
                    pcVar9 = local_328;
                    if ((local_564 & 1) != 0) {
                      uVar11 = local_330;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_330,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)(pcVar9,PTR_s_addObject__0269d180);
                      (*(code *)PTR__objc_release_02578630)(uVar11);
                    }
                    local_548 = (cfstringStruct *)((long)&local_548->field0_0x0 + 1);
                  } while (local_548 < local_540);
                  local_540 = pcVar5;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (pcVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_370,
                             auStack_128,0x10);
                  local_548 = (cfstringStruct *)0x0;
                } while (local_540 != (cfstringStruct *)0x0);
              }
              (*(code *)PTR__objc_release_02578630)(pcVar5);
              pcVar5 = local_328;
              (*(code *)PTR__objc_msgSend_02578628)(local_328,PTR_s_count_0269cfe0);
              local_391 = false;
              if (pcVar5 == (cfstringStruct *)0x0) {
                local_598 = &cf___;
              }
              else {
                local_598 = local_328;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_328,PTR_s_componentsJoinedByString__0269d140,&cf__);
                _objc_retainAutoreleasedReturnValue();
                local_390 = local_598;
              }
              local_391 = pcVar5 != (cfstringStruct *)0x0;
              (*(code *)PTR__objc_retain_02578638)();
              local_388 = local_598;
              if ((local_391 & 1U) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_390);
              }
              puVar12 = local_1b8;
              local_188 = &cf_id;
              local_158 = local_260;
              local_180 = &cf_name;
              local_150 = local_288;
              local_178 = &cf_artist;
              local_148 = local_388;
              local_170 = &cf_pic;
              local_140 = local_2d8;
              local_168 = &cf_url;
              puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                         &cf_https___music_163_com_song_media_outer_url_id____mp3);
              _objc_retainAutoreleasedReturnValue();
              local_160 = &cf_lrc;
              pcVar5 = local_260;
              local_138 = puVar2;
              FUN_01e9a3d8();
              _objc_retainAutoreleasedReturnValue();
              local_5c0 = pcVar5;
              if (pcVar5 == (cfstringStruct *)0x0) {
                local_5c0 = &cf___;
              }
              local_130 = local_5c0;
              puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSDictionary_026ce090,
                         PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_158,&local_188,6);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar12,PTR_s_addObject__0269d180);
              (*(code *)PTR__objc_release_02578630)(puVar3);
              (*(code *)PTR__objc_release_02578630)(pcVar5);
              (*(code *)PTR__objc_release_02578630)(puVar2);
              puVar6 = local_1b8;
              (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_count_0269cfe0);
              puVar12 = puVar6 + -100;
              if (puVar6 < &segment_command_00000020.flags) {
                local_280 = 0;
              }
              else {
                puVar12 = (undefined1 *)((long)&MACH_HEADER.magic + 2);
                local_280 = 2;
              }
              _objc_storeStrong(puVar12,&local_388);
              _objc_storeStrong(&local_328,0);
              _objc_storeStrong(&local_2f0,0);
              _objc_storeStrong(&local_2d8,0);
              _objc_storeStrong(&local_2a0,0);
              _objc_storeStrong(&local_288,0);
            }
            _objc_storeStrong(&local_260);
            _objc_storeStrong(&local_258,0);
            if ((local_280 != 0) && (local_280 != 3)) goto LAB_01e9a24c;
          }
          local_458 = local_458 + 1;
        } while (local_458 < local_450);
        local_450 = local_438;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_438,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_250,auStack_a8,
                   0x10);
        local_458 = 0;
      } while (local_450 != 0);
    }
    local_280 = 0;
LAB_01e9a24c:
    (*(code *)PTR__objc_release_02578630)(local_438);
    _objc_storeStrong(&local_1c8);
    _objc_storeStrong(&local_1c0,0);
  }
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_3c8 = PTR___NSConcreteStackBlock_02578660;
  local_3c0 = 0xc2000000;
  local_3bc = 0;
  local_3b8 = FUN_01e9a4d4;
  local_3b0 = &DAT_0257ca68;
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  puVar12 = local_1b8;
  local_3a0 = uVar7;
  (*(code *)PTR__objc_retain_02578638)();
  local_3a8 = puVar12;
  _dispatch_async(puVar2,&local_3c8);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_3a8);
  _objc_storeStrong(&local_3a0,0);
  _objc_storeStrong(&local_1b8,0);
  _objc_storeStrong(local_1a8,0);
  _objc_storeStrong(local_1a8 + 1,0);
  _objc_storeStrong(local_1a8 + 2,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

