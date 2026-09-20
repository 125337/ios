// bestDouyinLivePhotoVideoURLFromItem: @ 01039140

/* Function Stack Size: 0x18 bytes */

ID WCRefineLinkParser::bestDouyinLivePhotoVideoURLFromItem_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ID IVar9;
  long lVar10;
  undefined *puVar11;
  undefined *local_430;
  undefined *local_428;
  undefined *local_3e0;
  undefined *local_3d8;
  undefined *local_398;
  undefined *local_388;
  undefined *local_378;
  undefined *local_368;
  undefined *local_358;
  undefined *local_348;
  undefined *local_338;
  undefined *local_328;
  undefined *local_318;
  ID local_2f8;
  ID local_2f0;
  ID local_2e8;
  undefined1 auStack_2e0 [8];
  long local_2d8;
  long *local_2d0;
  undefined8 local_2a0;
  ID local_298;
  ID local_290;
  undefined1 auStack_288 [8];
  long local_280;
  long *local_278;
  undefined *local_248;
  undefined *local_240;
  byte local_231;
  undefined *local_230;
  undefined *local_228;
  byte local_219;
  undefined *local_218;
  byte local_209;
  undefined *local_208;
  byte local_1f9;
  undefined *local_1f8;
  byte local_1e9;
  undefined *local_1e8;
  byte local_1d9;
  undefined *local_1d8;
  byte local_1c9;
  undefined *local_1c8;
  byte local_1b9;
  undefined *local_1b8;
  byte local_1a9;
  undefined *local_1a8;
  undefined *local_1a0;
  undefined *local_198;
  undefined4 local_18c;
  undefined *local_188;
  SEL local_180;
  ID local_178;
  ID local_170;
  undefined1 auStack_168 [128];
  undefined1 auStack_e8 [128];
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_188 = (undefined *)0x0;
  local_180 = param_2;
  local_178 = param_1;
  _objc_storeStrong(&local_188,param_3);
  puVar2 = local_188;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  puVar1 = local_188;
  if (((ulong)puVar2 & 1) == 0) {
    local_170 = 0;
    local_18c = 1;
    goto LAB_0103a074;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_198 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_objectForKeyedSubscript__0269d098,&cf_video);
  _objc_retainAutoreleasedReturnValue();
  local_1a9 = 0;
  local_318 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_318 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    local_1a8 = local_318;
  }
  local_68 = local_318;
  puVar2 = local_198;
  local_1a9 = puVar1 == (undefined *)0x0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_198,PTR_s_objectForKeyedSubscript__0269d098,&cf_videoInfo);
  _objc_retainAutoreleasedReturnValue();
  local_1b9 = 0;
  local_328 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_328 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    local_1b8 = local_328;
  }
  local_60 = local_328;
  puVar11 = local_198;
  local_1b9 = puVar2 == (undefined *)0x0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_198,PTR_s_objectForKeyedSubscript__0269d098,&cf_video_info);
  _objc_retainAutoreleasedReturnValue();
  local_1c9 = 0;
  local_338 = puVar11;
  if (puVar11 == (undefined *)0x0) {
    local_338 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    local_1c8 = local_338;
  }
  local_58 = local_338;
  puVar3 = local_198;
  local_1c9 = puVar11 == (undefined *)0x0;
  (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_objectForKeyedSubscript__0269d098,&cf_clip);
  _objc_retainAutoreleasedReturnValue();
  local_1d9 = 0;
  local_348 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    local_348 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    local_1d8 = local_348;
  }
  local_50 = local_348;
  puVar4 = local_198;
  local_1d9 = puVar3 == (undefined *)0x0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_198,PTR_s_objectForKeyedSubscript__0269d098,&cf_live_photo_video);
  _objc_retainAutoreleasedReturnValue();
  local_1e9 = 0;
  local_358 = puVar4;
  if (puVar4 == (undefined *)0x0) {
    local_358 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    local_1e8 = local_358;
  }
  local_48 = local_358;
  puVar5 = local_198;
  local_1e9 = puVar4 == (undefined *)0x0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_198,PTR_s_objectForKeyedSubscript__0269d098,&cf_livePhotoVideo);
  _objc_retainAutoreleasedReturnValue();
  local_1f9 = 0;
  local_368 = puVar5;
  if (puVar5 == (undefined *)0x0) {
    local_368 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    local_1f8 = local_368;
  }
  local_40 = local_368;
  puVar6 = local_198;
  local_1f9 = puVar5 == (undefined *)0x0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_198,PTR_s_objectForKeyedSubscript__0269d098,&cf_animated_video);
  _objc_retainAutoreleasedReturnValue();
  local_209 = 0;
  local_378 = puVar6;
  if (puVar6 == (undefined *)0x0) {
    local_378 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    local_208 = local_378;
  }
  local_38 = local_378;
  puVar7 = local_198;
  local_209 = puVar6 == (undefined *)0x0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_198,PTR_s_objectForKeyedSubscript__0269d098,&cf_animatedVideo);
  _objc_retainAutoreleasedReturnValue();
  local_219 = 0;
  local_388 = puVar7;
  if (puVar7 == (undefined *)0x0) {
    local_388 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    local_218 = local_388;
  }
  local_30 = local_388;
  puVar8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_219 = puVar7 == (undefined *)0x0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_68,8);
  _objc_retainAutoreleasedReturnValue();
  local_1a0 = puVar8;
  if ((local_219 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_218);
  }
  (*(code *)PTR__objc_release_02578630)(puVar7);
  if ((local_209 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_208);
  }
  (*(code *)PTR__objc_release_02578630)(puVar6);
  if ((local_1f9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_1f8);
  }
  (*(code *)PTR__objc_release_02578630)(puVar5);
  if ((local_1e9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_1e8);
  }
  (*(code *)PTR__objc_release_02578630)(puVar4);
  if ((local_1d9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_1d8);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if ((local_1c9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_1c8);
  }
  (*(code *)PTR__objc_release_02578630)(puVar11);
  if ((local_1b9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_1b8);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if ((local_1a9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_1a8);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar2 = local_198;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_198,PTR_s_objectForKeyedSubscript__0269d098,&cf_live_photo);
  _objc_retainAutoreleasedReturnValue();
  local_231 = 0;
  local_398 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_398 = local_198;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_198,PTR_s_objectForKeyedSubscript__0269d098,&cf_livePhoto);
    _objc_retainAutoreleasedReturnValue();
    local_230 = local_398;
  }
  local_231 = puVar2 == (undefined *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_228 = local_398;
  if ((local_231 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_230);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_228;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  puVar1 = local_228;
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    puVar2 = local_228;
    if (((ulong)puVar1 & 1) != 0) goto LAB_01039a3c;
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if (((ulong)puVar2 & 1) != 0) goto LAB_01039a3c;
  }
  else {
LAB_01039a3c:
    puVar1 = local_1a0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_arrayByAddingObject__026adf70,local_228);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_1a0;
    local_1a0 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_240 = puVar2;
  _memset(auStack_288,0,0x40);
  puVar2 = local_1a0;
  (*(code *)PTR__objc_retain_02578638)();
  local_3d8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_288,auStack_e8,0x10);
  if (local_3d8 != (undefined *)0x0) {
    lVar10 = *local_278;
    local_3e0 = (undefined *)0x0;
    do {
      do {
        if (*local_278 - lVar10 != 0) {
          _objc_enumerationMutation(*local_278 - lVar10,puVar2);
        }
        puVar11 = *(undefined **)(local_280 + (long)local_3e0 * 8);
        puVar1 = PTR__OBJC_CLASS___NSNull_026ce0e8;
        local_248 = puVar11;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        if (puVar11 != puVar1) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_178,PTR_s_appendDouyinLivePhotoVideoCandid_026adf68,local_248,local_240);
        }
        local_3e0 = local_3e0 + 1;
      } while (local_3e0 < local_3d8);
      local_3d8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_288,auStack_e8,0x10)
      ;
      local_3e0 = (undefined *)0x0;
    } while (local_3d8 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_290 = 0;
  local_298 = 0x8000000000000000;
  _memset(auStack_2e0,0,0x40);
  puVar2 = local_240;
  (*(code *)PTR__objc_retain_02578638)();
  local_428 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2e0,auStack_168,0x10);
  if (local_428 != (undefined *)0x0) {
    lVar10 = *local_2d0;
    local_430 = (undefined *)0x0;
    do {
      do {
        if (*local_2d0 - lVar10 != 0) {
          _objc_enumerationMutation(*local_2d0 - lVar10,puVar2);
        }
        local_2a0 = *(undefined8 *)(local_2d8 + (long)local_430 * 8);
        IVar9 = local_178;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_178,PTR_s_preferCleanMediaURL__026add40,local_2a0);
        _objc_retainAutoreleasedReturnValue();
        local_2e8 = IVar9;
        (*(code *)PTR__objc_msgSend_02578628)(IVar9,PTR_s_length_0269cca0);
        if (((IVar9 == 0) ||
            (IVar9 = local_178,
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_178,PTR_s_URLLooksLikeAudioMediaURL__026add00,local_2e8),
            (IVar9 & 1) != 0)) ||
           (IVar9 = local_178,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_178,PTR_s_douyinURLLooksLikeStaticOrPrevie_026add18,local_2e8),
           (IVar9 & 1) != 0)) {
          local_18c = 5;
        }
        else {
          IVar9 = local_2e8;
          (*(code *)PTR__objc_msgSend_02578628)(local_2e8,PTR_s_lowercaseString_0269d9c0);
          _objc_retainAutoreleasedReturnValue();
          local_2f8 = local_178;
          local_2f0 = IVar9;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_178,PTR_s_cleanMediaScoreForURL__026add48,local_2e8);
          IVar9 = local_2f0;
          (*(code *)PTR__objc_msgSend_02578628)(local_2f0,PTR_s_containsString__0269d0b0,&cf_v3_web)
          ;
          if ((IVar9 & 1) != 0) {
            local_2f8 = local_2f8 + 500;
          }
          IVar9 = local_178;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_178,PTR_s_douyinURLLooksLikeSignedPlayable_026adea8,local_2e8);
          if ((IVar9 & 1) != 0) {
            local_2f8 = local_2f8 + 400;
          }
          IVar9 = local_2f0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_2f0,PTR_s_containsString__0269d0b0,&cf_douyinvod_com);
          if ((IVar9 & 1) != 0) {
            local_2f8 = local_2f8 + 200;
          }
          IVar9 = local_2f0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_2f0,PTR_s_containsString__0269d0b0,&cf_play_addr);
          if (((IVar9 & 1) != 0) ||
             (IVar9 = local_2f0,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_2f0,PTR_s_containsString__0269d0b0,&cf_playaddr), (IVar9 & 1) != 0)) {
            local_2f8 = local_2f8 + 100;
          }
          IVar9 = local_178;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_178,PTR_s_URLLooksWatermarked__026add20,local_2e8);
          if ((IVar9 & 1) != 0) {
            local_2f8 = local_2f8 - 400;
          }
          IVar9 = 0;
          if ((local_290 == 0) ||
             (IVar9 = local_2f8 - local_298, IVar9 != 0 && (long)local_298 <= (long)local_2f8)) {
            _objc_storeStrong(IVar9,&local_290,local_2e8);
            local_298 = local_2f8;
            IVar9 = local_2f8;
          }
          _objc_storeStrong(IVar9,&local_2f0,0);
          local_18c = 0;
        }
        _objc_storeStrong(&local_2e8,0);
        local_430 = local_430 + 1;
      } while (local_430 < local_428);
      local_428 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2e0,auStack_168,0x10
                );
      local_430 = (undefined *)0x0;
    } while (local_428 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  IVar9 = local_290;
  (*(code *)PTR__objc_retain_02578638)();
  local_170 = IVar9;
  local_18c = 1;
  _objc_storeStrong(&local_290);
  _objc_storeStrong(&local_240,0);
  _objc_storeStrong(&local_228,0);
  _objc_storeStrong(&local_1a0,0);
  _objc_storeStrong(&local_198,0);
LAB_0103a074:
  _objc_storeStrong(&local_188,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return local_170;
}

