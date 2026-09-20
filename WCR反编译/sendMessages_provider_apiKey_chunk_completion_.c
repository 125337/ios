// sendMessages:provider:apiKey:chunk:completion: @ 009c92e4

/* Function Stack Size: 0x38 bytes */

ID WCRefineAIClient::sendMessages_provider_apiKey_chunk_completion_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,undefined4 param_7,
             ID param_8,undefined4 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long local_1c8;
  uint local_13c;
  undefined *local_138;
  undefined *local_130;
  undefined *local_128;
  undefined4 local_120;
  undefined4 local_11c;
  code *local_118;
  undefined *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  long local_f0;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  byte local_a9;
  long local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  long local_78;
  SEL local_70;
  ID local_68;
  undefined *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  long local_40;
  long local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_78 = 0;
  local_70 = param_2;
  local_68 = param_1;
  _objc_storeStrong(&local_78,param_3);
  local_80 = 0;
  _objc_storeStrong(&local_80,param_4);
  local_88 = 0;
  _objc_storeStrong(&local_88,param_5);
  local_90 = 0;
  _objc_storeStrong(&local_90,param_6);
  local_98 = 0;
  _objc_storeStrong(&local_98,param_7);
  lVar4 = local_80;
  lVar3 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_chatPath_026aae00);
  _objc_retainAutoreleasedReturnValue();
  FUN_009c9ac8();
  _objc_retainAutoreleasedReturnValue();
  local_a0 = lVar4;
  (*(code *)PTR__objc_release_02578630)(lVar3);
  local_a9 = 0;
  local_13c = 1;
  if (local_a0 != 0) {
    lVar4 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_chatModel_026aadc8);
    _objc_retainAutoreleasedReturnValue();
    local_a9 = 1;
    local_a8 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_13c = 1;
    if (lVar4 != 0) {
      lVar4 = local_80;
      FUN_009c0574(local_80,local_88);
      local_13c = (uint)lVar4 ^ 1;
    }
  }
  if ((local_a9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_a8);
  }
  uVar1 = local_88;
  lVar4 = local_a0;
  puVar5 = PTR___dispatch_main_q_02578680;
  if ((local_13c & 1) == 0) {
    local_e8 = 0;
    local_58 = &cf_model;
    lVar3 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_chatModel_026aadc8);
    _objc_retainAutoreleasedReturnValue();
    local_50 = &cf_messages;
    if (local_78 == 0) {
      local_1c8 = *(long *)PTR____NSArray0___02578280;
    }
    else {
      local_1c8 = local_78;
    }
    local_38 = local_1c8;
    local_48 = &cf_stream;
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_40 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_30 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_40,&local_58,3);
    _objc_retainAutoreleasedReturnValue();
    local_f8 = local_e8;
    FUN_009c9de0(lVar4,uVar1,puVar6,&local_f8);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(&local_e8,local_f8);
    local_f0 = lVar4;
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(lVar3);
    puVar5 = PTR___dispatch_main_q_02578680;
    if (local_f0 == 0) {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_98;
      local_128 = PTR___NSConcreteStackBlock_02578660;
      local_120 = 0xc2000000;
      local_11c = 0;
      local_118 = FUN_009ca05c;
      local_110 = &DAT_0257ca68;
      (*(code *)PTR__objc_retain_02578638)();
      uVar1 = local_e8;
      local_100 = uVar2;
      (*(code *)PTR__objc_retain_02578638)();
      local_108 = uVar1;
      _dispatch_async(puVar5,&local_128);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      local_60 = (undefined *)0x0;
      local_dc = 1;
      _objc_storeStrong(&local_108);
      _objc_storeStrong(&local_100,0);
    }
    else {
      puVar5 = PTR_WCRefineAIRequest_026ceae8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIRequest_026ceae8,PTR_s_new_0269d288);
      local_130 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setChunkBlock__026aaef8,local_90);
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setTextCompletion__026aaf00,local_98);
      puVar5 = PTR__OBJC_CLASS___NSOperationQueue_026ce110;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSOperationQueue_026ce110,PTR_s_new_0269d288);
      local_138 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setMaxConcurrentOperationCount__026aaf08,1)
      ;
      puVar5 = PTR__OBJC_CLASS___NSURLSession_026ce498;
      puVar6 = PTR__OBJC_CLASS___NSURLSessionConfiguration_026ce488;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSURLSessionConfiguration_026ce488,
                 PTR_s_ephemeralSessionConfiguration_026aaf10);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_sessionWithConfiguration_delegat_026a1710,puVar6,local_130,local_138);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setSession__0269d2e0);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      puVar5 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_session_0269d000);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setTask__026aaf18);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar5 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_task_026a1510);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar5 = local_130;
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = puVar5;
      local_dc = 1;
      _objc_storeStrong(&local_138);
      _objc_storeStrong(&local_130,0);
    }
    _objc_storeStrong(&local_f0);
    _objc_storeStrong(&local_e8,0);
  }
  else {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_98;
    local_d8 = PTR___NSConcreteStackBlock_02578660;
    local_d0 = 0xc2000000;
    local_cc = 0;
    local_c8 = FUN_009c9d70;
    local_c0 = &DAT_025814c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_b8 = uVar1;
    _dispatch_async(puVar5,&local_d8);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    local_60 = (undefined *)0x0;
    local_dc = 1;
    _objc_storeStrong(&local_b8,0);
  }
  _objc_storeStrong(&local_a0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_78,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_60;
}

