// parseTikTokEmbedFallback:sourceURL:upstreamError:completion: @ 0105d3ec

/* Function Stack Size: 0x30 bytes */

void WCRefineLinkParser::parseTikTokEmbedFallback_sourceURL_upstreamError_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,
               undefined4 param_7)

{
  bool bVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  undefined1 *puVar7;
  ID IVar8;
  cfstringStruct *local_1d0;
  cfstringStruct *local_1c0;
  undefined *local_170;
  undefined4 local_168;
  undefined4 local_164;
  code *local_160;
  undefined *local_158;
  undefined8 local_150;
  cfstringStruct *local_148;
  undefined8 local_140;
  undefined **local_138;
  ID local_130;
  undefined *local_128;
  undefined4 local_11c;
  undefined *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  code *local_108;
  undefined *local_100;
  undefined8 local_f8;
  undefined **local_f0;
  bool local_e1;
  cfstringStruct *local_e0;
  undefined1 *local_d8;
  undefined *local_d0;
  cfstringStruct *local_c8;
  undefined8 local_c0;
  cfstringStruct *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined **local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  cfstringStruct *local_58;
  SEL local_50;
  ID local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  undefined8 local_30;
  cfstringStruct *local_28;
  
  local_58 = (cfstringStruct *)0x0;
  local_50 = param_2;
  local_48 = param_1;
  _objc_storeStrong(&local_58,param_3);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_4);
  local_68 = 0;
  _objc_storeStrong(&local_68,param_5);
  local_70 = 0;
  _objc_storeStrong(&local_70,param_6);
  uVar2 = local_68;
  ppuVar4 = &local_a0;
  local_a0 = PTR___NSConcreteStackBlock_02578660;
  local_98 = 0xc2000000;
  local_94 = 0;
  local_90 = FUN_0105da08;
  local_88 = &DAT_02584a30;
  (*(code *)PTR__objc_retain_02578638)();
  local_80 = uVar2;
  _objc_retainBlock();
  puVar5 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
  local_78 = ppuVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
             PTR_s_regularExpressionWithPattern_opt_0269ef10,&cf_____video_photo____d__,0,0);
  _objc_retainAutoreleasedReturnValue();
  if (local_58 == (cfstringStruct *)0x0) {
    local_1c0 = &::cf___;
  }
  else {
    local_1c0 = local_58;
  }
  pcVar6 = local_58;
  local_a8 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
  local_38 = 0;
  local_30 = 0;
  local_c0 = 0;
  local_b8 = pcVar6;
  local_40 = pcVar6;
  local_28 = pcVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar5,PTR_s_firstMatchInString_options_range_0269ef48,local_1c0,0,0,pcVar6);
  _objc_retainAutoreleasedReturnValue();
  local_b0 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_numberOfRanges_0269ef18);
  local_1d0 = local_58;
  local_e1 = false;
  bVar1 = puVar5 < (undefined1 *)((long)&MACH_HEADER.magic + 2);
  if (bVar1) {
    local_1d0 = (cfstringStruct *)0x0;
  }
  else {
    puVar7 = local_b0;
    puVar5 = PTR_s_rangeAtIndex__0269ef20;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_rangeAtIndex__0269ef20,1);
    local_d8 = puVar7;
    local_d0 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1d0,PTR_s_substringWithRange__0269d138,puVar7,puVar5);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = local_1d0;
  }
  local_e1 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_c8 = local_1d0;
  if ((local_e1 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_e0);
  }
  pcVar6 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
  puVar5 = PTR___dispatch_main_q_02578680;
  if (pcVar6 == (cfstringStruct *)0x0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_70;
    local_118 = PTR___NSConcreteStackBlock_02578660;
    local_110 = 0xc2000000;
    local_10c = 0;
    local_108 = FUN_0105dbc8;
    local_100 = &DAT_02584a60;
    (*(code *)PTR__objc_retain_02578638)();
    ppuVar4 = local_78;
    local_f8 = uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_f0 = ppuVar4;
    _dispatch_async(puVar5,&local_118);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    local_11c = 1;
    _objc_storeStrong(&local_f0);
    _objc_storeStrong(&local_f8,0);
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
               &cf_https___www_tiktok_com_embed_v2___);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_48;
    IVar8 = local_48;
    local_128 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_desktopUA_026adc48);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_60;
    local_170 = PTR___NSConcreteStackBlock_02578660;
    local_168 = 0xc2000000;
    local_164 = 0;
    local_160 = FUN_0105dc34;
    local_158 = &DAT_02584ac0;
    local_130 = local_48;
    (*(code *)PTR__objc_retain_02578638)();
    pcVar6 = local_58;
    local_150 = uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    uVar2 = local_70;
    local_148 = pcVar6;
    (*(code *)PTR__objc_retain_02578638)();
    ppuVar4 = local_78;
    local_140 = uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_138 = ppuVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar3,PTR_s_fetchURL_allowRedirect_ua_comple_026adca0,puVar5,1,IVar8,&local_170);
    (*(code *)PTR__objc_release_02578630)(IVar8);
    _objc_storeStrong(&local_138);
    _objc_storeStrong(&local_140,0);
    _objc_storeStrong(&local_148,0);
    _objc_storeStrong(&local_150,0);
    _objc_storeStrong(&local_128,0);
    local_11c = 0;
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_b0,0);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  return;
}

