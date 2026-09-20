// appendDouyinLivePhotoVideoCandidates:to: @ 010388b0

/* Function Stack Size: 0x20 bytes */

void WCRefineLinkParser::appendDouyinLivePhotoVideoCandidates_to_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ID IVar3;
  ulong uVar4;
  long lVar5;
  undefined *local_318;
  undefined *local_310;
  ulong local_2c8;
  ulong local_2c0;
  byte local_28c;
  ulong local_278;
  undefined1 auStack_270 [8];
  long local_268;
  long *local_260;
  undefined8 local_230;
  undefined *local_228;
  ulong local_220;
  undefined1 auStack_218 [8];
  long local_210;
  long *local_208;
  undefined8 local_1d8;
  byte local_1c9;
  ID local_1c8;
  ID local_1c0;
  undefined4 local_1b4;
  ulong local_1b0;
  ulong local_1a8;
  SEL local_1a0;
  ID local_198;
  undefined1 auStack_190 [128];
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1a8 = 0;
  local_1a0 = param_2;
  local_198 = param_1;
  _objc_storeStrong(&local_1a8,param_3);
  local_1b0 = 0;
  _objc_storeStrong(&local_1b0,param_4);
  uVar2 = local_1a8;
  if ((local_1a8 == 0) || (local_1b0 == 0)) {
    local_1b4 = 1;
    goto LAB_010390f4;
  }
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  uVar4 = local_1a8;
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
    uVar2 = local_1a8;
    if ((uVar4 & 1) == 0) {
      puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
      uVar4 = local_1a8;
      if ((uVar2 & 1) == 0) {
        local_1b4 = 1;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_220 = uVar4;
        local_110 = &cf_play_addr;
        local_108 = &cf_playAddr;
        local_100 = &cf_play_url;
        local_f8 = &cf_playUrl;
        local_f0 = &cf_download_addr;
        local_e8 = &cf_downloadAddr;
        local_e0 = &cf_url_list;
        local_d8 = &cf_urlList;
        local_d0 = &cf_bit_rate;
        local_c8 = &cf_bitRate;
        local_c0 = &cf_bitRateList;
        local_b8 = &cf_src;
        local_b0 = &cf_url;
        puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_110,0xd);
        _objc_retainAutoreleasedReturnValue();
        local_228 = puVar1;
        _memset(auStack_270,0,0x40);
        puVar1 = local_228;
        (*(code *)PTR__objc_retain_02578638)();
        local_310 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_270,auStack_190,
                   0x10);
        if (local_310 != (undefined *)0x0) {
          lVar5 = *local_260;
          local_318 = (undefined *)0x0;
          do {
            do {
              if (*local_260 - lVar5 != 0) {
                _objc_enumerationMutation(*local_260 - lVar5,puVar1);
              }
              local_230 = *(undefined8 *)(local_268 + (long)local_318 * 8);
              uVar2 = local_220;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_220,PTR_s_objectForKeyedSubscript__0269d098,local_230);
              _objc_retainAutoreleasedReturnValue();
              local_278 = uVar2;
              if (uVar2 != 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_198,PTR_s_appendDouyinLivePhotoVideoCandid_026adf68,uVar2,local_1b0
                          );
              }
              _objc_storeStrong(&local_278,0);
              local_318 = local_318 + 1;
            } while (local_318 < local_310);
            local_310 = puVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_270,
                       auStack_190,0x10);
            local_318 = (undefined *)0x0;
          } while (local_310 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar1);
        _objc_storeStrong(&local_228);
        _objc_storeStrong(&local_220,0);
        local_1b4 = 0;
      }
    }
    else {
      _memset(auStack_218,0,0x40);
      uVar2 = local_1a8;
      (*(code *)PTR__objc_retain_02578638)();
      local_2c0 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_218,auStack_a8,0x10);
      if (local_2c0 != 0) {
        lVar5 = *local_208;
        local_2c8 = 0;
        do {
          do {
            if (*local_208 - lVar5 != 0) {
              _objc_enumerationMutation(*local_208 - lVar5,uVar2);
            }
            local_1d8 = *(undefined8 *)(local_210 + local_2c8 * 8);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_198,PTR_s_appendDouyinLivePhotoVideoCandid_026adf68,local_1d8,local_1b0
                      );
            local_2c8 = local_2c8 + 1;
          } while (local_2c8 < local_2c0);
          local_2c0 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_218,auStack_a8,
                     0x10);
          local_2c8 = 0;
        } while (local_2c0 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
      local_1b4 = 1;
    }
    goto LAB_010390f4;
  }
  IVar3 = local_198;
  (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_unescapeJSONString__026adcb8,local_1a8);
  _objc_retainAutoreleasedReturnValue();
  local_1c0 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  local_1c8 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_containsString__0269d0b0,&cf__jpg);
  if ((((((IVar3 & 1) == 0) &&
        (IVar3 = local_1c8,
        (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_containsString__0269d0b0,&cf__jpeg),
        (IVar3 & 1) == 0)) &&
       (IVar3 = local_1c8,
       (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_containsString__0269d0b0,&cf__png),
       (IVar3 & 1) == 0)) &&
      ((IVar3 = local_1c8,
       (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_containsString__0269d0b0,&cf__webp),
       (IVar3 & 1) == 0 &&
       (IVar3 = local_1c8,
       (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_containsString__0269d0b0,&cf__heic),
       (IVar3 & 1) == 0)))) &&
     (IVar3 = local_1c8,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_1c8,PTR_s_containsString__0269d0b0,&cf_douyinpic_com), (IVar3 & 1) == 0)) {
    IVar3 = local_1c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_containsString__0269d0b0,&cf_byteimg_com);
    local_28c = 0;
    if ((IVar3 & 1) != 0) goto LAB_01038ad8;
  }
  else {
LAB_01038ad8:
    IVar3 = local_1c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_containsString__0269d0b0,&cf__mp4);
    local_28c = 0;
    if ((IVar3 & 1) == 0) {
      IVar3 = local_1c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_containsString__0269d0b0,&cf_douyinvod);
      local_28c = 0;
      if ((IVar3 & 1) == 0) {
        IVar3 = local_1c8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1c8,PTR_s_containsString__0269d0b0,&cf_aweme_v1_play);
        local_28c = (byte)IVar3 ^ 1;
      }
    }
  }
  local_1c9 = local_28c & 1;
  IVar3 = local_1c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_hasPrefix__0269d320,&cf_http);
  if ((((IVar3 & 1) != 0) && ((local_1c9 & 1) == 0)) &&
     ((IVar3 = local_198,
      (*(code *)PTR__objc_msgSend_02578628)
                (local_198,PTR_s_URLLooksLikeAudioMediaURL__026add00,local_1c0), (IVar3 & 1) == 0 &&
      ((IVar3 = local_198,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_198,PTR_s_douyinURLLooksLikeStaticOrPrevie_026add18,local_1c0),
       (IVar3 & 1) == 0 &&
       (uVar2 = local_1b0,
       (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_containsObject__0269cbb8,local_1c0),
       (uVar2 & 1) == 0)))))) {
    (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_addObject__0269d180,local_1c0);
  }
  local_1b4 = 1;
  _objc_storeStrong(&local_1c8);
  _objc_storeStrong(&local_1c0,0);
LAB_010390f4:
  _objc_storeStrong(&local_1b0);
  _objc_storeStrong(&local_1a8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

