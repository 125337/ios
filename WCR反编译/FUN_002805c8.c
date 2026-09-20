// FUN_002805c8 @ 002805c8

void FUN_002805c8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined4 local_50;
  long local_40;
  double local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  local_40 = 0;
  local_38 = param_1;
  _objc_storeStrong(&local_40,param_4);
  lVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  lVar1 = local_40;
  if (lVar2 == 0) {
    if (local_40 != 0) {
      uVar3 = 0xffffffffffffffff;
      FUN_00272848(0xffffffffffffffff,&cf__gcS0RZSOc);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar1 + 0x10))(lVar1,0);
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    local_50 = 1;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,local_28);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_40;
    local_58 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      if (local_40 != 0) {
        uVar3 = 0xfffffffffffffffe;
        FUN_00272848(0xfffffffffffffffe,&cf_ZSOceHe);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(lVar1 + 0x10))(lVar1,0);
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      local_50 = 1;
    }
    else {
      if (local_38 <= 0.0) {
        local_38 = 60.0;
      }
      puVar5 = PTR__OBJC_CLASS___NSMutableURLRequest_026ce480;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableURLRequest_026ce480,PTR_s_requestWithURL__026a16e0,
                 puVar4);
      _objc_retainAutoreleasedReturnValue();
      local_60 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,puVar5,PTR_s_setTimeoutInterval__0269cae8);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_setValue_forHTTPHeaderField__026a16e8,&cf_Mozilla_5_0,&cf_User_Agent
                );
      puVar4 = PTR__OBJC_CLASS___NSURLSessionConfiguration_026ce488;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSURLSessionConfiguration_026ce488,
                 PTR_s_defaultSessionConfiguration_026a16f0);
      _objc_retainAutoreleasedReturnValue();
      local_68 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,puVar4,PTR_s_setTimeoutIntervalForRequest__026a16f8);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,local_68,PTR_s_setTimeoutIntervalForResource__026a1700);
      puVar4 = PTR_WCRFinderURLDownloader_026ce490;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRFinderURLDownloader_026ce490,PTR_s_new_0269d288);
      local_70 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setExt__026a1708,local_30);
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setDone__026a15a0,local_40);
      _objc_storeStrong(&DAT_028c9590,local_70);
      puVar4 = PTR__OBJC_CLASS___NSURLSession_026ce498;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSURLSession_026ce498,
                 PTR_s_sessionWithConfiguration_delegat_026a1710,local_68,local_70,0);
      _objc_retainAutoreleasedReturnValue();
      local_78 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setSession__0269d2e0,puVar4);
      puVar4 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,PTR_s_downloadTaskWithRequest__026a1718,local_60);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_storeStrong(&local_78);
      _objc_storeStrong(&local_70,0);
      _objc_storeStrong(&local_68,0);
      _objc_storeStrong(&local_60,0);
      local_50 = 0;
    }
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

