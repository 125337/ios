// downloadEmoticonURL:aesKey:completion: @ 00f33d48

/* Function Stack Size: 0x28 bytes */

void WCRefineEmoticonToolsHelper::downloadEmoticonURL_aesKey_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  undefined8 local_68;
  long local_60;
  ID local_58;
  undefined *local_50;
  undefined *local_48;
  uint local_3c;
  long local_38;
  undefined8 local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  if (local_38 == 0) {
    local_3c = 1;
  }
  else {
    lVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    if (lVar2 == 0) {
      (**(code **)(local_38 + 0x10))(local_38,0);
      local_3c = 1;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSURL_026ce328;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,local_28);
      _objc_retainAutoreleasedReturnValue();
      local_48 = puVar3;
      if (puVar3 != (undefined *)0x0) {
        puVar4 = PTR__OBJC_CLASS___NSMutableURLRequest_026ce480;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x402e000000000000,PTR__OBJC_CLASS___NSMutableURLRequest_026ce480,
                   PTR_s_requestWithURL_cachePolicy_timeo_026aaf30,puVar3,2);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSURLSession_026ce498;
        local_50 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSURLSession_026ce498,PTR_s_sharedSession_026a64c0);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = local_38;
        puVar4 = local_50;
        local_88 = PTR___NSConcreteStackBlock_02578660;
        local_80 = 0xc2000000;
        local_7c = 0;
        local_78 = FUN_00f3400c;
        local_70 = &DAT_02582a88;
        (*(code *)PTR__objc_retain_02578638)();
        uVar1 = local_30;
        local_60 = lVar2;
        local_58 = local_18;
        (*(code *)PTR__objc_retain_02578638)();
        local_68 = uVar1;
        puVar6 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar5,PTR_s_dataTaskWithRequest_completionHa_026a5f60,puVar4,&local_88);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar6);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        _objc_storeStrong(&local_68);
        _objc_storeStrong(&local_60,0);
        _objc_storeStrong(&local_50,0);
      }
      else {
        (**(code **)(local_38 + 0x10))(local_38,0);
      }
      local_3c = (uint)(puVar3 == (undefined *)0x0);
      _objc_storeStrong(&local_48,0);
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

