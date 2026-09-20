// wcr_synthOpenAICompatible:voice:key:finish: @ 015a3d4c

/* Function Stack Size: 0x30 bytes */

void WCRefineVoiceCloneHelper::wcr_synthOpenAICompatible_voice_key_finish_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,
               undefined4 param_7)

{
  undefined8 uVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ID IVar6;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  ID local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  SEL local_88;
  ID local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  ID local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_90 = 0;
  local_88 = param_2;
  local_80 = param_1;
  _objc_storeStrong(&local_90,param_3);
  local_98 = 0;
  _objc_storeStrong(&local_98,param_4);
  local_a0 = 0;
  _objc_storeStrong(&local_a0,param_5);
  local_a8 = 0;
  _objc_storeStrong(&local_a8,param_6);
  local_78 = &cf_model;
  IVar2 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_resolvedSynthModelString_026b0a48);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_70 = &cf_input;
  local_48 = local_90;
  local_68 = &cf_voice;
  local_40 = local_98;
  local_60 = &cf_speed;
  puVar3 = PTR_WCRefineConfig_026cdf58;
  local_50 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  local_58 = &cf_response_format;
  local_30 = &cf_wav;
  puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_38 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_50,&local_78,5);
  _objc_retainAutoreleasedReturnValue();
  local_b0 = puVar5;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar3 = PTR__OBJC_CLASS___NSMutableURLRequest_026ce480;
  puVar4 = PTR__OBJC_CLASS___NSURL_026ce328;
  IVar2 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_resolvedBaseURL_026b0a38);
  _objc_retainAutoreleasedReturnValue();
  IVar6 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_URLWithString__026a16d8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_requestWithURL__026a16e0);
  _objc_retainAutoreleasedReturnValue();
  local_b8 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(IVar6);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setHTTPMethod__026a64b0,&cf_POST);
  puVar4 = local_b8;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_Bearer__);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_setValue_forHTTPHeaderField__026a16e8,puVar3,&cf_Authorization);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b8,PTR_s_setValue_forHTTPHeaderField__026a16e8,&cf_application_json,
             &cf_Content_Type);
  puVar4 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
             PTR_s_dataWithJSONObject_options_error_026a64a8,local_b0,0,0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setHTTPBody__026a64b8);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_msgSend_02578628)
            (0x403e000000000000,local_b8,PTR_s_setTimeoutInterval__0269cae8);
  puVar3 = PTR__OBJC_CLASS___NSURLSession_026ce498;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSURLSession_026ce498,PTR_s_sharedSession_026a64c0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_a8;
  puVar4 = local_b8;
  local_e8 = PTR___NSConcreteStackBlock_02578660;
  local_e0 = 0xc2000000;
  local_dc = 0;
  local_d8 = FUN_015a42f4;
  local_d0 = &DAT_02586cb8;
  local_c0 = local_80;
  (*(code *)PTR__objc_retain_02578638)();
  local_c8 = uVar1;
  puVar5 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_dataTaskWithRequest_completionHa_026a5f60,puVar4,&local_e8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(&local_a0,0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_90,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

