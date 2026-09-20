// fetchNeteasePlaylistWithId:completion: @ 01e98a44

/* Function Stack Size: 0x20 bytes */

void WCRefineToDoCardView::fetchNeteasePlaylistWithId_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  long local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined4 local_4c;
  long local_48;
  long local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3,param_3,param_4,param_5);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  lVar1 = local_38;
  FUN_01e71a2c();
  _objc_retainAutoreleasedReturnValue();
  local_48 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    if (local_40 != 0) {
      (**(code **)(local_40 + 0x10))(local_40,*(undefined8 *)PTR____NSArray0___02578280);
    }
    local_4c = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
               &cf_https___music_163_com_api_playlist_detail_id___);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSURL_026ce328;
    local_58 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,puVar2);
    _objc_retainAutoreleasedReturnValue();
    local_60 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      if (local_40 != 0) {
        (**(code **)(local_40 + 0x10))(local_40,*(undefined8 *)PTR____NSArray0___02578280);
      }
      local_4c = 1;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSMutableURLRequest_026ce480;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4028000000000000,PTR__OBJC_CLASS___NSMutableURLRequest_026ce480,
                 PTR_s_requestWithURL_cachePolicy_timeo_026aaf30,puVar3,1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      local_68 = puVar2;
      FUN_01e98dbc();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_setValue_forHTTPHeaderField__026a16e8,puVar3,&cf_User_Agent);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_setValue_forHTTPHeaderField__026a16e8,&cf_https___music_163_com_,
                 &cf_Referer);
      puVar3 = PTR__OBJC_CLASS___NSURLSession_026ce498;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSURLSession_026ce498,PTR_s_sharedSession_026a64c0);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_40;
      puVar2 = local_68;
      local_98 = PTR___NSConcreteStackBlock_02578660;
      local_90 = 0xc2000000;
      local_8c = 0;
      local_88 = FUN_01e98dc8;
      local_80 = &DAT_02581b60;
      (*(code *)PTR__objc_retain_02578638)();
      local_78 = lVar1;
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_dataTaskWithRequest_completionHa_026a5f60,puVar2,&local_98);
      _objc_retainAutoreleasedReturnValue();
      local_70 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_resume_026a1720);
      _objc_storeStrong(&local_70);
      _objc_storeStrong(&local_78,0);
      _objc_storeStrong(&local_68,0);
      local_4c = 0;
    }
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

