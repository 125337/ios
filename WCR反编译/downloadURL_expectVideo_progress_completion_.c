// downloadURL:expectVideo:progress:completion: @ 00ffffb0

/* Function Stack Size: 0x2c bytes */

void WCRefineLinkMediaSender::downloadURL_expectVideo_progress_completion_
               (ID param_1,SEL param_2,ID param_3,bool param_4,ID param_5,undefined4 param_6,
               ID param_7,undefined4 param_8)

{
  byte bVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  int iVar8;
  cfstringStruct *local_210;
  double local_198;
  byte local_180;
  byte local_17c;
  byte local_16c;
  cfstringStruct *local_130;
  undefined *local_128;
  undefined4 local_120;
  undefined4 local_11c;
  code *local_118;
  undefined *local_110;
  undefined *local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined **local_f0;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8;
  undefined *local_d0;
  long local_c8;
  undefined *local_c0;
  double local_b8;
  undefined4 local_ac;
  double local_a8;
  undefined *local_a0;
  byte local_93;
  byte local_92;
  byte local_91;
  ulong local_90;
  double local_88;
  undefined *local_80;
  undefined4 local_74;
  cfstringStruct *local_70;
  long local_68;
  undefined8 local_60;
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
  pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSURL_026ce328;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,local_50);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_68;
  puVar4 = PTR__OBJC_CLASS___NSError_026ce470;
  local_70 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    if (local_68 != 0) {
      local_38 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
      local_30 = &cf_eHeZSO0W_W;
      puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_WCRefineLinkMediaSender,
                 0xffffffffffffffff);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar2 + 0x10))(lVar2,0);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar6);
    }
    local_74 = 1;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSMutableURLRequest_026ce480;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableURLRequest_026ce480,PTR_s_requestWithURL__026a16e0,pcVar3)
    ;
    _objc_retainAutoreleasedReturnValue();
    iVar8 = 600;
    if ((local_51 & 1) == 0) {
      iVar8 = 0x5a;
    }
    local_88 = (double)iVar8;
    local_80 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,puVar4,PTR_s_setTimeoutInterval__0269cae8);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_80,PTR_s_setValue_forHTTPHeaderField__026a16e8,
               &
               cf_Mozilla_5_0_iPhone_CPUiPhoneOS17_0likeMacOSX_AppleWebKit_605_1_15_KHTML_likeGecko_Version_17_0Mobile_15E148Safari_604_1
               ,&cf_User_Agent);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_80,PTR_s_setValue_forHTTPHeaderField__026a16e8,&cf____,&cf_Accept);
    uVar5 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    local_90 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_containsString__0269d0b0,&cf_douyinpic);
    local_16c = 1;
    if ((uVar5 & 1) == 0) {
      uVar5 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_containsString__0269d0b0,&cf_byteimg);
      local_16c = 1;
      if ((uVar5 & 1) == 0) {
        uVar5 = local_90;
        (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_containsString__0269d0b0,&cf_ibyteimg);
        local_16c = (byte)uVar5;
      }
    }
    local_91 = local_16c & 1;
    local_17c = 0;
    if ((local_51 & 1) == 0) {
      uVar5 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_containsString__0269d0b0,&cf_ies_music);
      local_180 = 1;
      if ((uVar5 & 1) == 0) {
        uVar5 = local_90;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_90,PTR_s_containsString__0269d0b0,&cf_douyinstatic);
        local_180 = 1;
        if ((uVar5 & 1) == 0) {
          uVar5 = local_90;
          (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_containsString__0269d0b0,&cf_zjcdn);
          local_180 = 1;
          if ((uVar5 & 1) == 0) {
            uVar5 = local_90;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_90,PTR_s_containsString__0269d0b0,&cf_bytecdntp);
            local_180 = (byte)uVar5;
          }
        }
      }
      local_17c = local_180;
    }
    local_92 = local_17c & 1;
    uVar5 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_containsString__0269d0b0,&cf_douyin);
    bVar1 = 1;
    if ((uVar5 & 1) == 0) {
      uVar5 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_containsString__0269d0b0,&cf_byteicdn);
      bVar1 = 1;
      if ((uVar5 & 1) == 0) {
        uVar5 = local_90;
        (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_containsString__0269d0b0,&cf_snssdk);
        bVar1 = 1;
        if ((uVar5 & 1) == 0) {
          uVar5 = local_90;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_90,PTR_s_containsString__0269d0b0,&cf_douyinvod);
          bVar1 = 1;
          if ((uVar5 & 1) == 0) {
            uVar5 = local_90;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_90,PTR_s_containsString__0269d0b0,&cf_iesdouyin);
            bVar1 = 1;
            if (((uVar5 & 1) == 0) && (bVar1 = 1, (local_91 & 1) == 0)) {
              bVar1 = local_92;
            }
          }
        }
      }
    }
    local_93 = bVar1 & 1;
    if (((bVar1 & 1) != 0) && ((local_91 & 1) == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_80,PTR_s_setValue_forHTTPHeaderField__026a16e8,&cf_https___www_douyin_com_,
                 &cf_Referer);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_80,PTR_s_setValue_forHTTPHeaderField__026a16e8,&cf_https___www_douyin_com,
                 &cf_Origin);
    }
    uVar5 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_containsString__0269d0b0,&cf_xiaohongshu);
    if (((uVar5 & 1) != 0) ||
       (uVar5 = local_90,
       (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_containsString__0269d0b0,&cf_xhscdn),
       (uVar5 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_80,PTR_s_setValue_forHTTPHeaderField__026a16e8,
                 &cf_https___www_xiaohongshu_com_,&cf_Referer);
    }
    uVar5 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_containsString__0269d0b0,&cf_bilibili);
    if ((((uVar5 & 1) != 0) ||
        (uVar5 = local_90,
        (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_containsString__0269d0b0,&cf_bilivideo)
        , (uVar5 & 1) != 0)) ||
       (uVar5 = local_90,
       (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_containsString__0269d0b0,&cf_hdslb),
       (uVar5 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_80,PTR_s_setValue_forHTTPHeaderField__026a16e8,&cf_https___www_bilibili_com_,
                 &cf_Referer);
    }
    uVar5 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_containsString__0269d0b0,&cf_twimg_com);
    if ((uVar5 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_80,PTR_s_setValue_forHTTPHeaderField__026a16e8,&cf_https___x_com_,&cf_Referer
                );
    }
    uVar5 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_containsString__0269d0b0,&cf_tiktok);
    if (((uVar5 & 1) != 0) ||
       (uVar5 = local_90,
       (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_containsString__0269d0b0,&cf_tiktokcdn),
       (uVar5 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineLinkParser_026ce168,PTR_s_applyTikTokCDNHeadersToRequest__026ad8e8,
                 local_80);
    }
    uVar5 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_containsString__0269d0b0,&cf_instagram);
    if (((uVar5 & 1) != 0) ||
       (uVar5 = local_90,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_90,PTR_s_containsString__0269d0b0,&cf_cdninstagram), (uVar5 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_80,PTR_s_setValue_forHTTPHeaderField__026a16e8,&cf_https___www_instagram_com_
                 ,&cf_Referer);
    }
    uVar5 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_containsString__0269d0b0,&cf_kwai);
    if ((((uVar5 & 1) != 0) ||
        (uVar5 = local_90,
        (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_containsString__0269d0b0,&cf_yximgs),
        (uVar5 & 1) != 0)) ||
       (uVar5 = local_90,
       (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_containsString__0269d0b0,&cf_oskwai),
       (uVar5 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_80,PTR_s_setValue_forHTTPHeaderField__026a16e8,&cf_https___www_kuaishou_com_,
                 &cf_Referer);
    }
    puVar4 = PTR__OBJC_CLASS___NSURLSessionConfiguration_026ce488;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURLSessionConfiguration_026ce488,
               PTR_s_defaultSessionConfiguration_026a16f0);
    _objc_retainAutoreleasedReturnValue();
    local_a8 = local_88;
    local_ac = 0x78;
    if (120.0 <= local_88) {
      local_198 = 120.0;
    }
    else {
      local_198 = local_88;
    }
    local_b8 = local_198;
    local_a0 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_198,puVar4,PTR_s_setTimeoutIntervalForRequest__026a16f8);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_88,local_a0,PTR_s_setTimeoutIntervalForResource__026a1700);
    puVar4 = PTR_WCRLinkMediaDownloader_026cec88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRLinkMediaDownloader_026cec88,PTR_s_new_0269d288);
    local_c0 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setExpectVideo__026ad8f0,local_51 & 1);
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setProgress__026ad8f8,local_60);
    lVar2 = local_68;
    puVar4 = PTR___NSConcreteStackBlock_02578660;
    local_e8 = PTR___NSConcreteStackBlock_02578660;
    local_e0 = 0xc2000000;
    local_dc = 0;
    local_d8 = FUN_01000ca0;
    local_d0 = &DAT_02584080;
    (*(code *)PTR__objc_retain_02578638)();
    local_c8 = lVar2;
    puVar6 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setCompletion__0269fdc8,&local_e8);
    FUN_01000d54();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar6);
    puVar6 = local_a0;
    ppuVar7 = &local_128;
    local_128 = puVar4;
    local_120 = 0xc2000000;
    local_11c = 0;
    local_118 = FUN_01000dc8;
    local_110 = &DAT_025839b0;
    (*(code *)PTR__objc_retain_02578638)();
    puVar4 = local_c0;
    local_108 = puVar6;
    (*(code *)PTR__objc_retain_02578638)();
    puVar6 = local_80;
    local_100 = puVar4;
    (*(code *)PTR__objc_retain_02578638)();
    local_f8 = puVar6;
    _objc_retainBlock();
    local_f0 = ppuVar7;
    if (((local_91 & 1) == 0) && ((local_92 & 1) == 0)) {
      (*(code *)ppuVar7[2])();
      local_74 = 0;
    }
    else {
      pcVar3 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_host_0269dc50);
      _objc_retainAutoreleasedReturnValue();
      local_210 = pcVar3;
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_210 = &::cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_130 = local_210;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineLinkParser_026ce168,PTR_s_applyDouyinCDNHeadersToRequest_c_026ad900,
                 local_80,local_f0);
      local_74 = 1;
      _objc_storeStrong(&local_130,0);
    }
    _objc_storeStrong(&local_f0);
    _objc_storeStrong(&local_f8,0);
    _objc_storeStrong(&local_100,0);
    _objc_storeStrong(&local_108,0);
    _objc_storeStrong(&local_c8,0);
    _objc_storeStrong(&local_c0,0);
    _objc_storeStrong(&local_a0,0);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_80,0);
  }
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

