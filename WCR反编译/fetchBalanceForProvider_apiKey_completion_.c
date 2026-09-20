// fetchBalanceForProvider:apiKey:completion: @ 009ccbe0

/* Function Stack Size: 0x28 bytes */

ID WCRefineAIClient::fetchBalanceForProvider_apiKey_completion_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  long local_110;
  undefined *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  code *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  long local_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined4 local_ac;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  cfstringStruct *local_88;
  undefined8 local_80;
  cfstringStruct *local_78;
  bool local_69;
  long local_68;
  long local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  SEL local_38;
  ID local_30;
  undefined *local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_5);
  lVar3 = local_40;
  FUN_009cca68();
  _objc_retainAutoreleasedReturnValue();
  local_58 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
  local_69 = false;
  if (lVar3 == 0) {
    local_110 = 0;
  }
  else {
    local_110 = local_40;
    FUN_009c9ac8(local_40,local_58);
    _objc_retainAutoreleasedReturnValue();
    local_68 = local_110;
  }
  local_69 = lVar3 != 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = local_110;
  if ((local_69 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  if ((local_60 == 0) ||
     (lVar3 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0),
     lVar3 == 0)) {
    lVar3 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
    local_78 = &cf_HQkXQgRFUv;
    if (lVar3 == 0) {
      local_78 = &cf_gRFUlglQ;
    }
    (*(code *)PTR__objc_retain_02578638)();
    puVar4 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_50;
    local_a8 = PTR___NSConcreteStackBlock_02578660;
    local_a0 = 0xc2000000;
    local_9c = 0;
    local_98 = FUN_009cd1c8;
    local_90 = &DAT_0257ca68;
    (*(code *)PTR__objc_retain_02578638)();
    pcVar5 = local_78;
    local_80 = uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_88 = pcVar5;
    _dispatch_async(puVar4,&local_a8);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_28 = (undefined *)0x0;
    local_ac = 1;
    _objc_storeStrong(&local_88);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_78,0);
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSMutableURLRequest_026ce480;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x403e000000000000,PTR__OBJC_CLASS___NSMutableURLRequest_026ce480,
               PTR_s_requestWithURL_cachePolicy_timeo_026aaf30,local_60,1);
    _objc_retainAutoreleasedReturnValue();
    local_b8 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setHTTPMethod__026a64b0,&cf_GET);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_setValue_forHTTPHeaderField__026a16e8,&cf_application_json,&cf_Accept)
    ;
    puVar4 = local_b8;
    pcVar5 = &cf_Bearer;
    (*(code *)PTR__objc_msgSend_02578628)
              (&cf_Bearer,PTR_s_stringByAppendingString__0269d398,local_48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_setValue_forHTTPHeaderField__026a16e8,pcVar5,&cf_Authorization);
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    puVar4 = PTR_WCRefineAIRequest_026ceae8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIRequest_026ceae8,PTR_s_new_0269d288);
    puVar6 = PTR__OBJC_CLASS___NSURLSession_026ce498;
    local_c0 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURLSession_026ce498,PTR_s_sharedSession_026a64c0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_b8;
    puVar4 = local_c0;
    local_f8 = PTR___NSConcreteStackBlock_02578660;
    local_f0 = 0xc2000000;
    local_ec = 0;
    local_e8 = FUN_009cd24c;
    local_e0 = &DAT_02581528;
    (*(code *)PTR__objc_retain_02578638)();
    uVar2 = local_50;
    local_d8 = puVar4;
    (*(code *)PTR__objc_retain_02578638)();
    lVar3 = local_40;
    local_c8 = uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_d0 = lVar3;
    puVar4 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar6,PTR_s_dataTaskWithRequest_completionHa_026a5f60,puVar1,&local_f8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setTask__026aaf18);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    puVar4 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_task_026a1510);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = local_c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar4;
    local_ac = 1;
    _objc_storeStrong(&local_d0);
    _objc_storeStrong(&local_c8,0);
    _objc_storeStrong(&local_d8,0);
    _objc_storeStrong(&local_c0,0);
    _objc_storeStrong(&local_b8,0);
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

