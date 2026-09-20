// fetchURL:allowRedirect:ua:completion: @ 01019b04

/* Function Stack Size: 0x2c bytes */

void WCRefineLinkParser::fetchURL_allowRedirect_ua_completion_
               (ID param_1,SEL param_2,ID param_3,bool param_4,ID param_5,ID param_6,
               undefined4 param_7)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  cfstringStruct *pcVar7;
  ID IVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 in_d0;
  undefined *local_268;
  undefined *local_240;
  uint local_214;
  ID local_208;
  ID local_200;
  cfstringStruct *local_1f0;
  undefined *local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  code *local_190;
  undefined *local_188;
  cfstringStruct *local_180;
  undefined *local_178;
  long local_170;
  ID local_168;
  undefined8 local_160;
  byte local_158;
  byte local_157;
  byte local_151;
  undefined *local_150;
  undefined *local_148;
  byte local_139;
  undefined *local_138;
  byte local_129;
  undefined *local_128;
  undefined *local_120;
  undefined *local_118;
  undefined *local_110;
  ID local_108;
  byte local_f9;
  ulong local_f8;
  byte local_e9;
  ulong local_e8;
  byte local_d9;
  cfstringStruct *local_d8;
  byte local_c9;
  cfstringStruct *local_c8;
  byte local_ba;
  byte local_b9;
  ID local_b8;
  byte local_a9;
  ID local_a8;
  ID local_a0;
  byte local_91;
  cfstringStruct *local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined4 local_74;
  cfstringStruct *local_70;
  long local_68;
  ID local_60;
  byte local_51;
  ulong local_50;
  SEL local_48;
  ID local_40;
  undefined8 local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = 0;
  local_48 = param_2;
  local_40 = param_1;
  _objc_storeStrong(&local_50,param_3);
  local_51 = (byte)param_4;
  local_60 = 0;
  _objc_storeStrong(&local_60,param_5);
  local_68 = 0;
  _objc_storeStrong(&local_68,param_6);
  pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSURL_026ce328;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,local_50);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = local_68;
  puVar6 = PTR__OBJC_CLASS___NSError_026ce470;
  local_70 = pcVar4;
  if (pcVar4 == (cfstringStruct *)0x0) {
    if (local_68 != 0) {
      local_38 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
      local_30 = &cf_eHec;
      puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar6,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_WCRefineLinkParser,
                 0xffffffffffffffff);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar3 + 0x10))(lVar3,0);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
    local_74 = 1;
  }
  else {
    _CFAbsoluteTimeGetCurrent();
    puVar6 = PTR__OBJC_CLASS___NSMutableURLRequest_026ce480;
    local_80 = in_d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableURLRequest_026ce480,PTR_s_requestWithURL__026a16e0,
               local_70);
    _objc_retainAutoreleasedReturnValue();
    local_88 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_setHTTPMethod__026a64b0,&cf_GET);
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4034000000000000,local_88,PTR_s_setTimeoutInterval__0269cae8);
    pcVar4 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_host_0269dc50);
    _objc_retainAutoreleasedReturnValue();
    pcVar7 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_1f0 = pcVar7;
    if (pcVar7 == (cfstringStruct *)0x0) {
      local_1f0 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_90 = local_1f0;
    (*(code *)PTR__objc_release_02578630)(pcVar7);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    IVar8 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_hostNeedsTikTokSession__026adc78,local_90);
    local_91 = (byte)IVar8;
    local_a9 = 0;
    local_b9 = 0;
    if ((IVar8 & 1) == 0) {
      IVar8 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
      if (IVar8 == 0) {
        local_208 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_mobileUA_026adc18);
        _objc_retainAutoreleasedReturnValue();
        local_b9 = 1;
        local_b8 = local_208;
      }
      else {
        local_208 = local_60;
      }
      local_200 = local_208;
    }
    else {
      local_200 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_desktopUA_026adc48);
      _objc_retainAutoreleasedReturnValue();
      local_a9 = 1;
      local_a8 = local_200;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_a0 = local_200;
    if ((local_b9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_b8);
    }
    if ((local_a9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_a8);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_88,PTR_s_setValue_forHTTPHeaderField__026a16e8,local_a0,&cf_User_Agent);
    uVar9 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_c9 = 0;
    local_d9 = 0;
    local_e9 = 0;
    local_f9 = 0;
    local_214 = 1;
    if ((uVar10 & 1) == 0) {
      pcVar4 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_host_0269dc50);
      _objc_retainAutoreleasedReturnValue();
      local_c9 = 1;
      local_c8 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_d9 = 1;
      local_d8 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_214 = 1;
      if (((ulong)pcVar4 & 1) == 0) {
        uVar10 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_lowercaseString_0269d9c0);
        _objc_retainAutoreleasedReturnValue();
        local_e9 = 1;
        local_e8 = uVar10;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_214 = 1;
        if ((uVar10 & 1) == 0) {
          uVar10 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_lowercaseString_0269d9c0);
          _objc_retainAutoreleasedReturnValue();
          local_f9 = 1;
          local_f8 = uVar10;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_214 = (uint)uVar10;
        }
      }
    }
    if ((local_f9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_f8);
    }
    if ((local_e9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_e8);
    }
    if ((local_d9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_d8);
    }
    if ((local_c9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_c8);
    }
    (*(code *)PTR__objc_release_02578630)(uVar9);
    local_ba = (byte)local_214 & 1;
    pcVar4 = &cf_application_json_text_plain____;
    if ((local_214 & 1) == 0) {
      pcVar4 = &cf_text_html_application_xhtml_xml_application_xml_q_0_9_____q_0_8;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_88,PTR_s_setValue_forHTTPHeaderField__026a16e8,pcVar4,&cf_Accept);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_88,PTR_s_setValue_forHTTPHeaderField__026a16e8,&cf_zh_CN_zh_q_0_9,
               &cf_Accept_Language);
    pcVar4 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_containsString__0269d0b0,&cf_xiaohongshu);
    if ((((ulong)pcVar4 & 1) != 0) ||
       (pcVar4 = local_90,
       (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_containsString__0269d0b0,&cf_xhslink),
       ((ulong)pcVar4 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,PTR_s_setValue_forHTTPHeaderField__026a16e8,
                 &cf_https___www_xiaohongshu_com_,&cf_Referer);
    }
    pcVar4 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_containsString__0269d0b0,&cf_douyin);
    if ((((ulong)pcVar4 & 1) != 0) ||
       (pcVar4 = local_90,
       (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_containsString__0269d0b0,&cf_iesdouyin),
       ((ulong)pcVar4 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,PTR_s_setValue_forHTTPHeaderField__026a16e8,&cf_https___www_douyin_com_,
                 &cf_Referer);
    }
    pcVar4 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_containsString__0269d0b0,&cf_bilibili);
    if ((((ulong)pcVar4 & 1) != 0) ||
       (pcVar4 = local_90,
       (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_containsString__0269d0b0,&cf_bilivideo),
       ((ulong)pcVar4 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,PTR_s_setValue_forHTTPHeaderField__026a16e8,&cf_https___www_bilibili_com_,
                 &cf_Referer);
    }
    pcVar4 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_isEqualToString__0269ccc8,&cf_x_com);
    if (((((ulong)pcVar4 & 1) != 0) ||
        (pcVar4 = local_90,
        (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_hasSuffix__0269d018,&cf__twitter_com),
        ((ulong)pcVar4 & 1) != 0)) ||
       (pcVar4 = local_90,
       (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_hasSuffix__0269d018,&cf__twimg_com),
       ((ulong)pcVar4 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,PTR_s_setValue_forHTTPHeaderField__026a16e8,&cf_https___x_com_,&cf_Referer
                );
    }
    if ((local_91 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,PTR_s_setValue_forHTTPHeaderField__026a16e8,&cf_https___www_tiktok_com_,
                 &cf_Referer);
      IVar8 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_tikTokCookies_026adc50);
      _objc_retainAutoreleasedReturnValue();
      local_108 = IVar8;
      (*(code *)PTR__objc_msgSend_02578628)(IVar8,PTR_s_count_0269cfe0);
      if (IVar8 != 0) {
        puVar6 = PTR__OBJC_CLASS___NSHTTPCookie_026cec90;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSHTTPCookie_026cec90,
                   PTR_s_requestHeaderFieldsWithCookies__026adc58,local_108);
        _objc_retainAutoreleasedReturnValue();
        local_110 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar6,PTR_s_objectForKeyedSubscript__0269d098,&cf_Cookie);
        _objc_retainAutoreleasedReturnValue();
        local_118 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_length_0269cca0);
        if (puVar6 != (undefined *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_88,PTR_s_setValue_forHTTPHeaderField__026a16e8,local_118,&cf_Cookie);
        }
        _objc_storeStrong(&local_118);
        _objc_storeStrong(&local_110,0);
      }
      _objc_storeStrong(&local_108,0);
    }
    pcVar4 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_containsString__0269d0b0,&cf_instagram);
    if ((((ulong)pcVar4 & 1) != 0) ||
       (pcVar4 = local_90,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_90,PTR_s_containsString__0269d0b0,&cf_cdninstagram),
       ((ulong)pcVar4 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,PTR_s_setValue_forHTTPHeaderField__026a16e8,&cf_https___www_instagram_com_
                 ,&cf_Referer);
    }
    pcVar4 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_containsString__0269d0b0,&cf_kuaishou);
    if (((((ulong)pcVar4 & 1) != 0) ||
        (pcVar4 = local_90,
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_90,PTR_s_containsString__0269d0b0,&cf_chenzhongtech),
        ((ulong)pcVar4 & 1) != 0)) ||
       ((pcVar4 = local_90,
        (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_containsString__0269d0b0,&cf_kwai),
        ((ulong)pcVar4 & 1) != 0 ||
        (pcVar4 = local_90,
        (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_containsString__0269d0b0,&cf_yximgs),
        ((ulong)pcVar4 & 1) != 0)))) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,PTR_s_setValue_forHTTPHeaderField__026a16e8,&cf_https___www_kuaishou_com_,
                 &cf_Referer);
    }
    local_129 = 0;
    local_139 = 0;
    local_240 = PTR__OBJC_CLASS___NSURLSessionConfiguration_026ce488;
    if ((local_91 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSURLSessionConfiguration_026ce488,
                 PTR_s_ephemeralSessionConfiguration_026aaf10);
      _objc_retainAutoreleasedReturnValue();
      local_139 = 1;
      local_138 = local_240;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSURLSessionConfiguration_026ce488,
                 PTR_s_defaultSessionConfiguration_026a16f0);
      _objc_retainAutoreleasedReturnValue();
      local_129 = 1;
      local_128 = local_240;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_120 = local_240;
    if ((local_139 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_138);
    }
    if ((local_129 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_128);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_setHTTPShouldSetCookies__026adc80,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_setHTTPCookieAcceptPolicy__026adc88,0);
    if ((local_91 & 1) != 0) {
      IVar8 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_tikTokCookieStorage_026adc38);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_setHTTPCookieStorage__026adc90);
      (*(code *)PTR__objc_release_02578630)(IVar8);
    }
    puVar5 = local_120;
    puVar6 = PTR__OBJC_CLASS___NSURLSession_026ce498;
    local_151 = 0;
    bVar1 = (local_51 & 1) == 0;
    if (bVar1) {
      local_268 = PTR_WCRLinkNoRedirectDelegate_026ceca0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRLinkNoRedirectDelegate_026ceca0,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_150 = local_268;
    }
    else {
      local_268 = (undefined *)0x0;
    }
    local_151 = bVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar6,PTR_s_sessionWithConfiguration_delegat_026a1710,puVar5,local_268,0);
    _objc_retainAutoreleasedReturnValue();
    local_148 = puVar6;
    if ((local_151 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_150);
    }
    pcVar4 = local_70;
    puVar2 = local_88;
    puVar6 = local_148;
    local_1a0 = PTR___NSConcreteStackBlock_02578660;
    local_198 = 0xc2000000;
    local_194 = 0;
    local_190 = FUN_0101ab80;
    local_188 = &DAT_02584610;
    local_158 = local_91 & 1;
    local_168 = local_40;
    (*(code *)PTR__objc_retain_02578638)();
    lVar3 = local_68;
    local_180 = pcVar4;
    local_160 = local_80;
    local_157 = local_51 & 1;
    (*(code *)PTR__objc_retain_02578638)();
    puVar5 = local_148;
    local_170 = lVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_178 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar6,PTR_s_dataTaskWithRequest_completionHa_026a5f60,puVar2,&local_1a0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar6);
    _objc_storeStrong(&local_178);
    _objc_storeStrong(&local_170,0);
    _objc_storeStrong(&local_180,0);
    _objc_storeStrong(&local_148,0);
    _objc_storeStrong(&local_120,0);
    _objc_storeStrong(&local_a0,0);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_88,0);
    local_74 = 0;
  }
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

