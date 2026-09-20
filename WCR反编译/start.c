// start @ 0106ce5c

/* Function Stack Size: 0x10 bytes */

void WCRXHSWebExtractSession::start(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  dispatch_time_t dVar6;
  undefined8 in_d0;
  undefined8 uVar7;
  undefined8 in_d1;
  undefined8 uVar8;
  undefined8 in_d2;
  undefined8 uVar9;
  undefined8 in_d3;
  undefined8 uVar10;
  int local_2e0;
  int local_2dc;
  undefined *local_200;
  undefined *local_180;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  undefined *local_150;
  undefined4 local_148;
  undefined4 local_144;
  code *local_140;
  undefined *local_138;
  ID local_130;
  byte local_128;
  byte local_127;
  byte local_126;
  double local_120;
  undefined *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  code *local_108;
  undefined *local_100;
  ID local_f8;
  undefined8 local_f0;
  undefined *local_e8;
  undefined *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  byte local_a9;
  undefined *local_a8;
  byte local_99;
  undefined *local_98;
  undefined *local_90;
  cfstringStruct *local_88;
  undefined *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  byte local_61;
  undefined *local_60;
  byte local_51;
  undefined *local_50;
  undefined *local_48;
  cfstringStruct *local_40;
  byte local_33;
  byte local_32;
  byte local_31;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_platform_026ad958);
  local_31 = param_1 == 1;
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_platform_026ad958);
  local_32 = IVar1 == 6;
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_platform_026ad958);
  local_33 = IVar1 == 5;
  if ((local_31 & 1) == 0) {
    if ((local_32 & 1) == 0) {
      local_168 = &cf_tiktok;
      if (!(bool)local_33) {
        local_168 = &cf_xhs;
      }
    }
    else {
      local_168 = &cf_instagram;
    }
    local_160 = local_168;
  }
  else {
    local_160 = &cf_douyin;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_160;
  _CFAbsoluteTimeGetCurrent();
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setStartedAt__026aaf58);
  FUN_0103cbd8();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  puVar2 = PTR__OBJC_CLASS___WKWebViewConfiguration_026ce4f0;
  _objc_alloc_init();
  local_51 = 0;
  local_61 = 0;
  local_180 = PTR__OBJC_CLASS___WKWebsiteDataStore_026cec98;
  local_48 = puVar2;
  if ((((local_31 & 1) == 0) && ((local_32 & 1) == 0)) && ((local_33 & 1) == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___WKWebsiteDataStore_026cec98,PTR_s_nonPersistentDataStore_026ae128);
    _objc_retainAutoreleasedReturnValue();
    local_61 = 1;
    local_60 = local_180;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___WKWebsiteDataStore_026cec98,PTR_s_defaultDataStore_026adc60);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = local_180;
  }
  puVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setWebsiteDataStore__026ae130,local_180);
  if ((local_61 & 1) != 0) {
    puVar2 = local_60;
    (*(code *)PTR__objc_release_02578630)();
  }
  if ((local_51 & 1) != 0) {
    puVar2 = local_50;
    (*(code *)PTR__objc_release_02578630)();
  }
  if ((local_31 & 1) != 0) {
    FUN_0106de20();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setProcessPool__026ae138);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  if ((((local_33 & 1) != 0) || ((local_31 & 1) != 0)) || ((local_32 & 1) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setAllowsInlineMediaPlayback__026a8ee8,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setMediaTypesRequiringUserAction_026a8ef0);
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = &
               cf__function___functionm___try_varl_document_querySelectorAll__video_audio___for_vari_0_i<l_length_i__)_l[i]_muted_true_l[i]_volume_0___catch(e)___m()_setInterval(m,200)__)()_
    ;
    puVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_userContentController_026a1da8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___WKUserScript_026ce508;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addUserScript__026a1dd0);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_70,0);
  }
  if (((local_31 & 1) != 0) || ((local_33 & 1) != 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = &
               cf__function___if_window___WCR_DY_CAPTURE_READY_return_window___WCR_DY_CAPTURE_READY_1_window___WCR_DY_RESPONSES____functionkeep_u_b__try_if_typeofb____string___b_length<16__b_length>3000000_return_varh__String_u_________b_slice_0_8000___toLowerCase___if_h_indexOf__aweme__<0&&h_indexOf(_video_)<0&&h_indexOf(_item_)<0&&h_indexOf(_play_addr_)<0&&h_indexOf(_playaddr_)<0&&h_indexOf(_bit_rate_)<0&&h_indexOf(_download_addr_)<0&&h_indexOf(_image_post_)<0&&h_indexOf(_download_url_list_)<0&&h_indexOf(_douyinpic_)<0)return_vara_window___WCR_DY_RESPONSES_a_push(_url:String(u____),body:b_)_if(a_length>32)a_shift()__catch(e)___window___WCR_DY_KEEP_keep_window___WCR_DY_KICK_DETAIL_function()_try_if(window___WCR_DY_DETAIL_KICK)return_varm_String(location_pathname____)_match(___(_:video_note)__(_d_)_)_if(_m)return_window___WCR_DY_DETAIL_KICK_1_varid_m[1]_varhdr___Accept_:_application_json___varu__https:__www_douyin_com_aweme_v1_web_aweme_detail__device_platform_webapp&aid_6383&channel_channel_pc_web&aweme_id___id__&update_version_code_170400&pc_client_type_1__fetch(u,_credentials:_include_,headers:hdr_)_then(function(r)_returnr_text()__)_then(function(t)_keep(u,t)__)_catch(function()__)_varu2__https:__www_iesdouyin_com_web_api_v2_aweme_iteminfo__item_ids___id_fetch(u2,_credentials:_include_,headers:hdr_)_then(function(r)_returnr_text()__)_then(function(t)_keep(u2,t)__)_catch(function()__)__catch(e)____varf_window_fetch_if(f)window_fetch_function()_vara_arguments_returnf_apply(this,a)_then(function(r)_try_r_clone()_text()_then(function(t)_keep(r_url,t)__)__catch(e)__returnr__)___varX_window_XMLHttpRequest_if(X)_varo_X_prototype_open,s_X_prototype_send_X_prototype_open_function(m,u)_this___wcr_url_u_returno_apply(this,arguments)___X_prototype_send_function()_varx_this_x_addEventListener(_load_,function()_try_keep(x_responseURL__x___wcr_url,x_responseText)__catch(e)___)_returns_apply(this,arguments)____setTimeout(function()_try_window___WCR_DY_KICK_DETAIL()__catch(e)___,200)__)()_
    ;
    puVar2 = PTR__OBJC_CLASS___WKUserScript_026ce508;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar3 = local_48;
    local_80 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_userContentController_026a1da8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_80);
    _objc_storeStrong(&local_78,0);
  }
  if ((local_31 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_88 = &
               cf__function___functionpatch___try_vard__window__ROUTER_DATA______loaderData_____for_varkind__if_d_k___typeofd_k_____object__d_k__isAutoOpenApp_false___catch_e____patch___setInterval_patch_400__varo_window_open_window_open_function_u__vars_String_u______if__snssdk_aweme______douyin______i_test_s__returnnull_returno_o_apply_this_arguments__null________
    ;
    puVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_userContentController_026a1da8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___WKUserScript_026ce508;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addUserScript__026a1dd0);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_88,0);
  }
  local_99 = 0;
  local_a9 = 0;
  local_200 = PTR_WCRefineLinkParser_026ce168;
  if (((local_33 & 1) == 0) && ((local_31 & 1) == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineLinkParser_026ce168,PTR_s_mobileUA_026adc18);
    _objc_retainAutoreleasedReturnValue();
    local_a9 = 1;
    local_a8 = local_200;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineLinkParser_026ce168,PTR_s_desktopUA_026adc48);
    _objc_retainAutoreleasedReturnValue();
    local_99 = 1;
    local_98 = local_200;
  }
  puVar2 = local_200;
  (*(code *)PTR__objc_retain_02578638)();
  local_90 = local_200;
  if ((local_a9 & 1) != 0) {
    puVar2 = local_a8;
    (*(code *)PTR__objc_release_02578630)();
  }
  if ((local_99 & 1) != 0) {
    puVar2 = local_98;
    (*(code *)PTR__objc_release_02578630)();
  }
  FUN_0106de94();
  _objc_retainAutoreleasedReturnValue();
  local_b8 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_b8;
    local_b8 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  if (((local_33 & 1) == 0) && ((local_31 & 1) == 0)) {
    if (local_b8 == (undefined *)0x0) {
      uVar10 = 0;
      uVar9 = 0;
      uVar7 = 0x4077700000000000;
      uVar8 = 0x4089600000000000;
      FUN_0106ea20();
      local_d8 = uVar9;
      local_d0 = uVar10;
      local_c8 = uVar7;
      local_c0 = uVar8;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_bounds_026ca548);
      local_d8 = in_d0;
      local_d0 = in_d1;
      local_c8 = in_d2;
      local_c0 = in_d3;
    }
  }
  else {
    uVar8 = 0;
    uVar7 = 0;
    uVar9 = 0x4090000000000000;
    uVar10 = 0x4088000000000000;
    FUN_0106ea20();
    local_d8 = uVar7;
    local_d0 = uVar8;
    local_c8 = uVar9;
    local_c0 = uVar10;
  }
  puVar2 = PTR__OBJC_CLASS___WKWebView_026ce4e8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,local_d0,local_c8,local_c0);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setWebView__026a8f28);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  puVar2 = local_b8;
  if (local_b8 != (undefined *)0x0) {
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addSubview__026ca4c0);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    if ((local_31 & 1) != 0) {
      puVar2 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      local_e0 = puVar2;
      _objc_storeStrong(&local_e0,0);
    }
  }
  puVar3 = PTR__OBJC_CLASS___NSMutableURLRequest_026ce480;
  puVar2 = PTR__OBJC_CLASS___NSURL_026ce328;
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pageURL_026ae148);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_URLWithString__026a16d8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_requestWithURL__026a16e0);
  _objc_retainAutoreleasedReturnValue();
  local_e8 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_e8,PTR_s_setValue_forHTTPHeaderField__026a16e8,local_90,&cf_User_Agent);
  if ((local_31 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e8,PTR_s_setValue_forHTTPHeaderField__026a16e8,&cf_https___www_douyin_com_,
               &cf_Referer);
  }
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_unsafeClaimAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  local_f8 = local_28;
  puVar2 = PTR__OBJC_CLASS___NSTimer_026ce210;
  uVar7 = DAT_02323c78;
  if ((local_31 & 1) == 0) {
    uVar7 = DAT_02323d00;
  }
  local_118 = PTR___NSConcreteStackBlock_02578660;
  local_110 = 0xc2000000;
  local_10c = 0;
  local_108 = FUN_0106ea6c;
  local_100 = &DAT_02584c50;
  local_f0 = uVar7;
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar7,puVar2,PTR_s_timerWithTimeInterval_repeats_bl_026a5498,1,&local_118);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTimer__026a4970);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSRunLoop_026ce198;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSRunLoop_026ce198,PTR_s_mainRunLoop_026ca7a8);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_timer_026a4950);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_addTimer_forMode__026ca4d0,IVar1,
             *(undefined8 *)PTR__NSRunLoopCommonModes_02578258);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if ((local_31 & 1) == 0) {
    if ((local_32 & 1) == 0) {
      local_2e0 = 0x16;
      if ((local_33 & 1) == 0) {
        local_2e0 = 10;
      }
    }
    else {
      local_2e0 = 0xf;
    }
    local_2dc = local_2e0;
  }
  else {
    local_2dc = 0x12;
  }
  local_120 = (double)local_2dc;
  dVar6 = _dispatch_time(0,(long)(local_120 * 1000000000.0));
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_28;
  local_150 = PTR___NSConcreteStackBlock_02578660;
  local_148 = 0xc2000000;
  local_144 = 0;
  local_140 = FUN_0106ead4;
  local_138 = &DAT_02584c80;
  (*(code *)PTR__objc_retain_02578638)();
  local_130 = IVar1;
  local_128 = local_31 & 1;
  local_127 = local_32 & 1;
  local_126 = local_33 & 1;
  _dispatch_after(dVar6,puVar2,&local_150);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_130);
  _objc_storeStrong(&local_f8,0);
  _objc_storeStrong(&local_e8,0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  return;
}

