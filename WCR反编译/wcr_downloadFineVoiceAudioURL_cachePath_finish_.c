// wcr_downloadFineVoiceAudioURL:cachePath:finish: @ 015a7478

/* Function Stack Size: 0x28 bytes */

void WCRefineVoiceCloneHelper::wcr_downloadFineVoiceAudioURL_cachePath_finish_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  long lVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
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
  undefined *local_68;
  uint local_5c;
  undefined *local_58;
  ID local_50;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
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
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_wcr_rewriteFineVoiceDownloadURL__026b0b80,local_38);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSURL_026ce328;
  local_50 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,IVar3);
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar4;
  if (puVar4 != (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSMutableURLRequest_026ce480;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableURLRequest_026ce480,PTR_s_requestWithURL__026a16e0,puVar4)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_68 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setHTTPMethod__026a64b0,&cf_GET);
    (*(code *)PTR__objc_msgSend_02578628)
              (0x404e000000000000,local_68,PTR_s_setTimeoutInterval__0269cae8);
    puVar6 = PTR__OBJC_CLASS___NSURLSession_026ce498;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURLSession_026ce498,PTR_s_sharedSession_026a64c0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_40;
    puVar5 = local_68;
    local_a0 = PTR___NSConcreteStackBlock_02578660;
    local_98 = 0xc2000000;
    local_94 = 0;
    local_90 = FUN_015a7760;
    local_88 = &DAT_02582a88;
    local_70 = local_28;
    (*(code *)PTR__objc_retain_02578638)();
    lVar1 = local_48;
    local_80 = uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = lVar1;
    puVar7 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar6,PTR_s_dataTaskWithRequest_completionHa_026a5f60,puVar5,&local_a0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_68,0);
  }
  else {
    (**(code **)(local_48 + 0x10))(local_48,0,&cf_F);
  }
  local_5c = (uint)(puVar4 == (undefined *)0x0);
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

