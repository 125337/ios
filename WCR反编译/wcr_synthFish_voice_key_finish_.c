// wcr_synthFish:voice:key:finish: @ 015a35d0

/* Function Stack Size: 0x30 bytes */

void WCRefineVoiceCloneHelper::wcr_synthFish_voice_key_finish_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,
               undefined4 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ID IVar6;
  ID IVar7;
  undefined *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  code *local_e8;
  undefined *local_e0;
  undefined8 local_d8;
  ID local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  SEL local_98;
  ID local_90;
  cfstringStruct *local_88;
  undefined *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined8 local_50;
  undefined8 local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_a0 = 0;
  local_98 = param_2;
  local_90 = param_1;
  _objc_storeStrong(&local_a0,param_3);
  local_a8 = 0;
  _objc_storeStrong(&local_a8,param_4);
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_5);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_6);
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_78 = &cf_text;
  local_50 = local_a0;
  local_70 = &cf_reference_id;
  local_48 = local_a8;
  local_68 = &cf_format;
  local_40 = &cf_wav;
  local_60 = &cf_latency;
  local_38 = &cf_normal;
  local_58 = &cf_prosody;
  local_88 = &cf_speed;
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_80 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_80,&local_88,1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_30 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_50,&local_78,5);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar5;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSMutableURLRequest_026ce480;
  puVar3 = PTR__OBJC_CLASS___NSURL_026ce328;
  IVar6 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_resolvedBaseURL_026b0a38);
  _objc_retainAutoreleasedReturnValue();
  IVar7 = IVar6;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_URLWithString__026a16d8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_requestWithURL__026a16e0);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(IVar7);
  (*(code *)PTR__objc_release_02578630)(IVar6);
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setHTTPMethod__026a64b0,&cf_POST);
  puVar3 = local_c8;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_Bearer__);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_setValue_forHTTPHeaderField__026a16e8,puVar2,&cf_Authorization);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_c8,PTR_s_setValue_forHTTPHeaderField__026a16e8,&cf_application_json,
             &cf_Content_Type);
  puVar3 = local_c8;
  IVar6 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_resolvedSynthModelString_026b0a48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_setValue_forHTTPHeaderField__026a16e8,IVar6,&cf_model);
  (*(code *)PTR__objc_release_02578630)(IVar6);
  puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
             PTR_s_dataWithJSONObject_options_error_026a64a8,local_c0,0,0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setHTTPBody__026a64b8);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)
            (0x403e000000000000,local_c8,PTR_s_setTimeoutInterval__0269cae8);
  puVar2 = PTR__OBJC_CLASS___NSURLSession_026ce498;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSURLSession_026ce498,PTR_s_sharedSession_026a64c0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_b8;
  puVar3 = local_c8;
  local_f8 = PTR___NSConcreteStackBlock_02578660;
  local_f0 = 0xc2000000;
  local_ec = 0;
  local_e8 = FUN_015a3c10;
  local_e0 = &DAT_02586cb8;
  local_d0 = local_90;
  (*(code *)PTR__objc_retain_02578638)();
  local_d8 = uVar1;
  puVar4 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_dataTaskWithRequest_completionHa_026a5f60,puVar3,&local_f8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(&local_a0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

