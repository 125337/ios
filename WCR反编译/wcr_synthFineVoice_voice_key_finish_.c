// wcr_synthFineVoice:voice:key:finish: @ 015a4d94

/* Function Stack Size: 0x30 bytes */

void WCRefineVoiceCloneHelper::wcr_synthFineVoice_voice_key_finish_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,
               undefined4 param_7)

{
  bool bVar1;
  long lVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ID IVar9;
  undefined *local_190;
  undefined4 local_188;
  undefined4 local_184;
  code *local_180;
  undefined *local_178;
  ID local_170;
  long local_168;
  ID local_160;
  undefined *local_158;
  undefined *local_150;
  undefined *local_148;
  byte local_139;
  undefined *local_138;
  byte local_129;
  undefined *local_128;
  ID local_120;
  undefined4 local_114;
  long local_110;
  long local_108;
  undefined8 local_100;
  long local_f8;
  undefined8 local_f0;
  SEL local_e8;
  ID local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  undefined *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  undefined *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  undefined *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  long local_40;
  undefined8 local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_f0 = 0;
  local_e8 = param_2;
  local_e0 = param_1;
  _objc_storeStrong(&local_f0,param_3);
  local_f8 = 0;
  _objc_storeStrong(&local_f8,param_4);
  local_100 = 0;
  _objc_storeStrong(&local_100,param_5);
  local_108 = 0;
  _objc_storeStrong(&local_108,param_6);
  lVar2 = local_f8;
  FUN_015a5758();
  _objc_retainAutoreleasedReturnValue();
  local_110 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    (**(code **)(local_108 + 0x10))(local_108,0,&cf___gbr);
    local_114 = 1;
  }
  else {
    IVar3 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e0,PTR_s_wcr_fineVoiceCachePathForVoice_t_026b0b68,local_110,local_f0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    local_120 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_129 = 0;
    local_139 = 0;
    bVar1 = false;
    if (((ulong)puVar5 & 1) != 0) {
      puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      local_129 = 1;
      local_128 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_139 = 1;
      local_138 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = puVar5 != (undefined *)0x0;
    }
    if ((local_139 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_138);
    }
    if ((local_129 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_128);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    if (bVar1) {
      (**(code **)(local_108 + 0x10))(local_108,local_120,0);
      local_114 = 1;
    }
    else {
      puVar4 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
      _objc_retainAutoreleasedReturnValue();
      local_148 = puVar7;
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = local_148;
      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_length_0269cca0);
      if (puVar4 == (undefined *)0x0) {
        _objc_storeStrong(&local_148,&cf_gpt_api);
      }
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_98 = &cf_Engine;
      local_60 = local_148;
      local_90 = &cf_AppId;
      local_58 = &cf_107;
      local_88 = &cf_FeatureId;
      local_50 = &cf_22;
      local_80 = &cf_platform;
      local_48 = &cf_phone;
      local_78 = &cf_voice;
      local_40 = local_110;
      local_70 = &cf_speech;
      local_38 = local_f0;
      local_68 = &cf_Parameter;
      local_d8 = &cf_Speed;
      puVar5 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      local_d0 = &cf_LanguageCode;
      local_b0 = &cf_zh_CN;
      local_c8 = &cf_amotion;
      local_a8 = &cf_normal;
      local_c0 = &cf_Pitch;
      puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_b8 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (0,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_a0 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_b8,&local_d8,4);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_30 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_60,&local_98,7);
      _objc_retainAutoreleasedReturnValue();
      local_150 = puVar8;
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar5 = PTR__OBJC_CLASS___NSMutableURLRequest_026ce480;
      puVar4 = PTR__OBJC_CLASS___NSURL_026ce328;
      IVar3 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_resolvedBaseURL_026b0a38);
      _objc_retainAutoreleasedReturnValue();
      IVar9 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_URLWithString__026a16d8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_requestWithURL__026a16e0);
      _objc_retainAutoreleasedReturnValue();
      local_158 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(IVar9);
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_setHTTPMethod__026a64b0,&cf_POST);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_158,PTR_s_setValue_forHTTPHeaderField__026a16e8,local_100,&cf_Authorization);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_158,PTR_s_setValue_forHTTPHeaderField__026a16e8,
                 &cf_application_json_charset_UTF_8,&cf_Content_Type);
      puVar4 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
                 PTR_s_dataWithJSONObject_options_error_026a64a8,local_150,0,0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_setHTTPBody__026a64b8);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)
                (0x404e000000000000,local_158,PTR_s_setTimeoutInterval__0269cae8);
      puVar5 = PTR__OBJC_CLASS___NSURLSession_026ce498;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSURLSession_026ce498,PTR_s_sharedSession_026a64c0);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = local_108;
      puVar4 = local_158;
      local_190 = PTR___NSConcreteStackBlock_02578660;
      local_188 = 0xc2000000;
      local_184 = 0;
      local_180 = FUN_015a58c4;
      local_178 = &DAT_02582a88;
      (*(code *)PTR__objc_retain_02578638)();
      IVar3 = local_120;
      local_168 = lVar2;
      local_160 = local_e0;
      (*(code *)PTR__objc_retain_02578638)();
      local_170 = IVar3;
      puVar6 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_dataTaskWithRequest_completionHa_026a5f60,puVar4,&local_190);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      _objc_storeStrong(&local_170);
      _objc_storeStrong(&local_168,0);
      _objc_storeStrong(&local_158,0);
      _objc_storeStrong(&local_150,0);
      _objc_storeStrong(&local_148,0);
      local_114 = 0;
    }
    _objc_storeStrong(&local_120,0);
  }
  _objc_storeStrong(&local_110);
  _objc_storeStrong(&local_108,0);
  _objc_storeStrong(&local_100,0);
  _objc_storeStrong(&local_f8,0);
  _objc_storeStrong(&local_f0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

