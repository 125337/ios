// finishDouyinPollResult:payload:imageNote:json: @ 01074ba8

/* Function Stack Size: 0x2c bytes */

void WCRXHSWebExtractSession::finishDouyinPollResult_payload_imageNote_json_
               (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5,ID param_6)

{
  byte bVar1;
  bool bVar2;
  ID IVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  cfstringStruct *pcVar7;
  undefined *puVar8;
  ID IVar9;
  long lVar10;
  long lVar11;
  cfstringStruct *local_6e0;
  cfstringStruct *local_6d8;
  undefined *local_658;
  undefined *local_650;
  cfstringStruct *local_628;
  uint local_5ec;
  cfstringStruct *local_510;
  cfstringStruct *local_508;
  cfstringStruct *local_4d0;
  uint local_494;
  uint local_45c;
  uint local_434;
  undefined *local_3f0;
  undefined4 local_3e8;
  undefined4 local_3e4;
  code *local_3e0;
  undefined *local_3d8;
  ID local_3d0;
  undefined1 auStack_3c8 [8];
  long local_3c0;
  long *local_3b8;
  long local_388;
  long local_380;
  undefined *local_378;
  byte local_369;
  cfstringStruct *local_368;
  undefined1 auStack_360 [8];
  long local_358;
  long *local_350;
  long local_320;
  byte local_312;
  byte local_311;
  cfstringStruct *local_310;
  byte local_301;
  cfstringStruct *local_300;
  cfstringStruct *local_2f8;
  undefined *local_2f0;
  cfstringStruct *local_2e8;
  cfstringStruct *local_2e0;
  undefined *local_2d8;
  byte local_2c9;
  cfstringStruct *local_2c8;
  undefined1 auStack_2c0 [8];
  long local_2b8;
  long *local_2b0;
  long local_280;
  byte local_271;
  cfstringStruct *local_270;
  cfstringStruct *local_268;
  bool local_259;
  cfstringStruct *local_258;
  cfstringStruct *local_250;
  cfstringStruct *local_248;
  byte local_239;
  cfstringStruct *local_238;
  byte local_229;
  cfstringStruct *local_228;
  byte local_219;
  cfstringStruct *local_218;
  cfstringStruct *local_210;
  byte local_201;
  cfstringStruct *local_200;
  byte local_1f1;
  cfstringStruct *local_1f0;
  undefined4 local_1e4;
  cfstringStruct *local_1e0;
  byte local_1d1;
  undefined8 local_1d0;
  cfstringStruct *local_1c8;
  SEL local_1c0;
  ID local_1b8;
  undefined1 auStack_1b0 [128];
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1c8 = (cfstringStruct *)0x0;
  local_1c0 = param_2;
  local_1b8 = param_1;
  _objc_storeStrong(&local_1c8,param_3);
  local_1d0 = 0;
  _objc_storeStrong(&local_1d0,param_4);
  local_1d1 = (byte)param_5;
  local_1e0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_1e0,param_6);
  IVar3 = local_1b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_finished_026a15b0);
  if (((IVar3 & 1) == 0) && (local_1c8 != (cfstringStruct *)0x0)) {
    pcVar4 = local_1c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_videoURL_026ad970);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_1f1 = 0;
    local_201 = 0;
    bVar2 = false;
    if (pcVar5 == (cfstringStruct *)0x0) {
      pcVar5 = local_1e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1e0,PTR_s_objectForKeyedSubscript__0269d098,&cf_video);
      _objc_retainAutoreleasedReturnValue();
      local_1f1 = 1;
      puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_1f0 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar6);
      bVar2 = false;
      if (((ulong)pcVar5 & 1) != 0) {
        bVar2 = false;
        if ((local_1d1 & 1) != 0) {
          pcVar5 = local_1c8;
          (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_imageURLs_026adac8);
          _objc_retainAutoreleasedReturnValue();
          local_201 = 1;
          local_200 = pcVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          bVar2 = pcVar5 == (cfstringStruct *)0x0;
        }
        bVar2 = (bool)(bVar2 ^ 1);
      }
    }
    if ((local_201 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_200);
    }
    if ((local_1f1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_1f0);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    if (bVar2) {
      pcVar4 = local_1e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1e0,PTR_s_objectForKeyedSubscript__0269d098,&cf_video);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_WCRefineLinkParser_026ce168;
      local_210 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineLinkParser_026ce168,PTR_s_URLLooksLikeAudioMediaURL__026add00,pcVar4);
      if ((((ulong)puVar6 & 1) == 0) &&
         (puVar6 = PTR_WCRefineLinkParser_026ce168,
         (*(code *)PTR__objc_msgSend_02578628)
                   (PTR_WCRefineLinkParser_026ce168,PTR_s_douyinURLLooksLikeStaticOrPrevie_026add18,
                    local_210), ((ulong)puVar6 & 1) == 0)) {
        puVar6 = PTR_WCRefineLinkParser_026ce168;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineLinkParser_026ce168,PTR_s_preferCleanMediaURL__026add40,local_210);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_setVideoURL__026adbb0);
        (*(code *)PTR__objc_release_02578630)(puVar6);
      }
      _objc_storeStrong(&local_210,0);
    }
    pcVar4 = local_1c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_audioURL_026adb18);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_219 = 0;
    local_434 = 0;
    if (pcVar5 == (cfstringStruct *)0x0) {
      pcVar5 = local_1e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1e0,PTR_s_objectForKeyedSubscript__0269d098,&cf_audio);
      _objc_retainAutoreleasedReturnValue();
      local_219 = 1;
      puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_218 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar6);
      local_434 = (uint)pcVar5;
    }
    if ((local_219 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_218);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    if ((local_434 & 1) != 0) {
      pcVar4 = local_1e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1e0,PTR_s_objectForKeyedSubscript__0269d098,&cf_audio);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_setAudioURL__026addb0);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
    }
    pcVar4 = local_1c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_coverURL_026ad9a8);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_229 = 0;
    local_45c = 0;
    if (pcVar5 == (cfstringStruct *)0x0) {
      pcVar5 = local_1e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1e0,PTR_s_objectForKeyedSubscript__0269d098,&cf_cover);
      _objc_retainAutoreleasedReturnValue();
      local_229 = 1;
      puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_228 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar6);
      local_45c = (uint)pcVar5;
    }
    if ((local_229 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_228);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    puVar6 = PTR_WCRefineLinkParser_026ce168;
    if ((local_45c & 1) != 0) {
      pcVar4 = local_1e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1e0,PTR_s_objectForKeyedSubscript__0269d098,&cf_cover);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_preferCleanMediaURL__026add40);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_setCoverURL__026add60);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
    }
    pcVar4 = local_1c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_title_0269d250);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_239 = 0;
    local_494 = 0;
    if (pcVar5 == (cfstringStruct *)0x0) {
      pcVar5 = local_1e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1e0,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
      _objc_retainAutoreleasedReturnValue();
      local_239 = 1;
      puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_238 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar6);
      local_494 = (uint)pcVar5;
    }
    if ((local_239 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_238);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    if ((local_494 & 1) != 0) {
      pcVar4 = local_1e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1e0,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_setTitle__0269cef0);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
    }
    pcVar4 = local_1e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1e0,PTR_s_objectForKeyedSubscript__0269d098,&cf_images);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = local_1e0;
    local_248 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1e0,PTR_s_objectForKeyedSubscript__0269d098,&cf_lives);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    pcVar4 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar6);
    local_259 = false;
    bVar2 = ((ulong)pcVar4 & 1) == 0;
    if (bVar2) {
      local_4d0 = (cfstringStruct *)0x0;
    }
    else {
      local_4d0 = local_1e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1e0,PTR_s_objectForKeyedSubscript__0269d098,&cf_lives);
      _objc_retainAutoreleasedReturnValue();
      local_258 = local_4d0;
    }
    local_259 = !bVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_250 = local_4d0;
    if ((local_259 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_258);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    pcVar5 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_248;
    puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_268 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar6);
    if ((((ulong)pcVar4 & 1) != 0) &&
       (pcVar4 = local_248, (*(code *)PTR__objc_msgSend_02578628)(local_248,PTR_s_count_0269cfe0),
       pcVar4 != (cfstringStruct *)0x0)) {
      pcVar4 = (cfstringStruct *)PTR_WCRefineLinkParser_026ce168;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineLinkParser_026ce168,PTR_s_compactedDouyinNoteImageURLs_liv_026adf18,
                 local_248,local_250,local_268);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_WCRefineLinkParser_026ce168;
      local_270 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineLinkParser_026ce168,PTR_s_douyinResultHasAnyLivePhoto__026ae1c0,
                 local_1c8);
      local_271 = (byte)puVar6;
      if (((ulong)puVar6 & 1) == 0) {
        _memset(auStack_2c0,0,0x40);
        pcVar4 = local_268;
        (*(code *)PTR__objc_retain_02578638)();
        local_508 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c0,auStack_a8,
                   0x10);
        if (local_508 != (cfstringStruct *)0x0) {
          lVar10 = *local_2b0;
          local_510 = (cfstringStruct *)0x0;
          do {
            do {
              if (*local_2b0 - lVar10 != 0) {
                _objc_enumerationMutation(*local_2b0 - lVar10,pcVar4);
              }
              lVar11 = *(long *)(local_2b8 + (long)local_510 * 8);
              local_280 = lVar11;
              (*(code *)PTR__objc_msgSend_02578628)(lVar11,PTR_s_length_0269cca0);
              if (lVar11 != 0) {
                local_271 = 1;
                local_1e4 = 2;
                goto LAB_0107575c;
              }
              local_510 = (cfstringStruct *)((long)&local_510->field0_0x0 + 1);
            } while (local_510 < local_508);
            local_508 = pcVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c0,auStack_a8
                       ,0x10);
            local_510 = (cfstringStruct *)0x0;
          } while (local_508 != (cfstringStruct *)0x0);
        }
        local_1e4 = 0;
