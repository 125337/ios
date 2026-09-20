// FUN_0167665c @ 0167665c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0167665c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  double dVar9;
  double dVar10;
  double local_248;
  cfstringStruct *local_218;
  cfstringStruct *local_210;
  cfstringStruct *local_200;
  cfstringStruct *local_1f0;
  cfstringStruct *local_1d8;
  undefined *local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  code *local_190;
  undefined *local_188;
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [8];
  undefined *local_160;
  undefined *local_158;
  undefined *local_150;
  undefined *local_148;
  undefined4 local_140;
  undefined4 local_13c;
  code *local_138;
  undefined *local_130;
  undefined *local_128;
  undefined *local_120;
  undefined **local_118;
  undefined *local_110;
  undefined *local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined *local_f0;
  long local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  undefined8 local_b8;
  double local_b0;
  double local_a8;
  long local_a0;
  uint local_98;
  byte local_91;
  cfstringStruct *local_90;
  byte local_81;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  byte local_69;
  cfstringStruct *local_68;
  byte local_59;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  pcVar1 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_superFloatBaiduAppId_026b2698);
  _objc_retainAutoreleasedReturnValue();
  local_1d8 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_1d8 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_1d8;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_superFloatBaiduAppSecret_026b26a0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_59 = 0;
  local_69 = 0;
  if (pcVar2 == (cfstringStruct *)0x0) {
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_superFloatBaiduAppKey_026b26a8);
    _objc_retainAutoreleasedReturnValue();
    local_69 = 1;
    local_200 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_200 = &cf___;
    }
    local_1f0 = local_200;
    local_68 = pcVar2;
  }
  else {
    local_1f0 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_superFloatBaiduAppSecret_026b26a0);
    _objc_retainAutoreleasedReturnValue();
    local_59 = 1;
    local_58 = local_1f0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_1f0;
  if ((local_69 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  local_81 = 0;
  local_91 = 0;
  if (pcVar1 == (cfstringStruct *)0x0) {
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_superFloatBaiduTargetLang_026b26b0);
    _objc_retainAutoreleasedReturnValue();
    local_81 = 1;
    local_80 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_218 = &cf_zh;
    }
    else {
      local_218 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_superFloatBaiduTargetLang_026b26b0);
      _objc_retainAutoreleasedReturnValue();
      local_91 = 1;
      local_90 = local_218;
    }
    local_210 = local_218;
  }
  else {
    local_210 = local_30;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_78 = local_210;
  if ((local_91 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_90);
  }
  if ((local_81 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_80);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_setSuperFloatBaiduTargetLang__026b2888,local_78);
  pcVar1 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  if ((pcVar1 == (cfstringStruct *)0x0) ||
     (pcVar1 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0),
     pcVar1 == (cfstringStruct *)0x0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,&cf__bV_,
               &cf_HQ3uv_Mn__v_VGr_,&cf_wSN,0);
    _objc_unsafeClaimAutoreleasedReturnValue();
    local_98 = 1;
  }
  else {
    local_a0 = 0;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_size_026cab00);
    dVar9 = param_1;
    local_c0 = param_1;
    local_b8 = param_2;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_scale_026ca830);
    param_1 = param_1 * dVar9;
    local_b0 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_size_026cab00);
    dVar10 = dVar9;
    local_d8 = param_1;
    local_d0 = dVar9;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_scale_026ca830);
    local_c8 = dVar9 * dVar10;
    local_248 = local_c8;
    if (local_c8 <= local_b0) {
      local_248 = local_b0;
    }
    local_e0 = local_248;
    local_a8 = local_248;
    if (local_248 <= 1600.0) {
      lVar3 = local_28;
      _UIImagePNGRepresentation();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = local_a0;
      local_a0 = lVar3;
      (*(code *)PTR__objc_release_02578630)(lVar4);
    }
    lVar4 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0);
    if (lVar4 == 0) {
      lVar3 = local_28;
      _UIImageJPEGRepresentation(0x3fee666666666666);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = local_a0;
      local_a0 = lVar3;
      (*(code *)PTR__objc_release_02578630)(lVar4);
    }
    lVar4 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0);
    if (lVar4 == 0) {
      lVar3 = local_28;
      _UIImagePNGRepresentation();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = local_a0;
      local_a0 = lVar3;
      (*(code *)PTR__objc_release_02578630)(lVar4);
    }
    lVar4 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0);
    if (lVar4 != 0) {
      lVar3 = local_a0;
      FUN_01689844();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_e8 = lVar3;
      _arc4random_uniform(0xffffffff);
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_stringWithFormat__0269cca8,&cf__u);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_f0 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf_______APICUIDmac__);
      _objc_retainAutoreleasedReturnValue();
      local_f8 = puVar6;
      FUN_01689a20();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_100 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf_WCRSFBoundary__);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSMutableData_026ce660;
      local_108 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableData_026ce660,PTR_s_data_0269d850);
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = &local_148;
      local_148 = PTR___NSConcreteStackBlock_02578660;
      local_140 = 0xc2000000;
      local_13c = 0;
      local_138 = FUN_01689b2c;
      local_130 = &DAT_02586c58;
      puVar7 = local_108;
      local_110 = puVar6;
      (*(code *)PTR__objc_retain_02578638)();
      puVar5 = local_110;
      local_128 = puVar7;
      (*(code *)PTR__objc_retain_02578638)();
      local_120 = puVar5;
      _objc_retainBlock();
      local_118 = ppuVar8;
      (*(code *)ppuVar8[2])(ppuVar8,&cf_from,&cf_auto);
      (*(code *)local_118[2])(local_118,&cf_to,local_78);
      (*(code *)local_118[2])(local_118,&cf_appid,local_48);
      (*(code *)local_118[2])(local_118,&cf_salt,local_f0);
      (*(code *)local_118[2])(local_118,&cf_cuid,&cf_APICUID);
      (*(code *)local_118[2])(local_118,&cf_mac);
      (*(code *)local_118[2])(local_118,&cf_version,&cf_3);
      (*(code *)local_118[2])(local_118,&cf_sign,local_100);
      puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &
                 cf_____Content_Disposition_form_data_name__image__filename__shot_jpg_Content_Type_image_jpeg
                );
      _objc_retainAutoreleasedReturnValue();
      puVar5 = local_110;
      local_150 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_dataUsingEncoding__026a12e8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_appendData__026a9df8);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_appendData__026a9df8,local_a0);
      puVar5 = local_110;
      puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_______);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_appendData__026a9df8);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      puVar5 = PTR__OBJC_CLASS___NSURL_026ce328;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,
                 &cf_https___fanyi_api_baidu_com_api_trans_sdk_picture);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSMutableURLRequest_026ce480;
      local_158 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableURLRequest_026ce480,PTR_s_requestWithURL__026a16e0,
                 puVar5);
      _objc_retainAutoreleasedReturnValue();
      local_160 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_setHTTPMethod__026a64b0,&cf_POST);
      (*(code *)PTR__objc_msgSend_02578628)
                (0x403e000000000000,local_160,PTR_s_setTimeoutInterval__0269cae8);
      puVar5 = local_160;
      puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf_multipart_form_data_boundary___);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_setValue_forHTTPHeaderField__026a16e8,puVar6,&cf_Content_Type);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_setHTTPBody__026a64b8,local_110);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__v_VGr__N_);
      _objc_initWeak(auStack_168,local_38);
      puVar6 = PTR__OBJC_CLASS___NSURLSession_026ce498;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSURLSession_026ce498,PTR_s_sharedSession_026a64c0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = local_160;
      local_1a0 = PTR___NSConcreteStackBlock_02578660;
      local_198 = 0xc2000000;
      local_194 = 0;
      local_190 = FUN_01689c98;
      local_188 = &DAT_02587e60;
      _objc_copyWeak(auStack_180,auStack_168);
      puVar7 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar6,PTR_s_dataTaskWithRequest_completionHa_026a5f60,puVar5,&local_1a0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      _objc_destroyWeak(auStack_180);
      _objc_destroyWeak(auStack_168);
      _objc_storeStrong(&local_160);
      _objc_storeStrong(&local_158,0);
      _objc_storeStrong(&local_150,0);
      _objc_storeStrong(&local_118,0);
      _objc_storeStrong(&local_120,0);
      _objc_storeStrong(&local_128,0);
      _objc_storeStrong(&local_110,0);
      _objc_storeStrong(&local_108,0);
      _objc_storeStrong(&local_100,0);
      _objc_storeStrong(&local_f8,0);
      _objc_storeStrong(&local_f0,0);
      _objc_storeStrong(&local_e8,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_VGr_x1Y_);
    }
    local_98 = (uint)(lVar4 == 0);
    _objc_storeStrong(&local_a0,0);
  }
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

