// fetchModelsForProvider:apiKey:kind:completion: @ 009ca944

/* Function Stack Size: 0x30 bytes */

ID WCRefineAIClient::fetchModelsForProvider_apiKey_kind_completion_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,undefined4 param_7)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  cfstringStruct *pcVar8;
  undefined *local_250;
  cfstringStruct *local_1f0;
  cfstringStruct *local_1d8;
  undefined *local_178;
  undefined4 local_170;
  undefined4 local_16c;
  code *local_168;
  undefined *local_160;
  undefined *local_158;
  undefined *local_150;
  undefined8 local_148;
  undefined *local_140;
  undefined *local_138;
  undefined *local_130;
  undefined *local_128;
  undefined *local_120;
  undefined4 local_118;
  undefined4 local_114;
  code *local_110;
  undefined *local_108;
  undefined *local_100;
  undefined8 local_f8;
  bool local_e9;
  undefined *local_e8;
  byte local_d9;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  undefined *local_b0;
  undefined4 local_a4;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 local_70;
  ulong local_68;
  long local_60;
  undefined *local_58;
  SEL local_50;
  ID local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_58 = (undefined *)0x0;
  local_50 = param_2;
  local_48 = param_1;
  _objc_storeStrong(&local_58,param_3);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_4);
  local_68 = 0;
  _objc_storeStrong(&local_68,param_5);
  local_70 = 0;
  _objc_storeStrong(&local_70,param_6);
  puVar3 = local_58;
  FUN_009c9ac8(local_58,&cf__models);
  _objc_retainAutoreleasedReturnValue();
  local_78 = puVar3;
  if ((puVar3 == (undefined *)0x0) ||
     (puVar3 = local_58, FUN_009c0574(local_58,local_60), ((ulong)puVar3 & 1) == 0)) {
    puVar3 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_70;
    local_a0 = PTR___NSConcreteStackBlock_02578660;
    local_98 = 0xc2000000;
    local_94 = 0;
    local_90 = FUN_009cb4b8;
    local_88 = &DAT_025814c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_80 = uVar2;
    _dispatch_async(puVar3,&local_a0);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_40 = (undefined *)0x0;
    local_a4 = 1;
    _objc_storeStrong(&local_80,0);
  }
  else {
    puVar3 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_providerID_0269d480);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (((ulong)puVar4 & 1) != 0) {
      puVar3 = PTR__OBJC_CLASS___NSURLComponents_026ce130;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSURLComponents_026ce130,
                 PTR_s_componentsWithURL_resolvingAgain_026a64e8,local_78,0);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = local_68;
      local_b0 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_isEqualToString__0269ccc8,&cf_image);
      if ((uVar5 & 1) == 0) {
        uVar5 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_isEqualToString__0269ccc8);
        local_1d8 = &cf_video;
        if ((uVar5 & 1) == 0) {
          local_1d8 = &cf_text;
        }
      }
      else {
        local_1d8 = &cf_image;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_b8 = local_1d8;
      uVar5 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_isEqualToString__0269ccc8,&cf_image);
      if ((uVar5 & 1) == 0) {
        uVar5 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_isEqualToString__0269ccc8,&cf_video);
        local_1f0 = &cf_text_to_video;
        if ((uVar5 & 1) == 0) {
          local_1f0 = &cf_chat;
        }
      }
      else {
        local_1f0 = &cf_text_to_image;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_c0 = local_1f0;
      puVar3 = PTR__OBJC_CLASS___NSURLQueryItem_026ceaf0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSURLQueryItem_026ceaf0,PTR_s_queryItemWithName_value__026aaf20,
                 &cf_type,local_b8);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSURLQueryItem_026ceaf0;
      local_38 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSURLQueryItem_026ceaf0,PTR_s_queryItemWithName_value__026aaf20,
                 &cf_sub_type,local_c0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_30 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38
                 ,2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setQueryItems__026aaf28);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar4 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_URL_026a1c90);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_78;
      local_78 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _objc_storeStrong(&local_c0);
      _objc_storeStrong(&local_b8,0);
      _objc_storeStrong(&local_b0,0);
    }
    local_250 = local_58;
    FUN_009cb540(local_58,local_68);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = local_250;
    (*(code *)PTR__objc_msgSend_02578628)(local_250,PTR_s_length_0269cca0);
    local_d9 = 0;
    local_e9 = false;
    bVar1 = local_250 == (undefined *)0x0;
    if (bVar1) {
      local_250 = (undefined *)0x0;
    }
    else {
      FUN_009cb7b8();
      _objc_retainAutoreleasedReturnValue();
      local_d9 = 1;
      local_d8 = local_250;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_e8 = local_250;
    }
    local_e9 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_d0 = local_250;
    if ((local_e9 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_e8);
    }
    if ((local_d9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_d8);
    }
    puVar4 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
    puVar3 = PTR___dispatch_main_q_02578680;
    if (puVar4 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableURLRequest_026ce480;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4034000000000000,PTR__OBJC_CLASS___NSMutableURLRequest_026ce480,
                 PTR_s_requestWithURL_cachePolicy_timeo_026aaf30,local_78,1);
      _objc_retainAutoreleasedReturnValue();
      local_128 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setHTTPMethod__026a64b0,&cf_GET);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_128,PTR_s_setValue_forHTTPHeaderField__026a16e8,
                 &cf_application_json_charset_UTF_8,&cf_Content_Type);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_128,PTR_s_setValue_forHTTPHeaderField__026a16e8,&cf_application_json,
                 &cf_Accept);
      lVar7 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
      puVar3 = local_128;
      if (lVar7 != 0) {
        pcVar8 = &cf_Bearer;
        (*(code *)PTR__objc_msgSend_02578628)
                  (&cf_Bearer,PTR_s_stringByAppendingString__0269d398,local_60);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_setValue_forHTTPHeaderField__026a16e8,pcVar8,&cf_Authorization);
        (*(code *)PTR__objc_release_02578630)(pcVar8);
      }
      puVar3 = PTR_WCRefineAIRequest_026ceae8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIRequest_026ceae8,PTR_s_new_0269d288);
      puVar4 = PTR__OBJC_CLASS___NSURLSessionConfiguration_026ce488;
      local_130 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSURLSessionConfiguration_026ce488,
                 PTR_s_defaultSessionConfiguration_026a16f0);
      _objc_retainAutoreleasedReturnValue();
      local_138 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setTimeoutIntervalForRequest__026a16f8);
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4034000000000000,local_138,PTR_s_setTimeoutIntervalForResource__026a1700);
      puVar3 = PTR__OBJC_CLASS___NSURLSession_026ce498;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSURLSession_026ce498,PTR_s_sessionWithConfiguration__026a5f58,
                 local_138);
      _objc_retainAutoreleasedReturnValue();
      local_140 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setSession__0269d2e0,puVar3);
      puVar6 = local_128;
      puVar4 = local_130;
      puVar3 = local_140;
      local_178 = PTR___NSConcreteStackBlock_02578660;
      local_170 = 0xc2000000;
      local_16c = 0;
      local_168 = FUN_009cb880;
      local_160 = &DAT_02581528;
      (*(code *)PTR__objc_retain_02578638)();
      uVar2 = local_70;
      local_158 = puVar4;
      (*(code *)PTR__objc_retain_02578638)();
      puVar4 = local_c8;
      local_148 = uVar2;
      (*(code *)PTR__objc_retain_02578638)();
      local_150 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_dataTaskWithRequest_completionHa_026a5f60,puVar6,&local_178);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setTask__026aaf18);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_task_026a1510);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = local_130;
      (*(code *)PTR__objc_retain_02578638)();
      local_40 = puVar3;
      local_a4 = 1;
      _objc_storeStrong(&local_150);
      _objc_storeStrong(&local_148,0);
      _objc_storeStrong(&local_158,0);
      _objc_storeStrong(&local_140,0);
      _objc_storeStrong(&local_138,0);
      _objc_storeStrong(&local_130,0);
      _objc_storeStrong(&local_128,0);
    }
    else {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_70;
      local_120 = PTR___NSConcreteStackBlock_02578660;
      local_118 = 0xc2000000;
      local_114 = 0;
      local_110 = FUN_009cb82c;
      local_108 = &DAT_0257ca68;
      (*(code *)PTR__objc_retain_02578638)();
      puVar4 = local_d0;
      local_f8 = uVar2;
      (*(code *)PTR__objc_retain_02578638)();
      local_100 = puVar4;
      _dispatch_async(puVar3,&local_120);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_40 = (undefined *)0x0;
      local_a4 = 1;
      _objc_storeStrong(&local_100);
      _objc_storeStrong(&local_f8,0);
    }
    _objc_storeStrong(&local_d0);
    _objc_storeStrong(&local_c8,0);
  }
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_40;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

