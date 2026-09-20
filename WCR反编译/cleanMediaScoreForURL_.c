// cleanMediaScoreForURL: @ 01022d04

/* Function Stack Size: 0x18 bytes */

long_long WCRefineLinkParser::cleanMediaScoreForURL_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ID IVar2;
  ulong local_48;
  long_long local_40;
  undefined4 local_34;
  ulong local_30;
  SEL local_28;
  ID local_20;
  long_long local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_18 = 0xffffffffffffd8f0;
    local_34 = 1;
  }
  else {
    local_40 = 0;
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_20;
    local_48 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_douyinURLLooksLikeStaticOrPrevie_026add18,local_30);
    if ((IVar2 & 1) != 0) {
      local_40 = local_40 - 5000;
    }
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_URLLooksWatermarked__026add20,local_30);
    if ((IVar2 & 1) != 0) {
      local_40 = local_40 - 1000;
    }
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_douyinURLLooksUnsignedSyntheticP_026add28,local_30);
    if ((IVar2 & 1) != 0) {
      local_40 = local_40 - 600;
    }
    uVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_containsString__0269d0b0,&cf_sns_img_hw);
    if (((uVar1 & 1) != 0) ||
       (uVar1 = local_48,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_48,PTR_s_containsString__0269d0b0,&cf_ci_xiaohongshu_com), (uVar1 & 1) != 0)
       ) {
      local_40 = local_40 + 500;
    }
    uVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_containsString__0269d0b0,&cf_sns_webpic_qc)
    ;
    if (((uVar1 & 1) != 0) ||
       (uVar1 = local_48,
       (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_containsString__0269d0b0,&cf_webpic_qc),
       (uVar1 & 1) != 0)) {
      local_40 = local_40 - 400;
    }
    uVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_containsString__0269d0b0,&cf_tplv_dy_water)
    ;
    if (((uVar1 & 1) != 0) ||
       (uVar1 = local_48,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_48,PTR_s_containsString__0269d0b0,&cf_tplv_dy_lqen), (uVar1 & 1) != 0)) {
      local_40 = local_40 - 800;
    }
    uVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_containsString__0269d0b0,&cf_tplv_dy_aweme_images);
    if (((uVar1 & 1) != 0) ||
       (uVar1 = local_48,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_48,PTR_s_containsString__0269d0b0,&cf_tplv_dy_resize), (uVar1 & 1) != 0)) {
      local_40 = local_40 - 600;
    }
    uVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_containsString__0269d0b0,&cf_tplv_obj);
    if ((uVar1 & 1) != 0) {
      local_40 = local_40 + 400;
    }
    uVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_containsString__0269d0b0,&cf_download_url);
    if (((uVar1 & 1) != 0) ||
       (uVar1 = local_48,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_48,PTR_s_containsString__0269d0b0,&cf_download_url), (uVar1 & 1) != 0)) {
      local_40 = local_40 + 0x96;
    }
    uVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_containsString__0269d0b0,&cf_watermark_0);
    if ((uVar1 & 1) != 0) {
      local_40 = local_40 + 500;
    }
    uVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_containsString__0269d0b0,&cf_x_expires);
    if ((((uVar1 & 1) != 0) ||
        (uVar1 = local_48,
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_containsString__0269d0b0,&cf_x_signature), (uVar1 & 1) != 0)) ||
       (uVar1 = local_48,
       (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_containsString__0269d0b0,&cf_x_tt_),
       (uVar1 & 1) != 0)) {
      local_40 = local_40 + 300;
    }
    uVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_containsString__0269d0b0,&cf_douyinvod_com)
    ;
    if ((uVar1 & 1) != 0) {
      local_40 = local_40 + 400;
    }
    uVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_containsString__0269d0b0,&cf_aweme_snssdk_com_aweme_v1_play_);
    if ((((uVar1 & 1) != 0) &&
        (uVar1 = local_48,
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_containsString__0269d0b0,&cf_playwm),
        (uVar1 & 1) == 0)) &&
       (IVar2 = local_20,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_20,PTR_s_douyinURLLooksUnsignedSyntheticP_026add28,local_30),
       (IVar2 & 1) == 0)) {
      local_40 = local_40 + 200;
    }
    uVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_containsString__0269d0b0,&cf_origin);
    if (((uVar1 & 1) != 0) ||
       (uVar1 = local_48,
       (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_containsString__0269d0b0,&cf_raw),
       (uVar1 & 1) != 0)) {
      local_40 = local_40 + 200;
    }
    uVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_containsString__0269d0b0,&cf_ratio_1080);
    if ((((uVar1 & 1) != 0) ||
        (uVar1 = local_48,
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_containsString__0269d0b0,&cf_uhd),
        (uVar1 & 1) != 0)) ||
       (uVar1 = local_48,
       (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_containsString__0269d0b0,&cf_1080p),
       (uVar1 & 1) != 0)) {
      local_40 = local_40 + 0x50;
    }
    uVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_containsString__0269d0b0,&cf_ratio_720);
    if (((uVar1 & 1) != 0) ||
       (uVar1 = local_48,
       (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_containsString__0269d0b0,&cf_720p),
       (uVar1 & 1) != 0)) {
      local_40 = local_40 + 0x28;
    }
    uVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_containsString__0269d0b0,&cf__h5_);
    if ((uVar1 & 1) != 0) {
      local_40 = local_40 - 500;
    }
    local_18 = local_40;
    local_34 = 1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_18;
}

