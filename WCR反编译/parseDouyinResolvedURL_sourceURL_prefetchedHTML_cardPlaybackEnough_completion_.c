// parseDouyinResolvedURL:sourceURL:prefetchedHTML:cardPlaybackEnough:completion: @ 0103a0bc

/* Function Stack Size: 0x34 bytes */

void WCRefineLinkParser::
     parseDouyinResolvedURL_sourceURL_prefetchedHTML_cardPlaybackEnough_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,bool param_6,ID param_7,
               undefined4 param_8)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  cfstringStruct *pcVar8;
  cfstringStruct *local_370;
  cfstringStruct *local_360;
  cfstringStruct *local_348;
  cfstringStruct *local_2b0;
  cfstringStruct *local_2a8;
  cfstringStruct *local_240;
  cfstringStruct *local_220;
  cfstringStruct *local_1e8;
  undefined *local_1e0;
  undefined *local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  code *local_1c8;
  undefined *local_1c0;
  undefined *local_1b8;
  undefined **local_1b0;
  undefined *local_1a8;
  byte local_199;
  cfstringStruct *local_198;
  cfstringStruct *local_190;
  undefined *local_188;
  undefined4 local_180;
  undefined4 local_17c;
  code *local_178;
  undefined *local_170;
  cfstringStruct *local_168;
  undefined **local_160;
  cfstringStruct *local_158;
  undefined *local_150;
  undefined *local_148;
  undefined4 local_140;
  undefined4 local_13c;
  code *local_138;
  undefined *local_130;
  cfstringStruct *local_128;
  undefined **local_120;
  byte local_111;
  cfstringStruct *local_110;
  byte local_101;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  undefined *local_d8;
  cfstringStruct *local_d0;
  undefined **local_c8;
  cfstringStruct *local_c0;
  byte local_b8;
  undefined **local_b0;
  uint local_a4;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  undefined **local_80;
  undefined *local_78;
  byte local_69;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined **local_58;
  byte local_49;
  long local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  SEL local_30;
  cfstringStruct *local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  local_49 = (byte)param_6;
  local_58 = (undefined **)0x0;
  _objc_storeStrong(&local_58,param_7);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_douyinAwemeIDFromURL__026adf78,local_38);
  _objc_retainAutoreleasedReturnValue();
  local_69 = 0;
  local_220 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_220 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_douyinAwemeIDFromURL__026adf78,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_68 = local_220;
  }
  local_69 = pcVar1 == (cfstringStruct *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = local_220;
  if ((local_69 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  if (local_38 == (cfstringStruct *)0x0) {
    local_240 = &::cf___;
  }
  else {
    local_240 = local_38;
  }
  puVar2 = PTR__OBJC_CLASS___NSURLComponents_026ce130;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSURLComponents_026ce130,PTR_s_componentsWithString__0269d818,
             local_240);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_78 = puVar4;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  pcVar1 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
  if ((pcVar1 == (cfstringStruct *)0x0) &&
     ((((puVar2 = local_78,
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_isEqualToString__0269ccc8,&cf__user),
        ((ulong)puVar2 & 1) != 0 ||
        (puVar2 = local_78,
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_hasPrefix__0269d320,&cf__user_),
        ((ulong)puVar2 & 1) != 0)) ||
       (puVar2 = local_78,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_78,PTR_s_isEqualToString__0269ccc8,&cf__share_user),
       ((ulong)puVar2 & 1) != 0)) ||
      (puVar2 = local_78,
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_hasPrefix__0269d320,&cf__share_user_),
      ((ulong)puVar2 & 1) != 0)))) {
    puVar2 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = local_58;
    local_a0 = PTR___NSConcreteStackBlock_02578660;
    local_98 = 0xc2000000;
    local_94 = 0;
    local_90 = FUN_0103b0e8;
    local_88 = &DAT_025814c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_80 = ppuVar5;
    _dispatch_async(puVar2,&local_a0);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_a4 = 1;
    _objc_storeStrong(&local_80,0);
    goto LAB_0103b08c;
  }
  ppuVar5 = local_58;
  _objc_retainBlock();
  ppuVar6 = &local_f0;
  local_f0 = PTR___NSConcreteStackBlock_02578660;
  local_e8 = 0xc2000000;
  local_e4 = 0;
  local_e0 = FUN_0103b224;
  local_d8 = &DAT_025847f0;
  local_b0 = ppuVar5;
  (*(code *)PTR__objc_retain_02578638)();
  pcVar1 = local_60;
  local_c8 = ppuVar5;
  (*(code *)PTR__objc_retain_02578638)();
  local_d0 = pcVar1;
  local_c0 = local_28;
  local_b8 = local_49 & 1;
  _objc_retainBlock();
  ppuVar5 = local_58;
  local_58 = ppuVar6;
  (*(code *)PTR__objc_release_02578630)(ppuVar5);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_cachedDouyinResultForAwemeID__026adf90,local_60);
  _objc_retainAutoreleasedReturnValue();
  local_f8 = pcVar1;
  if (((pcVar1 != (cfstringStruct *)0x0) &&
      ((*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isImageNote_026ad960),
      ((ulong)pcVar1 & 1) == 0)) &&
     ((pcVar1 = local_28,
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_douyinURLIsImageNote__026ade98,local_40),
      ((ulong)pcVar1 & 1) != 0 ||
      (pcVar1 = local_28,
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_douyinURLIsImageNote__026ade98,local_38),
      ((ulong)pcVar1 & 1) != 0)))) {
    _objc_storeStrong(&local_f8,0);
  }
  if (local_f8 == (cfstringStruct *)0x0) {
    lVar7 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    if (lVar7 != 0) {
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_150 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
      if (puVar2 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)();
        puVar2 = local_150;
        local_150 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      pcVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_extractDouyinFromHTML_sourceURL__026adf98,local_150,local_40,
                 local_38);
      _objc_retainAutoreleasedReturnValue();
      pcVar8 = local_28;
      local_158 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_douyinParseSucceeded_cardPlaybac_026adf80,pcVar1,local_49 & 1);
      puVar2 = PTR___dispatch_main_q_02578680;
      if (((ulong)pcVar8 & 1) == 0) {
        local_a4 = 0;
      }
      else {
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = local_58;
        local_188 = PTR___NSConcreteStackBlock_02578660;
        local_180 = 0xc2000000;
        local_17c = 0;
        local_178 = FUN_0103b624;
        local_170 = &DAT_0257ca68;
        (*(code *)PTR__objc_retain_02578638)();
        pcVar1 = local_158;
        local_160 = ppuVar5;
        (*(code *)PTR__objc_retain_02578638)();
        local_168 = pcVar1;
        _dispatch_async(puVar2,&local_188);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        local_a4 = 1;
        _objc_storeStrong(&local_168);
        _objc_storeStrong(&local_160,0);
      }
      _objc_storeStrong(&local_158);
      _objc_storeStrong(&local_150,0);
      if (local_a4 != 0) goto LAB_0103b054;
    }
    if ((((local_49 & 1) != 0) &&
        (pcVar1 = local_28,
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_douyinURLIsImageNote__026ade98,local_38), ((ulong)pcVar1 & 1) == 0
        )) && (pcVar1 = local_28,
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_28,PTR_s_douyinURLIsImageNote__026ade98,local_40),
              ((ulong)pcVar1 & 1) == 0)) {
      pcVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_douyinVideoIDFromURL__026addd8,local_38);
      _objc_retainAutoreleasedReturnValue();
      local_199 = 0;
      local_348 = pcVar1;
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_348 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_douyinVideoIDFromURL__026addd8,local_40);
        _objc_retainAutoreleasedReturnValue();
        local_198 = local_348;
      }
      local_199 = pcVar1 == (cfstringStruct *)0x0;
      (*(code *)PTR__objc_retain_02578638)();
      local_190 = local_348;
      if ((local_199 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_198);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar1 = local_190;
      (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_length_0269cca0);
      if (pcVar1 == (cfstringStruct *)0x0) {
        pcVar1 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
        if (pcVar1 == (cfstringStruct *)0x0) {
          local_a4 = 0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_extractDouyinViaWebViewURL_sourc_026adfa0,local_38,local_40,1,
                     local_58);
          local_a4 = 1;
        }
      }
      else {
        puVar2 = PTR_WCRefineLinkParseResult_026cecb0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineLinkParseResult_026cecb0,PTR_s_new_0269d288);
        local_1a8 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setPlatform__026adde8,1);
        if (local_40 == (cfstringStruct *)0x0) {
          local_360 = &::cf___;
        }
        else {
          local_360 = local_40;
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_setSourceURL__026addf0,local_360);
        if (local_38 == (cfstringStruct *)0x0) {
          local_370 = &::cf___;
        }
        else {
          local_370 = local_38;
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_setResolvedURL__026addf8,local_370);
        pcVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_douyinBrowserPlaybackURLForVideo_026adde0,local_190);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_setBrowserPlaybackURL__026add58);
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_setTitle__0269cef0,&cf_RN);
        puVar2 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = local_58;
        local_1d8 = PTR___NSConcreteStackBlock_02578660;
        local_1d0 = 0xc2000000;
        local_1cc = 0;
        local_1c8 = FUN_0103b664;
        local_1c0 = &DAT_0257ca68;
        (*(code *)PTR__objc_retain_02578638)();
        puVar3 = local_1a8;
        local_1b0 = ppuVar5;
        (*(code *)PTR__objc_retain_02578638)();
        local_1b8 = puVar3;
        _dispatch_async(puVar2,&local_1d8);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        local_a4 = 1;
        _objc_storeStrong(&local_1b8);
        _objc_storeStrong(&local_1b0,0);
        _objc_storeStrong(&local_1a8,0);
      }
      _objc_storeStrong(&local_190,0);
      if (local_a4 != 0) goto LAB_0103b054;
    }
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_28;
    local_1e0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_douyinHydratePageURLWithAwemeID__026adfa8,local_60,local_40,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_1e8 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
    if (pcVar1 != (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_addObject__0269d180,local_1e8);
    }
    puVar2 = local_1e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_count_0269cfe0);
    if (puVar2 != (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_tryDouyinCandidates_index_resolv_026adfb0,local_1e0,0,local_38,
                 local_40,local_49 & 1,local_58);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_extractDouyinViaWebViewURL_sourc_026adfa0,local_38,local_40,
                 local_49 & 1,local_58);
    }
    local_a4 = (uint)(puVar2 == (undefined *)0x0);
    _objc_storeStrong(&local_1e8);
    _objc_storeStrong(&local_1e0,0);
  }
  else {
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    local_101 = 0;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_2a8 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_sourceURL_026ad980);
      _objc_retainAutoreleasedReturnValue();
      local_100 = local_2a8;
    }
    else {
      local_2a8 = local_40;
    }
    local_101 = pcVar1 == (cfstringStruct *)0x0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_setSourceURL__026addf0,local_2a8);
    if ((local_101 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_100);
    }
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    local_111 = 0;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_2b0 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_resolvedURL_026ad978);
      _objc_retainAutoreleasedReturnValue();
      local_110 = local_2b0;
    }
    else {
      local_2b0 = local_38;
    }
    local_111 = pcVar1 == (cfstringStruct *)0x0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_setResolvedURL__026addf8,local_2b0);
    if ((local_111 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_110);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_ensureDouyinBrowserPlaybackURLFo_026ad9e8,local_f8);
    puVar2 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = local_58;
    local_148 = PTR___NSConcreteStackBlock_02578660;
    local_140 = 0xc2000000;
    local_13c = 0;
    local_138 = FUN_0103b5e4;
    local_130 = &DAT_0257ca68;
    (*(code *)PTR__objc_retain_02578638)();
    pcVar1 = local_f8;
    local_120 = ppuVar5;
    (*(code *)PTR__objc_retain_02578638)();
    local_128 = pcVar1;
    _dispatch_async(puVar2,&local_148);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_a4 = 1;
    _objc_storeStrong(&local_128);
    _objc_storeStrong(&local_120,0);
  }
LAB_0103b054:
  _objc_storeStrong(&local_f8);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_b0,0);
LAB_0103b08c:
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

