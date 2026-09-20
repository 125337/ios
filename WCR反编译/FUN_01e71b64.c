// FUN_01e71b64 @ 01e71b64

void FUN_01e71b64(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  long local_48;
  undefined4 local_3c;
  long local_38;
  long local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  lVar1 = local_28;
  FUN_01e71a2c();
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    if (local_30 != 0) {
      (**(code **)(local_30 + 0x10))(local_30,&cf___);
    }
    local_3c = 1;
  }
  else {
    FUN_01e9c254();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_48 = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    if (local_48 == 0) {
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf_https___music_163_com_api_song_lyric_lv__1_tv__1_id___);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSURL_026ce328;
      local_50 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,puVar3);
      _objc_retainAutoreleasedReturnValue();
      local_58 = puVar4;
      if (puVar4 == (undefined *)0x0) {
        if (local_30 != 0) {
          (**(code **)(local_30 + 0x10))(local_30,&cf___);
        }
        local_3c = 1;
      }
      else {
        puVar3 = PTR__OBJC_CLASS___NSMutableURLRequest_026ce480;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x4024000000000000,PTR__OBJC_CLASS___NSMutableURLRequest_026ce480,
                   PTR_s_requestWithURL_cachePolicy_timeo_026aaf30,puVar4,1);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        local_60 = puVar3;
        FUN_01e98dbc();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_setValue_forHTTPHeaderField__026a16e8,puVar4,&cf_User_Agent);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_setValue_forHTTPHeaderField__026a16e8,&cf_https___music_163_com_,
                   &cf_Referer);
        puVar4 = PTR__OBJC_CLASS___NSURLSession_026ce498;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSURLSession_026ce498,PTR_s_sharedSession_026a64c0);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = local_38;
        puVar3 = local_60;
        local_98 = PTR___NSConcreteStackBlock_02578660;
        local_90 = 0xc2000000;
        local_8c = 0;
        local_88 = FUN_01e9c2d4;
        local_80 = &DAT_02581558;
        (*(code *)PTR__objc_retain_02578638)();
        lVar2 = local_30;
        local_78 = lVar1;
        (*(code *)PTR__objc_retain_02578638)();
        local_70 = lVar2;
        puVar5 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_dataTaskWithRequest_completionHa_026a5f60,puVar3,&local_98);
        _objc_retainAutoreleasedReturnValue();
        local_68 = puVar5;
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_resume_026a1720);
        _objc_storeStrong(&local_68);
        _objc_storeStrong(&local_70,0);
        _objc_storeStrong(&local_78,0);
        _objc_storeStrong(&local_60,0);
        local_3c = 0;
      }
      _objc_storeStrong(&local_58);
      _objc_storeStrong(&local_50,0);
    }
    else {
      if (local_30 != 0) {
        (**(code **)(local_30 + 0x10))(local_30,local_48);
      }
      local_3c = 1;
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

