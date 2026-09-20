// FUN_0072abe0 @ 0072abe0

bool FUN_0072abe0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *local_110;
  undefined *local_d0;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58 [3];
  undefined *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_38 = 0;
  local_30 = param_2;
  _objc_storeStrong(&local_38,param_3);
  puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 9;
  local_40 = puVar1;
  _NSSearchPathForDirectoriesInDomains(9,1,1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_58[0] = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar3 = local_58[0];
  (*(code *)PTR__objc_msgSend_02578628)
            (local_58[0],PTR_s_stringByAppendingPathComponent__026cab30,&cf_W);
  _objc_retainAutoreleasedReturnValue();
  local_60 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_createDirectoryAtPath_withInterm_0269e230,uVar3,1,0);
  puVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_60,0);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_d0 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = local_d0;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR_WCRefineWatermarkLibraryViewController_026ce908;
  _objc_alloc_init();
  local_70 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_setValue_forKey__0269d300,local_60,&cf__libraryDirectory);
  puVar1 = local_70;
  puVar4 = PTR__OBJC_CLASS___NSURL_026ce328;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_38);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_processZipFile__026a7a60);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_60,0);
  _objc_retainAutoreleasedReturnValue();
  local_110 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_110 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_78 = local_110;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_78;
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_count_0269cfe0);
  puVar4 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_count_0269cfe0);
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(local_58,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return puVar4 < puVar1;
}

