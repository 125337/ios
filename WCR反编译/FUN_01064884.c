// FUN_01064884 @ 01064884

void FUN_01064884(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  cfstringStruct *pcVar8;
  cfstringStruct *pcVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  cfstringStruct *local_388;
  cfstringStruct *local_378;
  cfstringStruct *local_360;
  cfstringStruct *local_288;
  cfstringStruct *local_270;
  cfstringStruct *local_260;
  cfstringStruct *local_250;
  cfstringStruct *local_238;
  undefined *local_210;
  undefined4 local_208;
  undefined4 local_204;
  code *local_200;
  undefined *local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined **local_1d8;
  undefined *local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  code *local_1c0;
  undefined *local_1b8;
  cfstringStruct *local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined **local_188;
  byte local_179;
  cfstringStruct *local_178;
  byte local_169;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  int local_154;
  undefined *local_150;
  undefined4 local_148;
  undefined4 local_144;
  code *local_140;
  undefined *local_138;
  undefined *local_130;
  undefined8 local_128;
  byte local_119;
  undefined *local_118;
  undefined8 local_110;
  undefined8 local_108;
  long local_100;
  long local_f8;
  long local_f0;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8;
  undefined *local_d0;
  cfstringStruct *local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  cfstringStruct *local_a8;
  undefined *local_a0;
  undefined *local_98;
  bool local_89;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  long local_78;
  undefined8 local_70;
  cfstringStruct *local_68;
  long local_60;
  long local_58;
  cfstringStruct *local_50;
  undefined8 local_48;
  undefined8 local_40;
  cfstringStruct *local_38;
  long local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_60 = 0;
  local_58 = param_1;
  _objc_storeStrong(&local_60);
  local_68 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_68,param_3);
  local_70 = 0;
  _objc_storeStrong(&local_70,param_4);
  lVar4 = local_60;
  local_78 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
  local_89 = false;
  if (lVar4 == 0) {
    local_238 = (cfstringStruct *)0x0;
  }
  else {
    local_238 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_88 = local_238;
  }
  local_89 = lVar4 != 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_80 = local_238;
  if ((local_89 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_88);
  }
  puVar2 = PTR_WCRefineLinkParseResult_026cecb0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineLinkParseResult_026cecb0,PTR_s_new_0269d288);
  local_98 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setPlatform__026adde8,6);
  local_250 = *(cfstringStruct **)(param_1 + 0x20);
  if (local_250 == (cfstringStruct *)0x0) {
    local_250 = &cf___;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setSourceURL__026addf0,local_250);
  local_260 = *(cfstringStruct **)(param_1 + 0x28);
  if (local_260 == (cfstringStruct *)0x0) {
    local_270 = *(cfstringStruct **)(param_1 + 0x20);
    if (local_270 == (cfstringStruct *)0x0) {
      local_270 = &cf___;
    }
    local_260 = local_270;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setResolvedURL__026addf8,local_260);
  puVar2 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
             PTR_s_regularExpressionWithPattern_opt_0269ef10,
             &cf_<script[_>__type_____application_json______>__>___s_S____<_script>,1,0);
  _objc_retainAutoreleasedReturnValue();
  if (local_80 == (cfstringStruct *)0x0) {
    local_288 = &cf___;
  }
  else {
    local_288 = local_80;
  }
  pcVar3 = local_80;
  local_a0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
  pcVar8 = local_80;
  local_48 = 0;
  local_40 = 0;
  local_b0 = 0;
  local_e8 = PTR___NSConcreteGlobalBlock_02578658;
  local_e0 = 0xd0800000;
  local_dc = 0;
  local_d8 = FUN_010657a8;
  local_d0 = &DAT_02581de0;
  local_b8 = *(undefined8 *)(param_1 + 0x38);
  local_a8 = pcVar3;
  local_50 = pcVar3;
  local_38 = pcVar3;
  (*(code *)PTR__objc_retain_02578638)();
  puVar7 = local_98;
  local_c8 = pcVar8;
  (*(code *)PTR__objc_retain_02578638)();
  local_c0 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_enumerateMatchesInString_options_0269ef28,local_288,0,local_b0,local_a8,
             &local_e8);
  puVar2 = local_98;
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_hasMedia_026ada58);
  if (((ulong)puVar2 & 1) == 0) {
    lVar4 = *(long *)(param_1 + 0x38);
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar4,PTR_s_stringsMatchingPattern_inText_ca_026adf58,
               &cf_property_____og_video______>__content_____________,local_80,1);
    _objc_retainAutoreleasedReturnValue();
    local_f0 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_count_0269cfe0);
    if (lVar4 == 0) {
      lVar5 = *(long *)(param_1 + 0x38);
      (*(code *)PTR__objc_msgSend_02578628)
                (lVar5,PTR_s_stringsMatchingPattern_inText_ca_026adf58,
                 &cf_content___________________>__property_____og_video____,local_80,1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = local_f0;
      local_f0 = lVar5;
      (*(code *)PTR__objc_release_02578630)(lVar4);
    }
    lVar4 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_count_0269cfe0);
    if (lVar4 == 0) {
      lVar5 = *(long *)(param_1 + 0x38);
      (*(code *)PTR__objc_msgSend_02578628)
                (lVar5,PTR_s_stringsMatchingPattern_inText_ca_026adf58,
                 &cf__video_url__s___s__________,local_80,1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = local_f0;
      local_f0 = lVar5;
      (*(code *)PTR__objc_release_02578630)(lVar4);
    }
    lVar4 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_firstObject_0269d1f8);
    _objc_retainAutoreleasedReturnValue();
    local_f8 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
    if (lVar4 != 0) {
      lVar5 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_f8,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__amp_,&cf__);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = local_f8;
      local_f8 = lVar5;
      (*(code *)PTR__objc_release_02578630)(lVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setVideoURL__026adbb0,local_f8);
      lVar4 = *(long *)(param_1 + 0x38);
      (*(code *)PTR__objc_msgSend_02578628)
                (lVar4,PTR_s_variantWithURL_label_width_heigh_026addc8,local_f8,&cf__,0,0);
      _objc_retainAutoreleasedReturnValue();
      local_100 = lVar4;
      if (lVar4 != 0) {
        puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_30 = lVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_30,1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setVideoVariants__026add50);
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      _objc_storeStrong(&local_100,0);
    }
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar6,PTR_s_stringsMatchingPattern_inText_ca_026adf58,
               &cf_property_____og_image______>__content_____________,local_80);
    _objc_retainAutoreleasedReturnValue();
    local_108 = uVar6;
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_firstObject_0269d1f8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setCoverURL__026add60);
    (*(code *)PTR__objc_release_02578630)(uVar6);
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar6,PTR_s_stringsMatchingPattern_inText_ca_026adf58,
               &cf_property_____og_title______>__content_____________,local_80,1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_98;
    local_110 = uVar6;
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_title_0269d250);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (puVar7 == (undefined *)0x0) {
      uVar6 = local_110;
      (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setTitle__0269cef0);
      (*(code *)PTR__objc_release_02578630)(uVar6);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x38),PTR_s_normalizeVideoVersusCover__026adff8,local_98);
    _objc_storeStrong(&local_110);
    _objc_storeStrong(&local_108,0);
    _objc_storeStrong(&local_f8,0);
    _objc_storeStrong(&local_f0,0);
  }
  puVar2 = local_98;
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_hasMedia_026ada58);
  local_119 = 0;
  bVar1 = false;
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = local_98;
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_videoURL_026ad970);
    _objc_retainAutoreleasedReturnValue();
    local_119 = 1;
    local_118 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = puVar2 != (undefined *)0x0;
  }
  if ((local_119 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_118);
  }
  puVar2 = PTR___dispatch_main_q_02578680;
  if (bVar1) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_150 = PTR___NSConcreteStackBlock_02578660;
    local_148 = 0xc2000000;
    local_144 = 0;
    local_140 = FUN_01065a28;
    local_138 = &DAT_0257ca68;
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    (*(code *)PTR__objc_retain_02578638)();
    puVar7 = local_98;
    local_128 = uVar6;
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = puVar7;
    _dispatch_async(puVar2,&local_150);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_154 = 1;
    _objc_storeStrong(&local_130);
    _objc_storeStrong(&local_128,0);
  }
  else {
    pcVar8 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_URL_026a1c90);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar8;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    pcVar9 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_169 = 0;
    local_179 = 0;
    if (pcVar9 == (cfstringStruct *)0x0) {
      local_378 = *(cfstringStruct **)(param_1 + 0x28);
      if (local_378 == (cfstringStruct *)0x0) {
        local_388 = *(cfstringStruct **)(param_1 + 0x20);
        if (local_388 == (cfstringStruct *)0x0) {
          local_388 = &cf___;
        }
        local_378 = local_388;
      }
      local_360 = local_378;
    }
    else {
      local_360 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_URL_026a1c90);
      _objc_retainAutoreleasedReturnValue();
      local_169 = 1;
      local_168 = local_360;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_179 = 1;
      local_178 = local_360;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_160 = local_360;
    if ((local_179 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_178);
    }
    if ((local_169 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_168);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar8);
    pcVar8 = local_160;
    puVar2 = PTR___NSConcreteStackBlock_02578660;
    ppuVar11 = &local_1d0;
    local_1d0 = PTR___NSConcreteStackBlock_02578660;
    local_1c8 = 0xc2000000;
    local_1c4 = 0;
    local_1c0 = FUN_01065a68;
    local_1b8 = &DAT_02581fc0;
    local_190 = *(undefined8 *)(param_1 + 0x38);
    (*(code *)PTR__objc_retain_02578638)();
    local_1b0 = pcVar8;
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    (*(code *)PTR__objc_retain_02578638)();
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    local_198 = uVar6;
    (*(code *)PTR__objc_retain_02578638)();
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    local_1a8 = uVar10;
    (*(code *)PTR__objc_retain_02578638)();
    local_1a0 = uVar6;
    _objc_retainBlock();
    pcVar9 = local_68;
    pcVar3 = local_80;
    pcVar8 = local_160;
    uVar12 = *(undefined8 *)(param_1 + 0x38);
    local_210 = puVar2;
    local_208 = 0xc2000000;
    local_204 = 0;
    local_200 = FUN_01066e50;
    local_1f8 = &DAT_02584ba0;
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    local_188 = ppuVar11;
    (*(code *)PTR__objc_retain_02578638)();
    uVar10 = *(undefined8 *)(param_1 + 0x28);
    local_1f0 = uVar6;
    (*(code *)PTR__objc_retain_02578638)();
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    local_1e8 = uVar10;
    (*(code *)PTR__objc_retain_02578638)();
    ppuVar11 = local_188;
    local_1e0 = uVar6;
    (*(code *)PTR__objc_retain_02578638)();
    local_1d8 = ppuVar11;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar12,PTR_s_fetchInstagramGraphQLForURL_html_026ae110,pcVar8,pcVar3,pcVar9,
               &local_210);
    _objc_storeStrong(&local_1d8);
    _objc_storeStrong(&local_1e0,0);
    _objc_storeStrong(&local_1e8,0);
    _objc_storeStrong(&local_1f0,0);
    _objc_storeStrong(&local_188,0);
    _objc_storeStrong(&local_1a0,0);
    _objc_storeStrong(&local_1a8,0);
    _objc_storeStrong(&local_198,0);
    _objc_storeStrong(&local_1b0,0);
    _objc_storeStrong(&local_160,0);
    local_154 = 0;
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_a0,0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_80,0);
  if (local_154 == 0) {
    local_154 = 0;
  }
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

