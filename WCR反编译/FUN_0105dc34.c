// FUN_0105dc34 @ 0105dc34

void FUN_0105dc34(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong local_4f8;
  ulong local_4e8;
  ulong local_4d8;
  ulong local_4c0;
  long local_488;
  cfstringStruct *local_458;
  cfstringStruct *local_438;
  ulong local_430;
  ulong local_3f8;
  ulong local_3c8;
  ulong local_3c0;
  ulong local_3a8;
  cfstringStruct *local_398;
  cfstringStruct *local_388;
  cfstringStruct *local_378;
  ulong local_360;
  ulong local_348;
  ulong local_330;
  ulong local_318;
  undefined *local_2f8;
  undefined *local_2d8;
  undefined4 local_2d0;
  undefined4 local_2cc;
  code *local_2c8;
  undefined *local_2c0;
  undefined *local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  bool local_299;
  ulong local_298;
  ulong local_290;
  byte local_281;
  ulong local_280;
  byte local_271;
  ulong local_270;
  byte local_261;
  ulong local_260;
  bool local_251;
  ulong local_250;
  ulong local_248;
  byte local_239;
  long local_238;
  byte local_229;
  ulong local_228;
  bool local_219;
  cfstringStruct *local_218;
  long local_210;
  byte local_201;
  cfstringStruct *local_200;
  ulong local_1f8;
  ulong local_1f0;
  ulong local_1e8;
  cfstringStruct *local_1e0;
  ulong local_1d8;
  ulong local_1d0;
  byte local_1c5;
  int local_1c4;
  ulong local_1c0;
  undefined1 auStack_1b8 [8];
  long local_1b0;
  long *local_1a8;
  ulong local_178;
  undefined8 local_170;
  undefined *local_168;
  bool local_159;
  ulong local_158;
  ulong local_150;
  bool local_141;
  ulong local_140;
  ulong local_138;
  bool local_129;
  ulong local_128;
  ulong local_120;
  bool local_111;
  ulong local_110;
  ulong local_108;
  ulong local_100;
  undefined8 local_f8;
  bool local_e9;
  undefined *local_e8;
  undefined *local_e0;
  long local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_1;
  _objc_storeStrong(&local_c0);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_3);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_4);
  lVar6 = local_c0;
  local_d8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
  local_e9 = false;
  if (lVar6 == 0) {
    local_2f8 = (undefined *)0x0;
  }
  else {
    local_2f8 = PTR__OBJC_CLASS___NSString_026cdfe8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_e8 = local_2f8;
  }
  local_e9 = lVar6 != 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_e0 = local_2f8;
  if ((local_e9 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_e8);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,PTR_s_JSONScriptWithID_inHTML__026ae0b8,&cf___FRONTITY_CONNECT_STATE__,local_e0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(ulong *)(param_1 + 0x40);
  local_f8 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_firstDictionaryInObject_containi_026ae0c0,uVar3)
  ;
  _objc_retainAutoreleasedReturnValue();
  local_100 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_objectForKeyedSubscript__0269d098,&cf_itemInfos)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  uVar7 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
  local_111 = false;
  bVar1 = (uVar7 & 1) == 0;
  if (bVar1) {
    local_318 = 0;
  }
  else {
    local_318 = local_100;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_100,PTR_s_objectForKeyedSubscript__0269d098,&cf_itemInfos);
    _objc_retainAutoreleasedReturnValue();
    local_110 = local_318;
  }
  local_111 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_108 = local_318;
  if ((local_111 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_110);
  }
  (*(code *)PTR__objc_release_02578630)(uVar4);
  uVar7 = local_108;
  (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_objectForKeyedSubscript__0269d098,&cf_video)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  uVar4 = uVar7;
  (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar5);
  local_129 = false;
  bVar1 = (uVar4 & 1) == 0;
  if (bVar1) {
    local_330 = 0;
  }
  else {
    local_330 = local_108;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_108,PTR_s_objectForKeyedSubscript__0269d098,&cf_video);
    _objc_retainAutoreleasedReturnValue();
    local_128 = local_330;
  }
  local_129 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_120 = local_330;
  if ((local_129 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_128);
  }
  (*(code *)PTR__objc_release_02578630)(uVar7);
  uVar7 = local_120;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_120,PTR_s_objectForKeyedSubscript__0269d098,&cf_videoMeta);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  uVar4 = uVar7;
  (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar5);
  local_141 = false;
  bVar1 = (uVar4 & 1) == 0;
  if (bVar1) {
    local_348 = 0;
  }
  else {
    local_348 = local_120;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_120,PTR_s_objectForKeyedSubscript__0269d098,&cf_videoMeta);
    _objc_retainAutoreleasedReturnValue();
    local_140 = local_348;
  }
  local_141 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_138 = local_348;
  if ((local_141 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_140);
  }
  (*(code *)PTR__objc_release_02578630)(uVar7);
  uVar7 = local_120;
  (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_objectForKeyedSubscript__0269d098,&cf_urls);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  uVar4 = uVar7;
  (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar5);
  local_159 = false;
  bVar1 = (uVar4 & 1) == 0;
  if (bVar1) {
    local_360 = 0;
  }
  else {
    local_360 = local_120;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_120,PTR_s_objectForKeyedSubscript__0269d098,&cf_urls);
    _objc_retainAutoreleasedReturnValue();
    local_158 = local_360;
  }
  local_159 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_150 = local_360;
  if ((local_159 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_158);
  }
  (*(code *)PTR__objc_release_02578630)(uVar7);
  puVar5 = PTR_WCRefineLinkParseResult_026cecb0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineLinkParseResult_026cecb0,PTR_s_new_0269d288);
  local_168 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setPlatform__026adde8,5);
  local_378 = *(cfstringStruct **)(param_1 + 0x20);
  if (local_378 == (cfstringStruct *)0x0) {
    local_378 = &cf___;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_setSourceURL__026addf0,local_378);
  local_388 = *(cfstringStruct **)(param_1 + 0x28);
  if (local_388 == (cfstringStruct *)0x0) {
    local_398 = *(cfstringStruct **)(param_1 + 0x20);
    if (local_398 == (cfstringStruct *)0x0) {
      local_398 = &cf___;
    }
    local_388 = local_398;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_setResolvedURL__026addf8,local_388);
  local_170 = 0;
  _memset(auStack_1b8,0,0x40);
  if (local_150 == 0) {
    local_3a8 = *(ulong *)PTR____NSArray0___02578280;
  }
  else {
    local_3a8 = local_150;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_3c0 = local_3a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_3a8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b8,auStack_a8,0x10);
  if (local_3c0 != 0) {
    lVar6 = *local_1a8;
    local_3c8 = 0;
    do {
      do {
        if (*local_1a8 - lVar6 != 0) {
          _objc_enumerationMutation(*local_1a8 - lVar6,local_3a8);
        }
        uVar7 = *(ulong *)(local_1b0 + local_3c8 * 8);
        uVar4 = *(ulong *)(param_1 + 0x40);
        puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_178 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar5);
        if ((uVar7 & 1) == 0) {
          local_3f8 = 0;
        }
        else {
          local_3f8 = local_178;
        }
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_tikTokCleanVideoURL__026ae0a0,local_3f8);
        _objc_retainAutoreleasedReturnValue();
        local_1c0 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_hasPrefix__0269d320,&cf_http);
        if ((uVar4 & 1) == 0) {
          local_1c4 = 0;
        }
        else {
          _objc_storeStrong(&local_170,local_1c0);
          local_1c4 = 2;
        }
        _objc_storeStrong(&local_1c0,0);
        if (local_1c4 != 0) goto LAB_0105e578;
        local_3c8 = local_3c8 + 1;
      } while (local_3c8 < local_3c0);
      local_3c0 = local_3a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_3a8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b8,auStack_a8,
                 0x10);
      local_3c8 = 0;
    } while (local_3c0 != 0);
  }
  local_1c4 = 0;