LAB_0107575c:
        (*(code *)PTR__objc_release_02578630)(pcVar4);
      }
      pcVar4 = local_1c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_imageURLs_026adac8);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_2c9 = 0;
      bVar1 = 0;
      if (pcVar5 == (cfstringStruct *)0x0) {
        pcVar5 = local_270;
        (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_count_0269cfe0);
        bVar1 = 0;
        if ((pcVar5 != (cfstringStruct *)0x0) && (bVar1 = 1, (local_1d1 & 1) == 0)) {
          pcVar5 = local_1c8;
          (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_isImageNote_026ad960);
          bVar1 = 1;
          if (((ulong)pcVar5 & 1) == 0) {
            pcVar5 = local_270;
            (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_count_0269cfe0);
            bVar1 = 1;
            if (pcVar5 < (cfstringStruct *)((long)&MACH_HEADER.magic + 2)) {
              pcVar5 = local_1c8;
              (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_videoURL_026ad970);
              _objc_retainAutoreleasedReturnValue();
              local_2c9 = 1;
              local_2c8 = pcVar5;
              (*(code *)PTR__objc_msgSend_02578628)();
              bVar1 = 1;
              if (pcVar5 != (cfstringStruct *)0x0) {
                bVar1 = local_271;
              }
            }
          }
        }
      }
      if ((local_2c9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_2c8);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      if ((bVar1 & 1) == 0) {
        pcVar4 = local_1c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_imageURLs_026adac8);
        _objc_retainAutoreleasedReturnValue();
        pcVar5 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar2 = false;
        if (pcVar5 != (cfstringStruct *)0x0) {
          puVar6 = PTR_WCRefineLinkParser_026ce168;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineLinkParser_026ce168,PTR_s_douyinResultHasAnyLivePhoto__026ae1c0,
                     local_1c8);
          bVar2 = false;
          if (((ulong)puVar6 & 1) == 0) {
            pcVar5 = local_268;
            (*(code *)PTR__objc_msgSend_02578628)(local_268,PTR_s_count_0269cfe0);
            bVar2 = pcVar5 != (cfstringStruct *)0x0;
          }
        }
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        if (bVar2) {
          pcVar4 = local_268;
          (*(code *)PTR__objc_msgSend_02578628)(local_268,PTR_s_count_0269cfe0);
          pcVar5 = local_1c8;
          (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_imageURLs_026adac8);
          _objc_retainAutoreleasedReturnValue();
          pcVar7 = pcVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(pcVar5);
          if (pcVar4 == pcVar7) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1c8,PTR_s_setLivePhotoVideoURLs__026add70,local_268);
          }
          else {
            puVar6 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
            _objc_retainAutoreleasedReturnValue();
            local_2e0 = (cfstringStruct *)0x0;
            local_2d8 = puVar6;
            while( true ) {
              pcVar4 = local_2e0;
              pcVar5 = local_1c8;
              (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_imageURLs_026adac8);
              _objc_retainAutoreleasedReturnValue();
              pcVar7 = pcVar5;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(pcVar5);
              if (pcVar7 <= pcVar4) break;
              (*(code *)PTR__objc_retain_02578638)();
              puVar6 = PTR_WCRefineLinkParser_026ce168;
              local_2e8 = &::cf___;
              pcVar4 = local_1c8;
              (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_imageURLs_026adac8);
              _objc_retainAutoreleasedReturnValue();
              pcVar5 = pcVar4;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_douyinImageIdentityKey__026adf28);
              _objc_retainAutoreleasedReturnValue();
              local_2f0 = puVar6;
              (*(code *)PTR__objc_release_02578630)(pcVar5);
              (*(code *)PTR__objc_release_02578630)(pcVar4);
              puVar6 = local_2f0;
              (*(code *)PTR__objc_msgSend_02578628)(local_2f0,PTR_s_length_0269cca0);
              if (puVar6 != (undefined *)0x0) {
                local_2f8 = (cfstringStruct *)0x0;
                while( true ) {
                  pcVar4 = local_2f8;
                  pcVar7 = local_270;
                  (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_count_0269cfe0);
                  pcVar5 = local_2f8;
                  bVar2 = false;
                  if (pcVar4 < pcVar7) {
                    pcVar4 = local_268;
                    (*(code *)PTR__objc_msgSend_02578628)(local_268,PTR_s_count_0269cfe0);
                    bVar2 = pcVar5 < pcVar4;
                  }
                  puVar6 = PTR_WCRefineLinkParser_026ce168;
                  if (!bVar2) goto LAB_01075e08;
                  pcVar4 = local_270;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_270,PTR_s_objectAtIndexedSubscript__0269cc78,local_2f8);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar6,PTR_s_douyinImageIdentityKey__026adf28);
                  _objc_retainAutoreleasedReturnValue();
                  puVar8 = puVar6;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  (*(code *)PTR__objc_release_02578630)(puVar6);
                  (*(code *)PTR__objc_release_02578630)(pcVar4);
                  if (((ulong)puVar8 & 1) != 0) break;
                  local_2f8 = (cfstringStruct *)((long)&local_2f8->field0_0x0 + 1);
                }
                pcVar5 = local_268;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_268,PTR_s_objectAtIndexedSubscript__0269cc78,local_2f8);
                _objc_retainAutoreleasedReturnValue();
                pcVar4 = local_2e8;
                local_2e8 = pcVar5;
                (*(code *)PTR__objc_release_02578630)(pcVar4);
              }
