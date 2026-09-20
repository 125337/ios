// redeemCode:wxId:completion: @ 016f5aa4

/* Function Stack Size: 0x28 bytes */

void SuanGuoRedeemService::redeemCode_wxId_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  long local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined4 local_5c;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  lVar1 = local_38;
  FUN_016f5f54();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_40;
  local_50 = lVar1;
  FUN_016f5f54();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = local_50;
  local_58 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    if (local_48 != 0) {
      (**(code **)(local_48 + 0x10))(local_48,0,&cf_QQbcxN_Nzz,0);
    }
    local_5c = 1;
  }
  else {
    lVar1 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    if (lVar1 == 0) {
      if (local_48 != 0) {
        (**(code **)(local_48 + 0x10))(local_48,0,&cf__OSN_Nzz,0);
      }
      local_5c = 1;
    }
    else {
      lVar1 = local_50;
      FUN_016f6078();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = local_58;
      FUN_016f6078();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_stringWithFormat__0269cca8,&cf_code____wxId___);
      _objc_retainAutoreleasedReturnValue();
      local_68 = puVar3;
      (*(code *)PTR__objc_release_02578630)(lVar2);
      (*(code *)PTR__objc_release_02578630)(lVar1);
      puVar3 = PTR__OBJC_CLASS___NSURL_026ce328;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,
                 &cf_https___vip_sutuplus_vip_api_themes_redemption_code);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSMutableURLRequest_026ce480;
      local_70 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableURLRequest_026ce480,PTR_s_requestWithURL__026a16e0,
                 puVar3);
      _objc_retainAutoreleasedReturnValue();
      local_78 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x402e000000000000,puVar4,PTR_s_setTimeoutInterval__0269cae8);
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setHTTPMethod__026a64b0,&cf_POST);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,PTR_s_setValue_forHTTPHeaderField__026a16e8,
                 &cf_application_x_www_form_urlencoded_charset_UTF_8,&cf_Content_Type);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,PTR_s_setValue_forHTTPHeaderField__026a16e8,&cf_application_json,
                 &cf_Accept);
      puVar3 = local_78;
      puVar4 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_dataUsingEncoding__026a12e8,4);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setHTTPBody__026a64b8);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = PTR__OBJC_CLASS___NSURLSession_026ce498;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSURLSession_026ce498,PTR_s_sharedSession_026a64c0);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_48;
      puVar3 = local_78;
      local_a8 = PTR___NSConcreteStackBlock_02578660;
      local_a0 = 0xc2000000;
      local_9c = 0;
      local_98 = FUN_016f61f4;
      local_90 = &DAT_02581b60;
      (*(code *)PTR__objc_retain_02578638)();
      local_88 = lVar1;
      puVar5 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_dataTaskWithRequest_completionHa_026a5f60,puVar3,&local_a8);
      _objc_retainAutoreleasedReturnValue();
      local_80 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_resume_026a1720);
      _objc_storeStrong(&local_80);
      _objc_storeStrong(&local_88,0);
      _objc_storeStrong(&local_78,0);
      _objc_storeStrong(&local_70,0);
      _objc_storeStrong(&local_68,0);
      local_5c = 0;
    }
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

