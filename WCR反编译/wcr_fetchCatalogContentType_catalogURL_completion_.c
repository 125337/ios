// wcr_fetchCatalogContentType:catalogURL:completion: @ 01599714

/* Function Stack Size: 0x28 bytes */

void WCRefineVoiceCloneHelper::wcr_fetchCatalogContentType_catalogURL_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  cfstringStruct *local_d0;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  undefined8 local_80;
  long local_78;
  undefined *local_70;
  uint local_64;
  undefined *local_60;
  undefined *local_58;
  cfstringStruct *local_50;
  long local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  pcVar4 = local_40;
  puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_50 = pcVar4;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSURLComponents_026ce130;
  pcVar4 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  if (pcVar4 == (cfstringStruct *)0x0) {
    local_d0 = &
               cf_https___raw_githubusercontent_com_plumblossom26_WCRefine_VoiceHub_main_catalog_voices_json
    ;
  }
  else {
    local_d0 = local_50;
  }
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_componentsWithString__0269d818,local_d0);
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_URL_026a1c90);
  _objc_retainAutoreleasedReturnValue();
  local_60 = puVar3;
  if (puVar3 != (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSMutableURLRequest_026ce480;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableURLRequest_026ce480,PTR_s_requestWithURL__026a16e0,puVar3)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_70 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setHTTPMethod__026a64b0,&cf_GET);
    (*(code *)PTR__objc_msgSend_02578628)
              (0x403e000000000000,local_70,PTR_s_setTimeoutInterval__0269cae8);
    puVar6 = PTR__OBJC_CLASS___NSURLSession_026ce498;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURLSession_026ce498,PTR_s_sharedSession_026a64c0);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_48;
    puVar5 = local_70;
    local_a0 = PTR___NSConcreteStackBlock_02578660;
    local_98 = 0xc2000000;
    local_94 = 0;
    local_90 = FUN_01599aa8;
    local_88 = &DAT_02581558;
    (*(code *)PTR__objc_retain_02578638)();
    uVar2 = local_38;
    local_78 = lVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_80 = uVar2;
    puVar7 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar6,PTR_s_dataTaskWithRequest_completionHa_026a5f60,puVar5,&local_a0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    _objc_storeStrong(&local_80);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_70,0);
  }
  else {
    (**(code **)(local_48 + 0x10))(local_48,0,&cf_rc<h_);
  }
  local_64 = (uint)(puVar3 == (undefined *)0x0);
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