LAB_01075e08:
              pcVar4 = local_2e8;
              (*(code *)PTR__objc_msgSend_02578628)(local_2e8,PTR_s_length_0269cca0);
              local_301 = 0;
              local_311 = 0;
              local_5ec = 0;
              if (pcVar4 == (cfstringStruct *)0x0) {
                pcVar4 = local_250;
                (*(code *)PTR__objc_msgSend_02578628)(local_250,PTR_s_count_0269cfe0);
                pcVar5 = local_1c8;
                (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_imageURLs_026adac8);
                _objc_retainAutoreleasedReturnValue();
                local_301 = 1;
                local_300 = pcVar5;
                (*(code *)PTR__objc_msgSend_02578628)();
                local_5ec = 0;
                if (pcVar4 == pcVar5) {
                  pcVar4 = local_250;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_250,PTR_s_objectAtIndexedSubscript__0269cc78,local_2e0);
                  _objc_retainAutoreleasedReturnValue();
                  local_311 = 1;
                  puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
                  local_310 = pcVar4;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar6)
                  ;
                  local_5ec = (uint)pcVar4;
                }
              }
              if ((local_311 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_310);
              }
              if ((local_301 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_300);
              }
              if ((local_5ec & 1) != 0) {
                pcVar5 = local_250;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_250,PTR_s_objectAtIndexedSubscript__0269cc78,local_2e0);
                _objc_retainAutoreleasedReturnValue();
                pcVar4 = local_2e8;
                local_2e8 = pcVar5;
                (*(code *)PTR__objc_release_02578630)(pcVar4);
              }
              if (local_2e8 == (cfstringStruct *)0x0) {
                local_628 = &::cf___;
              }
              else {
                local_628 = local_2e8;
              }
              (*(code *)PTR__objc_msgSend_02578628)(local_2d8,PTR_s_addObject__0269d180,local_628);
              _objc_storeStrong(&local_2f0);
              _objc_storeStrong(&local_2e8,0);
              local_2e0 = (cfstringStruct *)((long)&local_2e0->field0_0x0 + 1);
            }
            local_312 = 0;
            _memset(auStack_360,0,0x40);
            puVar6 = local_2d8;
            (*(code *)PTR__objc_retain_02578638)();
            local_650 = puVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_360,
                       auStack_128,0x10);
            if (local_650 != (undefined *)0x0) {
              lVar10 = *local_350;
              local_658 = (undefined *)0x0;
              do {
                do {
                  if (*local_350 - lVar10 != 0) {
                    _objc_enumerationMutation(*local_350 - lVar10,puVar6);
                  }
                  lVar11 = *(long *)(local_358 + (long)local_658 * 8);
                  local_320 = lVar11;
                  (*(code *)PTR__objc_msgSend_02578628)(lVar11,PTR_s_length_0269cca0);
                  if (lVar11 != 0) {
                    local_312 = 1;
                    local_1e4 = 0xc;
                    goto LAB_010761c8;
                  }
                  local_658 = local_658 + 1;
                } while (local_658 < local_650);
                local_650 = puVar6;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_360,
                           auStack_128,0x10);
                local_658 = (undefined *)0x0;
              } while (local_650 != (undefined *)0x0);
            }
            local_1e4 = 0;
