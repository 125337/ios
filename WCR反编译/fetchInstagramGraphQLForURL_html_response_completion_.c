// fetchInstagramGraphQLForURL:html:response:completion: @ 010631f4

/* Function Stack Size: 0x30 bytes */

void WCRefineLinkParser::fetchInstagramGraphQLForURL_html_response_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,
               undefined4 param_7)

{
  long lVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  cfstringStruct *local_250;
  cfstringStruct *local_1c0;
  cfstringStruct *local_1b8;
  cfstringStruct *local_1a0;
  cfstringStruct *local_188;
  undefined *local_140;
  undefined4 local_138;
  undefined4 local_134;
  code *local_130;
  undefined *local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  undefined *local_110;
  long local_108;
  cfstringStruct *local_100;
  undefined8 local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  cfstringStruct *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  cfstringStruct *local_b8;
  undefined *local_b0;
  byte local_a1;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  undefined4 local_74;
  cfstringStruct *local_70;
  long local_68;
  undefined8 local_60;
  undefined8 local_58;
  cfstringStruct *local_50;
  SEL local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = (cfstringStruct *)0x0;
  local_48 = param_2;
  local_40 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_50,param_3);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_4);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_5);
  local_68 = 0;
  _objc_storeStrong(&local_68,param_6);
  pcVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_instagramShortcodeFromURL__026ae0f0,local_50)
  ;
  _objc_retainAutoreleasedReturnValue();
  local_70 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
  lVar1 = local_68;
  puVar4 = PTR__OBJC_CLASS___NSError_026ce470;
  if (pcVar2 == (cfstringStruct *)0x0) {
    if (local_68 != 0) {
      local_38 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
      local_30 = &cf_I;
      puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_WCRefineLinkParser,
                 0xfffffffffffffff6);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar1 + 0x10))(lVar1,0);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar7);
    }
    local_74 = 1;
  }
  else {
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_instagramBootstrapTokensFromHTML_026ae0f8,local_58,local_60);
    _objc_retainAutoreleasedReturnValue();
    local_80 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_objectForKeyedSubscript__0269d098,&cf_csrf);
    _objc_retainAutoreleasedReturnValue();
    local_188 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_188 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_88 = local_188;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_objectForKeyedSubscript__0269d098,&cf_lsd);
    _objc_retainAutoreleasedReturnValue();
    local_1a0 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_1a0 = &cf_AVqbxe3J_YA;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_90 = local_1a0;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_80,PTR_s_objectForKeyedSubscript__0269d098,&cf_cookie);
    _objc_retainAutoreleasedReturnValue();
    local_a1 = 0;
    local_1b8 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      pcVar3 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_1c0 = &::cf___;
      }
      else {
        local_1c0 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                   &cf_csrftoken___);
        _objc_retainAutoreleasedReturnValue();
        local_a1 = 1;
        local_a0 = local_1c0;
      }
      local_1b8 = local_1c0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_98 = local_1b8;
    if ((local_a1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_a0);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
               &cf___shortcode_______);
    _objc_retainAutoreleasedReturnValue();
    local_b0 = puVar4;
    (*(code *)PTR__objc_retain_02578638)();
    pcVar2 = local_90;
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_b8 = &cf_24368985919464652;
    puVar5 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_URLQueryAllowedCharacterSet_0269d8f8)
    ;
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringByAddingPercentEncodingWit_0269d900);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = local_b0;
    puVar6 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_URLQueryAllowedCharacterSet_0269d8f8)
    ;
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_stringByAddingPercentEncodingWit_0269d900);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_stringWithFormat__0269cca8,
               &
               cf_av_0___d_www___user_0___a_1___comet_req_7_lsd____fb_api_caller_class_RelayModern_fb_api_req_friendly_name_PolarisPostRootQuery_server_timestamps_true_variables____doc_id___
              );
    _objc_retainAutoreleasedReturnValue();
    local_c0 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar4 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,
               &cf_https___www_instagram_com_graphql_query);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSMutableURLRequest_026ce480;
    local_c8 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableURLRequest_026ce480,PTR_s_requestWithURL__026a16e0,puVar4)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_d0 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_setHTTPMethod__026a64b0,&cf_POST);
    puVar4 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_dataUsingEncoding__026a12e8,4);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setHTTPBody__026a64b8);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    uVar8 = 0x4039000000000000;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setTimeoutInterval__0269cae8);
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_desktopUA_026adc48);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,PTR_s_setValue_forHTTPHeaderField__026a16e8,pcVar2,&cf_User_Agent);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,PTR_s_setValue_forHTTPHeaderField__026a16e8,
               &cf_application_x_www_form_urlencoded,&cf_Content_Type);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,PTR_s_setValue_forHTTPHeaderField__026a16e8,&cf____,&cf_Accept);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,PTR_s_setValue_forHTTPHeaderField__026a16e8,&cf_936619743392459,
               &cf_X_IG_App_ID);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,PTR_s_setValue_forHTTPHeaderField__026a16e8,local_90,&cf_X_FB_LSD);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,PTR_s_setValue_forHTTPHeaderField__026a16e8,&cf_129477,&cf_X_ASBD_ID);
    pcVar2 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
    if (pcVar2 != (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d0,PTR_s_setValue_forHTTPHeaderField__026a16e8,local_88,&cf_X_CSRFToken);
    }
    pcVar2 = local_98;
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0);
    if (pcVar2 != (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d0,PTR_s_setValue_forHTTPHeaderField__026a16e8,local_98,&cf_Cookie);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,PTR_s_setValue_forHTTPHeaderField__026a16e8,&cf_same_origin,
               &cf_Sec_Fetch_Site);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,PTR_s_setValue_forHTTPHeaderField__026a16e8,&cf_https___www_instagram_com,
               &cf_Origin);
    puVar4 = local_d0;
    pcVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_250 = &cf_https___www_instagram_com_;
    }
    else {
      local_250 = local_50;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_setValue_forHTTPHeaderField__026a16e8,local_250,&cf_Referer);
    _CFAbsoluteTimeGetCurrent();
    puVar4 = PTR__OBJC_CLASS___NSURLSessionConfiguration_026ce488;
    local_e0 = uVar8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURLSessionConfiguration_026ce488,
               PTR_s_ephemeralSessionConfiguration_026aaf10);
    _objc_retainAutoreleasedReturnValue();
    local_e8 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setHTTPShouldSetCookies__026adc80,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setHTTPCookieAcceptPolicy__026adc88,0);
    puVar5 = PTR__OBJC_CLASS___NSURLSession_026ce498;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURLSession_026ce498,PTR_s_sessionWithConfiguration__026a5f58,
               local_e8);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_50;
    puVar7 = local_d0;
    local_140 = PTR___NSConcreteStackBlock_02578660;
    local_138 = 0xc2000000;
    local_134 = 0;
    local_130 = FUN_01063e70;
    local_128 = &DAT_02584b40;
    local_100 = local_40;
    local_f0 = puVar5;
    (*(code *)PTR__objc_retain_02578638)();
    pcVar2 = local_70;
    local_120 = pcVar3;
    local_f8 = local_e0;
    (*(code *)PTR__objc_retain_02578638)();
    lVar1 = local_68;
    local_118 = pcVar2;
    (*(code *)PTR__objc_retain_02578638)();
    puVar4 = local_f0;
    local_108 = lVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_110 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_dataTaskWithRequest_completionHa_026a5f60,puVar7,&local_140);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _objc_storeStrong(&local_110);
    _objc_storeStrong(&local_108,0);
    _objc_storeStrong(&local_118,0);
    _objc_storeStrong(&local_120,0);
    _objc_storeStrong(&local_f0,0);
    _objc_storeStrong(&local_e8,0);
    _objc_storeStrong(&local_d8,0);
    _objc_storeStrong(&local_d0,0);
    _objc_storeStrong(&local_c8,0);
    _objc_storeStrong(&local_c0,0);
    _objc_storeStrong(&local_b8,0);
    _objc_storeStrong(&local_b0,0);
    _objc_storeStrong(&local_98,0);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_88,0);
    _objc_storeStrong(&local_80,0);
    local_74 = 0;
  }
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

