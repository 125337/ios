// wcr_pollFineVoiceTask:attempt:finish: @ 015a6aa0

/* Function Stack Size: 0x28 bytes */

void WCRefineVoiceCloneHelper::wcr_pollFineVoiceTask_attempt_finish_
               (ID param_1,SEL param_2,ID param_3,long_long param_4,ID param_5,undefined4 param_6)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  undefined8 local_80;
  long local_78;
  ID local_70;
  long_long local_68;
  undefined *local_60;
  undefined *local_58;
  uint local_4c;
  long local_48;
  long_long local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_48 = 0;
  local_40 = param_4;
  _objc_storeStrong(&local_48,param_5);
  bVar1 = (long)local_40 < 0x3c;
  if (bVar1) {
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
               &cf__api_checkfilechangestatus___);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSMutableURLRequest_026ce480;
    puVar6 = PTR__OBJC_CLASS___NSURL_026ce328;
    pcVar5 = &cf_https___voiceai_fineshare_net;
    local_58 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (&cf_https___voiceai_fineshare_net,PTR_s_stringByAppendingString__0269d398,puVar4);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_URLWithString__026a16d8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_requestWithURL__026a16e0);
    _objc_retainAutoreleasedReturnValue();
    local_60 = puVar7;
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setHTTPMethod__026a64b0,&cf_GET);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_setValue_forHTTPHeaderField__026a16e8,
               &cf_application_json_charset_UTF_8,&cf_Content_Type);
    (*(code *)PTR__objc_msgSend_02578628)
              (0x403e000000000000,local_60,PTR_s_setTimeoutInterval__0269cae8);
    puVar7 = PTR__OBJC_CLASS___NSURLSession_026ce498;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURLSession_026ce498,PTR_s_sharedSession_026a64c0);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_48;
    puVar6 = local_60;
    local_a0 = PTR___NSConcreteStackBlock_02578660;
    local_98 = 0xc2000000;
    local_94 = 0;
    local_90 = FUN_015a6e14;
    local_88 = &DAT_025846b0;
    (*(code *)PTR__objc_retain_02578638)();
    uVar3 = local_38;
    local_78 = lVar2;
    local_70 = local_28;
    (*(code *)PTR__objc_retain_02578638)();
    local_80 = uVar3;
    local_68 = local_40;
    puVar4 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar7,PTR_s_dataTaskWithRequest_completionHa_026a5f60,puVar6,&local_a0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    _objc_storeStrong(&local_80);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
  }
  else {
    (**(code **)(local_48 + 0x10))(local_48,0,&cf_F);
  }
  local_4c = (uint)!bVar1;
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_38,0);
  return;
}