LAB_010761c8:
            (*(code *)PTR__objc_release_02578630)(puVar6);
            if ((local_312 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1c8,PTR_s_setLivePhotoVideoURLs__026add70,local_2d8);
            }
            _objc_storeStrong(&local_2d8,0);
          }
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_setImageURLs__026add68,local_270);
        if ((local_271 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1c8,PTR_s_setLivePhotoVideoURLs__026add70,local_268);
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_setIsImageNote__026adad0,1);
      }
      _objc_storeStrong(&local_270,0);
    }
    pcVar4 = local_1c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_videoURL_026ad970);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_369 = 0;
    bVar2 = false;
    if (pcVar5 != (cfstringStruct *)0x0) {
      pcVar5 = local_1c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_videoVariants_026ada88);
      _objc_retainAutoreleasedReturnValue();
      local_369 = 1;
      local_368 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar2 = pcVar5 == (cfstringStruct *)0x0;
    }
    if ((local_369 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_368);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    puVar6 = PTR_WCRefineLinkParser_026ce168;
    if (bVar2) {
      pcVar4 = local_1c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_videoURL_026ad970);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar6,PTR_s_variantWithURL_label_width_heigh_026addc8,pcVar4,&::cf__,0,0);
      _objc_retainAutoreleasedReturnValue();
      local_378 = puVar6;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      if (local_378 != (undefined *)0x0) {
        local_130 = local_378;
        puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_130,1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_setVideoVariants__026add50);
        (*(code *)PTR__objc_release_02578630)(puVar6);
      }
      _objc_storeStrong(&local_378,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineLinkParser_026ce168,PTR_s_normalizeVideoVersusCover__026adff8,local_1c8);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineLinkParser_026ce168,PTR_s_ensureDouyinBrowserPlaybackURLFo_026ad9e8,
               local_1c8);
    pcVar4 = local_1c8;
    puVar6 = PTR_WCRefineLinkParser_026ce168;
    IVar3 = local_1b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_finishOnCardPlayback_026ae1b0);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar6,PTR_s_douyinParseSucceeded_cardPlaybac_026adf80,pcVar4,IVar3);
    if (((ulong)puVar6 & 1) == 0) {
      IVar3 = local_1b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_pollCount_026ae170);
      if (IVar3 != 1) {
        (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_pollCount_026ae170);
      }
      IVar3 = local_1b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_pollCount_026ae170);
      if ((long)IVar3 % 2 == 0) {
        IVar9 = local_1b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_webView_026a12c0);
        _objc_retainAutoreleasedReturnValue();
        IVar3 = local_1b8;
        local_3f0 = PTR___NSConcreteStackBlock_02578660;
        local_3e8 = 0xc2000000;
        local_3e4 = 0;
        local_3e0 = FUN_01076868;
        local_3d8 = &DAT_02584cd0;
        (*(code *)PTR__objc_retain_02578638)();
        local_3d0 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar9,PTR_s_evaluateJavaScript_completionHan_026a12f0,
                   &cf_document_documentElement_outerHTML,&local_3f0);
        (*(code *)PTR__objc_release_02578630)(IVar9);
        _objc_storeStrong(&local_3d0,0);
      }
    }
    else {
      local_380 = 0;
      _memset(auStack_3c8,0,0x40);
      pcVar4 = local_1c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_livePhotoVideoURLs_026adb00);
      _objc_retainAutoreleasedReturnValue();
      local_6d8 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_6d8 != (cfstringStruct *)0x0) {
        lVar10 = *local_3b8;
        local_6e0 = (cfstringStruct *)0x0;
        do {
          do {
            if (*local_3b8 - lVar10 != 0) {
              _objc_enumerationMutation(*local_3b8 - lVar10,pcVar4);
            }
            lVar11 = *(long *)(local_3c0 + (long)local_6e0 * 8);
            local_388 = lVar11;
            (*(code *)PTR__objc_msgSend_02578628)(lVar11,PTR_s_length_0269cca0);
            if (lVar11 != 0) {
              local_380 = local_380 + 1;
            }
            local_6e0 = (cfstringStruct *)((long)&local_6e0->field0_0x0 + 1);
          } while (local_6e0 < local_6d8);
          local_6d8 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3c8,auStack_1b0,
                     0x10);
          local_6e0 = (cfstringStruct *)0x0;
        } while (local_6d8 != (cfstringStruct *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1b8,PTR_s_finishWithResult_error__026adfc0,local_1c8,0);
    }
    _objc_storeStrong(&local_268);
    _objc_storeStrong(&local_250,0);
    _objc_storeStrong(&local_248,0);
    local_1e4 = 0;
  }
  else {
    local_1e4 = 1;
  }
  _objc_storeStrong(&local_1e0);
  _objc_storeStrong(&local_1d0,0);
  _objc_storeStrong(&local_1c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