LAB_0105e578:
  (*(code *)PTR__objc_release_02578630)(local_3a8);
  (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_setVideoURL__026adbb0,local_170);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_tikTokURLLooksWatermarked__026ae0a8,local_170);
  local_1c5 = (byte)uVar3;
  uVar7 = local_138;
  (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_objectForKeyedSubscript__0269d098,&cf_width)
  ;
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar7;
  FUN_01034e28();
  (*(code *)PTR__objc_release_02578630)(uVar7);
  uVar7 = local_138;
  local_1d0 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_138,PTR_s_objectForKeyedSubscript__0269d098,&cf_height);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar7;
  FUN_01034e28();
  (*(code *)PTR__objc_release_02578630)(uVar7);
  local_201 = 0;
  local_1d8 = uVar4;
  if ((long)uVar4 < 1) {
    local_438 = &cf__;
  }
  else {
    local_1e8 = local_1d0;
    local_430 = uVar4;
    if ((long)local_1d0 < (long)uVar4) {
      local_430 = local_1d0;
    }
    local_1f8 = local_430;
    local_438 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    local_1f0 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__ldp);
    _objc_retainAutoreleasedReturnValue();
    local_201 = 1;
    local_200 = local_438;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_1e0 = local_438;
  if ((local_201 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_200);
  }
  uVar3 = local_170;
  lVar6 = *(long *)(param_1 + 0x40);
  local_219 = false;
  bVar1 = (local_1c5 & 1) == 0;
  if (bVar1) {
    local_458 = local_1e0;
  }
  else {
    local_458 = local_1e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1e0,PTR_s_stringByAppendingString__0269d398,&cf_space_s_);
    _objc_retainAutoreleasedReturnValue();
    local_218 = local_458;
  }
  local_219 = !bVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (lVar6,PTR_s_variantWithURL_label_width_heigh_026addc8,uVar3,local_458,local_1d0,
             local_1d8,0);
  _objc_retainAutoreleasedReturnValue();
  local_210 = lVar6;
  if ((local_219 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_218);
  }
  if (local_210 != 0) {
    local_b0 = local_210;
    puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_b0,1
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_setVideoVariants__026add50);
    (*(code *)PTR__objc_release_02578630)(puVar5);
  }
  lVar6 = *(long *)(param_1 + 0x40);
  uVar7 = local_108;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_108,PTR_s_objectForKeyedSubscript__0269d098,&cf_coversOrigin);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_bestURLFromList_preferBest__026ae018,uVar7,1);
  _objc_retainAutoreleasedReturnValue();
  local_229 = 0;
  local_239 = 0;
  local_488 = lVar6;
  if (lVar6 == 0) {
    local_488 = *(long *)(param_1 + 0x40);
    uVar4 = local_108;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_108,PTR_s_objectForKeyedSubscript__0269d098,&cf_covers);
    _objc_retainAutoreleasedReturnValue();
    local_229 = 1;
    local_228 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_488,PTR_s_bestURLFromList_preferBest__026ae018,uVar4,1);
    _objc_retainAutoreleasedReturnValue();
    local_238 = local_488;
  }
  local_239 = lVar6 == 0;
  (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_setCoverURL__026add60,local_488);
  if ((local_239 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_238);
  }
  if ((local_229 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_228);
  }
  (*(code *)PTR__objc_release_02578630)(lVar6);
  (*(code *)PTR__objc_release_02578630)(uVar7);
  uVar7 = local_108;
  (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_objectForKeyedSubscript__0269d098,&cf_text);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  uVar4 = uVar7;
  (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar5);
  (*(code *)PTR__objc_release_02578630)(uVar7);
  if ((uVar4 & 1) != 0) {
    uVar7 = local_108;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_108,PTR_s_objectForKeyedSubscript__0269d098,&cf_text);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_setTitle__0269cef0);
    (*(code *)PTR__objc_release_02578630)(uVar7);
  }
  uVar7 = local_100;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_100,PTR_s_objectForKeyedSubscript__0269d098,&cf_authorInfos);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  uVar4 = uVar7;
  (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar5);
  local_251 = false;
  bVar1 = (uVar4 & 1) == 0;
  if (bVar1) {
    local_4c0 = 0;
  }
  else {
    local_4c0 = local_100;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_100,PTR_s_objectForKeyedSubscript__0269d098,&cf_authorInfos);
    _objc_retainAutoreleasedReturnValue();
    local_250 = local_4c0;
  }
  local_251 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_248 = local_4c0;
  if ((local_251 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_250);
  }
  (*(code *)PTR__objc_release_02578630)(uVar7);
  uVar7 = local_248;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_248,PTR_s_objectForKeyedSubscript__0269d098,&cf_nickName);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  uVar4 = uVar7;
  (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar5);
  local_261 = 0;
  local_271 = 0;
  local_281 = 0;
  if ((uVar4 & 1) == 0) {
    uVar4 = local_248;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_248,PTR_s_objectForKeyedSubscript__0269d098,&cf_uniqueId);
    _objc_retainAutoreleasedReturnValue();
    local_271 = 1;
    puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_270 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
    if ((uVar4 & 1) == 0) {
      local_4e8 = 0;
    }
    else {
      local_4e8 = local_248;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_248,PTR_s_objectForKeyedSubscript__0269d098,&cf_uniqueId);
      _objc_retainAutoreleasedReturnValue();
      local_281 = 1;
      local_280 = local_4e8;
    }
    local_4d8 = local_4e8;
  }
  else {
    local_4d8 = local_248;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_248,PTR_s_objectForKeyedSubscript__0269d098,&cf_nickName);
    _objc_retainAutoreleasedReturnValue();
    local_261 = 1;
    local_260 = local_4d8;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_setAuthor__026adda8,local_4d8);
  if ((local_281 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_280);
  }
  if ((local_271 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_270);
  }
  if ((local_261 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_260);
  }
  (*(code *)PTR__objc_release_02578630)(uVar7);
  uVar7 = local_100;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_100,PTR_s_objectForKeyedSubscript__0269d098,&cf_musicInfos);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  uVar4 = uVar7;
  (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar5);
  local_299 = false;
  bVar1 = (uVar4 & 1) == 0;
  if (bVar1) {
    local_4f8 = 0;
  }
  else {
    local_4f8 = local_100;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_100,PTR_s_objectForKeyedSubscript__0269d098,&cf_musicInfos);
    _objc_retainAutoreleasedReturnValue();
    local_298 = local_4f8;
  }
  local_299 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_290 = local_4f8;
  if ((local_299 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_298);
  }
  (*(code *)PTR__objc_release_02578630)(uVar7);
  uVar7 = local_290;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_290,PTR_s_objectForKeyedSubscript__0269d098,&cf_playUrl);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  uVar4 = uVar7;
  (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar5);
  (*(code *)PTR__objc_release_02578630)(uVar7);
  if ((uVar4 & 1) != 0) {
    uVar7 = local_290;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_290,PTR_s_objectForKeyedSubscript__0269d098,&cf_playUrl);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_setAudioURL__026addb0);
    (*(code *)PTR__objc_release_02578630)(uVar7);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_normalizeVideoVersusCover__026adff8,local_168);
  puVar5 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_2d8 = PTR___NSConcreteStackBlock_02578660;
  local_2d0 = 0xc2000000;
  local_2cc = 0;
  local_2c8 = FUN_0105f31c;
  local_2c0 = &DAT_02584a90;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  (*(code *)PTR__objc_retain_02578638)();
  puVar2 = local_168;
  local_2b0 = uVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_2b8 = puVar2;
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  (*(code *)PTR__objc_retain_02578638)();
  local_2a8 = uVar3;
  _dispatch_async(puVar5,&local_2d8);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  _objc_storeStrong(&local_2a8);
  _objc_storeStrong(&local_2b8,0);
  _objc_storeStrong(&local_2b0,0);
  _objc_storeStrong(&local_290,0);
  _objc_storeStrong(&local_248,0);
  _objc_storeStrong(&local_210,0);
  _objc_storeStrong(&local_1e0,0);
  _objc_storeStrong(&local_170,0);
  _objc_storeStrong(&local_168,0);
  _objc_storeStrong(&local_150,0);
  _objc_storeStrong(&local_138,0);
  _objc_storeStrong(&local_120,0);
  _objc_storeStrong(&local_108,0);
  _objc_storeStrong(&local_100,0);
  _objc_storeStrong(&local_f8,0);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

