// FUN_017f8b58 @ 017f8b58

void FUN_017f8b58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  ulong local_50;
  undefined1 local_45;
  undefined4 local_44;
  undefined8 local_40;
  long local_38;
  long local_30;
  undefined8 local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  puVar2 = PTR___dispatch_main_q_02578680;
  local_40 = param_1;
  if (local_38 == 0) {
    if (local_30 == 0) {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      _dispatch_async();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      local_44 = 1;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_path_0269d4d8);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_fileExistsAtPath__026ca630);
      (*(code *)PTR__objc_release_02578630)(lVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = PTR___dispatch_main_q_02578680;
      uVar5 = (ulong)puVar4 & 0xffffffff;
      local_45 = SUB81(puVar4,0);
      if (((ulong)puVar4 & 1) == 0) {
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        _dispatch_async();
        (*(code *)PTR__objc_release_02578630)(puVar2);
        local_44 = 1;
      }
      else {
        _NSTemporaryDirectory();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
        puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_stringWithFormat__0269cca8,&cf_temp_video__ld_mov);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_stringByAppendingPathComponent__026cab30);
        _objc_retainAutoreleasedReturnValue();
        local_50 = uVar6;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_release_02578630)(uVar5);
        local_58 = 0;
        puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = local_30;
        puVar2 = PTR__OBJC_CLASS___NSURL_026ce328;
        local_60 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_50);
        _objc_retainAutoreleasedReturnValue();
        local_68 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_copyItemAtURL_toURL_error__026a22c8,lVar3,puVar2,&local_68);
        _objc_storeStrong(&local_58,local_68);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = PTR___dispatch_main_q_02578680;
        if (((ulong)puVar4 & 1) == 0) {
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          uVar1 = local_58;
          local_98 = PTR___NSConcreteStackBlock_02578660;
          local_90 = 0xc2000000;
          local_8c = 0;
          local_88 = FUN_017f9230;
          local_80 = &DAT_0257a800;
          (*(code *)PTR__objc_retain_02578638)();
          local_78 = uVar1;
          _dispatch_async(puVar2,&local_98);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          _objc_storeStrong(&local_78,0);
        }
        else {
          puVar2 = PTR__OBJC_CLASS___NSURL_026ce328;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_50);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = local_60;
          local_70 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_fileExistsAtPath__026ca630,local_50);
          puVar2 = PTR___dispatch_main_q_02578680;
          if (((ulong)puVar4 & 1) == 0) {
            _objc_retainAutoreleaseReturnValue();
            _objc_retainAutoreleasedReturnValue();
            _dispatch_async();
            (*(code *)PTR__objc_release_02578630)(puVar2);
          }
          else {
            _objc_retainAutoreleaseReturnValue();
            _objc_retainAutoreleasedReturnValue();
            _dispatch_async();
            (*(code *)PTR__objc_release_02578630)(puVar2);
          }
          _objc_storeStrong(&local_70,0);
        }
        _objc_storeStrong(&local_60);
        _objc_storeStrong(&local_58,0);
        _objc_storeStrong(&local_50,0);
        local_44 = 0;
      }
    }
  }
  else {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    _dispatch_async();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_44 = 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return;
}

