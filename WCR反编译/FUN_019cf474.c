// FUN_019cf474 @ 019cf474

void FUN_019cf474(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined *local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_59;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined4 local_3c;
  long local_38;
  long local_30;
  long local_28;
  
  lVar1 = param_1 + 0x28;
  local_30 = param_1;
  local_28 = param_1;
  _objc_loadWeakRetained();
  local_38 = lVar1;
  if (lVar1 == 0) {
    local_3c = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar2;
    _NSTemporaryDirectory();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSUUID_026ce668;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringByAppendingPathComponent__026cab30);
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_stringByAppendingPathComponent__026cab30,&cf_WCRefine_fonts_zip);
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_50,1,0);
    puVar2 = local_58;
    FUN_019cf800(local_58,*(undefined8 *)(param_1 + 0x20));
    local_59 = SUB81(puVar2,0);
    if ((((ulong)puVar2 & 1) == 0) ||
       (puVar3 = local_48,
       (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_fileExistsAtPath__026ca630,local_58),
       puVar2 = PTR___dispatch_main_q_02578680, ((ulong)puVar3 & 1) == 0)) {
      puVar2 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      _dispatch_async();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_removeItemAtPath_error__0269f910,local_50,0);
      local_3c = 1;
    }
    else {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_58;
      local_98 = PTR___NSConcreteStackBlock_02578660;
      local_90 = 0xc2000000;
      local_8c = 0;
      local_88 = FUN_019cfd20;
      local_80 = &DAT_025839b0;
      (*(code *)PTR__objc_retain_02578638)();
      lVar1 = local_38;
      local_78 = puVar3;
      (*(code *)PTR__objc_retain_02578638)();
      puVar3 = local_50;
      local_70 = lVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = puVar3;
      _dispatch_async(puVar2,&local_98);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _objc_storeStrong(&local_68);
      _objc_storeStrong(&local_70,0);
      _objc_storeStrong(&local_78,0);
      local_3c = 0;
    }
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

